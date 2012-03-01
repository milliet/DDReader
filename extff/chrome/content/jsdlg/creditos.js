//acabaram de carregar
function finishLoad()
{
	var nossolocal = new CLocale("xuls.properties");
	nossolocal.AplicarIDs( [ "lidad-credits", "creditos.botcancel" ] );

	//fala as coisas
	CDlgManager_LoadedDialog("");


	//calcular o camonio do creditos.html em funcao do idioma
	document.getElementById("creditos").contentDocument.location  = "../../lang/" + CPref.language() + "/creditos/creditos.htm";


	//passa o texto
	//document.getElementById("texto").value = window.arguments[0].screen;
	setTimeout( function() {
		try
		{
			document.getElementById("creditos").contentDocument.getElementById("ReleaseTexto").textContent = CMsg.ReleaseTexto();
		}
		catch(e)
		{
		}
	}, 100);
	
	var txtaudio = CMsgIface.DlgCreditosSpeak1();
	for(var i = 0; i < CMsg.ReleaseTexto().length; i++)
		txtaudio += CMsg.ReleaseTexto()[i] + " ";
	txtaudio += CMsgIface.DlgCreditosSpeak2();
	var msg = new CTextItem();
	msg.SetText_string(txtaudio);
	CSpeak.playItem(msg, null);
}

//deram um cancelar
function clickcancel()
{
	CSpeak.forceEnd();
	window.close();
	return true;
}

