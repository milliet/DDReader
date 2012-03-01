var manager = new CDlgManager();

//acabaram de carregar
function finishLoad()
{
	//traduzir
	var nossolocal = new CLocale("xuls.properties");
	nossolocal.AplicarIDs( [ "lidad-IrPag", "irpag.title", "Labelpagtype", "irpag.conteudo", "LabelIrPagNum",  "irpag.botok", "irpag.botcancel" ] );


	//temos que colocar o foco explicitamente ou ele manda o primeiro evento automaticamente
	//document.getElementById("pagtype").focus();
	//mudança no firefox 3.6: pra funcionar, fizemos isto
	manager.ignoreNextFocus = true;
	
	//controles de foco
	var primeirocontrole = new CDlgMan_ml("pagtype", document.getElementById("Labelpagtype").value, CMsgIface.Dialog_mlextra(), CMsgIface.DlgIrPagOneSection());
	manager.add(primeirocontrole);

//	manager.add(new CDlgMan_cb("Bnavigateauto", document.getElementById("Bnavigateauto"), CMsgIface.Dialog_cbonfemale(), CMsgIface.Dialog_cbofffemale(), CMsgIface.Dialog_cbextra()) );

	manager.add(new CDlgMan_but("irpag.botok", CMsgIface.Dialog_butok() ));
	manager.add(new CDlgMan_but("irpag.botcancel", CMsgIface.Dialog_butcancel() ));

	//fala as coisas
	CDlgManager_LoadedDialog(CMsgIface.EchoGotopage() + CMsgIface.DialogLoad() + primeirocontrole.eventText() );


	//habilita os itens devidos
	//conteudo sempre existe
	if(window.arguments[0].frontmin >= 0)
		document.getElementById("pagtype").appendItem(CMsgIface.DlgIrPagPreface(), "front");
	if(window.arguments[0].specialmin >= 0)
		document.getElementById("pagtype").appendItem(CMsgIface.DlgIrPagApendix(), "special");

	//atualiza o texto
	pagtypeupdate(document.getElementById("pagtype"), false);
}

//deram um OK
function clickok()
{
	//vamos tentar os limites
	var typed = document.getElementById("IrPagNum").value;
	typed = parseInt(typed);
	if(isNaN(typed))
	{
		CDialogs.WarnEscToContinue(CMsgIface.DlgIrPagNumberOnly(), null);
		return false;
	}
	if(typed <= 0)
	{
		CDialogs.WarnEscToContinue(CMsgIface.DlgIrPagNumberGreaterZero(), null);
		return false;
	}
	
	//valida contra o limite especificado
	var erro = false;
	switch(document.getElementById("pagtype").value)
	{
	case "front":
		if(typed > window.arguments[0].frontmax)
			erro = true;
		break;
		
	case "special":
		if(typed > window.arguments[0].specialmax)
			erro = true;
		break;
		
	//case "normal"
	default:
		//calcula as faixas de valor
		if(typed > window.arguments[0].normalmax)
			erro = true;
		break;
	}
	if(erro)
	{
		CSpeak.forceEnd();
		document.getElementById("IrPagNum").value = "";
		document.getElementById("IrPagNum").focus();
		CSpeak.CommandEchoGo_text( CMsgIface.DlgIrPagInvalidNumber() + document.getElementById("LabelIrPagNum").value);
		return false;
	}


	//tudo certo, retornamos os valores	
	window.arguments[0].targetType = document.getElementById("pagtype").value;
	window.arguments[0].targetPage = document.getElementById("IrPagNum").value;
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

//evento no menulist
function pagtypeupdate(controle, falar)
{
	if(falar)
		manager.foco(controle);
	
	//temos que atualizar a caixa de texto
	var msg = "";
	switch(document.getElementById("pagtype").value)
	{
	case "front":
		if(window.arguments[0].frontmin >= 0)
			msg = CMsgIface.DlgIrPagFrom() + window.arguments[0].frontmin + CMsgIface.DlgIrPagTo() + window.arguments[0].frontmax;
		break;
		
	case "special":
		if(window.arguments[0].specialmin >= 0)
			msg = CMsgIface.DlgIrPagFrom() + window.arguments[0].specialmin + CMsgIface.DlgIrPagTo() + window.arguments[0].specialmax;
		break;
		
	//case "normal"
	default:
		//calcula as faixas de valor
		if(window.arguments[0].normalmin >= 0)
			msg = CMsgIface.DlgIrPagFrom() + window.arguments[0].normalmin + CMsgIface.DlgIrPagTo() + window.arguments[0].normalmax;
		break;
	}
	msg = CMsgIface.DlgIrPagTypePage() + msg + ":";
	document.getElementById("LabelIrPagNum").value = msg;
}

function IrPagNumchange(event)
{
	var txt = document.getElementById("IrPagNum").value;
	var newtxt = "";
	//se tiver alguma coisa que nao for numero, da erro
	var erro = false;
	for(var i = 0; i < txt.length; i++)
		if(txt.charAt(i) < "0" || txt.charAt(i) > "9")
			erro = true;
		else
			newtxt += txt.charAt(i);
	
	if(erro)
	{
		//document.getElementById("IrPagNum").value = newtxt;
		//colocamos o texto vazio
		document.getElementById("IrPagNum").value = "";
		
		var msg = CMsgIface.DlgIrPagInvalidKeyNum();
		var msg2 = CMsgIface.DlgIrPagInvKey() + CSpellMsg.SpellText(txt.charAt(txt.length - 1) ) + CMsgIface.DlgIrPagKeyNumberOnly();
		CDialogs.WarnEscToContinue(msg, msg2);
	}
	else
	{
		//eco de digitacao
		CSpeak.echotyping( CSpellMsg.SpellText(txt.charAt(txt.length - 1) ) );
	}
}

//nos tratamos o foco
function IrPagNumfocus()
{
	CSpeak.forceEnd();
	CSpeak.CommandEchoGo_text( document.getElementById("LabelIrPagNum").value);
}

