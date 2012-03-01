var manager = new CDlgManager();

function eventoload()
{
	var nossolocal = new CLocale("xuls.properties");
	nossolocal.AplicarIDs( [ "lidad-prefsL", "prefsbook.title", "Labelaudiovol", "BListAllVoices", "Labelttsvoice", "Bnavigateauto", "Bnoteson", "BPagOn", "Buseaudio", "prefslivro.botok", "prefslivro.botcancel" ] );

	var opfprefs = window.arguments[0].opffile.opfprefs;
	//preenche os combos
	document.getElementById("Baudiovolume").selectedIndex = opfprefs.AudioVolume() * 10;
	document.getElementById("BListAllVoices").checked = opfprefs.ListAllVoices();
	executar_onpreenchercombovozes("Bttsvoice");
	document.getElementById("Bnavigateauto").checked = opfprefs.NavigateAuto();
	document.getElementById("Bnoteson").checked = !opfprefs.SkipNote();
	document.getElementById("BPagOn").checked = !opfprefs.SkipPage();
	document.getElementById("Buseaudio").checked = !opfprefs.forceTTS();


	//temos que colocar o foco explicitamente ou ele manda o primeiro evento automaticamente
	//document.getElementById("Baudiovolume").focus();
	//mudança no firefox 3.6: pra funcionar, fizemos isto
	manager.ignoreNextFocus = true;
	
	//controles de foco
	var primeirocontrole = new CDlgMan_ml("Baudiovolume", document.getElementById("Labelaudiovol").value, CMsgIface.Dialog_mlextra() );
	manager.add(primeirocontrole);
	manager.add(new CDlgMan_cb("BListAllVoices", document.getElementById("BListAllVoices"), CMsgIface.Dialog_cbonmale(), CMsgIface.Dialog_cboffmale(), CMsgIface.Dialog_cbextra()) );
	manager.add(new CDlgMan_ml("Bttsvoice", document.getElementById("Labelttsvoice").value, CMsgIface.Dialog_mlextra() ));

	manager.add(new CDlgMan_cb("Bnavigateauto", document.getElementById("Bnavigateauto"), CMsgIface.Dialog_cbonfemale(), CMsgIface.Dialog_cbofffemale(), CMsgIface.Dialog_cbextra()) );
	manager.add(new CDlgMan_cb("Bnoteson", document.getElementById("Bnoteson"), CMsgIface.Dialog_cbonmale(), CMsgIface.Dialog_cboffmale(), CMsgIface.Dialog_cbextra()) );
	manager.add(new CDlgMan_cb("BPagOn", document.getElementById("BPagOn"), CMsgIface.Dialog_cbonmale(), CMsgIface.Dialog_cboffmale(), CMsgIface.Dialog_cbextra()) );
	manager.add(new CDlgMan_cb("Buseaudio", document.getElementById("Buseaudio"), CMsgIface.Dialog_cbonmale(), CMsgIface.Dialog_cboffmale(), CMsgIface.Dialog_cbextra()) );

	manager.add(new CDlgMan_but("prefslivro.botok", CMsgIface.Dialog_butok() ));
	manager.add(new CDlgMan_but("prefslivro.botcancel", CMsgIface.Dialog_butcancel() ));

	//fala as coisas
	CDlgManager_LoadedDialog(CMsgIface.EchoPrefBook() + CMsgIface.DialogLoad() + primeirocontrole.eventText() );
}

function executar_onpreenchercombovozes(oID)
{
	//tentamos preencher com as vozes com o mesmo idioma
	//se nao tiver, mostra todas as vozes
	if(executar_onpreenchercombovozes_go(oID, !document.getElementById("BListAllVoices").checked) == 0)
		executar_onpreenchercombovozes_go(oID, false);
}

function executar_onpreenchercombovozes_go(oID, matchLang)
{
	var opfprefs = window.arguments[0].opffile.opfprefs;
	var lista = document.getElementById(oID);
	lista.removeAllItems();
	var estaPref = window.arguments[0].opffile.opfprefs.VoiceTTS();
	var max = CSpeak.voicesCount();
	var ret = 0;
	for(var i = 0; i < max; i++)
	{
		var usar = true;
		if(matchLang && !document.getElementById("BListAllVoices").checked)
		{
			if(CSpeak.VoiceInLanguage(CSpeak.voiceLang(i), opfprefs._lang ) == 0)
				usar = false;
		}
		
		if(usar)
		{
			var opt = lista.appendItem(CSpeak.voiceName(i),CSpeak.voiceID(i));
			if(estaPref == CSpeak.voiceID(i))
			{
				//usamos o ret porque ele é o nro do que foi inserido
				lista.selectedIndex = ret;
			}
			ret++;
		}
	}
	
	return ret;
}

function toBool(str)
{
	if(str == true)
		return true;
	if(str == "false")
		return false;
	return true;
}

//deram um OK
function clickok()
{
	var opfprefs = window.arguments[0].opffile.opfprefs;
	var opffile = window.arguments[0].opffile;
	opfprefs.ListAllVoices_set(document.getElementById("BListAllVoices").checked);
	opfprefs.VoiceTTS_set( document.getElementById("Bttsvoice").value);
	opfprefs.AudioVolume_set( document.getElementById("Baudiovolume").value / 10 );

	opfprefs.NavigateAuto_set(document.getElementById("Bnavigateauto").checked);
	opffile.SetSkipNote(!document.getElementById("Bnoteson").checked);
	opffile.SetSkipPage(!document.getElementById("BPagOn").checked);
	opfprefs.forceTTS_set(!document.getElementById("Buseaudio").checked);
	window.arguments[0].okButton = true;
	CSpeak.forceEnd();
	window.close();
}

//deram um cancelar
function clickcancel()
{
	window.arguments[0].okButton = false;
	CSpeak.forceEnd();
	window.close();
}


//aletaram a opção de listar todas as vozes
function BListAllVoices_click(obj)
{
	var opfprefs = window.arguments[0].opffile.opfprefs;

	//se DESligaram a opção e o livro nao tem idionma identificado
	if(!document.getElementById("BListAllVoices").checked && opfprefs._lang == "")
	{
		CDialogs.WarnEscToContinue(CMsgIface.DlgPrefsBook_ListAllVOices_NoLang(), null);
		document.getElementById("BListAllVoices").checked = true;
	}
	
	//atualiza a lista de vozes
	executar_onpreenchercombovozes("Bttsvoice");

	manager.foco(obj);
}

