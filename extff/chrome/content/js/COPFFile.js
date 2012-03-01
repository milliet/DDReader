/// <reference path="CUtils.js" />
/// <reference path="CUtils_ff.js" />
/// <reference path="CSMILFile.js" />
/// <reference path="CSMILArray.js" />
/// <reference path="CNCX.js" />
/// <reference path="CTextArray.js" />
/// <reference path="CTextItem.js" />

//_eventListener deve implementar NCXChangedItem e NCXPageChangedItem e TextfileChanged e getCurrentTextTTS
function COPFFile(path, eventListener, incluirNoHistorico, livro_exercicios, thisIsExerciseBody, SMILExercEventListener, opfprefs_livro_exercicios)
{
	this.path = path;	//onde está o arquivo
	this._eventListener = eventListener;
	this.errorDuringLoad = false;
	this.thisIsDictionaryCached = false;	//se este livro é um dicionário
	this.thisIsDictionaryEvaluated = false;	//se já sabemos se este livro é um dicionário

    this.xml = CUtils.LoadXML(path);	//o XMLDocument dele
    //verificacao de segurança: nao permitimos scripts
    if(CUtils.HasScript(this.xml))
		throw new CExcept(CMsg.InvalidOPF(), null, this.path);

	//verifica se está criptografado
	//se estiver, carrega o arquivo certo
	var passwordBinHex = this._CheckEncryptionOpf();
	if(this.errorDuringLoad)
		return;
	
	//validacao do OPF
	//tem que ter um manifest
	var test = CUtils.GetXMLChildNoException(this.xml, "package", this.path);
	if(test == null)
		throw new CExcept(CMsg.InvalidOPF_package(), null, this.path);
	test = CUtils.GetXMLChildNoException(test, "manifest", this.path);
	if(test == null)
		throw new CExcept(CMsg.InvalidOPF_package(), null, this.path);

	//sistema de busca
	//exercicios nao tem busca, mas deixamos criar mesmo assim
	this.findtext = new CFindText(this.path);
	
	//os textos
	this.texts = new CTextfileArray(this, passwordBinHex);
	
    //carrega e as preferencias
    //exercicios nao tem preferencias, leem as preferencias atuais do livro base
    if(opfprefs_livro_exercicios != null)
	    this.opfprefs = opfprefs_livro_exercicios;
	else
	    this.opfprefs = new COPFPrefs(this.path, this.GetBookId(), this.GetBookLang() );
    
	//carrega os smils
	//20101018: se já vei no livro, nao falamos o "inicio de nota"
	if(this._GetMedataFromOPF("x-metadata/ddp:FootNoteMode").toString() == "1")
	{
	    this.smils = new CSMILArray(this.opfprefs, this.path, this, false, thisIsExerciseBody, SMILExercEventListener);
	}
	else
	{
	    this.smils = new CSMILArray(this.opfprefs, this.path, this, true, thisIsExerciseBody, SMILExercEventListener);
	}
	this._LoadSMILs();
    
    
    //carrega o NCX
    this.ncx = new CNCX(this.opfprefs, this._HrefNCX(), this);
	this.ncx.SetCurrentLevel(this.opfprefs.CurrentLevel());

    
    //seta o ID da pagina no smil
    this.smils.SetSkipIDPage(this.ncx.GetSkipID("PAGE_NUMBER"));
    
    //seta a lista de IDs de anotacoes e notas
    var skipnoteids = new Array();
    var thisid = "";
    //campo a campo
    thisid = this.ncx.GetSkipID("NOTE_REFERENCE");
    if(thisid != "")	skipnoteids.push(thisid);
    this.smils.SetSkipIDNotRef(thisid);	//o note_referecne tem um tratamento especial

    thisid = this.ncx.GetSkipID("NOTE");
    if(thisid != "")	skipnoteids.push(thisid);
    thisid = this.ncx.GetSkipID("ANNOTATION");
    if(thisid != "")	skipnoteids.push(thisid);
    thisid = this.ncx.GetSkipID("LINE_NUMBER");
    if(thisid != "")	skipnoteids.push(thisid);
    thisid = this.ncx.GetSkipID("OPTIONAL_SIDEBAR");
    if(thisid != "")	skipnoteids.push(thisid);
    thisid = this.ncx.GetSkipID("OPTIONAL_PRODUCER_NOTE");
    if(thisid != "")	skipnoteids.push(thisid);
    //manda a lista pro smilarray
    this.smils.SetSkipIDNote(skipnoteids);
    
	//ler das preferencias
	this.smils.SetSkipNote(this.opfprefs.SkipNote());
	//por caus do dicionario, vamos pegar da propria rotina
	//this.smils.SetSkipPage(this.opfprefs.SkipPage());
	this.smils.SetSkipPage(this.GetSkipPage());
    
    //carrega os marcadores
    //exercicios nao tem marcadores, mas carrgamos mesmo assim
    this.marks = new CMarks(this.path, this.GetBookId(), this.GetMedata(this.metadata_tagTitle).toString() );

    //por ultimo, adicona no historioc
    if(incluirNoHistorico)
	    CHist.addEntry(this);
}

COPFFile.prototype.errorDuringLoad = false; // se deu erro durante a carga (e já mostrou mensagem de erro)
COPFFile.prototype.path = "";	//onde está o arquivo
COPFFile.prototype.xml = null;	//o XMLDocument dele
COPFFile.prototype.smils = null;	//o SMILArray
COPFFile.prototype.ncx = null;	//o NCX
COPFFile.prototype.texts = null;	//o CTextfileArray
COPFFile.prototype.marks = null;	//o CMarks
COPFFile.prototype.opfprefs = null;	//o COPFPrefs
COPFFile.prototype.findtext = null;	//o CFindText
COPFFile.prototype.thisIsDictionaryCached = false;	//se este livro é um dicionário
COPFFile.prototype.thisIsDictionaryEvaluated = false;	//se já sabemos se este livro é um dicionário


COPFFile.prototype._eventListener = null;	//quem escuta os nossos eventos

COPFFile.prototype.metadata_tagTitle = "dc-metadata/dc:Title";
COPFFile.prototype.metadata_tagAuthor = "dc-metadata/dc:Creator";

//verificamos se estamos abrindo um OPF que está criptografado
//se for, carregamos o pff ao inves do opf
//retorna a senha em binhex
COPFFile.prototype._CheckEncryptionOpf = function()
{
	/*
	Se NÃO tiver pdtb2:specVersion = "2005-1" em x-metadata, não está criptografado, continuamos normalmente.
	Se NÃO tiver pdtb2:package, (e tiver o specVersion), este é o ppf
	*/
	var encrypted_spec = false;
	var encrypted_package = false;
	var encrypted_pack_content = "";
	var test = CUtils.GetXMLChildNoException(this.xml, "package", this.path);
	if(test == null)
		return "";
	test = CUtils.GetXMLChildNoException(test, "metadata", this.path);
	if(test == null)
		return "";
	test = CUtils.GetXMLChildNoException(test, "x-metadata", this.path);
	if(test == null)
		return "";

	for(var i=0;i<test.childNodes.length;i++)
	{
		//Se NÃO tiver pdtb2:specVersion = "2005-1" em x-metadata, não está criptografado, continuamos normalmente.
		var tagName = test.childNodes.item(i).tagName;
		if(tagName)
		if(tagName == "meta")
		{
			tagName = test.childNodes.item(i).attributes.getNamedItem("name").value;
			if(tagName == "pdtb2:specVersion")
			{
				tagName = test.childNodes.item(i).attributes.getNamedItem("content").value;
				if(tagName == "2005-1")
					encrypted_spec = true;
				break;
			}
		}
	}

	for(var i=0;i<test.childNodes.length;i++)
	{
		//Se NÃO tiver pdtb2:package, não está criptografado, continuamos normalmente.				var tagName = test.childNodes.item(i).tagName;
		var tagName = test.childNodes.item(i).tagName;
		if(tagName)
		if(tagName == "meta")
		{
			tagName = test.childNodes.item(i).attributes.getNamedItem("name").value;
			if(tagName == "pdtb2:package")
			{
				encrypted_pack_content = test.childNodes.item(i).attributes.getNamedItem("content").value;
				encrypted_package = true;
				break;
			}
		}
	}

	if(!encrypted_spec)
		return "";

	/*
	Se o arquivo apontado por pdtb2:package não existir (livro criptografado não encontrado, abrindo livro de fachada).
	Se o arquivo de senhas da fundação não existir (o DDReader não pode abrir livros criptografados com este formato).
	*/
	if(encrypted_package)
	{
		if(encrypted_pack_content == "")
			return "";

		encrypted_pack_content = CUtils.ResolveURL(encrypted_pack_content, this.path);
		if(!CUtils.FileExist(encrypted_pack_content))
		{
			CDialogs.WarnEscToContinue(CMsg.ErrorPPFNotFound(), null);
			return "";
		}

		//fazemos a carga efetiva do arquivo
		this.path = encrypted_pack_content;	//onde está o arquivo
		this.xml = CUtils.LoadXML(encrypted_pack_content);	//o XMLDocument dele
		//verificacao de segurança: nao permitimos scripts
		if(CUtils.HasScript(this.xml))
			throw new CExcept(CMsg.InvalidOPF(), null, this.path);
	}

	var pin_file = "";
	pin_file = CUtils.ResolveURL("pin.dat", this.path);
	if(!CUtils.FileExist(pin_file))
	{
		CDialogs.WarnEscToContinue(CMsg.ErrorPINNotFound(), null);
		return "";
	}
	


/*
	//fluxo para pedir a senha
2.1 – Verificação de criptografia
Verificamos se o livro está criptografado. Para isso:
	Pedimos para digitar a senha ou o PIN.
	Se não existir nenhuma senha, diz “Este é um livro protegido. Digite seu PIN.” Em seguida, pergunta se quer guardar o PIN e pede uma senha com confirmação (mínimo de 6 caracteres).
	Se tem senha, diz “Este é um livro protegido. Digite sua senha ou tecle Control + P para inserir um novo PIN.”
	Tanto no PIN quanto na senha convertemos tudo para maiúsculas.
	Abrimos o PPF. 

2.1.1
Damos erro e abrimos o livro de fachada se:
	Se o PIN ou a senha estiverem errados, avisa e fica na mesma tela (para sair, o cara usa o Cancelar).

2.1.2
Fluxo para pedir a senha:
	Se não existe nenhuma senha:
		Pede o PIN. Se não existir o MD5 desse PIN, mostra a mesma ela de novo falando que o PIN está errado.
		Se o PIN existe, pergunta se quer gravar o PIN com uma senha. Pede de novo a senha para confirmar. Se diferente da segunda vez, pede duas vezes de novo. Se a senha for menor do que 6, pede para digitar de novo.
	Se existe alguma senha:
		Pede a senha.
		Se a senha não existe, diz que está errado e pede de novo.
*/

	CmdMain.WaitCursorOff();

	//tem alguma senha?
	if(CCripto.hasPasswords() > 0)
	{
		//tem senha, pedimos a senha
		var captionSpeak = CMsgIface.DlgAskPassHelp_speak(); //mensagem de digitar a senha
		var captionScreen = CMsgIface.DlgAskPassHelp_screen();
		while(true)
		{
			var retVals = { okButton:false, newpinButton:false, hasnewpinButton:true, pass: "", captionSpeak:captionSpeak, captionScreen:captionScreen };
			window.openDialog('../dlg/AskPass.xul','AskPass','modal,centerscreen,resizable=no', retVals);
			if(!retVals.okButton && !retVals.newpinButton)
			{
				//escape, nao abre o livro
				this.errorDuringLoad = true;
				CmdMain.WaitCursorOn();
				return "";
			}

			//se o cara pediu um novo PIN
			if(retVals.newpinButton)
				break;

			//se a senha existe
			var currentDecKey = CCripto.GetKeyFromPassword( retVals.pass, pin_file);
			if(currentDecKey == "")
			{
				captionSpeak = CMsgIface.DlgAskPassHelpWrong_speak(); //mensagem de senha errada
				captionScreen = CMsgIface.DlgAskPassHelpWrong_screen();
				continue;
			}
			
			//pegamos a senha
			CmdMain.WaitCursorOn();
			return currentDecKey;
		}
	}

	//nao tem senha, pedimos diretamente o PIN
	var captionSpeak = CMsgIface.DlgAskPinHelp_speak(); //mensagem de primeira vez
	var captionScreen = CMsgIface.DlgAskPinHelp_screen();
	var currentDecKey = "";
	var typedPIN = "";
	
	while(true)
	{
		var retVals = { okButton:false, pin: "", captionSpeak:captionSpeak, captionScreen:captionScreen };
		window.openDialog('../dlg/AskPIN.xul','AskPIN','modal,centerscreen,resizable=no', retVals);
		if(!retVals.okButton)
		{
			//escape, nao abre o livro
			this.errorDuringLoad = true;
			CmdMain.WaitCursorOn();
			return "";
		}
		
		//vamos ver se é um PIN valido
		typedPIN = retVals.pin;
		currentDecKey = CCripto.GetKeyFromPIN( retVals.pin, pin_file);
		if(currentDecKey != "")
			break;
			
		//pin invalido, vamos pedir de novo
		captionSpeak = CMsgIface.DlgAskPinHelpWrong_speak(); //mensagem de pin errada
		captionScreen = CMsgIface.DlgAskPinHelpWrong_screen();
	}
	
	
	//perguntamos se quer salvar o PIN
	//se o cara nao quiser salvar, dá ESC
	captionSpeak = CMsgIface.DlgAskPassSaveHelp_speak(); //mensagem de digitar a senha
	captionScreen = CMsgIface.DlgAskPassSaveHelp_screen();
	var pass = "";
	while(true)
	{
		//chamamos a primeira vez
		while(true)
		{
			var retVals = { okButton:false, newpinButton:false, hasnewpinButton:false, pass: "", captionSpeak:captionSpeak, captionScreen:captionScreen };
			window.openDialog('../dlg/AskPass.xul','AskPass','modal,centerscreen,resizable=no', retVals);
			if(!retVals.okButton)
			{
				//escape, nao salva
				CmdMain.WaitCursorOn();
				return currentDecKey;
			}

			//minimo de 6 caracteres
			if(retVals.pass.length < 6)
			{
				captionSpeak = CMsgIface.DlgAskPassSaveHelpSize_speak();
				captionScreen = CMsgIface.DlgAskPassSaveHelpSize_screen();
				continue;
			}
			
			//vamos para a proxima
			pass = retVals.pass;
			break;
		}
		
		//chamamos a segunda vez
		//este nao tem loop, se digitar errado a gent pede duas vezes de novo
		captionSpeak = CMsgIface.DlgAskPassSave2Help_speak();
		captionScreen = CMsgIface.DlgAskPassSave2Help_screen();
		var retVals = { okButton:false, newpinButton:false, hasnewpinButton:false, pass: "", captionSpeak:captionSpeak, captionScreen:captionScreen };
		window.openDialog('../dlg/AskPass.xul','AskPass','modal,centerscreen,resizable=no', retVals);
		if(!retVals.okButton)
		{
			//escape, nao salva
			CmdMain.WaitCursorOn();
			return currentDecKey;
		}
		
		//senhas diferentes, avisa
		if(retVals.pass.toUpperCase() != pass.toUpperCase())
		{
			captionSpeak = CMsgIface.DlgAskPassSave2HelpWrong_speak();
			captionScreen = CMsgIface.DlgAskPassSave2HelpWrong_screen();
			continue;
		}
		
		//salva o pin pela senha
		CCripto.SavePINWithPassword( typedPIN, pass);
		break;
	}
	
	//acabaos de salvar a senha
	CmdMain.WaitCursorOn();
	return currentDecKey;
}

//vamos para o ultimo ponto de leitura salvo
COPFFile.prototype.gotoLastMark = function()
{
	//pega o ponto de leitura
	if(this.marks.hasLastMark())
	{
		try
		{
			var thismarker = this.marks.getLastMark();
			
			//sincronizar o NCX
			var ncxRef = CUtils.GetXMLChildNoException(thismarker, "ncxRef", null);
			this.ncx.gotoNCXRef(ncxRef.textContent);
		
			//sincronizar as paginas
			var pageRef = CUtils.GetXMLChildNoException(thismarker, "pageRef", null);
			if(pageRef)
				this.ncx.gotoNCXPageRef(pageRef.textContent, false);
		
			//pegamos a URI
			var uri = CUtils.GetXMLChildNoException(thismarker, "URI", null);
			this.smils.gotoHref(uri.textContent);
			return;
		}
		catch(e)
		{
			//em 20100601 ao inves de excecao, damos aviso
			//throw new CExcept(CMsg.ErrorLoadingLastMark(), e, this.href);
			CDialogs.WarnEscToContinue(CMsg.ErrorLoadingLastMark(), null);
		}
	}
	
	//se ele nao retornou sozinho é proque nao achou o ponto
	//posicionamos o NCX e o SMIL no comeco
	this.smils.gotoStart();
	this.ncx.gotoStartNCX();
}


//eventos do NCX, repassamos para cima
COPFFile.prototype.NCXChangedItem = function(ncx, id)
{
	if(this._eventListener != null)
		this._eventListener.NCXChangedItem(ncx, id);
}
COPFFile.prototype.NCXPageChangedItem = function(ncx)
{
	if(this._eventListener != null)
		this._eventListener.NCXPageChangedItem(ncx);
}

//eventos do texto, repassamos para cima
COPFFile.prototype.TextfileChanged = function(textfilearray)
{
	if(this._eventListener != null)
		this._eventListener.TextfileChanged(textfilearray);
}

//eventos do SMIL, processamos
COPFFile.prototype.SMILChangedItem = function(smilarray, SMILrel_href, id, goingUp)
{
	//avisa o texto
	this.texts.gotoHref(smilarray.getCurrentNodeTextSrc(), smilarray._SMILcurrElem.SMILabs_href );

	//avisa o NCX, para ele tb rolar
	this.ncx.SMILChangedItem(smilarray, SMILrel_href, id, goingUp);
	
	//salva o ponto de leitura
	this.marks.setLastMark(
		this.ncx.GetCurrentNCXRef(),
		this.smils.GetCurrentURIMark(),
		this.smils.getSMILFileIndex(),
		this.smils.getSMILFileOffset(),
		this.ncx.GetCurrentNCXPageRef()
		);
}

//eventos do SMIL, processamos
COPFFile.prototype.SMILSkippedItem = function(smilarray, SMILrel_href, id, goingUp, customTest)
{
	//avisa o NCX, para ele tb rolar
	this.ncx.SMILSkippedItem(smilarray, SMILrel_href, id, goingUp, customTest);

	//avisa o cara de cima, que vai bipar quando pular uma referencia de nota de rodape
	if(this._eventListener != null)
		this._eventListener.SMILSkippedItem(smilarray, SMILrel_href, id, goingUp, customTest);
}

//vamos para um determinado ponto, conforme o SMIL
COPFFile.prototype.assertCurrentTextHref = function(smilarray, SMILrel_href, id)
{
	//avisa o texto
	this.texts.assertHref(smilarray.getCurrentNodeTextSrc(), smilarray._SMILcurrElem.SMILabs_href );

	//avisa o NCX, para ele tb rolar (se for o caso)
	this.ncx.SMILChangedItem(smilarray, SMILrel_href, id, false);
}

//retornar o texto para TTS do no de texto atual
COPFFile.prototype.getCurrentTextTTS = function()
{
	//NOTA: devemos passar o getCurrentTextTTS() para this.texts.getCurrentTextTTS();
	//nao fizemos isso porque o getLementById do XMLDocument simplesmente nao está funcionando
	//e agora inclusive não estamos guardando o XML lá em baixo... realmente, nao sei se compensa fazer essa alteração....
	
	
	//pega o texto
	if(!this._eventListener)
		return null;
	return this._eventListener.getCurrentTextTTS();
}

//para pegar o href ncx
COPFFile.prototype._HrefNCX = function()
{
	if(this.xml.getElementsByTagName("manifest").length != 1)
		throw new CExcept(CMsg.InvalidOPF_NCX(), null, this.path);

	var col = this.xml.getElementsByTagName("manifest").item(0).getElementsByTagName("item");
	for(var i=0;i<col.length;i++)
	{
		var at = col.item(i).attributes.getNamedItem("id");
		if(at != null)
		if(at.value == "ncx")
		{
			return CUtils.ResolveURL(col.item(i).attributes.getNamedItem("href").value, this.path);
		}
	}
		
	throw new CExcept(CMsg.InvalidOPF_NCX(), null, this.path);
}


/*
– Carga da lista de SMILs em ordem de execução
No OPF, package/spine/itemref lidos na ordem em que aparecem no documento.
Cada idref é convertido em nome de arquivo usando o package/manifest/item atributo id como chave e pegando o atributo href.
Erro (por exemplo, o idref não existe no manifest): não continuamos.
*/
COPFFile.prototype._LoadSMILs = function()
{
	try
	{
	
		//carga dos spine
		var colspine = this.xml.getElementsByTagName("spine").item(0).getElementsByTagName("itemref");
		//para acelerar a busca
		var indice_do_ultimo_achado = -1;
		var col = this.xml.getElementsByTagName("manifest").item(0).getElementsByTagName("item");
		for(var i1=0;i1<colspine.length;i1++)
		{
			var idref = colspine.item(i1).attributes.getNamedItem("idref");
			
			var relHref = "";

			//converter o idref em href
			
			//vamos tentr a nossa versao acelerada
			if(indice_do_ultimo_achado >= 0  && indice_do_ultimo_achado < col.length)
			{
				var at = col.item(indice_do_ultimo_achado).attributes.getNamedItem("id");
				if(at != null)
				if(at.value == idref.value)
				{
					relHref = col.item(indice_do_ultimo_achado).attributes.getNamedItem("href").value;
					indice_do_ultimo_achado = indice_do_ultimo_achado + 1;
				}
			}
			

			//tem que procurar mesmo....
			if(relHref == "")
			{
				for(var i2=0;i2<col.length;i2++)
				{
					var at = col.item(i2).attributes.getNamedItem("id");
					if(at != null)
					if(at.value == idref.value)
					{
						relHref = col.item(i2).attributes.getNamedItem("href").value;
						indice_do_ultimo_achado = i2 + 1;
						break;
					}
				}
			}

			if(relHref == "")
				throw CMsg.InvalidOPF_SMILS();
				
			//coloca na lista
			this.smils.add(relHref);
		}
		
		//se nao achou nada, erro
		if(this.smils.getSize() == 0)
			throw CMsg.InvalidOPF_SMILS();
	}
	catch(e)
	{
		throw new CExcept(CMsg.InvalidOPF_SMILS(), e, this.path);
	}
}


//vai para o no de metadata
//null se nao tiver
COPFFile.prototype._GetMedataNode = function()
{
	var xml = CUtils.GetXMLChild(this.xml, "package", this.path);
	xml = CUtils.GetXMLChildNoException(xml, "metadata", this.path);
	return xml;
}


//lista as metadata disponiveis
//retorna um array de strings
COPFFile.prototype.GetMedataList = function()
{
	var ret = new Array();
	//estes sempre existem
	ret.push(this.metadata_tagTitle);
	ret.push(this.metadata_tagAuthor);
	
	//os do dublin core
	var prefixo = "dc-metadata";
	var xml = this._GetMedataNode();
	if(xml != null)
	{
		xml = CUtils.GetXMLChildNoException(xml, prefixo, this.path);
		if(xml != null)
		{
			for(var i=0;i<xml.childNodes.length;i++)
			{
				var tagName = xml.childNodes.item(i).tagName;
				if(tagName)
				{
					tagName = prefixo + "/" + tagName;
					
					//vamos ver se por acaso já existe
					var existe = false;
					for(var iret = 0; iret < ret.length; iret++)
					{
						if(ret[iret] == tagName)
							existe = true;
					}
					
					//se nao existe, adiciona
					if(!existe)
						ret.push(tagName);
				}
			}
		}
	}
	
	//os x-metadata
	var prefixo = "x-metadata";
	var xml = this._GetMedataNode();
	if(xml != null)
	{
		xml = CUtils.GetXMLChildNoException(xml, prefixo, this.path);
		if(xml != null)
		{
			for(var i=0;i<xml.childNodes.length;i++)
			{
				var tagName = xml.childNodes.item(i).tagName;
				if(tagName)
				if(tagName == "meta")
				{
					tagName = prefixo + "/" + xml.childNodes.item(i).attributes.getNamedItem("name").value;
					
					//vamos ver se por acaso já existe
					var existe = false;
					for(var iret = 0; iret < ret.length; iret++)
					{
						if(ret[iret] == tagName)
							existe = true;
					}
					
					//se nao existe, adiciona
					if(!existe)
						ret.push(tagName);
				}
			}
		}
	}
	
	return ret;
}

//pega uma metadata do OPF
//retorna um CTextArray
COPFFile.prototype._GetMedataFromOPF = function(tag)
{
	var ret = new CTextArray();
	var xml = this._GetMedataNode();
	if(xml == null)
		return ret;

	//vamos ver se é cd ou x
	if(tag.toString().indexOf("dc-metadata/") == 0)
	{
		xml = CUtils.GetXMLChildNoException(xml, "dc-metadata", this.path);
		if(xml != null)
		{
			for(var i=0;i<xml.childNodes.length;i++)
			{
				var tagName = xml.childNodes.item(i).tagName;
				if(tagName)
				if("dc-metadata/" + tagName == tag)
				{
					var este = new CTextItem();
					este.SetText_node( xml.childNodes.item(i));
					este.bookText = true;
					if(this.opfprefs)
						este.bookVoice = this.opfprefs.VoiceTTS();
					este.spell = true;
					ret.CTIarray.push(este);
				}
			}
		}

		return ret;
	}


	if(tag.toString().indexOf("x-metadata/") == 0)
	{
		xml = CUtils.GetXMLChildNoException(xml, "x-metadata", this.path);
		if(xml != null)
		{
			for(var i=0;i<xml.childNodes.length;i++)
			{
				var tagName = xml.childNodes.item(i).tagName;
				if(tagName)
				if(tagName == "meta")
				{
					tagName = "x-metadata/" + xml.childNodes.item(i).attributes.getNamedItem("name").value;
					if(tagName == tag)
					{
						var este = new CTextItem();
						este.SetText_string( xml.childNodes.item(i).attributes.getNamedItem("content").value);
						este.bookText = true;
						if(this.opfprefs)
							este.bookVoice = this.opfprefs.VoiceTTS();
						este.spell = true;
						ret.CTIarray.push(este);
					}
				}
			}
		}

		return ret;
	}
	
	//deveriamos dar erro? ah, a gente simplesmente nao retorna nada
	return ret;
}

//verifica se este é o livro de txto e tem um livro de exercicios vinculado
//se vazio, nao tem exercicios
COPFFile.prototype.GetThisIsExerciseMaster = function()
{
	return this._GetMedataFromOPF("x-metadata/ddp:ExercisesURI").toString();
}



//pega o ID do livro
COPFFile.prototype.GetBookId = function()
{
	var item = this.GetMedata("dc-metadata/dc:Identifier");
	item = item.toString();
	
	//se nao achar, usa o caminho do arquivo como ID
	if(item == "")
		item = this.path;
	
	return item;
}

//pega o idioma do livro
COPFFile.prototype.GetBookLang = function()
{
	var item = this.GetMedata("dc-metadata/dc:Language");
	item = item.toString();
	return item;
}


//pega um metadata
//titulo e autor vem do NCX
//retorna um CTextArray
COPFFile.prototype.GetMedata = function(tag)
{
	if(tag == this.metadata_tagTitle)
	{
		var ret = this.ncx.GetTitle();
		if(ret != null)
			return ret;	
	}
	if(tag == this.metadata_tagAuthor)
	{
		var ret = this.ncx.GetAuthor();
		if(ret != null)
			return ret;	
	}
	
	return this._GetMedataFromOPF(tag);
}

//para ativar o ponto atual do NCX
COPFFile.prototype.gotoCurrentNCX = function()
{
	//pegamos o no ativo
	var src = this.ncx.GetCurrentScreenNCXEntryContentSrc();
	
	//e vamos para o ponto
	this.smils.gotoHref(src);
}


//pega o nivel de navegacao
COPFFile.prototype.GetCurrentLevel = function()
{
	return 	this.ncx.GetCurrentLevel();
}

//determina o nivel de navegacao
COPFFile.prototype.SetCurrentLevel = function(level)
{
	//salvar nas preferencias
	this.opfprefs.CurrentLevel_set(level);
	
	//mudar
	this.ncx.SetCurrentLevel(level);
}


//determina se le os numeros de pagina
COPFFile.prototype.GetSkipPage = function()
{
	if(!this.ncx.HasPageTargets())
		return true;

	//dicionario nunca le as paginas
	if(this.thisIsDictionary())
		return true;
		
	return this.smils.GetSkipPage();
}


//verifica se le os numeros de pagina
COPFFile.prototype.SetSkipPage = function(read)
{
	//dicionario nao altera
	if(this.thisIsDictionary())
		return;
		
	if(!this.ncx.HasPageTargets())
		return;

	//salvar nas preferencias
	this.opfprefs.SkipPage_set(read);

	this.smils.SetSkipPage(read);
}


//determina se le as notas
COPFFile.prototype.GetSkipNote = function()
{
	return this.smils.GetSkipNote();
}


//verifica se le as notas
COPFFile.prototype.SetSkipNote = function(read)
{
	//salvar nas preferencias
	this.opfprefs.SkipNote_set(read);
	
	//altera
	this.smils.SetSkipNote(read);
}


//exporta as anotacoes/marcadores
COPFFile.prototype.ExportarMarcadores = function(titulo, autor, editora)
{
	//guarda a posicao atual
	var posicaoatual_uri = this.smils.GetCurrentURIMark();
	var posicaoatual_ncx = this.ncx.GetCurrentNCXRef();
	var posicaoatual_page = this.ncx.GetCurrentNCXPageRef();
	
	//diretorio de exportacao
	//titulo
	var nome_arquivo = titulo;
	//data
	var data = new Date();
	var msg = "";
	msg += data.getDate();
	msg += "-";
	msg += (data.getMonth() + 1);
	msg += "-";
	msg += data.getFullYear();
	nome_arquivo += " " + msg;
	nome_arquivo = CUtils.NormalizeAcentosFilename(nome_arquivo);
	//extensao
	nome_arquivo += ".txt";
	var arquivoexportacao = CUtils.GetExportNotesFolder();
	//em arquivo
	arquivoexportacao.append(nome_arquivo);

	
	var textao = "";
	//titulo
	textao += CMsgIface.BookTitle();
	textao += " ";
	textao += titulo;
	textao += "\r\n";
	//autor
	textao += CMsgIface.BookAuthor();
	textao += " ";
	textao += autor;
	textao += "\r\n";
	//editora
	textao += CMsgIface.BookPublisher();
	textao += " ";
	textao += editora;
	textao += "\r\n";
	
	var lista_bookmarks = this.marks.getSortedarrayBookmarks();
	for(var ilista_bookmarks = 0; ilista_bookmarks < lista_bookmarks.length; ilista_bookmarks++)
	{
		var thismarker = lista_bookmarks[ilista_bookmarks];

		textao += "\r\n";
		textao += CMsgIface.InicioDeAnotacao();
		textao += "\r\n";
		//titulo da anotacao
		textao += thismarker.attributes.getNamedItem("label").value;
		textao += "\r\n";
		//copro da anotacao
		var note = CUtils.GetXMLChildNoException(thismarker, "note", null);
		if(note != null)
		{
			note = CUtils.GetXMLChildNoException(note, "text", null);
			if(note != null)
			if(CUtils.TrimString(note.textContent) != "")
			{
				textao += note.textContent;
				textao += "\r\n";
			}
		}


		//vamos mover a posicao de leitura
		//liga a aba da leitura para mover o cursor
		CmdRead.preactivate();
		
		//sincronizar o NCX
		var ncxRef = CUtils.GetXMLChildNoException(thismarker, "ncxRef", null);
		this.ncx.gotoNCXRef(ncxRef.textContent);

		//sincronizar as paginas
		var pageRef = CUtils.GetXMLChildNoException(thismarker, "pageRef", null);
		if(pageRef)
			this.ncx.gotoNCXPageRef(pageRef.textContent, false);

		//pegamos a URI
		var uri = CUtils.GetXMLChildNoException(thismarker, "URI", null);
		this.smils.gotoHref(uri.textContent);

		var estapagina = this.ncx.GetCurrentPageAsText();
		if(CUtils.TrimString(estapagina) != "")
		{
			textao += CMsgIface.PaginaExportNotes() + estapagina;
			textao += "\r\n";
		}
	
		//o texgto de referencia
		textao += CMsgIface.TextoReferencia();
		textao += "\r\n";
		var exportphrases = CPref.exportphrases();
		//limite, ja tem no CPref, so pra ser insistente
		if(exportphrases > 5) exportphrases = 5;
		//voltamos
		while(exportphrases > 0)
		{
			this.smils.gotoPrevious();
			exportphrases--;
		}
		exportphrases = CPref.exportphrases() * 2 + 1;
		//limite, ja tem no CPref, so pra ser insistente
		if(exportphrases > 11) exportphrases = 11;
		while(exportphrases > 0)
		{
			var estetexto = this.getCurrentTextTTS();
			if(estetexto != null)
			if(CUtils.TrimString(estetexto.textContent) != "")
				textao += estetexto.textContent + " ";
			this.smils.gotoNext();
			exportphrases--;
		}
		textao += "\r\n";


		textao += CMsgIface.FimDeAnotacao();
		textao += "\r\n";
	}
	
	textao += "\r\n";
	textao += CMsgIface.FimDeArquiucvo();
	textao += "\r\n";
	
	//salvamos o arquivo
	var foStream = Components.classes["@mozilla.org/network/file-output-stream;1"]
		.createInstance(Components.interfaces.nsIFileOutputStream);
	foStream.init(arquivoexportacao, 0x02 | 0x08 | 0x20, 0664, 0);   // write, create, truncate

	var converter_exportanotas = Components.classes["@mozilla.org/intl/converter-output-stream;1"]
		.createInstance(Components.interfaces.nsIConverterOutputStream);
	converter_exportanotas.init(foStream, "UTF-8", 0, 0);
	converter_exportanotas.writeString(textao);
	converter_exportanotas.close(); // this closes foStream

	//voltamos o ponto de leitura
	try
	{
		this.smils.gotoHref(posicaoatual_uri);
		this.ncx.gotoNCXRef(posicaoatual_ncx);
		if(posicaoatual_page)
			this.ncx.gotoNCXPageRef(posicaoatual_page, false);
	}
	catch(e) { }
	

	//avisamos onde salvamos o arquivo
	return arquivoexportacao.path;
}

//diz se este livro é um idcionario ou nao
COPFFile.prototype.thisIsDictionary = function()
{
	//já sabemos?
	if(this.thisIsDictionaryEvaluated)
		return this.thisIsDictionaryCached;
	
	//entao vamos descobrir...
	this.thisIsDictionaryEvaluated = true;
	this.thisIsDictionaryCached = false;
	//a rotina retorna um CTextArray, pegaos a string dele
	if(this._GetMedataFromOPF("x-metadata/ddp:bookSpecialType").toString() == "dictionary")
		this.thisIsDictionaryCached = true;
	
	return this.thisIsDictionaryCached;
}


//funcao estatica
//pode dar excecao
function COPFFile_GetBookId_COmExcecao(path)
{
	//vamos pegar o package/metadata/dc-metadata/dc:Identifier
    var xml = CUtils.LoadXMLNoException(path);	//o XMLDocument dele
	xml = CUtils.GetXMLChildNoException(xml, "package", path);
	xml = CUtils.GetXMLChildNoException(xml, "metadata", path);
	xml = CUtils.GetXMLChildNoException(xml, "dc-metadata", path);

	for(var i=0;i<xml.childNodes.length;i++)
	{
		var tagName = xml.childNodes.item(i).tagName;
		if(tagName)
		if(tagName == "dc:Identifier")
		{
			return xml.childNodes.item(i).textContent;
		}
	}

	//se nao achar, usa o caminho do arquivo como ID
	return path;
}

//funcao estatica
//pode dar excecao
function COPFFile_GetBookTitle_COmExcecao(path)
{
    var xml = CUtils.LoadXML(path);	//o XMLDocument dele
	xml = CUtils.GetXMLChildNoException(xml, "package", this.path);
	xml = CUtils.GetXMLChildNoException(xml, "metadata", this.path);
	xml = CUtils.GetXMLChildNoException(xml, "dc-metadata", this.path);
	xml = CUtils.GetXMLChildNoException(xml, "dc:Title", this.path);
	return xml.textContent;
}

