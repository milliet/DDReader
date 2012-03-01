/*
parametros no window.arguments[0]:
nome_comando - o comando
okButton - se tem algum comando
*/

var manager = new CDlgManager();

function CriarBotao(nome_botao)
{
	return new CDlgMan_but(nome_botao, nossolocal.PegarTexto(nome_botao) + ". " + nossolocal.PegarTexto("tts_" + nome_botao));
}


var nossolocal;

function finishLoad()
{
	//traduzir
	nossolocal = new CLocale("xuls.properties");
	nossolocal.AplicarIDs( [ "lidad-tabcmdadic", "tabcmdadic.title", "tabcmd_sole", 
		"tabcmd_fonte", "tabcmd_irpag", "tabcmd_laudio", "tabcmd_voz", 
		"tabcmd_rbusca", "tabcmd_llista", "tabcmd_laut", "tabcmd_rodape", 
		"tabcmd_lpag", "tabcmd_indmark", "tabcmd_export", "tabcmd_cred", "tabcmd_atu", 
		"tabcmd_basico"	] );


	//temos que colocar o foco explicitamente ou ele manda o primeiro evento automaticamente
	//document.getElementById("tabcmd_sole").focus();
	//mudança no firefox 3.6: pra funcionar, fizemos isto
	manager.ignoreNextFocus = true;
	
	
	//controles de foco
	var primeirocontrole = CriarBotao("tabcmd_sole");
	manager.add(primeirocontrole);
	manager.add(CriarBotao("tabcmd_fonte"));
	manager.add(CriarBotao("tabcmd_irpag"));
	manager.add(CriarBotao("tabcmd_laudio"));
	manager.add(CriarBotao("tabcmd_voz"));
	manager.add(CriarBotao("tabcmd_rbusca"));
	manager.add(CriarBotao("tabcmd_llista"));
	manager.add(CriarBotao("tabcmd_laut"));
	manager.add(CriarBotao("tabcmd_rodape"));
	manager.add(CriarBotao("tabcmd_lpag"));
	manager.add(CriarBotao("tabcmd_indmark"));
	manager.add(CriarBotao("tabcmd_export"));
	manager.add(CriarBotao("tabcmd_cred"));
	manager.add(CriarBotao("tabcmd_atu"));
	manager.add(CriarBotao("tabcmd_basico"));

	//fala as coisas
	CDlgManager_LoadedDialog( primeirocontrole.eventText() );
}


//deram um cancelar
function clickcancel()
{
	window.arguments[0].okButton = false;
	CSpeak.forceEnd();
	window.close();
	return true;
}

//clicaram em um botao
function clicktabcmd(nome_comando)
{
	CSpeak.forceEnd();
	window.arguments[0].okButton = true;
	window.arguments[0].nome_comando = nome_comando;
	window.close();
	return true;
}

