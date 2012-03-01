/// <reference path="CUtils.js" />
/// <reference path="CUtils_ff.js" />
/// <reference path="CExcept.js" />

/*
O CTextLimits é para facilitar a navegação por listas que tenham limites.
Ele gerencia os avisos de limites (tentar ir para antes do começo ou depois do fim).

O eventProvider deve implementar:
TLevt_next ,TLevt_prev, TLevt_current (para falar o item atual)
E pode mandar:
TL_toplimit, TL_bottomlimit

nos implementamos a interface do cspeak
*/

function CTextLimits(eventProvider, msgTop, msgBottom, isEmpty)
{
	this.eventProvider=eventProvider;
	this.msgTop=msgTop;
	this.msgBottom=msgBottom;
	this.isEmpty=isEmpty;
}


//para quem repassamos os eventos
CTextLimits.prototype.eventProvider = null;
CTextLimits.prototype.msgTop = null;	//mensagem ao chegar no inicio
CTextLimits.prototype.msgBottom = null;	//mensagem ao chegar no fim
CTextLimits.prototype.isEmpty = false;	//se está vazio

//o nosso status atual
CTextLimits.prototype.isTop = false;	//se está no começo
CTextLimits.prototype.isBottom = false;	//se está no fim

//para setar as nossas mensagens
CTextLimits.prototype.setmsgTop = function(msgTop)
{
	this.msgTop=msgTop;
}
CTextLimits.prototype.setmsgBottom = function(msgBottom)
{
	this.msgBottom=msgBottom;
}


//diz que esta vazio
CTextLimits.prototype.setEmpty = function(isEmpty)
{
	this.isEmpty=isEmpty;
}

//ligar o topo
CTextLimits.prototype.TL_toplimit = function()
{
	this.isTop = true;
	CSpeak.playItem(this.msgTop, this);
}

//ligar o fim
CTextLimits.prototype.TL_bottomlimit = function()
{
	this.isBottom = true;
	CSpeak.playItemEx(this.msgBottom, this, true);
}


//para avancar um item
CTextLimits.prototype.Spkevt_next = function()
{
	//se esta vazio, nao sabemos fazer nada
	if(this.isEmpty)
		return;

	if(this.isTop)
	{
		this.isTop = false;
		//toca o item atual
		this.eventProvider.TLevt_current();
		return;
	}

	if(this.isBottom)
	{
		this.isBottom = false;
		//nao faz nada
		return;
	}
	
	//repassa para o objeto
	this.eventProvider.TLevt_next();
}

//se pode voltar um item para tras
CTextLimits.prototype.Spkevt_prev_cap = function()
{
	//se esta vazio, nao sabemos fazer nada
	if(this.isEmpty)
		return false;
	return true;
}

//para voltar um item para tras
CTextLimits.prototype.Spkevt_prev_go = function()
{
	//se esta vazio, nao sabemos fazer nada
	if(this.isEmpty)
		return;

	if(this.isTop)
	{
		//insiste que ja esta no topo
		this.TL_toplimit();
		return;
	}

	if(this.isBottom)
	{
		this.isBottom = false;
		//fala o ultimo item
		//this.eventProvider.TLevt_current();
		//na verdade, vai para o item anterior
		this.eventProvider.TLevt_prev();
		return;
	}
	
	//repassa para o objeto
	this.eventProvider.TLevt_prev();
}


