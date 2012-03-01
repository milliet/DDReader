var manager = new CDlgManager();

function finishLoad()
{
	//traduzir
	var nossolocal = new CLocale("xuls.properties");
	nossolocal.AplicarIDs( [ "lidad-export", "dlgexport.title", 
		"dlgexport.exportnotes", "dlgexport.exportconfig", "dlgexport.importconfig", 
		"dlgexport.botcancel" ] );
	
	//temos que colocar o foco explicitamente ou ele manda o primeiro evento automaticamente
	//document.getElementById("dlgexport.exportnotes").focus();
	//mudança no firefox 3.6: pra funcionar, fizemos isto
	manager.ignoreNextFocus = true;
	
	//controles de foco
	var primeirocontrole = new CDlgMan_but("dlgexport.exportnotes", CMsgIface.DlgExportNotes());
	manager.add(primeirocontrole);
	manager.add(new CDlgMan_but("dlgexport.exportconfig", CMsgIface.DlgExportExpConfig() ));
	manager.add(new CDlgMan_but("dlgexport.importconfig", CMsgIface.DlgExportImpConfig() ));
	manager.add(new CDlgMan_but("dlgexport.botcancel", CMsgIface.Dialog_butcancel() ));
	

	//fala as coisas
	CDlgManager_LoadedDialog(CMsgIface.EchoExport() + CMsgIface.DlgExportTab() + primeirocontrole.eventText() );
}


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

function clickbutnotes()
{
	//exportar coisas
	CSpeak.forceEnd();
	window.arguments[0].comandoExportar = "exportarnotas";
	clickok();
}

function clickbutimpconfig()
{
	//exportar coisas
	CSpeak.forceEnd();
	window.arguments[0].comandoExportar = "importarconfig";
	clickok();
}

function clickbutexpconfig()
{
	//exportar coisas
	CSpeak.forceEnd();
	window.arguments[0].comandoExportar = "exportarconfig";
	clickok();
}


