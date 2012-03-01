
var manager = new CDlgManager();

//acabaram de carregar
function finishLoad()
{
	//traduzir
	var nossolocal = new CLocale("xuls.properties");
	nossolocal.AplicarIDs( [ "lidad-markers", "mksLabel", "mksTitulo", "mksAnota", "marker.botok", "marker.botcancel", "marker.botremove" ] );

	document.getElementById("TituloMk").value = window.arguments[0].title;
	document.getElementById("AnotaMk").value = window.arguments[0].text;
	
	//temos que colocar o foco explicitamente ou ele manda o primeiro evento automaticamente
	//document.getElementById("TituloMk").focus();
	//mudança no firefox 3.6: pra funcionar, fizemos isto
	manager.ignoreNextFocus = true;
	
	//controles de foco
	var msghelp = CMsgIface.DlgMarkerTitleMark();
	if(CPref.extendededit())
		msghelp += CMsgIface.DlgMarkerAHelp();
	var primeirocontrole = new CDlgMan_tbext("TituloMk", document.getElementById("TituloMk"), msghelp, 120, this, "5.2.");
	manager.add(primeirocontrole);
	
	var msghelp = CMsgIface.DlgMarkerMarkAnot();
	if(CPref.extendededit())
		msghelp += CMsgIface.DlgMarkerAHelp();
	manager.add(new CDlgMan_tbext("AnotaMk", document.getElementById("AnotaMk"), msghelp, 5000, this, "5.2."));

	manager.add(new CDlgMan_but("marker.botok", CMsgIface.Dialog_butok() ));
	manager.add(new CDlgMan_but("marker.botcancel", CMsgIface.Dialog_butcancel() ));
	manager.add(new CDlgMan_but("marker.botremove", CMsgIface.DlgMarkerRemove() ));

	//fala as coisas
	var msgload = CMsgIface.DlgMarkerUseTab();
	var msg = CMsgIface.EchoMarkEditDlg() + msgload + primeirocontrole.eventText();
	document.getElementById("mksLabel").value = CMsgIface.DlgMarkerEdit();
	if(window.arguments[0].isNewMark)
	{
		msg = CMsgIface.EchoMarkNewDlg() + msgload + primeirocontrole.eventText();
		document.getElementById("mksLabel").value = CMsgIface.DlgMarkerNew();
		document.getElementById("marker.botremove").style.display = "none";
	}
	CDlgManager_LoadedDialog(msg);
}

function onenter()
{
	clickok();
}

//deram um OK
function clickok()
{
	window.arguments[0].title = document.getElementById("TituloMk").value;
	window.arguments[0].text = document.getElementById("AnotaMk").value;
	window.arguments[0].okButton = true;
	window.arguments[0].removeButton = false;
	CSpeak.forceEnd();
	window.close();
	return true;
}

//deram um cancelar
function clickcancel()
{
	window.arguments[0].okButton = false;
	window.arguments[0].removeButton = false;
	CSpeak.forceEnd();
	window.close();
	return true;
}

//clicaram para remover
function clickbutremove()
{
	window.arguments[0].okButton = false;
	window.arguments[0].removeButton = true;
	CSpeak.forceEnd();
	window.close();
	return true;
}

