var manager = new CDlgManager();
var findhist = new CFindHist();
var findhist_currentitem = -1;

//novo parametro: thisIsDictionary se esta rodando um dicionario

//acabaram de carregar
function finishLoad()
{
	//traduzir
	var nossolocal = new CLocale("xuls.properties");
	nossolocal.AplicarIDs( [ "lidad-busca", "busca.Title", "busca.Terms", 
		"labelhist", "busca.tipocaption", "tipobusca_exato", "tipobusca_aprox",
		"busca.botok", "busca.botcancel" ] );


	//tiramos a opcao de busca aproximada
	if(window.arguments[0].temBuscaIndexada)
		document.getElementById("tipobusca_aprox").hidden = false;
	else
		document.getElementById("tipobusca_aprox").hidden = true;

	//no diciponario nao tem opca de tipo de busca		
	if(window.arguments[0].thisIsDictionary)
		document.getElementById("box_tipobusca").hidden = true;
		
			
	//temos que colocar o foco explicitamente ou ele manda o primeiro evento automaticamente
	//document.getElementById("searchWords").focus();
	//mudança no firefox 3.6: pra funcionar, fizemos isto
	manager.ignoreNextFocus = true;

	CDlgMan_focus.setCallback(restoredFocus);
	
	//controles de foco
	var msghelp = CMsgIface.DlgBuscaHelp();
	if(CPref.extendededit())
		msghelp += CMsgIface.DlgBuscaExtendedEdit();
	var primeirocontrole = new CDlgMan_tbext("searchWords", document.getElementById("searchWords"), msghelp, 200, this, "7.2.");
	manager.add(primeirocontrole);

	manager.add(new CDlgMan_ml("tipobusca", document.getElementById("busca.tipocaption").value, CMsgIface.Dialog_mlextra() ));
	manager.add(new CDlgMan_but("busca.botok", CMsgIface.Dialog_butok() ));
	manager.add(new CDlgMan_but("busca.botcancel", CMsgIface.Dialog_butcancel() ));

	//fala as coisas
	var msgload = CMsgIface.DlgBuscaEnterExecuta();
	var msg = CMsgIface.EchoSearchDlg() + msgload + primeirocontrole.eventText();
	CDlgManager_LoadedDialog(msg);
	
	//inicailiza o historico de buscas
	if(findhist.histarray.length <= 0)
	{
		document.getElementById("labelhist").value = CMsgIface.DlgBuscaSemRecente();
	}
	else
	{
		//coloca o historico
		for(var i =0; i<findhist.histarray.length ;i++)
		{
			document.getElementById("hist").appendItem( (i+1).toString() + ". " + findhist.histarray[i].searchWords);
		}
	}
}

//restauraram o foco, vamos vvoltar a falar
function restoredFocus()
{
//	CSpeak.CommandEchoGo_text(CMsgIface.EchoSearchDlg());
}

//clicaram no historico
function histselect()
{
	var i = document.getElementById("hist").selectedIndex;
	if(i < 0 || i >= findhist.histarray.length)
	{
		//deu erro
		CSpeak.CommandEchoGo_text(CMsgIface.DlgBuscaErrorHist());
		return;
	}
	document.getElementById("hist").selectedIndex = -1;
	histselectgo(i);
}
function histselectgo(i)
{
	findhist_currentitem = i;
	document.getElementById("searchWords").value = findhist.histarray[i].searchWords;
	CSpeak.CommandEchoGo_text(CMsgIface.DlgBuscaSearchItem1() + (i+1).toString() + CMsgIface.DlgBuscaSearchItem2() + findhist.histarray[i].searchWords);
	
	//tem que ser por timeout pq o cara acabou de clicar
	setTimeout("timeout_busca_rf();", 1);
}

function timeout_busca_rf()
{
	restaurarfocobusca();
}

function restaurarfocobusca()
{
	manager.ignoreNextFocus = true;
	document.getElementById('searchWords').focus();
	manager.ignoreNextFocus = false;
}

function keypresssearch(control, event)
{
	//vamos tratar os control acima e abaixo
	//o resto repassamos
	//vamos rodar
	if(_keyevent(event))
	{
		//para cancelar a acao dessa tecla
		event.preventDefault();
		return;
	}

	//o resto repassamos
	manager.key(control, event);
}


function _keyevent(evt)
{
	//teclas com control
	if(evt.ctrlKey == true && evt.altKey == false)
	{
		//seta para baixo proximo item do historico
		if(evt.charCode == 0 && evt.keyCode == 40)
		{
			if(findhist.histarray.length <= 0)
			{
				CSpeak.CommandEchoGo_text(CMsgIface.DlgBuscaSemRecente());
				return true;
			}
			
			if(findhist_currentitem + 1 >= findhist.histarray.length)
			{
				CSpeak.CommandEchoGo_text(CMsgIface.DlgBuscaHistEnd());
				return true;
			}
			
			histselectgo(findhist_currentitem + 1);
			return true;
		}
		
		//seta para cima item anterior do historgio
		if(evt.charCode == 0 && evt.keyCode == 38)
		{
			if(findhist.histarray.length <= 0)
			{
				CSpeak.CommandEchoGo_text(CMsgIface.DlgBuscaSemRecente());
				return true;
			}
			
			//comportamento correto na primeira carga
			if(findhist_currentitem < 1)
				findhist_currentitem = 1;
			
			histselectgo(findhist_currentitem - 1);
			return true;
		}
		
		
	}
	
	//nao processamos
	return false;
}



function onenter()
{
	clickok();
}

//deram um OK
function clickok()
{
	//gauda item no historico
	findhist.addEntry(document.getElementById("searchWords").value);

	window.arguments[0].querBuscaIndexada = false;
	if(document.getElementById("tipobusca").value == "aprox")
		window.arguments[0].querBuscaIndexada = true;

	window.arguments[0].searchWords = document.getElementById("searchWords").value;
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


