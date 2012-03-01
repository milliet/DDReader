/// <reference path="CmdMain.js" />

//gerencia o tutorial e a ajuda

var CTutorial = 
{

//chama o tutorial geral, e o potno dde janalda da tela do uorial
chamarTutorial:function(chavebusca)
{
	if(RunningInsideTutorial)
		return;

	//temos que calcular o endereco do tutorial
	var warningpath = "chrome://lidad/content/skin/acc/1024/Tutorial.xul";
	if(CPref.interfaceRes())
		warningpath = "chrome://lidad/content/skin/acc/800/Tutorial.xul";
	var retVals = { okButton:false, chavebusca:chavebusca };
	window.openDialog(warningpath, 'tutorial','modal,centerscreen,resizable=no', retVals);
},

//na tela do tutorial, vamos abrir o livro
AbrirLivroTutorial:function()
{
	var basefile = CUtils.GetExtensionFolder();
	basefile.append("chrome");
	basefile.append("content");
	basefile.append("lang");
	//usammos o idioma ativo na interface
	basefile.append(CPref.language());
	basefile.append("TutBook");
	basefile.append("tutorial.opf");

	//vamos abrir o arquivo
	if(!CButtons.OpenOPFbyPath("file:///" + basefile.target, false, false))
	{
		//ja demos o erro, entao tudo bem
		CDialogs.CloseApplication();
		//CSpeak.gotoStart();
		return false;
	}

	//vamos apra a home
	CButtons.clickRead();
	
	//se e so o tutorial, paramos por aqui
	if(window.arguments[0].chavebusca == null)
		return;
	if(window.arguments[0].chavebusca == "")
		return;
		
	//temos que procurar a chave de busca
	CmdMain.WaitCursorOn();
	var arr = null;
	try
	{
		arr = CFindText_buscasimples(window.arguments[0].chavebusca, CmdRead.getCurrentHTMLTree());
	}
	catch(e)
	{
		//nao fazemos nada
	}
	CmdMain.WaitCursorOff();
	
	//temos que fazer isto depois de desligar o relgio
	if(arr == null)
	{
		CDialogs.WarnEscToContinue(CMsgIface.NoHelpForMode(), null);
		return;
	}
	if(arr.length == 0)
	{
		CDialogs.WarnEscToContinue(CMsgIface.NoHelpForMode(), null);
		return;
	}

	//vamos para o primero resultado
	//se der erro, avisamos
	try
	{
		//pega a lista de marcadores
		var thismarker = arr[0];
		
		//liga a aba da leitura para mover o cursor
		CmdRead.preactivate();

		//NAO TEMOS COMO FAZER:
		//sincronizar o NCX
		//sincronizar as paginas

		//pegamos a URI
		if(thismarker.attributes)
		if(thismarker.attributes.getNamedItem)
		if(thismarker.attributes.getNamedItem("smilref"))
		if(thismarker.attributes.getNamedItem("smilref").value != "")
		{
			CmdMain.OPFGet().opffile.smils.gotoHref(thismarker.attributes.getNamedItem("smilref").value);
		}
		
		//seta o foco na letiura
		CmdRead.activate();
	
		return true;
	}
	catch(e)
	{
		throw new CExcept(CMsgIface.SearchResError(), e, null);
	}
}

//fim da variavel
}

