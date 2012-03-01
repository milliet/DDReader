//parametros: textSpeak:speak, textMessage:message, textExtra:extra
var manager = new CDlgManager();


//acabaram de carregar
function finishLoad()
{
	//traduzir
	var nossolocal = new CLocale("xuls.properties");
	nossolocal.AplicarIDs( [ "lidad-confirm", "confirm.alert", "confirm.botok", "confirm.botcancel" ] );

	manager.add(new CDlgMan_but("confirm.botok", CMsgIface.Dialog_butok() ));
	manager.add(new CDlgMan_but("confirm.botcancel", CMsgIface.Dialog_butcancel() ));
	//document.getElementById("confirm.botok").focus();
	//mudança no firefox 3.6: pra funcionar, fizemos isto
	manager.ignoreNextFocus = true;

	//coloca as coisas na tela
	//limitamos em 40
	if(window.arguments[0].textExtra.length > 40)
		window.arguments[0].textExtra = window.arguments[0].textExtra.substring(0,39) + "...";
	document.getElementById("confirm.message").value = window.arguments[0].textMessage;
	document.getElementById("confirm.extra").value = window.arguments[0].textExtra;

	//fala as coisas
	CDlgManager_LoadedDialog(window.arguments[0].textSpeak + " " + window.arguments[0].textExtra);
}

//deram um cancelar
function clickcancel()
{
	window.arguments[0].okButton = false;
	CSpeak.forceEnd();
	window.close();
	return true;
}

//deram um cancelar
function clickok()
{
	window.arguments[0].okButton = true;
	CSpeak.forceEnd();
	window.close();
	return true;
}

