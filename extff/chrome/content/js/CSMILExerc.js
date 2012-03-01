/// <reference path="CUtils.js" />
/// <reference path="CUtils_ff.js" />
/// <reference path="CSMILFile.js" />

/*
gerenciamento de um arquivo smilexer.xml

exemplo do xml:

<?xml version="1.0" encoding="utf-8"?>
<smilexer>
<control id ="exerc_2099_1_txt1" type="text" smilref="speechgen0002.smil#tcp4">
	<labelfor smilref="speechgen0002.smil#tcp3" />
	<labelfor smilref="speechgen0002.smil#tcp4" />
</control>
</smilexer>
	
*/	

function CSMILExerc(pathOPF, SMILExercEventListener)
{
	//carrega o arquivo
	var absHref = CUtils.ResolveURL("smilexer.xml", pathOPF);
    this._SMILExercxml = CUtils.LoadXML(absHref);

	//guardamos todos os CONTROL e os LABELFOR
	this._array_control = this._SMILExercxml.getElementsByTagName("control");
	this._array_labelfor = this._SMILExercxml.getElementsByTagName("labelfor");
	
	//quem recebe os nossos eventos
	this.SMILExercEventListener = SMILExercEventListener;
}

//o xml
CSMILExerc.prototype._SMILExercxml = null;

//o xml separado por tags
CSMILExerc.prototype._array_control = null;
CSMILExerc.prototype._array_labelfor = null;

//quem recebe os nossos eventos
CSMILExerc.prototype.SMILExercEventListener = null;

//alguem quer saber a lista de contorles que gerenciamos
CSMILExerc.prototype.get_array_control = function()
{
	return this._array_control;
}

//indicamos se devemos pular este smilref durante a leitura normal do texto (sem o controle de um exercicio)
CSMILExerc.prototype.skipSmilref = function(smilref)
{
	for(var i = 0; i < this._array_labelfor.length; i++)
	{
		//vamos ver se esse cara está la lista de labelfor
		var noteitem = this._array_labelfor.item(i);
		if(noteitem.attributes)
		if(noteitem.attributes.getNamedItem("smilref"))
		if(noteitem.attributes.getNamedItem("smilref").value == smilref)
			return true;
	}

	//nao achamos na lista
	return false;
}


//indicamos se estamos em um controle onde o usuário ira interagir
CSMILExerc.prototype.CheckInputOnSelection = function(smilref)
{
	for(var i = 0; i < this._array_control.length; i++)
	{
		//vamos ver se esse cara está la lista de labelfor
		var noteitem = this._array_control.item(i);
		if(noteitem.attributes)
		if(noteitem.attributes.getNamedItem("smilref"))
		if(noteitem.attributes.getNamedItem("smilref").value == smilref)
		{
			//opa, achamos um controle!
			if(this.SMILExercEventListener != null)
				this.SMILExercEventListener.SMILExercEvent_HitControl( noteitem );
			return true;
		}
	}

	//nao achamos na lista
	return false;
}
