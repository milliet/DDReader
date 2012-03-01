/*
variavel de transferencia:
	window.arguments[0].pin = pin
	window.arguments[0].okButton = true se deu OK
	window.arguments[0].captionSpeak = mensagem para falar no começo (e colocar na tela
	window.arguments[0].captionScreen = mensagem para falar no começo (e colocar na tela
*/

var manager = new CDlgManager();

//acabaram de carregar
function finishLoad()
{

	//traduzir
	var nossolocal = new CLocale("xuls.properties");
	nossolocal.AplicarIDs( [ "lidad-askpin",  "askpin.botok", "askpin.botcancel" ] );

	document.getElementById("askpin.prompt").value = window.arguments[0].captionScreen;
	
	//temos que colocar o foco explicitamente ou ele manda o primeiro evento automaticamente
	//document.getElementById("askpin.pass").focus();
	document.getElementById("askpin.pass").value = "";
	//mudança no firefox 3.6: pra funcionar, fizemos isto
	manager.ignoreNextFocus = true;

	CDlgMan_focus.setCallback(restoredFocus);
	
	//controles de foco
	var msghelp = window.arguments[0].captionSpeak;
	var primeirocontrole = new CDlgMan_pass("askpin.pass", msghelp, this);
	manager.add(primeirocontrole);
	
	manager.add(new CDlgMan_but("askpin.botok", CMsgIface.Dialog_butok() ));
	manager.add(new CDlgMan_but("askpin.botcancel", CMsgIface.Dialog_butcancel() ));

	//fala as coisas
	var msgload = window.arguments[0].captionSpeak;
	CDlgManager_LoadedDialog(msgload);
}

//restauraram o foco, vamos vvoltar a falar
function restoredFocus()
{
	//CSpeak.CommandEchoGo_text(window.arguments[0].captionSpeak);
}

function onenter()
{
	clickok();
}

//deram um OK
function clickok()
{
	window.arguments[0].pin = document.getElementById("askpin.pass").value;
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


