/*
variavel de transferencia:
	window.arguments[0].pass = senha
	window.arguments[0].okButton = true se deu OK
	window.arguments[0].newpinButton = true se clicou em Novo PIN
	window.arguments[0].hasnewpinButton = se é para mostrar o botao de novo pin
	window.arguments[0].captionSpeak = mensagem para falar no começo (e colocar na tela
	window.arguments[0].captionScreen = mensagem para falar no começo (e colocar na tela
*/

var manager = new CDlgManager();

//acabaram de carregar
function finishLoad()
{
	//traduzir
	var nossolocal = new CLocale("xuls.properties");
	nossolocal.AplicarIDs( [ "lidad-askpass",  "askpass.newpin", "askpass.botok", "askpass.botcancel" ] );

	document.getElementById("askpass.prompt").value = window.arguments[0].captionScreen;
	
	//temos que colocar o foco explicitamente ou ele manda o primeiro evento automaticamente
	//document.getElementById("askpass.pass").focus();
	document.getElementById("askpass.pass").value = "";
	//mudança no firefox 3.6: pra funcionar, fizemos isto
	manager.ignoreNextFocus = true;

	CDlgMan_focus.setCallback(restoredFocus);
	
	//controles de foco
	var msghelp = window.arguments[0].captionSpeak;
	var primeirocontrole = new CDlgMan_pass("askpass.pass", msghelp, this);
	manager.add(primeirocontrole);
	
	if(window.arguments[0].hasnewpinButton)
		manager.add(new CDlgMan_but("askpass.newpin", CMsgIface.DlgAskPass_butPin()));
	manager.add(new CDlgMan_but("askpass.botok", CMsgIface.Dialog_butok() ));
	manager.add(new CDlgMan_but("askpass.botcancel", CMsgIface.Dialog_butcancel() ));

	if(!window.arguments[0].hasnewpinButton)
		document.getElementById("askpass.newpinbox").collapsed = true;

	//fala as coisas
	var msgload = window.arguments[0].captionSpeak;
	CDlgManager_LoadedDialog(msgload);
}

//restauraram o foco, vamos vvoltar a falar
function restoredFocus()
{
	CSpeak.CommandEchoGo_text(window.arguments[0].captionSpeak);
}

function onenter()
{
	clickok();
}

//deram um OK
function clickok()
{
	window.arguments[0].pass = document.getElementById("askpass.pass").value;
	window.arguments[0].okButton = true;
	window.arguments[0].newpinButton = false;
	CSpeak.forceEnd();
	window.close();
	
	return true;
}

//deram um cancelar
function clickcancel()
{
	window.arguments[0].okButton = false;
	window.arguments[0].newpinButton = false;
	CSpeak.forceEnd();
	window.close();
	return true;
}


//deram um new pin
function clicknewpin()
{
	window.arguments[0].okButton = false;
	window.arguments[0].newpinButton = true;
	CSpeak.forceEnd();
	window.close();
	
	return true;
}

