/// <reference path="CUtils.js" />

//criar um XML vazio
_CUtils.prototype.CreateXML = function()
{
	return document.implementation.createDocument("", "", null);
}

