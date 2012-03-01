var manager = new CDlgManager();

function finishLoad()
{
	//traduzir
	var nossolocal = new CLocale("xuls.properties");
	nossolocal.AplicarIDs( [ "lidad-open", "opentype.title", "opentype.tip", "butselarq", "butbibli", "butcomp", "butint", "opentype.botcancel" ] );
	
	//temos que colocar o foco explicitamente ou ele manda o primeiro evento automaticamente
	//document.getElementById("butselarq").focus();
	//mudança no firefox 3.6: pra funcionar, fizemos isto
	manager.ignoreNextFocus = true;
	
	//controles de foco
	var primeirocontrole = new CDlgMan_but("butselarq", CMsgIface.DlgOpenTypeFile());
	manager.add(primeirocontrole);
	manager.add(new CDlgMan_but("butbibli", CMsgIface.DlgOpenTypeLibrary() ));
	manager.add(new CDlgMan_but("butcomp", CMsgIface.DlgOpenTypeComp() ));
	manager.add(new CDlgMan_but("butint", CMsgIface.DlgOpenTypeInet() ));
	manager.add(new CDlgMan_but("opentype.botcancel", CMsgIface.Dialog_butcancel() ));
	

	//fala as coisas
	CDlgManager_LoadedDialog(CMsgIface.EchoOpen() + CMsgIface.DlgOpenTypeTab() + primeirocontrole.eventText() );
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

function clickbutselarq()
{
	//selecionar arquivo
	CSpeak.forceEnd();
	var file = CDialogs.SelectOPF();
	if(file == null)
	{
		//fala o]a opcao de novo
		manager.foco(document.getElementById("butselarq"));
		return;
	}
	window.arguments[0].path = file;
	clickok();
}


function clickbutint()
{
	CSpeak.forceEnd();
	
	var retVals = { okButton:false, path: "" };
	window.openDialog('OpenInternet.xul','OpenInternet','modal,centerscreen,resizable=no', retVals);
	if(!retVals.okButton)
	{
		//fala o]a opcao de novo
		manager.foco(document.getElementById("butint"));
		return;
	}

	window.arguments[0].path = retVals.path;
	clickok();
}

function clickbutcomp()
{
	CSpeak.forceEnd();
	
	var retVals = { okButton:false, path: "", basepath:"", rodandoDaTelaInicial:false, nenhumArquivo:false };
	window.openDialog('OpenSearch.xul','OpenSearch','modal,centerscreen,resizable=no', retVals);
	if(!retVals.okButton)
	{
		//fala o]a opcao de novo
		manager.foco(document.getElementById("butselarq"));
		return;
	}

	window.arguments[0].path = retVals.path;
	clickok();
}

function clickbutbibli()
{
	CSpeak.forceEnd();
	
	var retVals = { okButton:false, path: "", basepath:CPref.bookfolder(), rodandoDaTelaInicial:false, nenhumArquivo:false };
	window.openDialog('OpenSearch.xul','OpenSearch','modal,centerscreen,resizable=no', retVals);
	if(!retVals.okButton)
	{
		//fala o]a opcao de novo
		manager.foco(document.getElementById("butselarq"));
		return;
	}

	window.arguments[0].path = retVals.path;
	clickok();
}

