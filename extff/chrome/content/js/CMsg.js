//este arquivo é compartilhado com o instalador
//o instalaodr usa menos coisas

//somente funcoes estaticas
function _CMsg()
{
	this.RecarregarMensagens();
}

//recarrega as mensagens
_CMsg.prototype.RecarregarMensagens = function()
{
	this.nossolocale = new CLocale("cmsg.properties");
}


//para acessar as funcoes estaticas
var CMsg = new _CMsg();

//nosso release a versao
_CMsg.prototype.ReleaseTexto = function()
{
	return "RELEASE_NUMBER";
}
_CMsg.prototype.VersaoTexto = function()
{
	return "1.0";	//se alterar, tb precisa alterar na tela de creditos e no install.rdf e nos DlgCreditosSpeak1
}


//data para tela
_CMsg.prototype.DateToScreenString = function(data)
{
	switch(this.nossolocale.PegarTexto("DateToScreenString"))
	{
	case "mmddyy":
		var msg = "";
		msg += (data.getMonth() + 1);
		msg += "/";
		msg += data.getDate();
		msg += "/";
		msg += data.getFullYear();
		return msg;
		
	case "ddmmyy":
	default:
		var msg = "";
		msg += data.getDate();
		msg += "/";
		msg += (data.getMonth() + 1);
		msg += "/";
		msg += data.getFullYear();
		return msg;
	}
}

//arquivo nao existe
_CMsg.prototype.FileNotFound = function()
{
	return this.nossolocale.PegarTexto("FileNotFound");
}

//arquivo nao existe oiu outro erro
//mensagem genérica de erro ao abrir arquivo
_CMsg.prototype.FileNotFoundOrError = function()
{
	return this.nossolocale.PegarTexto("FileNotFoundOrError");
}


//arquivo nao existe
_CMsg.prototype.InvalidXML = function()
{
	return this.nossolocale.PegarTexto("InvalidXML");
}

_CMsg.prototype.file = function()
{
	return this.nossolocale.PegarTexto("file");
}

_CMsg.prototype.origException = function()
{
	return this.nossolocale.PegarTexto("origException");
}

_CMsg.prototype.InvalidOPF_package = function()
{
	return this.nossolocale.PegarTexto("InvalidOPF_package");
}

_CMsg.prototype.InvalidOPF_SMILS = function()
{
	return this.nossolocale.PegarTexto("InvalidOPF_SMILS");
}

_CMsg.prototype.InvalidOPF_NCX = function()
{
	return this.nossolocale.PegarTexto("InvalidOPF_NCX");
}

_CMsg.prototype.InvalidReference = function()
{
	return this.nossolocale.PegarTexto("InvalidReference");
}

_CMsg.prototype.InvalidOPFscripts = function()
{
	return this.nossolocale.PegarTexto("InvalidOPFscripts");
}

_CMsg.prototype.InvalidNCXscripts = function()
{
	return this.nossolocale.PegarTexto("InvalidNCXscripts");
}

_CMsg.prototype.InvalidNCXgeneral = function()
{
	return this.nossolocale.PegarTexto("InvalidNCXgeneral");
}

_CMsg.prototype.InvalidNCX_no_navlabel = function()
{
	return this.nossolocale.PegarTexto("InvalidNCX_no_navlabel");
}

_CMsg.prototype.InvalidNCX_no_content = function()
{
	return this.nossolocale.PegarTexto("InvalidNCX_no_content");
}

_CMsg.prototype.InvalidXMLtag = function()
{
	return this.nossolocale.PegarTexto("InvalidXMLtag");
}

_CMsg.prototype.InvalidClock = function(text)
{
	//itramos < da string, por seguranca, para evitar scripts
	var re = new RegExp("<", "g");
	return this.nossolocale.PegarTexto("InvalidClock") + text.toString().replace(re, "") + ".";
}

_CMsg.prototype.DllNotLoaded = function(text)
{
	return this.nossolocale.PegarTexto("DllNotLoaded") + text.toString();
}

_CMsg.prototype.DllWrongVersion = function(current, expected)
{
	return this.nossolocale.PegarTexto("DllWrongVersion1") + current.toString() + this.nossolocale.PegarTexto("DllWrongVersion2") + expected.toString();
}

_CMsg.prototype.ErrorOnTTS = function()
{
	return this.nossolocale.PegarTexto("ErrorOnTTS");
}

_CMsg.prototype.ErrorOnAudio_general = function(hasTTS)
{
	if(hasTTS)
		return this.nossolocale.PegarTexto("ErrorOnAudio_generalhasTTS");
	else
		return this.nossolocale.PegarTexto("ErrorOnAudio_generalnoTTS");
}

_CMsg.prototype.ErrorOnAudio_nofile = function(hasTTS, path)
{
	//itramos < da string, por seguranca, para evitar scripts
	var re = new RegExp("<", "g");
	path = path.toString().replace(re, "") + ".";
	if(hasTTS)
		return this.nossolocale.PegarTexto("ErrorOnAudio_nofile1") + path + this.nossolocale.PegarTexto("ErrorOnAudio_nofilehastts");
	else
		return this.nossolocale.PegarTexto("ErrorOnAudio_nofile1") + path + ".";
}

_CMsg.prototype.ErrorOnAudio_nocodec = function(hasTTS, path)
{
	var re = new RegExp("<", "g");
	path = path.toString().replace(re, "") + ".";
	if(hasTTS)
		return this.nossolocale.PegarTexto("ErrorOnAudio_nocodec1") + path + this.nossolocale.PegarTexto("ErrorOnAudio_nocodechastts");
	else
		return this.nossolocale.PegarTexto("ErrorOnAudio_nocodec1") + path + ".";
}


_CMsg.prototype.InvalidAudio = function(srcAudio, basehref)
{
	//itramos < da string, por seguranca, para evitar scripts
	var re = new RegExp("<", "g");
	srcAudio = srcAudio.toString().replace(re, "") + ".";
	basehref = basehref.toString().replace(re, "") + ".";
	return this.nossolocale.PegarTexto("InvalidAudio1") + srcAudio + this.nossolocale.PegarTexto("InvalidAudio2") + basehref;
}


_CMsg.prototype.UnknownSeparatorInTime = function(sep)
{
	//itramos < da string, por seguranca, para evitar scripts
	var re = new RegExp("<", "g");
	sep = sep.toString().replace(re, "") + ".";
	return this.nossolocale.PegarTexto("UnknownSeparatorInTime") + sep;
}

_CMsg.prototype.InvalidSMILHref_sintax = function(href)
{
	//itramos < da string, por seguranca, para evitar scripts
	var re = new RegExp("<", "g");
	href = href.toString().replace(re, "") + ".";
	return this.nossolocale.PegarTexto("InvalidSMILHref_sintax") + href;
}

_CMsg.prototype.InvalidTXTHref_sintax = function(href)
{
	//itramos < da string, por seguranca, para evitar scripts
	var re = new RegExp("<", "g");
	href = href.toString().replace(re, "") + ".";
	return this.nossolocale.PegarTexto("InvalidTXTHref_sintax") + href;
}

_CMsg.prototype.InvalidSMILHref_nofile = function(href)
{
	//itramos < da string, por seguranca, para evitar scripts
	var re = new RegExp("<", "g");
	href = href.toString().replace(re, "") + ".";
	return this.nossolocale.PegarTexto("InvalidSMILHref_nofile") + href;
}

_CMsg.prototype.InvalidSMIL_nopar = function()
{
	return this.nossolocale.PegarTexto("InvalidSMIL_nopar");
}

_CMsg.prototype.ErrorLoadingLastMark = function()
{
	return this.nossolocale.PegarTexto("ErrorLoadingLastMark");
}

_CMsg.prototype.NCXafterEnd = function()
{
	return this.nossolocale.PegarTexto("NCXafterEnd");
}

_CMsg.prototype.NCXafterStart = function()
{
	return this.nossolocale.PegarTexto("NCXafterStart");
}

_CMsg.prototype.InvalidTextScripts = function()
{
	return this.nossolocale.PegarTexto("InvalidTextScripts");
}

_CMsg.prototype.VoiceNameFromIDNotFound_Message = function()
{
	return this.nossolocale.PegarTexto("VoiceNameFromIDNotFound_Message");
}

_CMsg.prototype.VoiceNameFromIDNotFound_VoiceName = function()
{
	return this.nossolocale.PegarTexto("VoiceNameFromIDNotFound_VoiceName");
}

_CMsg.prototype.ErrorLoadingHistory = function()
{
	return this.nossolocale.PegarTexto("ErrorLoadingHistory");
}

_CMsg.prototype.ErrorLoadingFindHist = function()
{
	return this.nossolocale.PegarTexto("ErrorLoadingFindHist");
}

_CMsg.prototype.HistoryEmpty = function()
{
	return this.nossolocale.PegarTexto("HistoryEmpty");
}

_CMsg.prototype.MarkersEmpty = function()
{
	return this.nossolocale.PegarTexto("MarkersEmpty");
}

_CMsg.prototype.SearchresEmpty = function()
{
	return this.nossolocale.PegarTexto("SearchresEmpty");
}

_CMsg.prototype.SearchresItemSpeak = function(i)
{
	return this.nossolocale.PegarTexto("SearchresItemSpeak") + i + ". ";
}

_CMsg.prototype.SpellEmpty = function()
{
	return this.nossolocale.PegarTexto("SpellEmpty");
}

_CMsg.prototype.HistoryEnd = function()
{
	return this.nossolocale.PegarTexto("HistoryEnd");
}

_CMsg.prototype.MarkersEnd = function()
{
	return this.nossolocale.PegarTexto("MarkersEnd");
}

_CMsg.prototype.SearchResEnd = function()
{
	return this.nossolocale.PegarTexto("SearchResEnd");
}

_CMsg.prototype.HistoryStart = function()
{
	return this.nossolocale.PegarTexto("HistoryStart");
}

_CMsg.prototype.SpellStart = function()
{
	return this.nossolocale.PegarTexto("SpellStart");
}

_CMsg.prototype.SpellEnd = function()
{
	return this.nossolocale.PegarTexto("SpellEnd");
}

_CMsg.prototype.MarkersStart = function()
{
	return this.nossolocale.PegarTexto("MarkersStart");
}

_CMsg.prototype.SearchResStart = function()
{
	return this.nossolocale.PegarTexto("SearchResStart");
}

_CMsg.prototype.TextEnd = function()
{
	return this.nossolocale.PegarTexto("TextEnd");
}

_CMsg.prototype.TextStart = function()
{
	return this.nossolocale.PegarTexto("TextStart");
}

_CMsg.prototype.ErrorLoadingOPFPrefs = function()
{
	return this.nossolocale.PegarTexto("ErrorLoadingOPFPrefs");
}

_CMsg.prototype.ErrorLoadingMarks = function()
{
	return this.nossolocale.PegarTexto("ErrorLoadingMarks");
}

_CMsg.prototype.ErrorSavingMarks = function()
{
	return this.nossolocale.PegarTexto("ErrorSavingMarks");
}

_CMsg.prototype.ErrorSavingOPFPrefs = function()
{
	return this.nossolocale.PegarTexto("ErrorSavingOPFPrefs");
}

_CMsg.prototype.NoSMILID = function()
{
	return this.nossolocale.PegarTexto("NoSMILID");
}

_CMsg.prototype.NoteStart = function()
{
	return this.nossolocale.PegarTexto("NoteStart");
}

_CMsg.prototype.NoteEnd = function()
{
	return this.nossolocale.PegarTexto("NoteEnd");
}

//arquivos dentro do skin
_CMsg.prototype.BeepMarkFile = function()
{
	return "mark.mp3";
}

_CMsg.prototype.BeepNoteFile = function()
{
	return "note.mp3";
}

_CMsg.prototype.FieldDeleted = function()
{
	return this.nossolocale.PegarTexto("FieldDeleted");
}

_CMsg.prototype.FieldStart = function()
{
	return this.nossolocale.PegarTexto("FieldStart");
}

_CMsg.prototype.FieldEnd = function()
{
	return this.nossolocale.PegarTexto("FieldEnd");
}

_CMsg.prototype.EscToContinue = function()
{
	//deve ter um espaco no começo
	return this.nossolocale.PegarTexto("EscToContinue");
}

_CMsg.prototype.SearchresNoSmilref = function()
{
	return this.nossolocale.PegarTexto("SearchresNoSmilref");
}

_CMsg.prototype.MyBooksFolder = function()
{
	return this.nossolocale.PegarTexto("MyBooksFolder");
}

_CMsg.prototype.MyExportNotesFolder = function()
{
	return this.nossolocale.PegarTexto("MyExportNotesFolder");
}

_CMsg.prototype.NoTTSInstalled = function()
{
	return this.nossolocale.PegarTexto("NoTTSInstalled");
}

_CMsg.prototype.NoAudioInstalled = function()
{
	return this.nossolocale.PegarTexto("NoAudioInstalled");
}

_CMsg.prototype.ApplicationWillClose = function()
{
	return this.nossolocale.PegarTexto("ApplicationWillClose");
}

_CMsg.prototype.ApplicationError = function()
{
	return this.nossolocale.PegarTexto("ApplicationError");
}

_CMsg.prototype.ApplicationContinue = function()
{
	return this.nossolocale.PegarTexto("ApplicationContinue");
}

_CMsg.prototype.ApplicationEnd = function()
{
	return this.nossolocale.PegarTexto("ApplicationEnd");
}

_CMsg.prototype.UseTTSOnSession = function()
{
	return this.nossolocale.PegarTexto("UseTTSOnSession");
}

_CMsg.prototype.ChooseFileToOpne = function()
{
	return this.nossolocale.PegarTexto("ChooseFileToOpne");
}

_CMsg.prototype.OPFFIles = function()
{
	return this.nossolocale.PegarTexto("OPFFIles");
}

_CMsg.prototype.ErrorPPFNotFound = function()
{
	return this.nossolocale.PegarTexto("ErrorPPFNotFound");
}

_CMsg.prototype.ErrorPINNotFound = function()
{
	return this.nossolocale.PegarTexto("ErrorPINNotFound");
}

_CMsg.prototype.DecryptError = function()
{
	return this.nossolocale.PegarTexto("DecryptError");
}

_CMsg.prototype.ExerciseRefStart = function()
{
	return this.nossolocale.PegarTexto("ExerciseRefStart");
}
_CMsg.prototype.ExerciseRefEnd = function()
{
	return this.nossolocale.PegarTexto("ExerciseRefEnd");
}
_CMsg.prototype.ExerciseBodyStart = function()
{
	return this.nossolocale.PegarTexto("ExerciseBodyStart");
}
_CMsg.prototype.ExerciseBodyEnd = function()
{
	return this.nossolocale.PegarTexto("ExerciseBodyEnd");
}
