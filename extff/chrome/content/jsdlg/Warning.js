//acabaram de carregar
function finishLoad()
{
	var nossolocal = new CLocale("xuls.properties");
	nossolocal.darerro = false;
	nossolocal.AplicarIDs( [ "lidad-warning", "warning.title", "warning.botcancel" ] );

	//fala as coisas
	CDlgManager_LoadedDialog("");


	//passa o texto
	document.getElementById("texto").value = window.arguments[0].screen;
	if(window.arguments[0].audio == null)
	{
		var msg = new CTextItem();
		msg.SetText_string( window.arguments[0].speak);
		CSpeak.playItem(msg, null);
	}
	else
	{
		CSpeak.PlayExtraAudioLocale(window.arguments[0].audio);
	}
}

//deram um cancelar
function clickcancel()
{
	CSpeak.forceEnd();
	window.close();
	return true;
}

