//gerencia os .properties, lendo do local correto

function CLocale(nomearquivo)
{
	this.nomearquivo = nomearquivo;
	this.darerro = true;
}

CLocale.prototype.nomearquivo = "";	//onde está o arquivo
CLocale.prototype.nossobundle = null;	//o nosso bundle de mensagens
CLocale.prototype.nossofallback = null;	//o nosso bundle de mensagens

CLocale.prototype.PegarTexto = function(chave)
{
	if(this.nossobundle == null)
	{
		var SBS = Components.classes["@mozilla.org/intl/stringbundle;1"].getService(Components.interfaces.nsIStringBundleService);
		//para debugar mais facil
		if(CPref.debugLocalization() && this.darerro)
			SBS.flushBundles();

		var noinstaladro = false;
		if(! (typeof RunningInsideInstaller == "undefined") )
		if(RunningInsideInstaller != null)
		if(RunningInsideInstaller)
			noinstaladro = true;
		if(noinstaladro)
			this.nossobundle = SBS.createBundle("chrome://ddrinstaller/content/lang/" + CPref.language() + "/props/" + this.nomearquivo);
		else
			this.nossobundle = SBS.createBundle("chrome://lidad/content/lang/" + CPref.language() + "/props/" + this.nomearquivo);
	}

	//vamos pegar a mensagem
	//se der erro, pegamos em pt-br
	try
	{
		return this.nossobundle.GetStringFromName(chave);
	}
	catch(e)
	{
		//deu erro....
		if(CPref.debugLocalization() && this.darerro)
		{
			//repassamos o erro
			CDialogs.WarnEscToContinue("Erro interno na localização: falta chave " + chave + " em " + this.nomearquivo, null);
		}
	}
	
	//deu erro...
	//vamos pegar de pt-br
	if(this.nossofallback == null)
	{
		SBS = Components.classes["@mozilla.org/intl/stringbundle;1"].getService(Components.interfaces.nsIStringBundleService);
		//para debugar mais facil
		if(CPref.debugLocalization() && this.darerro)
			SBS.flushBundles();
		this.nossofallback = SBS.createBundle("chrome://lidad/content/lang/pt-br/props/" + this.nomearquivo);
	}

	//agora, se der excecao, nao tem jeito nao....
	if(this.darerro)
		return this.nossofallback.GetStringFromName(chave);
	//nao vamos dar erro nao...
	try
	{
		return this.nossofallback.GetStringFromName(chave);
	}
	catch(e)
	{
	}
	return "";
}

//aplica as traducoes em um XUL
CLocale.prototype.AplicarIDs = function(arr)
{
	for(var i = 0; i < arr.length; i++)
	{
		//se der erro em algum, ignoramos
		try
		{
			var item = document.getElementById(arr[i]);
			switch( item.tagName)
			{
				case "label":
				case "textbox":
					item.value = this.PegarTexto(arr[i]);
					break;

				case "button":
				case "menuitem":
				case "checkbox":
				case "prefpane":
					item.label = this.PegarTexto(arr[i]);
					break;

				case "window":
				case "dialog":
				case "prefwindow":
					//este nao funciona!
					//item.title = this.PegarTexto(arr[i]);
					
					//é deste jeito....
					window.document.title = this.PegarTexto(arr[i]);
					break;

				default:
					if(CPref.debugLocalization())
						CDialogs.WarnEscToContinue("Sem tag de localização de xul: " + item.tagName, null);
					//tentamos, fazer o que....
					item.value = this.PegarTexto(arr[i]);
					break;
			}
		}
		catch(e)
		{
			if(CPref.debugLocalization() && this.darerro)
				CDialogs.WarnEscToContinue("Erro interno na localização de xul: " + e.toString() + arr[i], null);
		}
	}
}


