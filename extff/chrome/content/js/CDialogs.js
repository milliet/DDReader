/*
quando precisa mostrar alguma mensagem para o usuário
*/


//singleton
function _CDialogs()
{
}

//para acessar as funcoes estaticas
var CDialogs = new _CDialogs();

//retornos possiveis
_CDialogs.prototype.Continue = 1;
_CDialogs.prototype.RetryWithTTS = 2;

//para fechar o aplicativo
_CDialogs.prototype.CloseApplication = function()
{
	try
	{
		CSpeak.forceEnd();
	}
	catch(e)
	{
		//ignoramos erros
	}
	
	//vamor fechar o aplicativo....
	//document.location = "about:blank";
	//se fizer sem timeout e der erro durante a carga, da uns erros estranhos de javascript
	setTimeout("window.close();", 100);
}


//mensagem fatal (mostrar a mensagem e fechar a extensao)
_CDialogs.prototype.FatalError_exception = function(exc)
{
	alert(exc.toString() + CMsg.ApplicationWillClose());
	this.CloseApplication();
}

//mostra a mensagem e continua
_CDialogs.prototype.WarnEscToContinue = function(exc, speak)
{
	//mostra o aviso na tela, o cara usa ESC para continuar
	if(speak == null)
		speak = exc.toString();
	speak = speak.toString() + CMsg.EscToContinue();
	exc = exc.toString();
	CSpeak.forceEnd();

	var retVals = { screen:exc, speak: speak, audio: null, lang: CPref.language() };
	//quando tivermos mais interfaces, temos que calcular a localizacao do WARNING.XUL
	var warningpath = 'chrome://lidad/content/skin/acc/dlg/Warning.xul';
	try
	{
		if(CPref.skin_visual())
			warningpath = 'chrome://lidad/content/skin/visual/dlg/Warning.xul';
	}
	catch(e)
	{
		warningpath = 'chrome://lidad/content/skin/acc/dlg/Warning.xul';
	}

	if(! (typeof RunningInsideInstaller == "undefined") )
	if(RunningInsideInstaller != null)
	if(RunningInsideInstaller)
		warningpath = 'Warning.xul';
	window.openDialog(warningpath,'Warning','modal,centerscreen,resizable=no', retVals);
}


//mostra a mensagem e continua
_CDialogs.prototype.WarnEscToContAudio = function(exc, audio)
{
	//mostra o aviso na tela, o cara usa ESC para continuar
	exc = exc.toString();
	CSpeak.forceEnd();

	var retVals = { screen:exc, speak: "", audio: audio };
	//quando tivermos mais interfaces, temos que calcular a localizacao do WARNING.XUL
	var warningpath = 'chrome://lidad/content/skin/acc/dlg/Warning.xul';

	if(! (typeof RunningInsideInstaller == "undefined") )
	if(RunningInsideInstaller != null)
	if(RunningInsideInstaller)
		warningpath = 'Warning.xul';
	window.openDialog(warningpath,'Warning','modal,centerscreen,resizable=no', retVals);
}


//faz um log da mensagem (deu alguma coisa errada, mas podemos continuar na boa)
//em uma versao futura, podeiramos guardar isto em algum lugar e mandar para a gente
_CDialogs.prototype.LogMessage = function(exc)
{
	this.WarnEscToContinue(exc.toString());
}


//mostra a mensagem com opção para continuar com o livro atual ou para abrir outro livro
_CDialogs.prototype.Error_ContinueOrOpenotherbook = function(exc)
{
	this.Error_ContinueOrCloseapplication(exc);
}

//mostra a mensagem com opção para continua ou fechar o aplicativo
_CDialogs.prototype.Error_ContinueOrCloseapplication = function(exc)
{
	//pedir o que o cara quer
	
	// get a reference to the prompt service component.
	var promptService = Components.classes["@mozilla.org/embedcomp/prompt-service;1"]
						.getService(Components.interfaces.nsIPromptService);

	// set the buttons that will appear on the dialog. It should be
	// a set of constants multiplied by button position constants. In this case,
	// three buttons appear, Save, Cancel and a custom button.
	var flags=promptService.BUTTON_TITLE_IS_STRING * promptService.BUTTON_POS_0 +
			  promptService.BUTTON_TITLE_IS_STRING * promptService.BUTTON_POS_1;

	// display the dialog box. The flags set above are passed
	// as the fourth argument. The next three arguments are custom labels used for
	// the buttons, which are used if BUTTON_TITLE_IS_STRING is assigned to a
	// particular button. The last two arguments are for an optional check box.
	var status = promptService.confirmEx(window,CMsg.ApplicationError(),
	  exc.toString(),
	  flags, CMsg.ApplicationContinue(), CMsg.ApplicationEnd(), null, null, {});

	//se for para fechar o aplicativo, fechamos
	if(status == 1)
		this.CloseApplication();
}


//erro no sistema de audio.
//pode terminar:
// Continue, fechar o aplicativo por aqui mesmo, RetryWithTTS 
_CDialogs.prototype.ErrorOnAudio_CTextItem = function(hasTTS, msg)
{
	// get a reference to the prompt service component.
	var promptService = Components.classes["@mozilla.org/embedcomp/prompt-service;1"]
						.getService(Components.interfaces.nsIPromptService);

	// set the buttons that will appear on the dialog. It should be
	// a set of constants multiplied by button position constants. In this case,
	// three buttons appear, Save, Cancel and a custom button.
	var flags=promptService.BUTTON_TITLE_IS_STRING * promptService.BUTTON_POS_0 +
			  promptService.BUTTON_TITLE_IS_STRING * promptService.BUTTON_POS_2 +
			  promptService.BUTTON_TITLE_IS_STRING * promptService.BUTTON_POS_1;

	// display the dialog box. The flags set above are passed
	// as the fourth argument. The next three arguments are custom labels used for
	// the buttons, which are used if BUTTON_TITLE_IS_STRING is assigned to a
	// particular button. The last two arguments are for an optional check box.
	var status = promptService.confirmEx(window,CMsg.ApplicationError(),
	  msg.toString(),
	  flags, CMsg.UseTTSOnSession(), CMsg.ApplicationContinue(), CMsg.ApplicationEnd(), null, {});

	//se for para fechar o aplicativo, fechamos
	if(status == 2)
		this.CloseApplication();

	//usar TTS
	if(status == 0)
		return this.RetryWithTTS;

	//continuar		
	return this.Continue;
}

//retorna uma string com o nome de arquivo selecionado, ou null se nao escolheu nada
//seleciona somente arquivos locais
_CDialogs.prototype.SelectOPF = function()
{
	var nsIFilePicker = Components.interfaces.nsIFilePicker;
	var fp = Components.classes["@mozilla.org/filepicker;1"].createInstance(nsIFilePicker);
	fp.init(window, CMsg.ChooseFileToOpne(), nsIFilePicker.modeOpen);
	fp.appendFilter(CMsg.OPFFIles(),"*.opf");
	var res = fp.show();
	if (res != nsIFilePicker.returnOK)
		return null;

	var re = new RegExp("\\\\", "g");
	return "file:///" + fp.file.path.replace( re ,"/");
}


