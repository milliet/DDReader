/// <reference path="CmdMain.js" />

//gerencia os botoes e comandos relacionados

var CButtons = 
{

//efetivamente copia para a biblioteca
//o destino é o nome do OPF a ser sobreposto, ou vazio se nao existir
//origime é o path completo do opf
//retorna o path completo do OPF que foi copiado
vaiCopiarParaBibliotecaComExcecao:function(origem, destino)
{
	//vamos determinar o diretorio de alvo
	if(destino == "")
	{
		//vamos montar o nome do diretorio
		var nomeBaseLivro = COPFFile_GetBookTitle_COmExcecao( origem);
		destino = "file:///" + CPref.bookfolder() + "\\" + CUtils.NormalizeAcentosFilename(nomeBaseLivro);

		//vamos aganratir que o dirtorio nao xista
		if(CUtils.FileExist(destino) )
		{
			var IndiceDiretorioUnico = 1;
			while( CUtils.FileExist(destino + IndiceDiretorioUnico) )
			{
				IndiceDiretorioUnico++;
			}
			
			//achamos!!
			destino = destino + IndiceDiretorioUnico;
		}

		destino += "\\";

		//usamos o mesmo nome de OPF
		var lastSlash = origem.toString().lastIndexOf("/");
		var lastSlash2 = origem.toString().lastIndexOf("\\");
		if(lastSlash < lastSlash2)
			lastSlash = lastSlash2;
		destino += origem.toString().substring(lastSlash + 1);
	}
	
	var VariavelParaRetorno = destino;
	
	//tiramos o file da frente
	//se tiver file:/// na frente, tiramos
	if(origem.indexOf("file:///") == 0)
		origem = origem.substring(8);
	//torcamos os / por \
	var re = new RegExp("/", "g");
	origem = origem.replace(re, "\\");

	if(destino.indexOf("file:///") == 0)
		destino = destino.substring(8);
	//torcamos os / por \
	var re = new RegExp("/", "g");
	destino = destino.replace(re, "\\");

	//calcula o diretorio de origem e de destino
	var lastSlash = origem.toString().lastIndexOf("/");
	var lastSlash2 = origem.toString().lastIndexOf("\\");
	if(lastSlash < lastSlash2)
		lastSlash = lastSlash2;
	var diretorioorigem = origem.toString().substring(0, lastSlash + 1);

	var lastSlash = destino.toString().lastIndexOf("/");
	var lastSlash2 = destino.toString().lastIndexOf("\\");
	if(lastSlash < lastSlash2)
		lastSlash = lastSlash2;
	var diretoriodestino = destino.toString().substring(0, lastSlash + 1);

	//abrios o diretorio de destino
	var filediretoriodestino = Components.classes["@mozilla.org/file/local;1"]
		.createInstance(Components.interfaces.nsILocalFile);
	filediretoriodestino.initWithPath(diretoriodestino);

	//protecao extra
	if(diretorioorigem == diretoriodestino)
		throw origem;
	

/*
isto aqui nao da certo, nao entendi porque....
temos que apagar os arquivos um a um
	//apagamos tudo no destino
	if(filediretoriodestino.exists())
		filediretoriodestino.remove(true);
*/

	//copiamos o OPF
	var origemfile = Components.classes["@mozilla.org/file/local;1"]
		.createInstance(Components.interfaces.nsILocalFile);
	origemfile.initWithPath(origem);

	CUtils.DeleteIfFileExist(destino);
	var lastSlash = destino.toString().lastIndexOf("/");
	var lastSlash2 = destino.toString().lastIndexOf("\\");
	if(lastSlash < lastSlash2)
		lastSlash = lastSlash2;
	var NomeBaseOpfParaApagar = destino.toString().substring(lastSlash + 1);
	origemfile.copyTo(filediretoriodestino, NomeBaseOpfParaApagar);

	
	//copiamos o resto dos arquivos, somente do diretorio atual (sem recursivo)
	//em 20100622: fazemos recursivo sim!
	//abrios o diretorio de destino
	var filediretorioorigem = Components.classes["@mozilla.org/file/local;1"]
		.createInstance(Components.interfaces.nsILocalFile);
	filediretorioorigem.initWithPath(diretorioorigem);
	var entries = filediretorioorigem.directoryEntries;

	CUtilsTimeout_copia();
	this.vaiCopiarParaBibliotecaRecursivoComExcecao(entries, diretoriodestino, filediretoriodestino);
	//depois de um tempo, voltamos o timeout normal
	setTimeout("CUtilsTimeout_inicial();", 30000);

	//abrimos o que acabamos de copiar
	return VariavelParaRetorno;
},

//copia arquivos e diretorios recursivamente
vaiCopiarParaBibliotecaRecursivoComExcecao:function(entries, diretoriodestino, filediretoriodestino)
{
	while(entries.hasMoreElements())
	{
		var entry = entries.getNext();
		entry.QueryInterface(Components.interfaces.nsIFile);
		if(entry.isDirectory())
		{
			//abrios o diretorio de destino
			var novofilediretoriodestino = Components.classes["@mozilla.org/file/local;1"]
				.createInstance(Components.interfaces.nsILocalFile);
			novofilediretoriodestino.initWithPath(diretoriodestino + entry.leafName + "\\");

			//copiamos recursivamente
			this.vaiCopiarParaBibliotecaRecursivoComExcecao(entry.directoryEntries, diretoriodestino + entry.leafName + "\\", novofilediretoriodestino);
		}
		else
		{
			//vamos ver a extensao
			var path = entry.target;
			if(path.toLowerCase().indexOf(".opf") > 0)
			{
				//opf, ignoramos
			}
			else
			{
				//nao é opf, copiamos
				CUtils.DeleteIfFileExist(diretoriodestino + entry.leafName);
				entry.copyTo(filediretoriodestino, "");
			}
		}
	}
},

//verificamos se copia para a biblioteca
//podemos dar excecao, quem chama deve ignorar
//retorna vazio se é para cancelar a abertura, ou o path completo do opf a abrir
vaiTentarCopiarParaBibliotecaComExcecao:function(path)
{
	//vamos perguntar se quer copiar para a biblioteca
	/*
	fluxo:
	- se foi abrto pelo historico, nao fazemos nada (recebemos isso como parametro)
	- se o opf ja estiver na biblioteca, nao faz nada
	- se nao estiver em file:, nao faz nada
	- se nao existir um livro com o mesmo ID, pergunta: quer copiar? quer abrir do local onde está?
	- se já exsitir, pergunta: quer abrir o da biblioteca? quer copiar por cima? quer abrir do local onde está? 
	- ao copiar, se o diretorio ja existir, anexa um nuero sequencial ate achar um diretorio que nao existe
	*/

	//somente se estiver em file:
	if(path.toString().indexOf("file:///") != 0)
		return path;
	
	//nao se estver na biblioteca
	var re = new RegExp("\\\\", "g");
	if(path.toString().replace(re, "/").indexOf(CPref.bookfolder().toString().replace(re, "/") ) != -1)
		return path;

	//vamos copiar (ou mehor, perguntar)

	//precisamos saber se já está na biblioteca
	var IDdesteLivro = COPFFile_GetBookId_COmExcecao( path);
	
	var PathOPFnaBiblioteca = "";
	CmdMain.WaitCursorOn();
	try
	{
		PathOPFnaBiblioteca = this.VerificaSeExisteNaBiblioteca(IDdesteLivro);
	}
	catch(e)
	{
		CmdMain.WaitCursorOff();
		throw e;
	}
	CmdMain.WaitCursorOff();


	//chamamos a caixa de dialogo para ver o que fazer
	/*
		AcaoCopiar: 
			0 cancelar, 
			1 Copiar para a biblioteca (nao esta na biblioteca ou é para sobrepor) - e abrir o da bilioteca
			2 Abrir do local atual, sem copiar
			3 Abrir o que está na biblioteca
	*/
	var retVals = { okButton:false, ExisteNaBiblioteca: PathOPFnaBiblioteca != "", AcaoCopiar: 0 };
	window.openDialog('../dlg/CopyToLibrary.xul','OpenType','modal,centerscreen,resizable=no', retVals);
	if(!retVals.okButton || retVals.AcaoCopiar == 0)
	{
		//pediram para cancelar
		return "";
	}

	//abrir do local atual	
	if(retVals.AcaoCopiar == 2)
		return path;

	//abrir o que está na biblioteca
	if(retVals.AcaoCopiar == 3)
	{
		if(PathOPFnaBiblioteca != "")
			return PathOPFnaBiblioteca;
		return path;
	}

	//nao é para copiar para a biblioteca (novo ou sobrepondo)
	if(retVals.AcaoCopiar != 1)
		return path;

	//copiar para a biblioteca (novo ou sobrepondo)
	CmdMain.WaitCursorOn();
	try
	{
		PathOPFnaBiblioteca = this.vaiCopiarParaBibliotecaComExcecao(path, PathOPFnaBiblioteca);
	}
	catch(e)
	{
		CmdMain.WaitCursorOff();
		//temos que avisar que deu erro na copia
		CDialogs.WarnEscToContinue(CMsgIface.ErrorCopyBookFiles(), null);
		//alert(e.toString());

		//e nao abre o livro
		return "";
	}
	CmdMain.WaitCursorOff();
	return PathOPFnaBiblioteca;
},

//verifica se um ID já existe na biblioteca
//se ja existir, retorna o path completo do OPF correspondente (dentro da biblioteca)
//se nao existir, volta vazio
VerificaSeExisteNaBiblioteca:function(IdParaBuscar)
{
	var dirsleft = new Array();	//diretorios que faltam
	var file = Components.classes["@mozilla.org/file/local;1"].createInstance(Components.interfaces.nsILocalFile);
	file.initWithPath(CPref.bookfolder());
	dirsleft.push( file);

	//enquanto tiver diretorio	
	while(dirsleft.length > 0)
	{
		var este = dirsleft.pop();
		var entries = este.directoryEntries;
		while(entries.hasMoreElements())
		{
			var entry = entries.getNext();
			entry.QueryInterface(Components.interfaces.nsIFile);
			if(entry.isDirectory())
				dirsleft.push(entry);
			else
			{
				//vamos ver a extensao
				var path = entry.target;
				if(path.toLowerCase().indexOf(".opf") > 0)
				{
					//vamos adicionar
					//nao criamos um opffile pq seria mais lento, só interessa o ID
					try
					{
						if(IdParaBuscar	== COPFFile_GetBookId_COmExcecao("file:///" + path))
							return "file:///" + path;
					}
					catch(e)
					{
						//ignoramos erros
					}
				}
			}
		}
	}
	
	//nao achamos
	return "";
},

//abrir um livro, retorna true se consegiu abrir
OpenOPFbyPath:function(path, incluirNoHistorico, tentarCopiarParaBiblioteca)
{
	//para medir o tempo que demora
	var InicioDoCarregamento = new Date();
	
	try
	{
		if(tentarCopiarParaBiblioteca)
		{
			path = this.vaiTentarCopiarParaBibliotecaComExcecao(path);
			if(path == "")
				return false;
		}
	}
	catch(e)
	{
		//ignoramos erros
		//throw(e);
	}
	
	//carregamos o arquivo
	try
	{
		CmdMain.WaitCursorOn();
		var thisopf = new COPFControl(path, incluirNoHistorico);
		if(thisopf.opffile.errorDuringLoad)
		{
			//deu erro na carga
			CmdMain.WaitCursorOff();
			return false;
		}
		CmdMain.OPFSet(thisopf);
	}
	catch(e)
	{
		//se deu erro, avisamos
		CmdMain.WaitCursorOff();
		CDialogs.WarnEscToContinue(new CExcept(CMsg.FileNotFoundOrError(), e, path), null);
		return false;
	}

	//vamos apra a home
	CmdInfo.activate();
	CmdMain.WaitCursorOff();

	//mostrar o tempo que demorou
	var FinalDoCarregamento = new Date();
	
	//mostrar o tempo de carga
	//alert(FinalDoCarregamento - InicioDoCarregamento);
	
	//carregou o arquivo
	return true;
},

//clicaram no botao para arbir um arquivo, retorna false se nao abriu o arquivo
clickOpen:function()
{
	CSpeak.forceEnd();
	
	var retVals = { okButton:false, path: "" };
	window.openDialog('../dlg/OpenType.xul','OpenType','modal,centerscreen,resizable=no', retVals);
	if(!retVals.okButton)
	{
		CSpeak.gotoStart();
		return false;
	}

	//vamos abrir o arquivo
	if(!this.OpenOPFbyPath(retVals.path, true, true))
	{
		CSpeak.gotoStart();
		return false;
	}

	//vamos apra a home
	CmdInfo.activate();
	
	return true;
},

//no botao de splash
clickSplash:function()
{
	CSpeak.forceEnd();
	
	//vamos para o splash
	CmdSplash.update();
	CmdSplash.activate();
},

//na home
clickHome:function()
{
	CSpeak.forceEnd();
	
	//ativamos a home
	if(!CmdMain.OPFpresent())
	{
		//vamos para o splash
		CmdSplash.activate();
	}
	else
	{
		//vamos para os dados
		CmdInfo.activate();
		CSpeak.CommandEcho_text(CMsgIface.EchoData());
	}

},

clickRead:function()
{
	//se nao tiver livro, nao vamos
	if(!CmdMain.OPFpresent())
	{
		CmdMain.ShowWarn(CMsgIface.NoBookOpen());
		return;
	}
	
	CSpeak.forceEnd();
	
	//vamos para a tela
	CmdRead.activate();

	//eco de comando
	CSpeak.CommandEcho_text(CMsgIface.EchoBookRead());
},


clickNdx:function()
{
	//se nao tiver livro, nao vamos
	if(!CmdMain.OPFpresent())
	{
		CmdMain.ShowWarn(CMsgIface.NoBookOpen());
		return;
	}
	
	CSpeak.forceEnd();
	
	//vamos para a tela
	CmdNcx.activate();
	
	CSpeak.CommandEcho_text(CMsgIface.EchoNcx());
},


//clicaram no novo marcador
clickinsMarker:function()
{
	//se nao tiver livro, nao vamos
	if(!CmdMain.OPFpresent())
	{
		CmdMain.ShowWarn(CMsgIface.NoBookOpen());
		return;
	}


	//variaveis que usamos mais pra baixo
	var currentURI = "";
	var currentNote = "";
	var currentText = "";
	var previousspeakindex = 0;

	//se estiver na lista de marcadores, vamos editar este marcador
	if(CmdMain.getMode() == CmdMarks)
	{
		//paramos de falar
		CSpeak.forceEnd();
		
		var arraymarkers = CmdMain.OPFGet().opffile.marks.getSortedarrayBookmarks();
		var i = CmdMain.OPFGet().opffile.marks.speakindex;
		//se o marcador nao existir, ignoramos o comando
		if(i < 0 || i >= arraymarkers.length)
			return;
		
		var thismarker = arraymarkers[i];
		currentURI = CUtils.GetXMLChildNoException(thismarker, "URI", null);
		if(currentURI == null)
			return;
		currentURI = currentURI.textContent;
		
		previousspeakindex = CmdMain.OPFGet().opffile.marks.speakindex;
	}
	else
	{
		//nao esta na lista de marcadores (a situacao normal)
	
		//vamos para a tela de leitura no fundo
		CmdRead.activate();

		//paramos de falar
		CSpeak.forceEnd();
		//CSpeak.pause();
		document.getElementById('ButMarker').hidePopup();

		//pega o titulo e o texto padrao
		var currentNote = CmdMain.OPFGet().opffile.getCurrentTextTTS().textContent;
		var currentText = "";
		//tiramos enter, tab, espacos duplicados
		var re = new RegExp("\\x0d", "g");
		currentNote = currentNote.replace(re, " ");
		re = new RegExp("\\x0a", "g");
		currentNote = currentNote.replace(re, " ");
		re = new RegExp("\\x09", "g");
		currentNote = currentNote.replace(re, " ");

		while(currentNote.indexOf("  ") >= 0)
			currentNote = currentNote.replace("  ", " ");
		currentNote = CUtils.TrimString(currentNote);
		if(currentNote.length > 100)
			currentNote = currentNote.substring(0, 100) + "...";

		//a URI atual
		currentURI = CmdMain.OPFGet().opffile.smils.GetCurrentURIMark();
	}

	//se o marcador ja existir, pegar os dados para edicao
	var isNewMark = true;
	var currentMark = CmdMain.OPFGet().opffile.marks.getBookmarkByURI(currentURI);
	if(currentMark)
	{
		//pega os dados do marcador atual
		//ignoramos erros
		try
		{
			if(currentMark.attributes)
			if(currentMark.attributes.getNamedItem("label"))
				currentNote = currentMark.attributes.getNamedItem("label").value;
			
			var note = CUtils.GetXMLChildNoException(currentMark, "note", null);
			currentText = CUtils.GetXMLChildNoException(note, "text", null).textContent;
			isNewMark = false;
		}
		catch(e)
		{
			//ignoramos erros, ja estao com valores padrao
		}
	}


	//abre a janela
	var retVals = { okButton:false, removeButton:false, title: currentNote, text: currentText, isNewMark: isNewMark };
	window.openDialog('../dlg/Marker.xul','Marker','modal,centerscreen,resizable=no', retVals);
	
	//se deram ok...
	if(retVals.okButton)
	{
		if(!isNewMark)
		{
			//usamos os dados do marcador atual
			CmdMain.OPFGet().opffile.marks.updateBookmark(
				currentMark,
				retVals.title,
				retVals.text
				);
		}
		else
		{
			//ciramos com os dados do livro, da posicao atual do livro
			CmdMain.OPFGet().opffile.marks.addBookmark(
				CmdMain.OPFGet().opffile.ncx.GetCurrentNCXRef(),
				CmdMain.OPFGet().opffile.smils.GetCurrentURIMark(),
				retVals.title,
				retVals.text,
				CmdMain.OPFGet().opffile.getCurrentTextTTS().textContent,
				CmdMain.OPFGet().opffile.smils.getSMILFileIndex(),
				CmdMain.OPFGet().opffile.smils.getSMILFileOffset(),
				CmdMain.OPFGet().opffile.ncx.GetCurrentNCXPageRef()
				);
		}
	}
	
	//se deram remover...
	if(retVals.removeButton && !isNewMark)
	{
		//removemos
		CmdMain.OPFGet().opffile.marks.deleteBookmarkByURI( currentURI );
	}
	
	
	//se esta na lista de marcadores, fica onde está
	if(CmdMain.getMode() == CmdMarks)
	{
		CmdMain.OPFGet().opffile.marks.speak_prepare();
		CmdMain.OPFGet().opffile.marks.setCurrentIndex( previousspeakindex);
		CmdMain.OPFGet().opffile.marks._speakcurrent();
	}
	else
	{
		//vamos para a tela
		CmdRead.activate();
		CSpeak.gotoStart();
	}
	
	if(isNewMark)
		CSpeak.CommandEcho_text(CMsgIface.EchoMarkNewDlgOff());
	else
		CSpeak.CommandEcho_text(CMsgIface.EchoMarkEditDlgOff());
},

//clicaram na lista de marcadores
clickMarkersBook:function()
{
	//se nao tiver livro, nao vamos
	if(!CmdMain.OPFpresent())
	{
		CmdMain.ShowWarn(CMsgIface.NoBookOpen());
		return;
	}
	
	CSpeak.forceEnd();
	
	CmdMarks.activate();
},


//clicaram na lista de resultados da busca
clickAbaBusca:function()
{
	//se nao tiver livro, nao vamos
	if(!CmdMain.OPFpresent())
	{
		CmdMain.ShowWarn(CMsgIface.NoBookOpen());
		return;
	}
	
	CSpeak.forceEnd();
	
	CmdSearchRes.activate();
},


//clicaram na configuracao global
clickPrefsGlobal:function()
{
	CSpeak.forceEnd();
	//o eco de comando é feito na caixa de dialogo

	//ajusta o popup
	document.getElementById('ButPrefsGlobal').hidePopup();

	//abre a caixa de diálogo
	var retVals = { okButton:false };
	window.openDialog('../dlg/prefs.xul', 'prefs', 'modal,centerscreen,resizable=no', retVals);
	//se deram ok...
	if(retVals.okButton)
	{
		//atualiza a traducao
		CMsg.RecarregarMensagens();
		CMsgIface.RecarregarMensagens();
		CmdMain.TraduzirInterface();
		
		//atualiza o marcador
		CmdMain.checkMarkerIndicator();
		CmdMain.UpdateFontSize();
	
		CSpeak.setAutonavList(CPref.listautonav());
		CSpeak.setTTSSpeed(CPref.voice_speed());

		CSpeak.setVolTTS(CPref.voice_volume());
		CSpeak.setVolAudioSystem(CPref.audio_volume());
		CTools.updateVolumes();
	}
	CSpeak.gotoStart();
	CSpeak.CommandEcho_text(CMsgIface.EchoPrefGlobalOff());
},

//clicaram na configuracao do livro
clickPrefsLivro:function()
{
	//se nao tiver livro, nao vamos
	if(!CmdMain.OPFpresent())
	{
		CmdMain.ShowWarn(CMsgIface.NoBookOpen());
		return;
	}
	

	CSpeak.forceEnd();
	//o eco de comando é dado pela caixa de diálogo

	//ajusta o popup
	document.getElementById('ButPrefs').hidePopup();

 	//abre a caixa de diálogo
	var retVals = { okButton:false, opffile: CmdMain.OPFGet().opffile };
	window.openDialog('../dlg/prefsLivro.xul', 'prefsLivro', 'modal,centerscreen,resizable=no', retVals);

	//se deram ok...
	if(retVals.okButton)
	{
		//atualizamos o que ocara pode ter alterado
		//note que a caixa de dialogo já gravou as alteracoes no COPFPrefs
		CSpeak.setAutonavBook(CmdMain.OPFGet().opffile.opfprefs.NavigateAuto());
		
		//seta o volume do audio
		CSpeak.setVolAudioBook(CmdMain.OPFGet().opffile.opfprefs.AudioVolume());
		CTools.updateVolumes();
		CmdMain.updateSkipNoteStatus();
		CmdMain.updateSkipPageStatus();
		
		
		//precisamos fazer isto para que a voz passe a viger imediatamente
		//se estiver lendo o livro ou o indice, recomeca da frase

		//atualiza as infs da tela inicial
		CmdInfo.update();
		//vamos ver o que o cara estava fazendo e retomar
		//se estiver na leitura ou no indice ou na info, recomecamos a frase atual
		var reativamos = false;
		if(CmdMain.getMode() == CmdRead)
		{
			CmdRead.activate();
			reativamos = true;
		}
		if(CmdMain.getMode() == CmdNcx)
		{
			CmdNcx.activate();
			reativamos = true;
		}
		if(CmdMain.getMode() == CmdInfo)
		{
			CmdInfo.activate();
			reativamos = true;
		}
		
	}

	//contnuamos o que estava
	CSpeak.gotoStart();
	CSpeak.CommandEcho_text(CMsgIface.EchoPrefBookOff());
},


//clicaram no historico
clickHist:function()
{
	CSpeak.forceEnd();
	
	CmdHist.activate();
	
	//eco de comando
	CSpeak.CommandEcho_text(CMsgIface.EchoHist());
},


//coemco do livro
clickBookStart:function()
{
	//se nao tiver livro, nao vamos
	if(!CmdMain.OPFpresent())
	{
		CmdMain.ShowWarn(CMsgIface.NoBookOpen());
		return;
	}
	
	CSpeak.forceEnd();
	
	//para o comeco do livro
	CmdMain.OPFGet().opffile.smils.gotoStart();
	
	//vamos para a tela
	CmdRead.activate();
	
	//nos exercícios, ativa a referência do exercício
	if(RunningInsideExercises)
	if(CmdRead.AuxRead_Vars_ExcerciseBody_active)
		CmdRead.clickExerciseTogleReadingArea();
	
	
	//eco de comando
	if(!RunningInsideExercises)
		CSpeak.CommandEcho_text(CMsgIface.EchoBookStart());
},


//clicaram na ajuda
clickHelpTutorial:function()
{
	this.chamarTutorial("");
},

chamarTutorial:function(chavebusca)
{
	CSpeak.forceEnd();
	CTutorial.chamarTutorial(chavebusca);

	//atualiza coisas que podem ter mudado no tutorial
	CmdMain.UpdateFontSize();
	CSpeak.setTTSSpeed(CPref.voice_speed());
	CSpeak.setVolTTS(CPref.voice_volume());
	CSpeak.setVolAudioSystem(CPref.audio_volume());
	CTools.updateVolumes();

	CSpeak.gotoStart();
	CSpeak.CommandEcho_text(CMsgIface.EchoTutorialOff());
},

//clicaram na ajuda
clickHelpGlobal:function()
{
	this.chamarTutorial("1.1.");
},

//clicaram na ajuda
clickHelpLocal:function()
{
	CSpeak.forceEnd();

	var file = "";
	if(CmdMain.getMode() == CmdRead)
		file = "4.3.";
	if(CmdMain.getMode() == CmdNcx)
		file = "3.2.";
	if(CmdMain.getMode() == CmdInfo)
		file = "2.4.";
	if(CmdMain.getMode() == CmdHist)
		file = "2.2.";
	if(CmdMain.getMode() == CmdSearchRes)
		file = "8.2.";
	if(CmdMain.getMode() == CmdMarks)
		file = "6.2.";
	if(CmdMain.getMode() == CmdSplash)
		file = "2.4.";

	if(file == "")
	{
		CDialogs.WarnEscToContinue(CMsgIface.NoHelpForMode(), null);
		CSpeak.gotoStart();
	}
	else
		this.chamarTutorial(file);
},

//chavear entre mp3 e tts
switchMp3:function()
{
	//se nao tiver livro, nao vamos
	if(!CmdMain.OPFpresent())
	{
		CmdMain.ShowWarn(CMsgIface.NoBookOpen());
		return;
	}
	
	CSpeak.pause();
	
	//pega o status atual
	var status = CmdMain.OPFGet().opffile.opfprefs.forceTTS();
	//inverte
	if(status)
	{
		CmdMain.OPFGet().opffile.opfprefs.forceTTS_set(false);
	}
	else
	{
		CmdMain.OPFGet().opffile.opfprefs.forceTTS_set(true);
	}

	//atualiza as infs da tela inicial
	CmdInfo.update();
	//vamos ver o que o cara estava fazendo e retomar
	//se estiver na leitura ou no indice ou na info, recomecamos a frase atual
	var reativamos = false;
	if(CmdMain.getMode() == CmdRead)
	{
		CmdRead.activate();
		reativamos = true;
	}
	if(CmdMain.getMode() == CmdNcx)
	{
		CmdNcx.activate();
		reativamos = true;
	}
	if(CmdMain.getMode() == CmdInfo)
	{
		CmdInfo.activate();
		reativamos = true;
	}
	
	if(!reativamos)
		CSpeak.resume();
	

	//eco de comando (note que status é o status anterior, que foi invertido)
	if(status)
	{
		CSpeak.CommandEcho_text(CMsgIface.EchoMP3On());
	}
	else
	{
		CSpeak.CommandEcho_text(CMsgIface.EchoMP3Off());
	}
},

clicktoolBusca:function()
{
	//se nao tiver livro, nao vamos
	if(!CmdMain.OPFpresent())
	{
		CmdMain.ShowWarn(CMsgIface.NoBookOpen());
		return;
	}
	
	CSpeak.forceEnd();
	if(!RunningInsideTutorial)
		document.getElementById('ButBusca').hidePopup();

	var retVals = { okButton:false, searchWords: "", 
		temBuscaIndexada:CmdMain.OPFGet().opffile.findtext.temBuscaIndexada,
		querBuscaIndexada:false,
		thisIsDictionary:CmdMain.OPFGet().opffile.thisIsDictionary() };
	window.openDialog('../dlg/busca.xul', 'busca','modal,centerscreen,resizable=no', retVals);

	//se vier vazio, ignoramos
	if(!retVals.okButton || CUtils.TrimString(retVals.searchWords) == "")
	{
		CSpeak.gotoStart();
		if(retVals.okButton)
			CSpeak.CommandEcho_text(CMsgIface.EchoSearchDlgNoWord());
		else
			CSpeak.CommandEcho_text(CMsgIface.EchoSearchDlgOff());
		return;
	}
	
	//a busca do dicionário é meio diferente
	if( CmdMain.OPFGet().opffile.thisIsDictionary() )
	{
		CmdMain.WaitCursorOn();
		var smilref_alvo = CmdMain.OPFGet().opffile.findtext.FazerBuscaDicionario(retVals.searchWords);
		CmdMain.WaitCursorOff();
		if(smilref_alvo == "")
		{
			//colocamos na lista de resultados
			CmdSearchRes.clear();
			CmdSearchRes.setResults(new Array(), null, retVals.searchWords, true, false);
			
			//avisamos que nao achou
			CmdMain.WaitCursorOff();
			CmdMain.ShowWarn(CMsgIface.NoSearchRes());
			return;
		}

		//colocamos na lista de resultados
		CmdSearchRes.clear();
		CmdSearchRes.setResults(new Array(), null, retVals.searchWords, true, true);
		
		//vamos para o ponto
		
		//liga a aba da leitura para mover o cursor
		CmdRead.preactivate();

		//NAO TEMOS COMO FAZER:
		//sincronizar o NCX
		//sincronizar as paginas
		
		//seta o foco na letiura
		CmdMain.OPFGet().opffile.smils.gotoHref(smilref_alvo);
		CmdRead.activate();
		CmdMain.WaitCursorOff();

		return;
	}
	
	//vamos fazer a busca
	CmdMain.WaitCursorOn();
	var arr = null;
	try
	{
		CmdSearchRes.clear();
		
		arr = CmdMain.OPFGet().opffile.findtext.FazerBusca(retVals.querBuscaIndexada, retVals.searchWords, CmdRead.getCurrentHTMLTree() );
		//coloca como resultado
		CmdSearchRes.setResults(arr, CmdMain.OPFGet().opffile.opfprefs, retVals.searchWords, false, false);
		//CmdMain.setMode(CmdSearchRes);
	}
	catch(e)
	{
		//nao fazemos nada
		//throw e;
	}
	CmdMain.WaitCursorOff();
	
	//temos que fazer isto depois de desligar o relgio
	if(arr != null)
		CmdSearchRes.activate();
},

clicktoolBuscaNext:function()
{
	//se nao tiver livro, nao vamos
	if(!CmdMain.OPFpresent())
	{
		CmdMain.ShowWarn(CMsgIface.NoBookOpen());
		return;
	}
	
	if(!CmdSearchRes.hasResults())
	{
		CmdMain.ShowWarn(CMsgIface.NoSearchRes());
		return;
	}

	CmdSearchRes.gotoNext();
},

clicktoolBuscaPrev:function()
{
	//se nao tiver livro, nao vamos
	if(!CmdMain.OPFpresent())
	{
		CmdMain.ShowWarn(CMsgIface.NoBookOpen());
		return;
	}
	
	if(!CmdSearchRes.hasResults())
	{
		CmdMain.ShowWarn(CMsgIface.NoSearchRes());
		return;
	}

	CmdSearchRes.gotoPrev();
},

clicktoolBuscaEnd:function()
{
	//se nao tiver livro, nao vamos
	if(!CmdMain.OPFpresent())
	{
		CmdMain.ShowWarn(CMsgIface.NoBookOpen());
		return;
	}
	
	if(!CmdSearchRes.hasResults())
	{
		CmdMain.ShowWarn(CMsgIface.NoSearchRes());
		return;
	}

	CmdSearchRes.gotoEnd();
},

clicktoolBuscaStart:function()
{
	//se nao tiver livro, nao vamos
	if(!CmdMain.OPFpresent())
	{
		CmdMain.ShowWarn(CMsgIface.NoBookOpen());
		return;
	}
	
	if(!CmdSearchRes.hasResults())
	{
		CmdMain.ShowWarn(CMsgIface.NoSearchRes());
		return;
	}

	CmdSearchRes.gotoStart();
},


clickWebUpdate:function()
{
	CSpeak.forceEnd();
	//chamamos a caixa de dialogo
	var retVals = { okButton:false };
	window.openDialog('../dlg/update.xul','fale','modal,centerscreen,resizable=no', retVals);

	if(retVals.okButton)
	{
		//abrimos a janela
		CSpeak.forceEnd();
		window.open('http://www.caracol.com.br/agora/doc.cfm?id_doc=1982&lang=' + CPref.language() + "&version=" + CMsg.VersaoTexto() + "&release=" + CMsg.ReleaseTexto());
		return;
	}
	
	//religamos o som
	CSpeak.gotoStart();
},

clickAbout:function()
{
	CSpeak.forceEnd();
	window.openDialog('../../comm/Creditos.xul','dialogo','modal,centerscreen,resizable=no');
	CSpeak.gotoStart();
},

clickButFale:function()
{
	CSpeak.forceEnd();
	//chamamos a caixa de dialogo
	var retVals = { okButton:false };
	window.openDialog('../dlg/GoSupport.xul','fale','modal,centerscreen,resizable=no', retVals);

	if(retVals.okButton)
	{
		//fechamos o aplicativo
		CSpeak.forceEnd();
		window.open('http://www.caracol.com.br/agora/doc.cfm?id_doc=1981&lang=' + CPref.language());
		return;
	}
	
	//religamos o som
	CSpeak.gotoStart();
},

clickButExport:function()
{
	CSpeak.forceEnd();
	//chamamos a caixa de dialogo
	var retVals = { okButton:false, comandoExportar:"" };
	window.openDialog('../dlg/DlgExport.xul','DlgExport','modal,centerscreen,resizable=no', retVals);

	//vamos fazer a exportacao?
	if(retVals.okButton)
	{
		//qual comando?
		if(retVals.comandoExportar == "exportarconfig")
		{
			CmdMain.ExportarConfiguracao();
			return;
		}
	
		//qual comando?
		if(retVals.comandoExportar == "importarconfig")
		{
			CmdMain.ImportarConfiguracao();
			return;
		}
	
		//qual comando?
		if(retVals.comandoExportar == "exportarnotas")
		{
			//se nao tiver livro, nao vamos
			if(!CmdMain.OPFpresent())
			{
				CmdMain.ShowWarn(CMsgIface.NoBookOpen());
				return;
			}

			//se nao tiver marcador, avisamos
			if(CmdMain.OPFGet().opffile.marks.getBookmarks().length == 0)
			{
				CmdMain.ShowWarn(CMsgIface.NoMarkToExport());
				return;
			}

			//prepara algumas variaveis		
			var titulo = CmdMain.OPFGetMeta(CmdMain.OPFGet().opffile.metadata_tagTitle, false);
			var autor = CmdMain.OPFGetMeta(CmdMain.OPFGet().opffile.metadata_tagAuthor, false);
			//temos 2 fontes, procura em qq uma delas
			var editora = CmdMain.OPFGetMeta("x-metadata/dtb:sourcePublisher", true);
			if(editora == null)
				editora = CmdMain.OPFGetMeta("dc-metadata/dc:Publisher", false);

			try
			{
				CmdMain.WaitCursorOn();
				var nomearquivo = CmdMain.OPFGet().opffile.ExportarMarcadores(titulo.toCommas(), autor.toCommas(), editora.toCommas());
				CmdMain.WaitCursorOff();
				CDialogs.WarnEscToContinue(CMsgIface.NotexExportSaved() + nomearquivo, null);
			}
			catch(e)
			{
				CmdMain.WaitCursorOff();
				throw e;
			}
			
			return;
		}
	}
	
	//religamos o som
	CSpeak.gotoStart();
},

clickButExpExercise:function()
{
	//somente nos exercícios
	if(!RunningInsideExercises)
		return;
	CmdRead.clickButExpExerciseGo();
},

notAvailable:function()
{
	CSpeak.forceEnd();
	CDialogs.WarnEscToContinue(CMsgIface.notAvailable(), null);
	CSpeak.gotoStart();
}

//fim da variavel
}

