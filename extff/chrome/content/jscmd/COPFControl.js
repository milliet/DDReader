/// <reference path="CUtils.js" />
/// <reference path="CUtils_ff.js" />
/// <reference path="CSMILFile.js" />
/// <reference path="CSMILArray.js" />
/// <reference path="CNCX.js" />
/// <reference path="CTextArray.js" />
/// <reference path="CTextItem.js" />
/// <reference path="COPFFile.js" />

function COPFControl(path, incluirNoHistorico)
{
	var opffile = new COPFFile(path, this, incluirNoHistorico, false, false, null, null);
	this.opffile = opffile;
	if(opffile.errorDuringLoad)
		return;

    this._notereference = this.opffile.ncx.GetSkipID("NOTE_REFERENCE");
}


//o COPFFile
COPFControl.prototype.opffile = null;

//se ja demos erro de texto
COPFControl.prototype.warnIDerror = false;

//o ID do custotest do note_reference
COPFControl.prototype._notereference = "";


//deve implementar NCXChangedItem e NCXPageChangedItem e TextfileChanged e getCurrentTextTTS
COPFControl.prototype.NCXChangedItem = function(ncx, id)
{
	CmdNcx.NCXChangedItem(ncx, id);
}
COPFControl.prototype.NCXPageChangedItem = function(ncx)
{
	CmdMain.NCXPageChangedItem(ncx);
}

//eventos do texto
COPFControl.prototype.TextfileChanged = function(textfilearray)
{
	//atualiza o texto
	CmdRead.TextfileChanged(textfilearray);
	
	//atualiza o indicador de que tem marcador
	CmdMain.checkMarkerIndicator();
	CmdMain.updateSkipNoteStatus();
}

//retornar o texto para TTS do no de texto atual
COPFControl.prototype.getCurrentTextTTS = function()
{
	return CmdRead.getCurrentTextTTS();
}

//eventos do SMIL, processamos
COPFControl.prototype.SMILSkippedItem = function(smilarray, SMILrel_href, id, goingUp, customTest)
{
	//vai bipar quando pular uma referencia de nota de rodape
	if(this._notereference == customTest)
		CSpeak.CommandEchoGo_audio(CMsg.BeepNoteFile());
}

