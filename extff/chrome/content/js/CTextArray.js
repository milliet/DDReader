/// <reference path="CUtils.js" />
/// <reference path="CUtils_ff.js" />
/// <reference path="CExcept.js" />

/*
gerenciamento de um array de trecho de texto
*/

function CTextArray()
{
	this.CTIarray = new Array();
}

//CTextItem array
CTextArray.prototype.CTIarray = new Array();

//uma versao texto deste negocio, sem nenhum separador (só um espaço)
CTextArray.prototype.toString = function()
{
	var ret = "";
	for(var i=0; i<this.CTIarray.length; i++)
	{
		if(ret != "")
			ret += " ";
		ret += this.CTIarray[i].toString();
	}
	
	return ret;
}

//uma versao texto deste negocio, separado por BR
CTextArray.prototype.toLines = function()
{
	var ret = "";
	for(var i=0; i<this.CTIarray.length; i++)
	{
		if(ret != "")
			ret += "<br />";
		ret += this.CTIarray[i].toString();
	}
	
	return ret;
}

//uma versao texto deste negocio, separado por BR
CTextArray.prototype.toCommas = function()
{
	var ret = "";
	for(var i=0; i<this.CTIarray.length; i++)
	{
		if(ret != "")
			ret += ", ";
		ret += this.CTIarray[i].toString();
	}
	
	return ret;
}

