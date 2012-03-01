//somente funcoes estaticas
//NOTA: quando lemos do arquivo de propriedades, a string é lida com trim. Espaços adicionais temos que adiconar com \u0020
function _CMsgIface()
{
	this.RecarregarMensagens();
}

//recarrega as mensagens
_CMsgIface.prototype.RecarregarMensagens = function()
{
	this.nossolocale = new CLocale("cmsgiface.properties");
}

//para acessar as funcoes estaticas
var CMsgIface = new _CMsgIface();

//titulo
_CMsgIface.prototype.BookTitle = function()
{
	return this.nossolocale.PegarTexto("BookTitle");
}

//nao informado
_CMsgIface.prototype.NotAvailable = function()
{
	return this.nossolocale.PegarTexto("NotAvailable");
}

_CMsgIface.prototype.BookAuthor = function()
{
	return this.nossolocale.PegarTexto("BookAuthor");
}

_CMsgIface.prototype.BookPublisher = function()
{
	return this.nossolocale.PegarTexto("BookPublisher");
}

_CMsgIface.prototype.NoHistory = function()
{
	return this.nossolocale.PegarTexto("NoHistory");
}

_CMsgIface.prototype.HistoryError = function()
{
	return this.nossolocale.PegarTexto("HistoryError");
}

_CMsgIface.prototype.MarkerError = function()
{
	return this.nossolocale.PegarTexto("MarkerError");
}

_CMsgIface.prototype.SearchResError = function()
{
	return this.nossolocale.PegarTexto("SearchResError");
}

_CMsgIface.prototype.WelcomeMessage = function()
{
	return this.nossolocale.PegarTexto("WelcomeMessage");
}
_CMsgIface.prototype.WelcomeTutorial = function()
{
	return this.nossolocale.PegarTexto("WelcomeTutorial");
}

//aparece na barra de mensagens
_CMsgIface.prototype.NoBookOpen = function()
{
	return this.nossolocale.PegarTexto("NoBookOpen");
}

_CMsgIface.prototype.TextError = function()
{
	return this.nossolocale.PegarTexto("TextError");
}

_CMsgIface.prototype.NoMarkers = function()
{
	return this.nossolocale.PegarTexto("NoMarkers");
}

//aparece na barra de mensagens
_CMsgIface.prototype.NoSearchRes = function()
{
	return this.nossolocale.PegarTexto("NoSearchRes");
}

//aparece na barra de mensagens
_CMsgIface.prototype.NoSearchNext = function()
{
	return this.nossolocale.PegarTexto("NoSearchNext");
}

//aparece na barra de mensagens
_CMsgIface.prototype.NoSearchPrev = function()
{
	return this.nossolocale.PegarTexto("NoSearchPrev");
}

_CMsgIface.prototype.SearchNext = function()
{
	return this.nossolocale.PegarTexto("SearchNext");
}

_CMsgIface.prototype.SearchPrev = function()
{
	return this.nossolocale.PegarTexto("SearchPrev");
}

//aparece na barra de mensagens
_CMsgIface.prototype.BookHasNoPages = function()
{
	return this.nossolocale.PegarTexto("BookHasNoPages");
}

//aparece na barra de mensagens
_CMsgIface.prototype.BookLastPage = function()
{
	return this.nossolocale.PegarTexto("BookLastPage");
}

//aparece na barra de mensagens
_CMsgIface.prototype.BookFirstPage = function()
{
	return this.nossolocale.PegarTexto("BookFirstPage");
}

_CMsgIface.prototype.PageNotFound = function()
{
	return this.nossolocale.PegarTexto("PageNotFound");
}

//eco de comandos
_CMsgIface.prototype.EchoHist = function()
{
	return this.nossolocale.PegarTexto("EchoHist");
}

_CMsgIface.prototype.EchoOpen = function()
{
	return this.nossolocale.PegarTexto("EchoOpen");
}

_CMsgIface.prototype.EchoData = function()
{
	return this.nossolocale.PegarTexto("EchoData");
}

_CMsgIface.prototype.EchoNcx = function()
{
	return this.nossolocale.PegarTexto("EchoNcx");
}

_CMsgIface.prototype.EchoBookStart = function()
{
	return this.nossolocale.PegarTexto("EchoBookStart");
}

_CMsgIface.prototype.EchoTutorialOff = function()
{
	return this.nossolocale.PegarTexto("EchoTutorialOff");
}

_CMsgIface.prototype.EchoBookRead = function()
{
	return this.nossolocale.PegarTexto("EchoBookRead");
}

_CMsgIface.prototype.EchoMarks = function()
{
	return this.nossolocale.PegarTexto("EchoMarks");
}

_CMsgIface.prototype.EchoMarkNext = function()
{
	return this.nossolocale.PegarTexto("EchoMarkNext");
}

_CMsgIface.prototype.EchoMarkPrev = function()
{
	return this.nossolocale.PegarTexto("EchoMarkPrev");
}

_CMsgIface.prototype.EchoSearchRes = function()
{
	return this.nossolocale.PegarTexto("EchoSearchRes");
}

_CMsgIface.prototype.EchoMarkNewDlg = function()
{
	return this.nossolocale.PegarTexto("EchoMarkNewDlg");
}

_CMsgIface.prototype.EchoMarkEditDlg = function()
{
	return this.nossolocale.PegarTexto("EchoMarkEditDlg");
}

_CMsgIface.prototype.EchoMarkNewDlgOff = function()
{
	return this.nossolocale.PegarTexto("EchoMarkNewDlgOff");
}

_CMsgIface.prototype.EchoMarkEditDlgOff = function()
{
	return this.nossolocale.PegarTexto("EchoMarkEditDlgOff");
}

_CMsgIface.prototype.EchoPrefGlobal = function()
{
	return this.nossolocale.PegarTexto("EchoPrefGlobal");
}

_CMsgIface.prototype.EchoPrefGlobalOff = function()
{
	return this.nossolocale.PegarTexto("EchoPrefGlobalOff");
}

_CMsgIface.prototype.EchoPrefBook = function()
{
	return this.nossolocale.PegarTexto("EchoPrefBook");
}

_CMsgIface.prototype.EchoPrefBookOff = function()
{
	return this.nossolocale.PegarTexto("EchoPrefBookOff");
}

_CMsgIface.prototype.EchoNoteON = function()
{
	return this.nossolocale.PegarTexto("EchoNoteON");
}

_CMsgIface.prototype.EchoNoteOff = function()
{
	return this.nossolocale.PegarTexto("EchoNoteOff");
}

_CMsgIface.prototype.EchoMarkOn = function()
{
	return this.nossolocale.PegarTexto("EchoMarkOn");
}

_CMsgIface.prototype.EchoMarkOff = function()
{
	return this.nossolocale.PegarTexto("EchoMarkOff");
}

_CMsgIface.prototype.EchoGotopage = function()
{
	return this.nossolocale.PegarTexto("EchoGotopage");
}

_CMsgIface.prototype.EchoGotopageOff = function()
{
	return this.nossolocale.PegarTexto("EchoGotopageOff");
}

_CMsgIface.prototype.EchoGotopageGoing = function()
{
	return this.nossolocale.PegarTexto("EchoGotopageGoing");
}

_CMsgIface.prototype.EchoMP3On = function()
{
	return this.nossolocale.PegarTexto("EchoMP3On");
}

_CMsgIface.prototype.EchoMP3Off = function()
{
	return this.nossolocale.PegarTexto("EchoMP3Off");
}

_CMsgIface.prototype.EchoPageON = function()
{
	return this.nossolocale.PegarTexto("EchoPageON");
}

_CMsgIface.prototype.EchoPageOff = function()
{
	return this.nossolocale.PegarTexto("EchoPageOff");
}

_CMsgIface.prototype.EchoNextVoice = function(voice)
{
	return this.nossolocale.PegarTexto("EchoNextVoice") + voice;
}

_CMsgIface.prototype.EchoFontsize = function(size)
{
	return this.nossolocale.PegarTexto("EchoFontsize") + size;
}

_CMsgIface.prototype.KeyUnknown = function()
{
	return this.nossolocale.PegarTexto("KeyUnknown");
}

_CMsgIface.prototype.KeyAlt = function()
{
	return this.nossolocale.PegarTexto("KeyAlt");
}

_CMsgIface.prototype.KeyControl = function()
{
	return this.nossolocale.PegarTexto("KeyControl");
}

_CMsgIface.prototype.KeyNotMapped = function(key)
{
	return this.nossolocale.PegarTexto("KeyNotMapped") + key;
}

_CMsgIface.prototype.EchoLevel = function(level)
{
	return this.nossolocale.PegarTexto("EchoLevel") + level;
}

_CMsgIface.prototype.EchoNavigateAutoOn = function()
{
	return this.nossolocale.PegarTexto("EchoNavigateAutoOn");
}

_CMsgIface.prototype.EchoNavigateAutoOff = function()
{
	return this.nossolocale.PegarTexto("EchoNavigateAutoOff");
}

_CMsgIface.prototype.EchoNavListAutoOn = function()
{
	return this.nossolocale.PegarTexto("EchoNavListAutoOn");
}

_CMsgIface.prototype.EchoNavListAutoOff = function()
{
	return this.nossolocale.PegarTexto("EchoNavListAutoOff");
}

_CMsgIface.prototype.EchoSpeedMax = function()
{
	return this.nossolocale.PegarTexto("EchoSpeedMax");
}

_CMsgIface.prototype.EchoSpeedInc = function(speed, audio)
{
	var ret = this.nossolocale.PegarTexto("EchoSpeedInc") + speed + ".";
	if(audio)
		ret += this.nossolocale.PegarTexto("EchoSpeedIncAudio");
	return ret;
}

_CMsgIface.prototype.EchoSpeedMin = function()
{
	return this.nossolocale.PegarTexto("EchoSpeedMin");
}

_CMsgIface.prototype.EchoSpeedDec = function(speed, audio)
{
	var ret = this.nossolocale.PegarTexto("EchoSpeedDec") + speed + ".";
	if(audio)
		ret += this.nossolocale.PegarTexto("EchoSpeedDecAudio");
	return ret;
}

_CMsgIface.prototype.EchoVolTTSMax = function()
{
	return this.nossolocale.PegarTexto("EchoVolTTSMax");
}

_CMsgIface.prototype.EchoVolTTSInc = function(speed)
{
	return this.nossolocale.PegarTexto("EchoVolTTSInc") + (speed * 10).toFixed(0);
}

_CMsgIface.prototype.EchoVolTTSMin = function()
{
	return this.nossolocale.PegarTexto("EchoVolTTSMin");
}

_CMsgIface.prototype.EchoVolTTSDec = function(speed)
{
	return this.nossolocale.PegarTexto("EchoVolTTSDec") + (speed * 10).toFixed(0);
}

_CMsgIface.prototype.EchoVolAudioMax = function()
{
	return this.nossolocale.PegarTexto("EchoVolAudioMax");
}

_CMsgIface.prototype.EchoVolAudioInc = function(speed)
{
	return this.nossolocale.PegarTexto("EchoVolAudioInc") + (speed * 10).toFixed(0);
}

_CMsgIface.prototype.EchoVolAudioMin = function()
{
	return this.nossolocale.PegarTexto("EchoVolAudioMin");
}

_CMsgIface.prototype.EchoVolAudioDec = function(speed)
{
	return this.nossolocale.PegarTexto("EchoVolAudioDec") + (speed * 10).toFixed(0);
}

_CMsgIface.prototype.EchoNoSpell = function()
{
	return this.nossolocale.PegarTexto("EchoNoSpell");
}

_CMsgIface.prototype.EchoSpell = function()
{
	return this.nossolocale.PegarTexto("EchoSpell");
}

_CMsgIface.prototype.EchoSpellOff = function()
{
	return this.nossolocale.PegarTexto("EchoSpellOff");
}

//mensagem genérica ao carregar uma caixa de diálogo
_CMsgIface.prototype.DialogLoad = function()
{
	return this.nossolocale.PegarTexto("DialogLoad");
}

_CMsgIface.prototype.DialogSpellLoad = function()
{
	return this.nossolocale.PegarTexto("DialogSpellLoad");
}

//sufixo para checkbox em caixas de diálogo
_CMsgIface.prototype.Dialog_cbextra = function()
{
	return this.nossolocale.PegarTexto("Dialog_cbextra");
}

_CMsgIface.prototype.Dialog_cbonmale = function()
{
	return this.nossolocale.PegarTexto("Dialog_cbonmale");
}

_CMsgIface.prototype.Dialog_cbonfemale = function()
{
	return this.nossolocale.PegarTexto("Dialog_cbonfemale");
}

_CMsgIface.prototype.Dialog_cboffmale = function()
{
	return this.nossolocale.PegarTexto("Dialog_cboffmale");
}

_CMsgIface.prototype.Dialog_cbofffemale = function()
{
	return this.nossolocale.PegarTexto("Dialog_cbofffemale");
}

_CMsgIface.prototype.Dialog_butok = function()
{
	return this.nossolocale.PegarTexto("Dialog_butok");
}

_CMsgIface.prototype.Dialog_butcancel = function()
{
	return this.nossolocale.PegarTexto("Dialog_butcancel");
}

_CMsgIface.prototype.Dialog_mlextra = function()
{
	return this.nossolocale.PegarTexto("Dialog_mlextra");
}

_CMsgIface.prototype.DlgPrefsBook_ListAllVOices_NoLang = function()
{
	return this.nossolocale.PegarTexto("DlgPrefsBook_ListAllVOices_NoLang");
}

_CMsgIface.prototype.EchoSearchDlg = function()
{
	return this.nossolocale.PegarTexto("EchoSearchDlg");
}

_CMsgIface.prototype.EchoOpenInternetDlg = function()
{
	return this.nossolocale.PegarTexto("EchoOpenInternetDlg");
}
_CMsgIface.prototype.EchoSearchDlgOff = function()
{
	return this.nossolocale.PegarTexto("EchoSearchDlgOff");
}

_CMsgIface.prototype.EchoSearchDlgNoWord = function()
{
	return this.nossolocale.PegarTexto("EchoSearchDlgNoWord");
}

//aparece na barra de mensagens
_CMsgIface.prototype.MarkersEchoEnd = function()
{
	return this.nossolocale.PegarTexto("MarkersEchoEnd");
}

//aparece na barra de mensagens
_CMsgIface.prototype.MarkersEchoStart = function()
{
	return this.nossolocale.PegarTexto("MarkersEchoStart");
}

//aparece na barra de mensagens
_CMsgIface.prototype.NoMarkers = function()
{
	return this.nossolocale.PegarTexto("NoMarkers");
}

_CMsgIface.prototype.NoHelpForMode = function()
{
	return this.nossolocale.PegarTexto("NoHelpForMode");
}
_CMsgIface.prototype.NoOPFinCD = function()
{
	return this.nossolocale.PegarTexto("NoOPFinCD");
}

_CMsgIface.prototype.notAvailable = function()
{
	return this.nossolocale.PegarTexto("notAvailable");
}

_CMsgIface.prototype.LastReading = function()
{
	return this.nossolocale.PegarTexto("LastReading");
}

_CMsgIface.prototype.ReadingPointStoredSpeak = function()
{
	return this.nossolocale.PegarTexto("ReadingPointStoredSpeak");
}

_CMsgIface.prototype.ResultsFor = function(len, limite, searchWords)
{
	//primeiros 50 das 120 entradas para
	if(len > limite)
	{
		return " " + this.nossolocale.PegarTexto("ResultsFirstFor1") + " " + limite + 
			" " + this.nossolocale.PegarTexto("ResultsFirstFor2") + " " + 
			len + this.nossolocale.PegarTexto("ResultsFor") + searchWords;
	}
		
	return " " + len + this.nossolocale.PegarTexto("ResultsFor") + searchWords;
}

_CMsgIface.prototype.SearchResDict = function(searchWords)
{
	return this.nossolocale.PegarTexto("SearchResDict") + searchWords;
}

_CMsgIface.prototype.mainNoVoiceInLanguage = function()
{
	return this.nossolocale.PegarTexto("mainNoVoiceInLanguage");
}

_CMsgIface.prototype.mainSapi4Unsupported = function()
{
	return this.nossolocale.PegarTexto("mainSapi4Unsupported");
}


//avisos quando volta para o lida-d de outro aplicativo
_CMsgIface.prototype.ReturnedGeneral = function()
{
	return this.nossolocale.PegarTexto("ReturnedGeneral");
}
_CMsgIface.prototype.ReturnedCmdHist = function()
{
	return this.nossolocale.PegarTexto("ReturnedCmdHist");
}
_CMsgIface.prototype.ReturnedCmdInfo = function()
{
	return this.nossolocale.PegarTexto("ReturnedCmdInfo");
}
_CMsgIface.prototype.ReturnedCmdMarks = function()
{
	return this.nossolocale.PegarTexto("ReturnedCmdMarks");
}
_CMsgIface.prototype.ReturnedCmdNcx = function()
{
	return this.nossolocale.PegarTexto("ReturnedCmdNcx");
}
_CMsgIface.prototype.ReturnedCmdRead = function()
{
	return this.nossolocale.PegarTexto("ReturnedCmdRead");
}
_CMsgIface.prototype.ReturnedCmdSearchRes = function()
{
	return this.nossolocale.PegarTexto("ReturnedCmdSearchRes");
}
_CMsgIface.prototype.ReturnedCmdSplash = function()
{
	return this.nossolocale.PegarTexto("ReturnedCmdSplash")
}

_CMsgIface.prototype.LimitadoA1 = function()
{
	return this.nossolocale.PegarTexto("LimitadoA1");
}

_CMsgIface.prototype.LimitadoA2 = function()
{
	return this.nossolocale.PegarTexto("LimitadoA2");
}


//caixa de dialogo busca.xul
_CMsgIface.prototype.DlgBuscaHelp = function()
{
	return this.nossolocale.PegarTexto("DlgBuscaHelp");
}
_CMsgIface.prototype.DlgBuscaExtendedEdit = function()
{
	return this.nossolocale.PegarTexto("DlgBuscaExtendedEdit");
}
_CMsgIface.prototype.DlgBuscaEnterExecuta = function()
{
	return this.nossolocale.PegarTexto("DlgBuscaEnterExecuta");
}
_CMsgIface.prototype.DlgBuscaSemRecente = function()
{
	return this.nossolocale.PegarTexto("DlgBuscaSemRecente");
}
_CMsgIface.prototype.DlgBuscaErrorHist = function()
{
	return this.nossolocale.PegarTexto("DlgBuscaErrorHist");
}
_CMsgIface.prototype.DlgBuscaSearchItem1 = function()
{
	return this.nossolocale.PegarTexto("DlgBuscaSearchItem1");
}
_CMsgIface.prototype.DlgBuscaSearchItem2 = function()
{
	return this.nossolocale.PegarTexto("DlgBuscaSearchItem2");
}
_CMsgIface.prototype.DlgBuscaHistEnd = function()
{
	return this.nossolocale.PegarTexto("DlgBuscaHistEnd");
}


//caixa de dialogo creditos.xul
_CMsgIface.prototype.DlgCreditosSpeak1 = function()
{
	return this.nossolocale.PegarTexto("DlgCreditosSpeak1");
}
_CMsgIface.prototype.DlgCreditosSpeak2 = function()
{
	return this.nossolocale.PegarTexto("DlgCreditosSpeak2");
}


//caixa de dialogo exit.xul
_CMsgIface.prototype.DlgExitSpeak = function()
{
	return this.nossolocale.PegarTexto("DlgExitSpeak");
}

//caixa de dialogo irpag.xul
_CMsgIface.prototype.DlgIrPagOneSection = function()
{
	return this.nossolocale.PegarTexto("DlgIrPagOneSection");
}
_CMsgIface.prototype.DlgIrPagNumberOnly = function()
{
	return this.nossolocale.PegarTexto("DlgIrPagNumberOnly");
}
_CMsgIface.prototype.DlgIrPagNumberGreaterZero = function()
{
	return this.nossolocale.PegarTexto("DlgIrPagNumberGreaterZero");
}
_CMsgIface.prototype.DlgIrPagPreface = function()
{
	return this.nossolocale.PegarTexto("DlgIrPagPreface");
}
_CMsgIface.prototype.DlgIrPagApendix = function()
{
	return this.nossolocale.PegarTexto("DlgIrPagApendix");
}
_CMsgIface.prototype.DlgIrPagInvalidNumber = function()
{
	return this.nossolocale.PegarTexto("DlgIrPagInvalidNumber");
}
_CMsgIface.prototype.DlgIrPagFrom = function()
{
	return this.nossolocale.PegarTexto("DlgIrPagFrom");
}
_CMsgIface.prototype.DlgIrPagTo = function()
{
	return this.nossolocale.PegarTexto("DlgIrPagTo");
}
_CMsgIface.prototype.DlgIrPagTypePage = function()
{
	return this.nossolocale.PegarTexto("DlgIrPagTypePage");
}
_CMsgIface.prototype.DlgIrPagInvalidKeyNum = function()
{
	return this.nossolocale.PegarTexto("DlgIrPagInvalidKeyNum");
}
_CMsgIface.prototype.DlgIrPagInvKey = function()
{
	return this.nossolocale.PegarTexto("DlgIrPagInvKey");
}
_CMsgIface.prototype.DlgIrPagKeyNumberOnly = function()
{
	return this.nossolocale.PegarTexto("DlgIrPagKeyNumberOnly");
}

//caixa de dialogo marker.xul
_CMsgIface.prototype.DlgMarkerTitleMark = function()
{
	return this.nossolocale.PegarTexto("DlgMarkerTitleMark");
}
_CMsgIface.prototype.DlgMarkerAHelp = function()
{
	return this.nossolocale.PegarTexto("DlgMarkerAHelp");
}
_CMsgIface.prototype.DlgMarkerMarkAnot = function()
{
	return this.nossolocale.PegarTexto("DlgMarkerMarkAnot");
}
_CMsgIface.prototype.DlgMarkerUseTab = function()
{
	return this.nossolocale.PegarTexto("DlgMarkerUseTab");
}
_CMsgIface.prototype.DlgMarkerEdit = function()
{
	return this.nossolocale.PegarTexto("DlgMarkerEdit");
}
_CMsgIface.prototype.DlgMarkerNew = function()
{
	return this.nossolocale.PegarTexto("DlgMarkerNew");
}
_CMsgIface.prototype.DlgMarkerRemove = function()
{
	return this.nossolocale.PegarTexto("DlgMarkerRemove");
}

//caixa de dialogo OpenSearch.xul
_CMsgIface.prototype.DlgOpenSearchStart = function()
{
	return this.nossolocale.PegarTexto("DlgOpenSearchStart");
}
_CMsgIface.prototype.DlgOpenSearchComputer = function()
{
	return this.nossolocale.PegarTexto("DlgOpenSearchComputer");
}
_CMsgIface.prototype.DlgOpenSearchSearch = function()
{
	return this.nossolocale.PegarTexto("DlgOpenSearchSearch");
}
_CMsgIface.prototype.DlgOpenSearchNoBook = function()
{
	return this.nossolocale.PegarTexto("DlgOpenSearchNoBook");
}
_CMsgIface.prototype.DlgOpenSearchListEnd = function()
{
	return this.nossolocale.PegarTexto("DlgOpenSearchListEnd");
}
_CMsgIface.prototype.DlgOpenSearchListStart = function()
{
	return this.nossolocale.PegarTexto("DlgOpenSearchListStart");
}

//caixa de dialogo OpenType.xul
_CMsgIface.prototype.DlgOpenTypeFile = function()
{
	return this.nossolocale.PegarTexto("DlgOpenTypeFile") ;
}
_CMsgIface.prototype.DlgOpenTypeLibrary = function()
{
	return this.nossolocale.PegarTexto("DlgOpenTypeLibrary") ;
}
_CMsgIface.prototype.DlgOpenTypeComp = function()
{
	return this.nossolocale.PegarTexto("DlgOpenTypeComp");
}
_CMsgIface.prototype.DlgOpenTypeInet = function()
{
	return this.nossolocale.PegarTexto("DlgOpenTypeInet");
}
_CMsgIface.prototype.DlgOpenTypeTab = function()
{
	return this.nossolocale.PegarTexto("DlgOpenTypeTab");
}
//nao é mais usado, mas deixamos aqui por enquanto
_CMsgIface.prototype.DlgOpenTypeNotAvailable = function()
{
	return this.nossolocale.PegarTexto("DlgOpenTypeNotAvailable");
}


// caixa de dialogo prefs.xul
_CMsgIface.prototype.DlgprefsLibFolder = function()
{
	return this.nossolocale.PegarTexto("DlgprefsLibFolder");
}
_CMsgIface.prototype.DlgprefsNoVoiceInLanguage = function()
{
	return this.nossolocale.PegarTexto("DlgprefsNoVoiceInLanguage");
}

//caixa de dialogo update.xul
_CMsgIface.prototype.DlgUpdateNoUpdate = function()
{
	return this.nossolocale.PegarTexto("DlgUpdateNoUpdate");
}

//edicao de senha
_CMsgIface.prototype.PassDeletedField = function()
{
	return this.nossolocale.PegarTexto("PassDeletedField");
}

//edicao de senha
_CMsgIface.prototype.DlgAskPassHelp_screen = function()
{
	return this.nossolocale.PegarTexto("DlgAskPassHelp_screen");
}
_CMsgIface.prototype.DlgAskPassHelp_speak = function()
{
	return this.nossolocale.PegarTexto("DlgAskPassHelp_speak");
}
_CMsgIface.prototype.DlgAskPassHelpWrong_speak = function()
{
	return this.nossolocale.PegarTexto("DlgAskPassHelpWrong_speak");
}
_CMsgIface.prototype.DlgAskPassHelpWrong_screen = function()
{
	return this.nossolocale.PegarTexto("DlgAskPassHelpWrong_screen");
}
_CMsgIface.prototype.DlgAskPinHelp_screen = function()
{
	return this.nossolocale.PegarTexto("DlgAskPinHelp_screen");
}
_CMsgIface.prototype.DlgAskPinHelp_speak = function()
{
	return this.nossolocale.PegarTexto("DlgAskPinHelp_speak");
}
_CMsgIface.prototype.DlgAskPinHelpWrong_speak = function()
{
	return this.nossolocale.PegarTexto("DlgAskPinHelpWrong_speak");
}
_CMsgIface.prototype.DlgAskPinHelpWrong_screen = function()
{
	return this.nossolocale.PegarTexto("DlgAskPinHelpWrong_screen");
}
_CMsgIface.prototype.DlgAskPassSaveHelp_speak = function()
{
	return this.nossolocale.PegarTexto("DlgAskPassSaveHelp_speak");
}
_CMsgIface.prototype.DlgAskPassSaveHelp_screen = function()
{
	return this.nossolocale.PegarTexto("DlgAskPassSaveHelp_screen");
}
_CMsgIface.prototype.DlgAskPassSaveHelpSize_speak = function()
{
	return this.nossolocale.PegarTexto("DlgAskPassSaveHelpSize_speak");
}
_CMsgIface.prototype.DlgAskPassSaveHelpSize_screen = function()
{
	return this.nossolocale.PegarTexto("DlgAskPassSaveHelpSize_screen");
}
_CMsgIface.prototype.DlgAskPassSave2Help_speak = function()
{
	return this.nossolocale.PegarTexto("DlgAskPassSave2Help_speak");
}
_CMsgIface.prototype.DlgAskPassSave2Help_screen = function()
{
	return this.nossolocale.PegarTexto("DlgAskPassSave2Help_screen");
}
_CMsgIface.prototype.DlgAskPassSave2HelpWrong_speak = function()
{
	return this.nossolocale.PegarTexto("DlgAskPassSave2HelpWrong_speak");
}
_CMsgIface.prototype.DlgAskPassSave2HelpWrong_screen = function()
{
	return this.nossolocale.PegarTexto("DlgAskPassSave2HelpWrong_screen");
}
_CMsgIface.prototype.DlgAskPass_butPin = function()
{
	return this.nossolocale.PegarTexto("DlgAskPass_butPin");
}

_CMsgIface.prototype.Confirm_DeleteOneHist_speak = function()
{
	return this.nossolocale.PegarTexto("Confirm_DeleteOneHist_speak");
}
_CMsgIface.prototype.Confirm_DeleteOneHist_msg = function()
{
	return this.nossolocale.PegarTexto("Confirm_DeleteOneHist_msg");
}
_CMsgIface.prototype.Confirm_DeleteAllHist_speak = function()
{
	return this.nossolocale.PegarTexto("Confirm_DeleteAllHist_speak");
}
_CMsgIface.prototype.Confirm_DeleteAllHist_msg = function()
{
	return this.nossolocale.PegarTexto("Confirm_DeleteAllHist_msg");
}
_CMsgIface.prototype.Confirm_DeleteOneMark_speak = function()
{
	return this.nossolocale.PegarTexto("Confirm_DeleteOneMark_speak");
}
_CMsgIface.prototype.Confirm_DeleteOneMark_msg = function()
{
	return this.nossolocale.PegarTexto("Confirm_DeleteOneMark_msg");
}
_CMsgIface.prototype.Confirm_DeleteAllMark_speak = function()
{
	return this.nossolocale.PegarTexto("Confirm_DeleteAllMark_speak");
}
_CMsgIface.prototype.Confirm_DeleteAllMark_msg = function()
{
	return this.nossolocale.PegarTexto("Confirm_DeleteAllMark_msg");
}

_CMsgIface.prototype.TextNotAvailable = function()
{
	return this.nossolocale.PegarTexto("TextNotAvailable");
}

_CMsgIface.prototype.DlgExportNotes= function()
{
	return this.nossolocale.PegarTexto("DlgExportNotes");
}

_CMsgIface.prototype.EchoExport= function()
{
	return this.nossolocale.PegarTexto("EchoExport");
}

_CMsgIface.prototype.DlgExportTab= function()
{
	return this.nossolocale.PegarTexto("DlgExportTab");
}

_CMsgIface.prototype.InicioDeAnotacao= function()
{
	return this.nossolocale.PegarTexto("InicioDeAnotacao");
}

_CMsgIface.prototype.PaginaExportNotes= function()
{
	return this.nossolocale.PegarTexto("PaginaExportNotes");
}

_CMsgIface.prototype.TextoReferencia= function()
{
	return this.nossolocale.PegarTexto("TextoReferencia");
}

_CMsgIface.prototype.FimDeAnotacao= function()
{
	return this.nossolocale.PegarTexto("FimDeAnotacao");
}

_CMsgIface.prototype.FimDeArquiucvo= function()
{
	return this.nossolocale.PegarTexto("FimDeArquiucvo");
}

_CMsgIface.prototype.NoMarkToExport= function()
{
	return this.nossolocale.PegarTexto("NoMarkToExport");
}

_CMsgIface.prototype.NotexExportSaved= function()
{
	return this.nossolocale.PegarTexto("NotexExportSaved");
}

_CMsgIface.prototype.DlgExportExpConfig= function()
{
	return this.nossolocale.PegarTexto("DlgExportExpConfig");
}

_CMsgIface.prototype.DlgExportExpCon_Saved= function()
{
	return this.nossolocale.PegarTexto("DlgExportExpCon_Saved");
}

_CMsgIface.prototype.DlgExportImpConfig= function()
{
	return this.nossolocale.PegarTexto("DlgExportImpConfig");
}

_CMsgIface.prototype.DlgExportImpCon_AskFile_speak= function()
{
	return this.nossolocale.PegarTexto("DlgExportImpCon_AskFile_speak");
}

_CMsgIface.prototype.DlgExportImpCon_AskFile_msg= function()
{
	return this.nossolocale.PegarTexto("DlgExportImpCon_AskFile_msg");
}

_CMsgIface.prototype.DlgExportImpCon_AskFile_extra= function()
{
	return this.nossolocale.PegarTexto("DlgExportImpCon_AskFile_extra");
}

_CMsgIface.prototype.DlgExportImpCon_Imported= function()
{
	return this.nossolocale.PegarTexto("DlgExportImpCon_Imported");
}

_CMsgIface.prototype.DlgExportImpCon_Error= function()
{
	return this.nossolocale.PegarTexto("DlgExportImpCon_Error");
}

_CMsgIface.prototype.ErrorCopyBookFiles= function()
{
	return this.nossolocale.PegarTexto("ErrorCopyBookFiles");
}

//dos exercicios
_CMsgIface.prototype.ExerciseAlternativeMarked= function()
{
	return this.nossolocale.PegarTexto("ExerciseAlternativeMarked");
}
_CMsgIface.prototype.ExerciseAlternativeUnmarked= function()
{
	return this.nossolocale.PegarTexto("ExerciseAlternativeUnmarked");
}
_CMsgIface.prototype.ExerciseNoExercInBook= function()
{
	return this.nossolocale.PegarTexto("ExerciseNoExercInBook");
}
_CMsgIface.prototype.ExerciseErrorLoading= function()
{
	return this.nossolocale.PegarTexto("ExerciseErrorLoading");
}
_CMsgIface.prototype.ExerciseEchoReferenceActivated= function()
{
	return this.nossolocale.PegarTexto("ExerciseEchoReferenceActivated");
}
_CMsgIface.prototype.ExerciseEchoBodyActivated= function()
{
	return this.nossolocale.PegarTexto("ExerciseEchoBodyActivated");
}

