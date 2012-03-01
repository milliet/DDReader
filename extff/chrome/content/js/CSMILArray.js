/// <reference path="CUtils.js" />
/// <reference path="CUtils_ff.js" />
/// <reference path="CSMILFile.js" />

/*
gerenciamento de um SMILArray
*/

function CSMILArray(opfprefs, pathOPF, SMILeventListener, SpeakFootNoteMode, thisIsExerciseBody, SMILExercEventListener)
{
	this._opfprefs = opfprefs;
	this._SMILpathOPF = pathOPF;	//path onde está o OPF, para saber de onde carregar cada smil
	this._SMILeventListener = SMILeventListener;
	this._SMILarray = new Array();
	this._SpeakFootNoteMode = SpeakFootNoteMode;

	//o controlador do corpo do exercicio
	this.thisIsExerciseBody = thisIsExerciseBody;
	this.SmilExerciseBody = null;
	if(thisIsExerciseBody)
		this.SmilExerciseBody = new CSMILExerc(pathOPF, SMILExercEventListener);


	//cria o nosso textlimits
		//avisamos que estamos no fim da lista
		var msgEnd = new CTextItem();
		msgEnd.SetText_string( CMsg.TextEnd());

		//avisamos que estamos começo fim da lista
		var msgStart = new CTextItem();
		msgStart.SetText_string( CMsg.TextStart());
		
	this._textLimits = new CTextLimits(this, msgStart, msgEnd, false);
}

CSMILArray.prototype._SMILpathOPF = "";
CSMILArray.prototype._SMILarray = new Array();
//o item que está atualmente selecionado
CSMILArray.prototype._SMILcurrIndex = -1;
CSMILArray.prototype._SMILcurrElem = null;

CSMILArray.prototype._opfprefs = null;	//o opfprefs

//gerenciador dos limites
CSMILArray.prototype._textLimits = null;

//status do skippable de pagina
CSMILArray.prototype._skipPage = false;
CSMILArray.prototype._skipIDPage = "";

//status do skippable de notas
CSMILArray.prototype._skipNote = false;
CSMILArray.prototype._skipIDNote = new Array;
CSMILArray.prototype._skipIDNotRef = "";

//cache de todos os IDs skippables
CSMILArray.prototype._skipArray = new Array;

//se estamos dentro de uma nota (temos que falar "inicio" e "fim" 
//quando entrar e sair de uma nota de rodape
CSMILArray.prototype._inNote = false;

//se devemos falar "inicio de nota" e "fim de nota"
CSMILArray.prototype._SpeakFootNoteMode = true;

//se este é o corpo do exercicio
CSMILArray.prototype.thisIsExerciseBody = false;
//o controlador do corpo do exercicio
CSMILArray.prototype.SmilExerciseBody = null;


/*
quem recebe os eventos do SMIL
tem que implementar:
SMILChangedItem(CSMILArray smilarray, string SMILrel_href, string id, bool goingUp) 
	navegando pelo SMIL, acabou de ir para um novo item (falando ou porque alguem pediu para mover)
SMILSkippedItem(CSMILArray smilarray, string SMILrel_href, string id, bool goingUp, string customTest) 
	navegando pelo SMIL, pulou uma entrada
assertCurrentTextHref(CSMILArray smilarray, string SMILrel_href, string id) - garantir que o texto esteja nessa posicao
getCurrentTextTTS() - retornar o texto para TTS do no de texto atual

O SMILExercEventListener tem que implementar o seguinte:
SMILExercEvent_HitControl(id do controle)
*/
CSMILArray.prototype._SMILeventListener = null;	


//adiciona um elemento
CSMILArray.prototype.add = function(relHref)
{
	var absHref = CUtils.ResolveURL(relHref, this._SMILpathOPF);
	this._SMILarray.push(new CSMILFile(absHref, relHref, this));
}

//pega o tamanho
CSMILArray.prototype.getSize = function()
{
	return this._SMILarray.length;
}

//dispara o evento de elemento alterado
CSMILArray.prototype._fireChangedItem = function(goingUp)
{
	//manda o evento
	if(!this._SMILeventListener)
		return;

	//note que o ID pode nao existir
	var smilfile = this._SMILcurrElem;
	if(smilfile.SMILFileCurrentPar == null)
		return;
	if(smilfile.SMILFileCurrentPar.attributes == null)
		return;
	if(smilfile.SMILFileCurrentPar.attributes.getNamedItem("id") == null)
		return;
	
	//temos que pegar o ID do cara
	var id = smilfile.SMILFileCurrentPar.attributes.getNamedItem("id").value;

	//manda o evento
	this._SMILeventListener.SMILChangedItem(this, smilfile.SMILrel_href, id, goingUp);
}
			

//manda ir para um determinado lugar
CSMILArray.prototype.gotoHref = function(href)
{
	//limpamos o cache de nota
	this._inNote = false;
	
	//vamos dividir com a cerquinha
	var list = href.toString().split("#");
	if(list.length != 2)
		throw new CExcept(CMsg.InvalidSMILHref_sintax(href), null, null);
		
	//vamos trabalhar com o caminho absoluto
	var href = CUtils.ResolveURL(list[0], this._SMILpathOPF);
	var anchor = list[1];

	//vamos procurar o arquivo
	for(var i=0; i < this._SMILarray.length; i++)
	{
		//fazer no futuro: usar rotina que compara caminhos absolutos, tirando os .. e . da URL
		if(this._SMILarray[i].SMILabs_href == href)
		{
			//achamos
			this._SMILcurrElem = this._SMILarray[i];
			this._SMILcurrIndex = i;
			
			//verificamos se está carregado
			if(!this._SMILcurrElem.loaded)
				this._SMILcurrElem.load();
			
			//procuramos a ancora
			if(!this._SMILcurrElem.gotoAnchor(anchor))
				throw new CExcept(CMsg.InvalidSMILHref_sintax(href), null, null);

			//manda o evento
			this._fireChangedItem(false);
			
			//acabamos			
			return;
		}
	}
	
	//nao achamos
	throw new CExcept(CMsg.InvalidSMILHref_nofile(href), null, null);
}

//vamos para um controle dentro de u exercicio
//é quase a mesma coisa que ir para um href, mas não precisamos começar a falar
//nao damos excecao nenhuma, simplesmente ignoramos eventa]uais erros
CSMILArray.prototype.ExerciseMoveBookBodyToSmilref = function(href)
{
	//vamos dividir com a cerquinha
	var list = href.toString().split("#");
	if(list.length != 2)
		return;
		
	//vamos trabalhar com o caminho absoluto
	var href = CUtils.ResolveURL(list[0], this._SMILpathOPF);
	var anchor = list[1];

	//vamos procurar o arquivo
	for(var i=0; i < this._SMILarray.length; i++)
	{
		//fazer no futuro: usar rotina que compara caminhos absolutos, tirando os .. e . da URL
		if(this._SMILarray[i].SMILabs_href == href)
		{
			//achamos
			this._SMILcurrElem = this._SMILarray[i];
			this._SMILcurrIndex = i;
			
			//verificamos se está carregado
			if(!this._SMILcurrElem.loaded)
				this._SMILcurrElem.load();
			
			//procuramos a ancora
			if(!this._SMILcurrElem.gotoAnchor(anchor))
				return;

			//manda o evento
			this._fireChangedItem(false);
			
			//acabamos			
			return;
		}
	}
	
	//nao achamos
}


//vamos para o comeco do arquivo
CSMILArray.prototype.gotoStart = function()
{
	//limpamos o cache de nota
	this._inNote = false;
	
	this._SMILcurrElem = this._SMILarray[0];
	this._SMILcurrIndex = 0;
	
	//verificamos se está carregado
	if(!this._SMILcurrElem.loaded)
		this._SMILcurrElem.load();
	
	//manda pro comeco
	this._SMILcurrElem.gotoStart();

	//manda o evento
	this._fireChangedItem(false);
}

//vamos para o anterior do arquivo
CSMILArray.prototype.gotoPrevious = function()
{
	return this.gotoPreviousWithEvent(true);
}

//vamos para o anterior do arquivo
CSMILArray.prototype.gotoPreviousWithClass = function(ParClassToMove)
{
	while(true)
	{
		if(!this.gotoPreviousWithEvent(false))
		{
			//nao conseguimos voltar, avisamos
			this._fireChangedItem(true);
		
			//enviar evento de antes do inicio do arquivo
			this._textLimits.TL_toplimit();
				
			return false;
		}
		
		//vamos ver se estamos em um PAR cm a classe desejada
		if(this._SMILcurrElem.SMILFileCurrentPar)
		if(this._SMILcurrElem.SMILFileCurrentPar.attributes)
		if(this._SMILcurrElem.SMILFileCurrentPar.attributes.getNamedItem)
		if(this._SMILcurrElem.SMILFileCurrentPar.attributes.getNamedItem("class"))
		if(this._SMILcurrElem.SMILFileCurrentPar.attributes.getNamedItem("class").value == ParClassToMove)
		{
			this._fireChangedItem(true);
			return true;
		}
	}
}

//vamos para o anterior do arquivo
CSMILArray.prototype.gotoPreviousWithEvent = function(FireThisEvent)
{
	//volta no arqauvo atual
	if(this._SMILcurrElem.gotoPrevious())
	{
		//manda o evento
		if(FireThisEvent)
			this._fireChangedItem(true);
		return true;
	}
		
	//arquivo anterior, já estamos no comeco da lista?
	if(this._SMILcurrIndex <= 0)
	{
		//manda o evento
		if(FireThisEvent)
			this._fireChangedItem(true);
		
		//enviar evento de antes do inicio do arquivo
		if(FireThisEvent)
			this._textLimits.TL_toplimit();
			
		return false;
	}
	
	//voltamos um arquivo
	this._SMILcurrIndex = this._SMILcurrIndex - 1;
	this._SMILcurrElem = this._SMILarray[this._SMILcurrIndex];

	//verificamos se está carregado
	if(!this._SMILcurrElem.loaded)
		this._SMILcurrElem.load();
	
	//todos os arquivos possuem pelo menos um PAR
	this._SMILcurrElem.gotoEnd();

	//manda o evento
	if(FireThisEvent)
		this._fireChangedItem(true);
	return true;
}

//vamos para o proximo do arquivo, retorna false se não achar
CSMILArray.prototype.gotoNext = function()
{
	return this.gotoNextWithEvent(true);
}

//vamos para o anterior do arquivo
CSMILArray.prototype.gotoNextWithClass = function(ParClassToMove)
{
	while(true)
	{
		if(!this.gotoNextWithEvent(false))
		{
			//nao conseguimos voltar, avisamos
			this._fireChangedItem(false);
		
			//enviar evento de depois do fim do arquivo
			this._textLimits.TL_bottomlimit();
				
			return false;
		}
		
		//vamos ver se estamos em um PAR cm a classe desejada
		if(this._SMILcurrElem.SMILFileCurrentPar)
		if(this._SMILcurrElem.SMILFileCurrentPar.attributes)
		if(this._SMILcurrElem.SMILFileCurrentPar.attributes.getNamedItem)
		if(this._SMILcurrElem.SMILFileCurrentPar.attributes.getNamedItem("class"))
		if(this._SMILcurrElem.SMILFileCurrentPar.attributes.getNamedItem("class").value == ParClassToMove)
		{
			this._fireChangedItem(false);
			return true;
		}
	}
}

//vamos para o proximo do arquivo, retorna false se não achar
CSMILArray.prototype.gotoNextWithEvent = function(FireThisEvent)
{
	//volta no arqauvo atual
	if(this._SMILcurrElem.gotoNext())
	{
		//manda o evento
		if(FireThisEvent)
			this._fireChangedItem(false);
		
		return true;
	}
		
	//arquivo anterior, já estamos no comeco da lista?
	if(this._SMILcurrIndex >= this._SMILarray.length - 1)
	{
		//manda o evento
		if(FireThisEvent)
			this._fireChangedItem(false);
		
		//enviar evento de depois do fim do arquivo
		if(FireThisEvent)
			this._textLimits.TL_bottomlimit();
		return false;
	}
	
	//avancamos um arquivo
	this._SMILcurrIndex = this._SMILcurrIndex + 1;
	this._SMILcurrElem = this._SMILarray[this._SMILcurrIndex];
	
	//verificamos se está carregado
	if(!this._SMILcurrElem.loaded)
		this._SMILcurrElem.load();
	
	//todos os arquivos possuem pelo menos um PAR
	this._SMILcurrElem.gotoStart();

	//manda o evento
	if(FireThisEvent)
		this._fireChangedItem(false);
	return true;
}

//pega o no atual do smil
CSMILArray.prototype.getCurrentNode = function()
{
	return this._SMILcurrElem.getCurrentNode();
}

//pega o no atual do smil, null se nao existir
CSMILArray.prototype.getCurrentNodeTextSrc = function()
{
	//se nao tiver, que de a excecao
	var node = this._SMILcurrElem.getCurrentNode();

	//esta em par, text, atributo src
	node = CUtils.GetXMLChildNoException(node, "text", null);
	if(node == null)
		return node;
		
	node = node.attributes.getNamedItem("src").value;
	if(node == null)
		return node;
	
	//tem que ter uma ancora
	if(node.toString().split("#").length != 2)
		throw new CExcept(CMsg.InvalidSMILHref_sintax(href), null, null);
	
	return node;
}

//comeca a falar do ponto atual
CSMILArray.prototype.speak = function()
{
	//vamos ver se é um exercicio, e se está no ponto de um controle
	if(this.thisIsExerciseBody)
	if(this.SmilExerciseBody != null)
	{
		//retorna TRUE se é para a gente NAO falar
		if(this.SmilExerciseBody.CheckInputOnSelection(this.GetCurrentURIMark()))
		{
			return;
		}
	}

	
	//garantimos que esteja no ponto certo
	//manda o evento
	if(this._SMILeventListener)
	{
		//note que o ID pode nao existir
		var smilfile = this._SMILcurrElem;
		if(smilfile.SMILFileCurrentPar == null)
			return;
		if(smilfile.SMILFileCurrentPar.attributes == null)
			return;
		if(smilfile.SMILFileCurrentPar.attributes.getNamedItem("id") == null)
			return;
	
		//temos que pegar o ID do cara
		var id = smilfile.SMILFileCurrentPar.attributes.getNamedItem("id").value;

		//manda o evento
		this._SMILeventListener.assertCurrentTextHref(this, smilfile.SMILrel_href, id);
	}
	
	
	//pegamos o texto
	var text = this._SMILeventListener.getCurrentTextTTS();
	
	//montamos o item para falar
	//preparamos a estrutura para falar o item
	var msg = new CTextItem();
	
	//pegar o texto do ponto atual
	if(text != null)
	{
		//somente se o texto existir
		msg.SetText_node(text);
	}

	
	//vamos ver o audio	
	var audio = CUtils.GetXMLChildRecursiveNoException(this._SMILcurrElem.getCurrentNode(), 
		"audio", this._SMILcurrElem.SMILabs_href);
	if(audio != null)
	{
		//somente se o texto existir
		msg.SetAudio_node(audio, this._SMILcurrElem.SMILabs_href);
	}
	
	//tratamento especial para resolver problema do pipeline:
	//ao processar as notas, ele coloca um ponto sozinho, e o TTS fala o ponto
	//se o trim do texto tiver somente um ponto, nao falamos nada
	//PROBLEMA AO FAZER ISTO: fica impossivel navegar para tras no texto.
	//quanod chega nesse ponto, ele fala muito rapido (quer dizer, nao fala)
	//e ja vai imediatamente para o proximo item
	/*
	if(text != null)
	if(text.textContent)
	{
		var txt = text.textContent;
		var re = new RegExp(" ", "g");
		if(txt.replace(re, "") == ".")
		{
			//nao falamos nada
			//e ignoramos o audio que porventura existir
			var msg = new CTextItem();
			msg.SetText_string("");
		}
	}
	* */


	//falamos o TTS?
	msg.forceTTS = this._opfprefs.forceTTS();
	msg.bookText = true;
	msg.bookVoice = this._opfprefs.VoiceTTS();
	msg.spell = true;
	
	//anvegacao auto?
	msg.autonav = this._opfprefs.NavigateAuto();

	//montamos os dados do livro
	var listInfoItems = new CTextArray();
	listInfoItems.CTIarray.push(msg);

	// ========================================
	// ========================================
	//temos que verificar se está entrando ou saindo de uma nota de rodape
	//temos que determina o customtest do item atual
	var customTest = CSMILFile_getCustomTest(this._SMILcurrElem.getCurrentNode());

	//se for o customtest de alguma nota, marcamos que estamos dentro da nota
	if(customTest != "")
	for(var i = 0; i < this._skipIDNote.length; i++)
	{
		//se for o ID...
		if(this._skipIDNote[i] == customTest && this._skipIDNote[i] != "")
			this._inNote = true;
	}
	

	//se estamos entrando em um NOTE_REFENCE, falamos o "inicio de nota"
	//e ignoramos tudo que calculamos acima (exceto setar o _inNote)
	if(customTest != "")
	if(customTest == this._skipIDNotRef)
	{
		listInfoItems = new CTextArray();
		
		//20101018: se já vei no livro, nao falamos
		if(this._SpeakFootNoteMode)
		{
			//a mensagem de inicio da nota
			var item = new CTextItem();
			item.SetText_string(CMsg.NoteStart());
			listInfoItems.CTIarray.push(item);
		}
		
		//o texto do note_reference
		listInfoItems.CTIarray.push(msg);
	}

	//se nao tiver nenhum custom test e antes a gente estava tocando uma nota, coloca a mensagem
	if(customTest == "" && this._inNote)
	{
		this._inNote = false;

		listInfoItems = new CTextArray();
		
		//20101018: se já vei no livro, nao falamos
		if(this._SpeakFootNoteMode)
		{
			//a mensagem de inicio da nota
			var item = new CTextItem();
			item.SetText_string(CMsg.NoteEnd());
			listInfoItems.CTIarray.push(item);
		}
		
		//o texto do note_reference
		listInfoItems.CTIarray.push(msg);
	}

	//fim do processamento do inicio e final da nota
	// ========================================
	// ========================================

	//agora, finalmente, vamos falar esse item
	CSpeak.playArray(listInfoItems, this._textLimits);
	
	//beep de marcador
	if(CPref.bookmarkbeep())
	{
		//vamos ver se tem marcaodr no ponto atual
		var uri = CmdMain.OPFGet().opffile.smils.GetCurrentURIMark();
		var mark = CmdMain.OPFGet().opffile.marks.getBookmarkByURI(uri);
		//faz o beep
		if(mark != null)
			CSpeak.CommandEchoGo_audio(CMsg.BeepMarkFile());
	}
		
}

//quando terminar de falar o item atual, avancamos para o proximo item
CSMILArray.prototype.TLevt_next = function()
{
	//tentamos ir para o proximo
	//se nao conseguir, caimos fora
	if(!this.gotoNext())
		return;
	
	//falamos o item atual
	this.speak();
}

//para voltar um item para tras
CSMILArray.prototype.TLevt_prev = function()
{
	//tentamos ir para o proximo
	//se nao conseguir, caimos fora
	if(!this.gotoPrevious())
		return;
	
	//falamos o item atual
	this.speak();
}


//falamos o item atual
CSMILArray.prototype.TLevt_current = function()
{
	//falamos o item atual
	this.speak();
}


//para pegar o ID da posicao atual (para marcadores)
CSMILArray.prototype.GetCurrentURIMark = function()
{
	return this._SMILcurrElem.GetCurrentURIMark();
}


//pega o numero do arquivo atual
CSMILArray.prototype.getSMILFileIndex = function()
{
	return this._SMILcurrIndex;
}
	
	
//pega o offset do PAR atual dentro do arquivo atual
CSMILArray.prototype.getSMILFileOffset = function()
{
	return this._SMILcurrElem.SMILFileCurrentIndex;
}
	
//determina se le os numeros de pagina
CSMILArray.prototype.GetSkipPage = function()
{
	return this._skipPage;
}


//verifica se le os numeros de pagina
CSMILArray.prototype.SetSkipPage = function(read)
{
	this._skipPage = read;
	this._update_skipArray();
}

//determina se le os numeros de pagina
CSMILArray.prototype.GetSkipIDPage = function()
{
	return this._skipIDPage;
}


//verifica se le os numeros de pagina
CSMILArray.prototype.SetSkipIDPage = function(read)
{
	this._skipIDPage = read;
	this._update_skipArray();
}

	
//determina se le os numeros de pagina
CSMILArray.prototype.GetSkipNote = function()
{
	return this._skipNote;
}


//verifica se le os numeros de pagina
CSMILArray.prototype.SetSkipNote = function(read)
{
	this._skipNote = read;
	this._update_skipArray();
}

//verifica se le as notas
CSMILArray.prototype.SetSkipIDNote = function(newarray)
{
	this._skipIDNote = newarray;
	this._update_skipArray();
}

//id a refencia de notas
CSMILArray.prototype.SetSkipIDNotRef = function(id)
{
	this._skipIDNotRef = id;
}


//determina se le os numeros de pagina (um array de strings)
CSMILArray.prototype.GetSkipIDNote = function()
{
	return this._skipIDNote;
}

//atuializa a variavel de cache do GetSkipIDs
CSMILArray.prototype._update_skipArray = function()
{
	//primeiro limpa a variavel
	this._skipArray = new Array;

	//a pagina
	if(this._skipPage && this._skipIDPage != "")
		this._skipArray.push(this._skipIDPage);

	//as notas
	if(this._skipNote)
		this._skipArray = this._skipArray.concat(this._skipIDNote);
}


//retorna um array de strings com todos os IDs que estão sendo pulados agora
CSMILArray.prototype.GetSkipIDs = function()
{
	return this._skipArray;
}


