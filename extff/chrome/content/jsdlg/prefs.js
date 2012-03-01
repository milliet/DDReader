var manager = new CDlgManager();

function eventoload()
{
	var nossolocal = new CLocale("xuls.properties");
	nossolocal.AplicarIDs( [ "prefs.programlanguage", "lidad-prefs", "prefs.titulo", "lidad_globais", "LabelvoiceSysDef", "LabelvoiceSpeed", "LabelvoiceVol", "LabelfontSize", "LabelhistoryEntries", "echotyping", "echocommands", "bookmarkbeep", "listautonav", "extendededit", "prefs.dirBilbio", "LabelhistoryEntries", "Labelexportphrases", "prefs.botcancel" ] );


	//garante que o diretorio padrao esteja selecionado
	document.getElementById("bibliopath").value= CPref.bookfolder();
	
	//se a voz estiver vazia, colocamos a que está atualmente ativa
	if(CPref.voice_system() == "")
		CPref.voice_system_set(CSpeak.getVoiceID());
	//idioma, pega o default
	CPref.language_set(CPref.language());
	
	//preenche os combos
	executar_onpreenchercombovozes("voiceSysDef","lidad.voice.system_p","extensions.lidad.voice.system");

	//temos que colocar o foco explicitamente ou ele manda o primeiro evento automaticamente
	//document.getElementById("lang").focus();
	//mudança no firefox 3.6: pra funcionar, fizemos isto
	manager.ignoreNextFocus = true;
	
	//controles de foco
	var primeirocontrole = new CDlgMan_ml("lang", document.getElementById("prefs.programlanguage").value, CMsgIface.Dialog_mlextra() );
	manager.add(primeirocontrole);
	manager.add(new CDlgMan_ml("voiceSysDef", document.getElementById("LabelvoiceSysDef").value, CMsgIface.Dialog_mlextra() ));
	manager.add(new CDlgMan_ml("voiceSpeed", document.getElementById("LabelvoiceSpeed").value, CMsgIface.Dialog_mlextra() ));
	manager.add(new CDlgMan_ml("voiceVol", document.getElementById("LabelvoiceVol").value, CMsgIface.Dialog_mlextra() ));
	manager.add(new CDlgMan_ml("fontSize", document.getElementById("LabelfontSize").value, CMsgIface.Dialog_mlextra() ));
	manager.add(new CDlgMan_ml("historyEntries", document.getElementById("LabelhistoryEntries").value, CMsgIface.Dialog_mlextra() ));

	manager.add(new CDlgMan_cb("echotyping", document.getElementById("echotyping"), CMsgIface.Dialog_cbonmale(), CMsgIface.Dialog_cboffmale(), CMsgIface.Dialog_cbextra()) );
	manager.add(new CDlgMan_cb("echocommands", document.getElementById("echocommands"), CMsgIface.Dialog_cbonmale(), CMsgIface.Dialog_cboffmale(), CMsgIface.Dialog_cbextra()) );
	manager.add(new CDlgMan_cb("bookmarkbeep", document.getElementById("bookmarkbeep"), CMsgIface.Dialog_cbonmale(), CMsgIface.Dialog_cboffmale(), CMsgIface.Dialog_cbextra()) );
	manager.add(new CDlgMan_cb("listautonav", document.getElementById("listautonav"), CMsgIface.Dialog_cbonfemale(), CMsgIface.Dialog_cbofffemale(), CMsgIface.Dialog_cbextra()) );
	manager.add(new CDlgMan_cb("extendededit", document.getElementById("extendededit"), CMsgIface.Dialog_cbonfemale(), CMsgIface.Dialog_cbofffemale(), CMsgIface.Dialog_cbextra()) );
	manager.add(new CDlgMan_ml("exportphrases", document.getElementById("Labelexportphrases").value, CMsgIface.Dialog_mlextra() ));

	manager.add(new CDlgMan_but("bibliopath", CMsgIface.DlgprefsLibFolder() ));

	manager.add(new CDlgMan_but("prefs.botok", CMsgIface.Dialog_butok() ));
	manager.add(new CDlgMan_but("prefs.botcancel", CMsgIface.Dialog_butcancel() ));

	//fala as coisas
	CDlgManager_LoadedDialog(CMsgIface.EchoPrefGlobal() + CMsgIface.DialogLoad() + primeirocontrole.eventText() );
}

function prefsclicklang(item)
{
	//preenche a lista de vozes
	if(executar_onpreenchercombovozes("voiceSysDef","lidad.voice.system_p","extensions.lidad.voice.system") == 0)
		CDialogs.WarnEscToContinue(CMsgIface.DlgprefsNoVoiceInLanguage(), null);
	manager.foco(item);
}

function executar_onpreenchercombovozes(oID, aPref, refPref)
{
	//tentamos preencher com as vozes com o mesmo idioma
	//se nao tiver, mostra todas as vozes
	var ret = executar_onpreenchercombovozes_go(oID, aPref, refPref, true);
	if(ret == 0)
		executar_onpreenchercombovozes_go(oID, aPref, refPref, false);
	return ret;
}

function executar_onpreenchercombovozes_go(oID, aPref, refPref, matchLang)
{
	var lista = document.getElementById(oID);
	lista.removeAllItems();
	var estaPref = Components.classes["@mozilla.org/preferences-service;1"].getService(Components.interfaces.nsIPrefBranch).getCharPref(refPref);
	var max = CSpeak.voicesCount();
	var ret = 0;
	var itesnAdicoonados = 0;
	for(var i = 0; i < max; i++)
	{
		var usar = true;
		if(matchLang)
		{
			if(CSpeak.VoiceInLanguage(CSpeak.voiceLang(i), document.getElementById("lang").value ) == 0)
				usar = false;
		}
		
		if(usar)
		{
			var opt = lista.appendItem(CSpeak.voiceName(i),CSpeak.voiceID(i));
			opt.setAttribute("preference",aPref);
			if(estaPref == CSpeak.voiceID(i))
			{
				lista.selectedIndex = itesnAdicoonados;
			}
			itesnAdicoonados++;
			ret++;
		}
	}

	//sempre deixamos alguem selecionado
	if(lista.selectedIndex == -1 && ret > 0)
		lista.selectedIndex = 0;
	
	return ret;
}

//deram um OK
function clickok()
{
	//ele nao grava automaticamente quando a gente manipula pelo programa
	CPref.language_set(document.getElementById("lang").value);
	CPref.voice_system_set(document.getElementById("voiceSysDef").value);

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
}


