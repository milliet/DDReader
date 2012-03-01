/// <reference path="CUtils.js" />
/// <reference path="CUtils_ff.js" />
/// <reference path="CSMILFile.js" />

/*
gerenciamento de um array de CTextfileItem
*/

function CTextfileArray(TXTeventListener, passwordBinHex)
{
	this._TXTeventListener = TXTeventListener;
	this._TXTarray = new Array();
	this._passwordBinHex = passwordBinHex;
}

//o array
CTextfileArray.prototype._TXTarray = new Array();
//o item que está atualmente selecionado
CTextfileArray.prototype._TXTcurrItem = null;
//o href do item que está atualmente selecionado
CTextfileArray.prototype._TXTcurrHref = "";
//a senha do arquivo criptografado
CTextfileArray.prototype._passwordBinHex = "";


/*
quem recebe os eventos do TXT
tem que implementar:
TextfileChanged(CTextfileArray textfilearray) - navegando pelo texto, está lendo um novo trecho
	(falando ou porque alguem pediu para mover)
*/
CTextfileArray.prototype._TXTeventListener = null;	


//dispara o evento de elemento alterado
CTextfileArray.prototype._fireChangedItem = function()
{
	//manda o evento
	if(this._TXTeventListener)
		this._TXTeventListener.TextfileChanged(this);
}
			

//manda ir para um determinado lugar, mas antes verifica se já está lá
CTextfileArray.prototype.assertHref = function(relativeHref, referencePath)
{
	if(	this._TXTcurrHref == relativeHref)
		return;
	
	this.gotoHref(relativeHref, referencePath);
}

//manda ir para um determinado lugar
CTextfileArray.prototype.gotoHref = function(relativeHref, referencePath)
{
	//se nao tiver ponto para onde ir, diz que nao tem texto
	if(relativeHref == null)
	{
		//vamos criar um cara vazio
		this._TXTcurrItem = new CTextfileItem(null, null, null);
		//nao salvamos no array
		//this._TXTarray.push(this._TXTcurrItem);

		//marca a posicao atual
		this._TXTcurrHref = relativeHref;
		//manda o evento
		this._fireChangedItem();
		
		return;
	}

	//vamos dividir com a cerquinha
	var list = relativeHref.toString().split("#");
	if(list.length != 2)
		throw new CExcept(CMsg.InvalidTXTHref_sintax(relativeHref), null, null);
		
	//vamos trabalhar com o caminho absoluto
	var href = CUtils.ResolveURL(list[0], referencePath);
	var anchor = list[1];

	//vamos procurar o arquivo
	for(var i=0; i < this._TXTarray.length; i++)
	{
		//fazer no futuro: usar rotina que compara caminhos absolutos, tirando os .. e . da URL
		if(this._TXTarray[i].TXTabs_href == href)
		{
			//achamos
			this._TXTcurrHref = relativeHref;
			this._TXTcurrItem = this._TXTarray[i];

			//manda o evento
			this._fireChangedItem();
			
			//acabamos			
			return;
		}
	}
	
	//nao achamos, vamos carregar
	this._TXTcurrItem = new CTextfileItem(href, list[0], this._passwordBinHex);
	this._TXTarray.push(this._TXTcurrItem);

	//marca a posicao atual
	this._TXTcurrHref = relativeHref;
	
	//manda o evento
	this._fireChangedItem();
}


//pega o href atualmente selecionado
CTextfileArray.prototype.getCurrentHref = function()
{
	return this._TXTcurrHref;
}

//pega a ancora atualmente selecionada
CTextfileArray.prototype.getCurrentAnchor = function()
{
	//quando usou o gotoHref, garantiu que tem #
	return this._TXTcurrHref.toString().split("#")[1];
}

//pega o CTextfileItem atualmente selecionado
CTextfileArray.prototype.getCurrentTextfile = function()
{
	return this._TXTcurrItem;
}

