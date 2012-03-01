/*
lista dos resultados da busca
*/

//gerenciamento dos marcadores de um livro
function CSearchRes(EventListener)
{
	this._EventListener = EventListener;
	this.array = new Array();

	//cria o nosso textlimits
		//avisamos que estamos no fim da lista
		var msgEnd = new CTextItem();
		msgEnd.SetText_string( CMsg.SearchResEnd());

		//avisamos que estamos começo fim da lista
		var msgStart = new CTextItem();
		msgStart.SetText_string( CMsg.SearchResStart());
		
	this._textLimits = new CTextLimits(this, msgStart, msgEnd, false);
}


//dados
CSearchRes.prototype.array = null;
//gerenciador dos limites
CSearchRes.prototype._textLimits = null;
//o item que estamos falando agora
CSearchRes.prototype.speakindex = -1;
//quem escuta os nossos eventos
CSearchRes.prototype._EventListener = null;
//para saber a voz do livro
CSearchRes.prototype._opfprefs = null;


//altera o array
CSearchRes.prototype.changeArray = function(array, opfprefs, searchWords, dictionarySarch, dictionaryFound)
{
	this.array = array;
	this._opfprefs = opfprefs;
	this.speakindex = -1;
	
	//evento
	if(this._EventListener)
		this._EventListener.SearchChangeElements(array, searchWords, dictionarySarch, dictionaryFound);
}


//comeca a falar do comeco
CSearchRes.prototype.speak = function()
{
	//marca se nao tem nada
	if(this.array.length == 0)
		this._textLimits.setEmpty(true);
	else
		this._textLimits.setEmpty(false);
	
	this.speakindex = -1;
	this._speakcurrent();
}


//comeca a falar do ponto atual
CSearchRes.prototype._speakcurrent = function()
{
	if(this.speakindex >= this.array.length)
		this.speakindex = this.array.length - 1;
	if(this.speakindex < 0)
		this.speakindex = 0;
	
	//evento
	if(this._EventListener)
		this._EventListener.SearchChangeActive(this.speakindex);
		
	if(this.array.length == 0)
	{
		//avisamos que nao tem nada
		var msg = new CTextItem();
		msg.SetText_string( CMsg.SearchresEmpty());
		CSpeak.playItem(msg, this._textLimits);
		return;
	}

	//lemos o item atual
	var msg = new CTextItem();
	//falamos
	var text = this.array[this.speakindex].textContent;
	text = text.toString();
	//limitamos em 60
	//pensando bem, nao limitamos nao....
	/*
	if(text.length > 60)
		text = text.substring(0,59) + "...";
	*/
	
	//dizemos o numero do resultado
	text = CMsg.SearchresItemSpeak(this.speakindex + 1) + text;
	msg.SetText_string( text);

	//navegacao auto
	if(this._opfprefs)
	{
		msg.forceTTS = this._opfprefs.forceTTS();
		msg.bookText = true;
		msg.bookVoice = this._opfprefs.VoiceTTS();
	}
	msg.listText = true;
	msg.spell = true;
	msg.autonav = CPref.listautonav();
	
	CSpeak.playItem(msg, this._textLimits);
}

//quando terminar de falar o item atual, avancamos para o proximo item
CSearchRes.prototype.TLevt_next = function()
{
	//nenhum item
	if(this.array.length == 0)
		return;

	//se ja esta no fim, nao vamos falar
	if(this.speakindex + 1 >= this.array.length)
	{
		//avisamos que nao tem nada
		this._textLimits.TL_bottomlimit();
		return;
	}
	
	this.speakindex++;
	this._speakcurrent();
}

//para voltar um item para tras
CSearchRes.prototype.TLevt_prev = function()
{
	//se ja estamos no comeco, nao subimos mais, só avisamos quem está em cima
	if(this.speakindex <= 0)
	{
		//avisamos que estamos no fim da lista
		this._textLimits.TL_toplimit();
		return;
	}


	this.speakindex--;
	this._speakcurrent();
}

CSearchRes.prototype.TLevt_current = function()
{
	this._speakcurrent();
}

CSearchRes.prototype.setCurrentIndex = function(index)
{
	//valida o indice
	if(index < 0)
		index = 0;
	if(index >= this.array.length)
		index = this.array.length - 1;

	//altera
	this.speakindex = index;
	
	//evento
	if(this._EventListener)
		this._EventListener.SearchChangeActive(this.speakindex);
}


		
