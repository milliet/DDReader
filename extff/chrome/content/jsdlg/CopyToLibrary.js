var manager = new CDlgManager();

/*
parametros:
okButton
ExisteNaBiblioteca
AcaoCopiar (saida)
	0 cancelar, 
	1 Copiar para a biblioteca (nao esta na biblioteca ou é para sobrepor) - e abrir o da bilioteca
	2 Abrir do local atual, sem copiar
	3 Abrir o que está na biblioteca
*/


//deram um OK
function clickok()
{
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

function clickCopiar(resultado)
{
	window.arguments[0].AcaoCopiar = resultado;
	clickok();
}


function finishLoad()
{
	//traduzir
	var nossolocal = new CLocale("xuls.properties");
	nossolocal.AplicarIDs( [ "CopyToLibrary-dlg", "CopyToLibrary.nao.title", "CopyToLibrary.nao.tip1", 
		"CopyToLibrary.nao.tip2", "CopyToLibrary.nao.copiar", "CopyToLibrary.nao.abrir", 
		"CopyToLibrary.nao.cancelar", "CopyToLibrary.ja.title", "CopyToLibrary.ja.tip1", 
		"CopyToLibrary.ja.tip2", "CopyToLibrary.ja.bib", "CopyToLibrary.ja.abrir", 
		"CopyToLibrary.ja.copiar", "CopyToLibrary.ja.cancelar" ] );

	
	//ligamos um painel ou outro
	if(window.arguments[0].ExisteNaBiblioteca)
	{
		document.getElementById("CopyToLibrary.nao").style.display = "none";
		document.getElementById("CopyToLibrary.ja").style.display = "true";

		//temos que colocar o foco explicitamente ou ele manda o primeiro evento automaticamente
		//document.getElementById("CopyToLibrary.ja.bib").focus();
		//mudança no firefox 3.6: pra funcionar, fizemos isto
		manager.ignoreNextFocus = true;

		//copiar o negocio de cima, mudando os ids
		//controles de foco
		var primeirocontrole = new CDlgMan_but("CopyToLibrary.ja.bib", nossolocal.PegarTexto("CopyToLibrary.ja.bib.tts"));
		manager.add(primeirocontrole);
		manager.add(new CDlgMan_but("CopyToLibrary.ja.abrir", nossolocal.PegarTexto("CopyToLibrary.ja.abrir.tts")));
		manager.add(new CDlgMan_but("CopyToLibrary.ja.copiar", nossolocal.PegarTexto("CopyToLibrary.ja.copiar.tts")));
		manager.add(new CDlgMan_but("CopyToLibrary.ja.cancelar", CMsgIface.Dialog_butcancel() ));
		
		//fala as coisas
		CDlgManager_LoadedDialog(nossolocal.PegarTexto("CopyToLibrary.ja.tip1") + CMsgIface.DlgOpenTypeTab() + primeirocontrole.eventText() );
	}
	else
	{
		document.getElementById("CopyToLibrary.nao").style.display = "true";
		document.getElementById("CopyToLibrary.ja").style.display = "none";
		
		//temos que colocar o foco explicitamente ou ele manda o primeiro evento automaticamente
		//document.getElementById("CopyToLibrary.nao.copiar").focus();
		//mudança no firefox 3.6: pra funcionar, fizemos isto
		manager.ignoreNextFocus = true;

		//controles de foco
		var primeirocontrole = new CDlgMan_but("CopyToLibrary.nao.copiar", nossolocal.PegarTexto("CopyToLibrary.nao.copiar.tts"));
		manager.add(primeirocontrole);
		manager.add(new CDlgMan_but("CopyToLibrary.nao.abrir", nossolocal.PegarTexto("CopyToLibrary.nao.abrir.tts")));
		manager.add(new CDlgMan_but("CopyToLibrary.nao.cancelar", CMsgIface.Dialog_butcancel() ));
		
		//fala as coisas
		CDlgManager_LoadedDialog(nossolocal.PegarTexto("CopyToLibrary.nao.tip1") + CMsgIface.DlgOpenTypeTab() + primeirocontrole.eventText() );
	}
}


