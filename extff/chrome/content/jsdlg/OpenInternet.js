var manager = new CDlgManager();

//acabaram de carregar
function finishLoad()
{
	//traduzir
	var nossolocal = new CLocale("xuls.properties");
	nossolocal.AplicarIDs( [ "lidad-OpenInternet", "OpenInternet.Title", "OpenInternet.path", "OpenInternet.botok", "OpenInternet.botcancel" ] );

	
	//temos que colocar o foco explicitamente ou ele manda o primeiro evento automaticamente
	//document.getElementById("searchWords").focus();
	//mudança no firefox 3.6: pra funcionar, fizemos isto
	manager.ignoreNextFocus = true;

	CDlgMan_focus.setCallback(restoredFocus);
	
	//controles de foco
	var primeirocontrole = new CDlgMan_but("searchWords", document.getElementById("OpenInternet.path").value );
	manager.add(primeirocontrole);
	
	manager.add(new CDlgMan_but("OpenInternet.botok", CMsgIface.Dialog_butok() ));
	manager.add(new CDlgMan_but("OpenInternet.botcancel", CMsgIface.Dialog_butcancel() ));

	//fala as coisas
	var msg = CMsgIface.EchoOpenInternetDlg() + primeirocontrole.eventText();
	CDlgManager_LoadedDialog(msg);
}

//restauraram o foco, vamos vvoltar a falar
function restoredFocus()
{
//	CSpeak.CommandEchoGo_text(CMsgIface.EchoSearchDlg());
}

function restaurarfoco_abririnternet()
{
	manager.ignoreNextFocus = true;
	document.getElementById('searchWords').focus();
	manager.ignoreNextFocus = false;
}

function onenter()
{
	clickok();
}

//deram um OK
function clickok()
{
	window.arguments[0].path = document.getElementById("searchWords").value;
	window.arguments[0].okButton = true;
	CSpeak.forceEnd();
	window.close();
	
	return true;
}

//deram um cancelar
function clickcancel()
{
	window.arguments[0].okButton = false;
	CSpeak.forceEnd();
	window.close();
	return true;
}


