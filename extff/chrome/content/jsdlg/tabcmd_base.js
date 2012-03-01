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
	nossolocal.AplicarIDs( [ "lidad-tabcmd", "tabcmd.title", "tabcmd_abrir", "tabcmd_hist",
		"tabcmd_conf", "tabcmd_leit", "tabcmd_ind", "tabcmd_cflivro", "tabcmd_busca", 
		"tabcmd_lmark", "tabcmd_edtmark", "tabcmd_dbib", "tabcmd_tut", "tabcmd_sup", 
		"tabcmd_adic", "tabcmd_nav"	] );

	//temos que colocar o foco explicitamente ou ele manda o primeiro evento automaticamente
	//document.getElementById("tabcmd_abrir").focus();
	//mudança no firefox 3.6: pra funcionar, fizemos isto
	manager.ignoreNextFocus = true;
	
	//controles de foco
	var primeirocontrole = CriarBotao("tabcmd_abrir");
	manager.add(primeirocontrole);
	manager.add(CriarBotao("tabcmd_hist"));
	manager.add(CriarBotao("tabcmd_conf"));
	manager.add(CriarBotao("tabcmd_leit"));
	manager.add(CriarBotao("tabcmd_ind"));
	manager.add(CriarBotao("tabcmd_cflivro"));
	manager.add(CriarBotao("tabcmd_busca"));
	manager.add(CriarBotao("tabcmd_lmark"));
	manager.add(CriarBotao("tabcmd_edtmark"));
	manager.add(CriarBotao("tabcmd_dbib"));
	manager.add(CriarBotao("tabcmd_tut"));
	manager.add(CriarBotao("tabcmd_sup"));
	manager.add(CriarBotao("tabcmd_adic"));
	manager.add(CriarBotao("tabcmd_nav"));

	//fala as coisas
	CDlgManager_LoadedDialog(nossolocal.PegarTexto("tts_tabcmdload") + primeirocontrole.eventText() );
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
	//comandos adicionais?
	if(nome_comando == "tabcmd_adic")
	{
		//para nao falar o evento de foco
		document.getElementById("tabcmd.title").focus();

		//chamamos a caixa de dialogo
		var retVals = { okButton:false, nome_comando:"" };
		window.openDialog('tabcmd_adic.xul','tabcmdadic','modal,centerscreen,resizable=no', retVals);


		//cancelar
		if(!retVals.okButton)
		{
			clickcancel();
			return;
		}


		if(retVals.okButton && retVals.nome_comando != "tabcmd_basico")
		{
			window.arguments[0].okButton = true;
			window.arguments[0].nome_comando = retVals.nome_comando;
			window.close();
			return true;
		}
		
		//nao escolheu nenhum comando
		document.getElementById("tabcmd_adic").focus();
		return;
	}

	//ouro comando
	window.arguments[0].okButton = true;
	window.arguments[0].nome_comando = nome_comando;
	window.close();
	return true;
}

