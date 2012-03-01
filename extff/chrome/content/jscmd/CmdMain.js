/// <reference path="CButtons.js" />
/// <reference path="CTools.js" />
/// <reference path="CKeys.js" />
/// <reference path="CmdHist.js" />
/// <reference path="CmdNcx.js" />
/// <reference path="CmdInfo.js" />
/// <reference path="CmdLibNdx.js" />
/// <reference path="CmdRead.js" />
/// <reference path="CmdSplash.js" />
/// <reference path="CMsgIface.js" />
/// <reference path="COPFControl.js" />

//controle principal

/*
todos os controladores de modo (CmdXXX) tem que implementar:
activate(): ativa esse modo
update(): atualiza os dados na tela
*/

function timeout_cmdmain_tfc()
{
	CmdRead.TextfileChanged(CmdMain.OPFGet().opffile.texts);
}

function timeout_cmdmain_ifncx()
{
	if(CmdNcx._currentNodeItem)
		CmdNcx._currentNodeItem.scrollIntoView(false); 
}

var CmdMain = 
{

//terminou de carregar a pagina
//norte que chama varias vezes, colocamos uma protecao para so executar na primeira
_loadeventdone: false,

//para incializar a tela
loadevent:function()
{
	if(erroGeralBloquearTudo)
		return;
		
	if(this._loadeventdone)
		return;
	this._loadeventdone = true;
	
	this.RestaurarFocoMain();

	this.TraduzirInterface();

	CUtilsTimeout_inicial();

	//para gerenciar o foco junto com o nivel
	//quando clica no nivel, a janela principal perde o foco
	//este ja esta no xul: window.onblur = CmdMain.blurevent;
	window.onfocus = CDlgMan_focus.gotfocus;

	if(!RunningInsideExercises)
		document.getElementById("toolNivel").onfocus = CDlgMan_focus.gotfocus;
	CDlgMan_focus.setCallback(this.restoredFocus);

	//se nao existir o diretorio dos meus livros, cria ele
	CUtils.GetDocumentsFolder();
	
	
	//cria nossa entrada no registro
	//se der erro, ignoramos homericamente
	try
	{
		CUtilRegEnsure("SOFTWARE\\Caracol\\DDR", "CurrentRelease", CMsg.ReleaseTexto());
		CUtilRegEnsure("SOFTWARE\\Caracol\\DDR", "CurrentVersion", CMsg.VersaoTexto());
		
		//local do launcher
		var fp = CUtils.GetExtensionFolder();
		fp.append("chrome");
		fp.append("content");
		fp.append("launcher.xul");
		CUtilRegEnsure("SOFTWARE\\Caracol\\DDR", "CurrentPath", fp.path);
	}
	catch(e)
	{
		//ignoramos errors
	}

	//inicializa o historico
	if(!RunningInsideTutorial && !RunningInsideExercises)
		CHist.initializeHist();
	if(!RunningInsideExercises)
		CmdHist.initializehist();
	//e as ferramentas
	CTools.initializetools();

	//limpa o nro de pagina
	if(!RunningInsideTutorial && !RunningInsideExercises)
	{
		document.getElementById("PageNum").value = "";
		this.updateSkipPageStatus();
		this.updateSkipNoteStatus();
	}
	
	if(!RunningInsideExercises)
		CTools.changeLevelTo(CPref.defaultlevel(), false);
	if(!RunningInsideTutorial && !RunningInsideExercises)
		this.checkMarkerIndicator();
	
	//acerta o tamanho da fonte
	this.UpdateFontSize();
	
	//velocidade do TTS
	CSpeak.setTTSSpeed(CPref.voice_speed());
	
	//volumes
	CSpeak.setVolTTS(CPref.voice_volume());
	CSpeak.setVolAudioSystem(CPref.audio_volume());
	CSpeak.setVolAudioBook(CPref.audio_volume());
	CTools.updateVolumes();
	
	//comecamos a falar nosso blablabla, se nao tiver eco de comando (se tiver, o CdmSplash já faz)
	if(RunningInsideTutorial)
	{
		//falamos o blablabla do tutorial, tipo esc para fechar
		setTimeout(  function() {
			//desligsamos a aba de marcadores
			var home = document.getElementById("livro").contentDocument;
			var aba = home.getElementById("AbreMarcadoresLivro");
			aba.style.visibility = "hidden";

			CTutorial.AbrirLivroTutorial();
			CSpeak.CommandEchoGo_text(CMsgIface.WelcomeTutorial());
			
			//tem que ser por timeout.... nao pergunte porque.....
			//para a interface visual: tirar o livro
			
			//olha, nao sei pq esta com timeout, mas mantivemos o timeout
			//so mudamos o elemento que controla o foco, entoa usamos a rotina
			//setTimeout("document.getElementById('livro').focus();", 1);
			setTimeout( function() { CmdMain.RestaurarFocoMain(); },1 );
		}, 1);
	}
	else
	{
		//vamos ver o idioma da voz
		//se a voz atual nao tiver idioma da interface, avisamos
		try
		{
			CSpeak.setVoice(CPref.voice_system());

			//20110404: se o cara estava usando sapi4, avisamos que nao tem mais suporte
			if(CPref.warn_sapi4_previouslyselected)
			{
				CPref.warn_sapi4_previouslyselected = false;
				CDialogs.WarnEscToContAudio(CMsgIface.mainSapi4Unsupported(), "sapi4uns.mp3");
				//e continuamos, vamos ver se a voz atomaticamente selecionada está no idioma certo
			}
			
			var atual = CSpeak.getVoiceID();
			var voiceLang = "";
			for(var i = 0; i < CSpeak.voicesCount(); i++)
			{
				if(CSpeak.voiceID(i) == atual)
				{
					voiceLang = CSpeak.voiceLang(i);
					break;
				}
			}
			if(CSpeak.VoiceInLanguage(voiceLang, CPref.language() ) == 0)
				CDialogs.WarnEscToContAudio(CMsgIface.mainNoVoiceInLanguage(), "nottslang.mp3");
		}
		catch(e)
		{
			//ignoramos errors
		}

		//tratar parametro da linha de comanod
		if(document.location.search.indexOf("CDRUN=1") >= 0)
		{
			setTimeout( function() { if(CPref.fullscreen()) window.fullScreen = true; CmdMain.ProcessarCDRUN() }, 1);
		}
		
		//vai para o splash
		if(!RunningInsideExercises)
		{
			CmdSplash.update();
			CmdSplash.activate();
			CmdMain.RestaurarFocoMain();
		}
		else
		{
			if(!this.LoadExercicios())
			{
				CDialogs.WarnEscToContinue(CMsgIface.ExerciseErrorLoading());
				//temos que fechar a tela
				window.close();
			}
		}

		if(!RunningInsideExercises)
		if(!CPref.echocommands())
			CSpeak.CommandEchoGo_localaudio("welcome.mp3");

	}

},

//loadevento do exercicio, retorna false se deu erro (e nao dá mensagem nenhuma)
LoadExercicios:function()
{
	//vamos abrir os dois livros de exercícios
	try
	{
		CmdMain.WaitCursorOn();

		/*
		parametros dos argumentos:
			exercisesBasePath: path base dos exercicios (tipo c:\onde esta o livro\exerc)
			exercisesIDexercise: ID do exercicio
			opfprefs_livro_exercicios: preferencias do livro
			*/
		
		var thisopf = new COPFControExercise(
			window.arguments[0].exercisesBasePath, 
			window.arguments[0].exercisesIDexercise,
			window.arguments[0].opfprefs_livro_exercicios);
		if(thisopf.opffile.errorDuringLoad)
		{
			//deu erro na carga
			CmdMain.WaitCursorOff();
			return false;
		}
		CmdMain.OPFSet(thisopf);
	}
	catch(e)
	{
		//se deu erro, avisamos
		CmdMain.WaitCursorOff();
		return false;
	}
	
	
	//vamos para a tela de leitura
	CmdRead.activate();
	this.OPFGet().OPFControExerBodyInstance.opffile.smils.gotoStart();
	this.OPFGet().opffile.smils.gotoStart();
	CmdMain.WaitCursorOff();
	CmdRead.ExerciseFinishedLoading();
	return true;
},

ProcessarCDRUN:function()
{
	CSpeak.forceEnd();

	//chamamos a caixa de dialogo
	var retVals = { okButton:false };
	window.openDialog('../dlg/AskCD.xul','AskCD','modal,centerscreen,resizable=no', retVals);
	if(!retVals.okButton)
	{
		CSpeak.forceEnd();
		CSpeak.CommandEchoGo_localaudio("welcome.mp3");
		return;
	}
	
	/*
	afazer: linha de comando do autorun
	quando a gente usa a linha de comando
	"D:\Arquivos de programas\Mozilla Firefox\firefox.exe" -chrome chrome://lidad/content/launcher.xul?CDRUN=1&ORIGEM=X:\copia_do_cd\install
	o firfox nao mostra as imagens dos livros porque tem uma / ou \ no parametro do xul
	solucao: codificamos / para %2F e \ para %5C no atalho.exe e decodificamos aqui
	*/
	var retVals = { okButton:false, path: "", 
		basepath:document.location.search.substr(document.location.search.indexOf("ORIGEM=") + 7) + "\\..",
		rodandoDaTelaInicial:true, nenhumArquivo:false
		};
	window.openDialog('../dlg/OpenSearch.xul','OpenSearch','modal,centerscreen,resizable=no', retVals);
	if(retVals.nenhumArquivo)
	{
		//nao encontramos opf
		CDialogs.WarnEscToContinue(CMsgIface.NoOPFinCD(), null);
		CSpeak.CommandEchoGo_localaudio("welcome.mp3");
		return;
	}

	if(!retVals.okButton)
	{
		//fala o]a opcao de novo
		if(!CPref.echocommands())
			CSpeak.CommandEchoGo_localaudio("welcome.mp3");
		return;
	}

	//vamos abrir o arquivo
	if(!CButtons.OpenOPFbyPath(retVals.path, true, true))
		return;


	//ue, ja abriu o livro, nao faemos nada
	CSpeak.CommandEchoGo_localaudio("welcome.mp3");
},


TraduzirInterface:function()
{
	//traduzimos	
	var nossolocal = new CLocale("xuls.properties");
	if(RunningInsideTutorial)
	{
		nossolocal.AplicarIDs( [ "janela", "LidaD.volttsLABEL", "LidaD.volsndLABEL", 
"LidaD.veloLABEL", "LidaD.nivel1", "LidaD.nivel2", "LidaD.nivel3", 
"LidaD.nivel4", "LidaD.nivel5", "LidaD.nivel6" ] );
	}

	if(RunningInsideExercises)
	{
	//exerciciopendente msg localizacao do exercicio, do exerc.xul
		nossolocal.AplicarIDs( [ "janela", "LidaD.volttsLABEL", "LidaD.volsndLABEL", 
"LidaD.veloLABEL" /*, "LidaD.nivel1", "LidaD.nivel2", "LidaD.nivel3", 
"LidaD.nivel4", "LidaD.nivel5", "LidaD.nivel6" */ ] );
	}

	if(!RunningInsideTutorial && !RunningInsideExercises)
	{
		nossolocal.AplicarIDs( [ "janela", "LidaD.ButHome", "LidaD.ButHome2", "LidaD.ButAbrir", "LidaD.ButIndex", "LidaD.ButLer", 
"LidaD.ButMarker", "LidaD.ButBiblio", "LidaD.ButBiblio2", "LidaD.ButPrefsGlobal", 
"LidaD.ButPrefs", "LidaD.ButPrefs2", "LidaD.ButBusca", "LidaD.ButHelp", 
"LidaD.ButUpdate", "LidaD.ButWeb", "LidaD.ButFale", "LidaD.ButExport", 
"LidaD.ButAbout", "LidaD.ButClose", "LidaD.volttsLABEL", "LidaD.volsndLABEL", 
"LidaD.veloLABEL", "LidaD.nivel1", "LidaD.nivel2", "LidaD.nivel3", 
"LidaD.nivel4", "LidaD.nivel5", "LidaD.nivel6", "LidaD.ButGoToPage", 
"LidaD.ButReadPage", "LidaD.ButIndNote", "LidaD.ButIndMark" ] );
	}
	
	
	//localizacoes em htmls
	CSkin.TraduzirInterface(nossolocal);
},

//coloca o foco no nosso elemento base
RestaurarFocoMain:function()
{
	CSkin.RestaurarFocoSkin();
	CDlgMan_focus.gotfocus();
},

//restauraram o foco, vamos vvoltar a falar
restoredFocus:function()
{
	//vamos avisar onde o cara estava
	var msg = CMsgIface.ReturnedGeneral();
	if(CmdMain.getMode() == CmdHist)
		msg = CMsgIface.ReturnedCmdHist();
	if(CmdMain.getMode() == CmdInfo)
		msg = CMsgIface.ReturnedCmdInfo();
	if(CmdMain.getMode() == CmdMarks)
		msg = CMsgIface.ReturnedCmdMarks();
	if(CmdMain.getMode() == CmdNcx)
		msg = CMsgIface.ReturnedCmdNcx();
	if(CmdMain.getMode() == CmdRead)
		msg = CMsgIface.ReturnedCmdRead();
	if(CmdMain.getMode() == CmdSearchRes)
		msg = CMsgIface.ReturnedCmdSearchRes();
	if(CmdMain.getMode() == CmdSplash)
		msg = CMsgIface.ReturnedCmdSplash();
	
	CSpeak.gotoStart();
	CSpeak.CommandEchoGo_text(msg);
},

//perdemos o foco
blurevent:function()
{
	CDlgMan_focus.lostfocus();
},

closeevent:function()
{
	//paramos de falar
	CSpeak.forceEnd();
},

//o COPFControl ativo
_currentOPF: null,

//fecha um livro
OPFClear:function()
{
	if(!this.OPFpresent())
		return;
		
	//limpa o livro
	this._currentOPF = null;
	
	//limpa as telas
	CmdRead.clear();
	CmdNcx.clear();
	CmdMarks.clear();

	//limpa o nro de pagina
	if(!RunningInsideTutorial && !RunningInsideExercises)
	{
		document.getElementById("PageNum").value = "";
		this.updateSkipPageStatus();
		this.updateSkipNoteStatus();
	
		this.checkMarkerIndicator();
	}
},

//manipular o opf
OPFSet:function(opf)
{
	//fecha o livro
	this.OPFClear();
	
	//slava o atual
	this._currentOPF = opf;
	
	//habilita os botoes que devem estar ativos
	CSkin.HabilitarBotoesLivro();

	//atualiza as infs da tela inicial
	CmdInfo.update();
	
	//o texto é atualizado via eventos proprios, quando move o destaque
	//o titulo é atualizado agora
	CmdRead.update();
	
	//atualizar o NCX 
	CmdNcx.update();
	//mostra o indice
	CSkin.CmdNcx_activate();
	
	//atualiza a lista de marcadores
	CmdMarks.update();
	
	//limpa o resultado da busca
	CmdSearchRes.clear();

	//acerta o nro de pagina
	if(!RunningInsideTutorial && !RunningInsideExercises)
	{
		if(!this._currentOPF.opffile.ncx.HasPageTargets())
		{
			//limpa o nro de pagina
			document.getElementById("PageNum").value = "";
		}
		else
		{
			//atualiza o nro da pagina
			document.getElementById("PageNum").value = this._currentOPF.opffile.ncx.GetCurrentPageAsText();
		}
	}

	//vai para o ultimo ponto de leitura
	this.OPFGet().opffile.gotoLastMark();

	//atualiza o nivel	
	CTools.changeLevelTo(this._currentOPF.opffile.GetCurrentLevel(), false);

	//seta o volume do audio
	CSpeak.setVolAudioBook(this._currentOPF.opffile.opfprefs.AudioVolume());
	CTools.updateVolumes();
	
	//lemos o status do skippalbe da pagina, que é salvo na configuracao do livro
	this.updateSkipPageStatus();
	this.updateSkipNoteStatus();
	this.checkMarkerIndicator();
	
	//zera o controle de chaveamonto automatico de tts
	CSpeak._forceTTS = false;
},

//retornar o opf
OPFGet:function()
{
	return this._currentOPF;
},

//tem opf?
OPFpresent:function()
{
	if(this._currentOPF == null)
		return false;
	return true;
},


//retorna um CTextArray
//se nao tiver a informacao, retorna com o texto "nao informado"
OPFGetMeta:function(tag, nullIfEmpty)
{
	var lista;
	if(this.OPFpresent())
	{
		var lista = this._currentOPF.opffile.GetMedata(tag);
		if(lista.CTIarray.length != 0)
			return lista;
		if(nullIfEmpty)
			return null;
	}
		
	//a informacao nao existe
	lista = new CTextArray();
	var item = new CTextItem();
	item.SetText_string( CMsgIface.NotAvailable());
	lista.CTIarray.push(item);

	return lista;
},

//o modo atual
_currentMode:null,

//seta o modo atual
setMode:function(mode)
{
	this._currentMode = mode;
},

//le o modo atual
getMode:function()
{
	return this._currentMode;
},

//mudaram a pagina, temos que atualizar
NCXPageChangedItem:function(ncx)
{
	if(!RunningInsideTutorial && !RunningInsideExercises)
		document.getElementById("PageNum").value = ncx.GetCurrentPageAsText();
},

//mudou o texto, verifica se o indicador de anotaçãop precisa de atualização
checkMarkerIndicator:function()
{
	if(RunningInsideTutorial)
		return;
	if(RunningInsideExercises)
		return;

	//se está desligado, nao fazemos muita coisa....
	if(!CPref.bookmarkbeep())
	{
		document.getElementById("indMark").image = "img/indMarkOff.gif";
		return;
	}
	
	
	if(!this.OPFpresent())
	{
		//nao tem livro carregado
		//colocamos o icone de ligado sem marcador
		document.getElementById("indMark").image = "img/indMark.gif";
		return;
	}
	
	//vamos ver se tem marcaodr no ponto atual
	var uri = CmdMain.OPFGet().opffile.smils.GetCurrentURIMark();
	var mark = CmdMain.OPFGet().opffile.marks.getBookmarkByURI(uri);
	if(mark == null)
		document.getElementById("indMark").image = "img/indMark.gif";
	else
		document.getElementById("indMark").image = "img/indMarkOn.gif";
},

//mover para pagina
gotoPageNext:function()
{
	//se nao tem livro aberto, retorna
	if(!this.OPFpresent())
	{
		CmdMain.ShowWarn(CMsgIface.NoBookOpen());
		return;
	}

	//se for o dicionario, vamos para a proxima class verbete
	if(!this._currentOPF.opffile.thisIsDictionary())
	{
		//nao é dicionario, processamento normal
		if(!this._currentOPF.opffile.ncx.HasPageTargets())
		{
			CmdMain.ShowWarn(CMsgIface.BookHasNoPages());
			return;
		}
		
		if(!this._currentOPF.opffile.ncx.GotoPageNext())
		{
			CmdMain.ShowWarn(CMsgIface.BookLastPage());
			return;
		}

		//paramos de falar
		CSpeak.stopAndClear();

		//liga a aba da leitura para mover o cursor
		CmdRead.preactivate();

		//manda o smil se mover
		var href = CmdMain.OPFGet().opffile.ncx.GetCurrentNCXPageEntryContentSrc();
		CmdMain.OPFGet().opffile.smils.gotoHref(href);

		//seta o foco na letiura
		CmdRead.activate();
	}
	else
	{
		//paramos de falar
		CSpeak.stopAndClear();

		//liga a aba da leitura para mover o cursor
		CmdRead.preactivate();

		//é dicionario, processamento diferente
		if(this._currentOPF.opffile.smils.gotoNextWithClass("verbete"))
		{
			//seta o foco na letiura
			CmdRead.activate();
		}
	}
},

//mover para pagina
gotoPagePrev:function()
{
	//se nao tem livro aberto, retorna
	if(!this.OPFpresent())
	{
		CmdMain.ShowWarn(CMsgIface.NoBookOpen());
		return;
	}
	//se for o dicionario, vamos para a proxima class verbete
	if(!this._currentOPF.opffile.thisIsDictionary())
	{
		//nao é dicionario, processamento normal
		if(!this._currentOPF.opffile.ncx.HasPageTargets())
		{
			CmdMain.ShowWarn(CMsgIface.BookHasNoPages());
			return;
		}
		
		if(!this._currentOPF.opffile.ncx.GotoPagePrev())
		{
			CmdMain.ShowWarn(CMsgIface.BookFirstPage());
			return;
		}

		//paramos de falar
		CSpeak.stopAndClear();
		
		//liga a aba da leitura para mover o cursor
		CmdRead.preactivate();

		//manda o smil se mover
		var href = CmdMain.OPFGet().opffile.ncx.GetCurrentNCXPageEntryContentSrc();
		CmdMain.OPFGet().opffile.smils.gotoHref(href);

		//seta o foco na letiura
		CmdRead.activate();
	}
	else
	{
		//é dicionario, processamento diferente
		//paramos de falar
		CSpeak.stopAndClear();

		//liga a aba da leitura para mover o cursor
		CmdRead.preactivate();

		//é dicionario, processamento diferente
		if(this._currentOPF.opffile.smils.gotoPreviousWithClass("verbete"))
		{
			//seta o foco na letiura
			CmdRead.activate();
		}
	}
	
},

//chavear leitura de pagina
clickIndPage:function()
{
	//se nao tiver livro, nao vamos
	if(!CmdMain.OPFpresent())
	{
		CmdMain.ShowWarn(CMsgIface.NoBookOpen());
		return;
	}

	//se nao tiver pagnas, avisamos
	if(!CmdMain.OPFGet().opffile.ncx.HasPageTargets())
	{
		CmdMain.ShowWarn(CMsgIface.BookHasNoPages());
		return;
	}

	//invertemos o status
	if(this._currentOPF.opffile.GetSkipPage())
	{
		this._currentOPF.opffile.SetSkipPage(false);
		CSpeak.CommandEcho_text(CMsgIface.EchoPageON());
	}
	else
	{
		this._currentOPF.opffile.SetSkipPage(true);
		CSpeak.CommandEcho_text(CMsgIface.EchoPageOff());
	}
	this.updateSkipPageStatus();
},

//chavear indicador de marcador
clickIndMark:function()
{
	//inverte a confiugração global
	if(CPref.bookmarkbeep())
	{
		CPref.bookmarkbeep_set(false);
		CSpeak.CommandEcho_text(CMsgIface.EchoMarkOff());
	}
	else
	{
		CPref.bookmarkbeep_set(true);
		CSpeak.CommandEcho_text(CMsgIface.EchoMarkOn());
	}
		
	//atualiza o marcador
	this.checkMarkerIndicator();
},

//chavear leitura de notas
clickIndNote:function()
{
	//se nao tiver livro, nao vamos
	if(!CmdMain.OPFpresent())
	{
		CmdMain.ShowWarn(CMsgIface.NoBookOpen());
		return;
	}

	//invertemos o status
	if(this._currentOPF.opffile.GetSkipNote())
	{
		this._currentOPF.opffile.SetSkipNote(false);
		CSpeak.CommandEcho_text(CMsgIface.EchoNoteON());
	}
	else
	{
		this._currentOPF.opffile.SetSkipNote(true);
		CSpeak.CommandEcho_text(CMsgIface.EchoNoteOff());
	}
	this.updateSkipNoteStatus();
},

updateSkipPageStatus:function()
{
	if(RunningInsideTutorial)
		return;
	if(RunningInsideExercises)
		return;

	if(!this.OPFpresent())
	{
		document.getElementById("indReadPage").image = "img/ReadPageOff.gif";
		return;
	}
	
	//atualizamos o status do skippalbe da pagina
	if(this._currentOPF.opffile.GetSkipPage())
	{
		document.getElementById("indReadPage").image = "img/ReadPageOff.gif";
	}
	else
	{
		document.getElementById("indReadPage").image = "img/ReadPageOn.gif";
	}
},


updateSkipNoteStatus:function()
{
	if(RunningInsideTutorial)
		return;
	if(RunningInsideExercises)
		return;

	//sem livro, nada
	if(!this.OPFpresent())
	{
		document.getElementById("indNote").image = "img/indnote.gif";
		return;
	}
	
	//se está desligado, nao fazemos muita coisa....
	if(this._currentOPF.opffile.GetSkipNote())
	{
		document.getElementById("indNote").image = "img/indnoteOff.gif";
		return;
	}
	
	
	//vamos ver se tem nota no ponto atual
	var nodeActive = false;
	var node = CmdMain.OPFGet().opffile.smils.getCurrentNode();
	var customTest = CSMILFile_getCustomTest(node);
	if(customTest != "")
	{
		var skiparray = CmdMain.OPFGet().opffile.smils.GetSkipIDNote();
		for(var i = 0; i < skiparray.length; i++)
		{
			//se for o ID...
			if(skiparray[i] == customTest && skiparray[i] != "")
			{
				//pulamos
				nodeActive = true;
				break;
			}
		}
	}

	if(nodeActive)
		document.getElementById("indNote").image = "img/indnoteOn.gif";
	else
		document.getElementById("indNote").image = "img/indnote.gif";
},


//ir para pagina
clickPage:function()
{
	this.RestaurarFocoMain();

	//se nao tiver livro, nao vamos
	if(!CmdMain.OPFpresent())
	{
		CmdMain.ShowWarn(CMsgIface.NoBookOpen());
		return;
	}


	//se nao tiver pagnas, avisamos
	if(!CmdMain.OPFGet().opffile.ncx.HasPageTargets())
	{
		CmdMain.ShowWarn(CMsgIface.BookHasNoPages());
		return;
	}
		
	//paramos de falar
	CSpeak.pause();

	//preenche os parametros
	//se o min ou o max for -1, entao nao tem essa possibilidade
	var retVals = { okButton:false, 
		normalmin: -1, normalmax: -1, 
		frontmin: -1, frontmax: -1, 
		specialmin: -1, specialmax: -1,
		targetType:"normal", targetPage: 0 };
	
	//vamos calcular cada tipo
	var thismin = CmdMain.OPFGet().opffile.ncx.GetPageMinMax("normal");
	retVals.normalmin = thismin.min;
	retVals.normalmax = thismin.max;
		
	thismin = CmdMain.OPFGet().opffile.ncx.GetPageMinMax("special");
	retVals.specialmin = thismin.min;
	retVals.specialmax = thismin.max;
		
	thismin = CmdMain.OPFGet().opffile.ncx.GetPageMinMax("front");
	retVals.frontmin = thismin.min;
	retVals.frontmax = thismin.max;

		
	//paramos de falar
	CSpeak.forceEnd();

	//abre a janela
	window.openDialog('../dlg/IrPag.xul','IrPag','modal,centerscreen,resizable=no', retVals);
	if(!retVals.okButton)
	{
		//voltamos a falar
		CSpeak.gotoStart();
		CSpeak.CommandEcho_text(CMsgIface.EchoGotopageOff());
		return;
	}
	
	//vamos para a pagina
	this.gotoPageNum(retVals.targetPage, retVals.targetType);
	CSpeak.gotoStart();
	CSpeak.CommandEcho_text(CMsgIface.EchoGotopageGoing());
},

//mover para pagina
gotoPageNum:function(targetPage, targetType)
{
	//se nao tem livro aberto, retorna
	if(!this.OPFpresent())
		return;
	if(!this._currentOPF.opffile.ncx.HasPageTargets())
		return;
	
	if(!this._currentOPF.opffile.ncx.GotoPage(targetPage, targetType))
	{
		//aviso de que nao tem a pagina
		CDialogs.WarnEscToContinue(CMsgIface.PageNotFound(), null);
		//voltamos a falar
		CSpeak.resume();
		return;
	}
	
	//paramos de falar
	CSpeak.stopAndClear();
	
	//liga a aba da leitura para mover o cursor
	CmdRead.preactivate();

	//manda o smil se mover
	var href = CmdMain.OPFGet().opffile.ncx.GetCurrentNCXPageEntryContentSrc();
	CmdMain.OPFGet().opffile.smils.gotoHref(href);

	//seta o foco na letiura
	CmdRead.activate();
},

//muda aq voz de leitura do livro
VoiceTTSnext:function()
{
	//paramos de falar
	CSpeak.pause();

	//se nao tiver livro, nao vamos
	if(!CmdMain.OPFpresent())
	{
		CSpeak.resume();
		CmdMain.ShowWarn(CMsgIface.NoBookOpen());
		return;
	}

	//vai para a proxima voz
	var voz = CmdMain.OPFGet().opffile.opfprefs.VoiceTTS_next();

	//se estiver lendo o livro ou o indice, recomeca da frase
	//atualiza as infs da tela inicial
	CmdInfo.update();
	//vamos ver o que o cara estava fazendo e retomar
	//se estiver na leitura ou no indice ou na info, recomecamos a frase atual
	var reativamos = false;
	if(CmdMain.getMode() == CmdRead)
	{
		CmdRead.activate();
		reativamos = true;
	}
	if(CmdMain.getMode() == CmdNcx)
	{
		CmdNcx.activate();
		reativamos = true;
	}
	if(CmdMain.getMode() == CmdInfo)
	{
		CmdInfo.activate();
		reativamos = true;
	}
	
	if(!reativamos)
	{
		//se nao estava lendo o livro, contnuamos o que estava
		CSpeak.gotoStart();
	}
	
	//eco de comando
	CSpeak.CommandEcho_text(CMsgIface.EchoNextVoice(voz));
},

//atualiza o tamanho da fonte
UpdateFontSize:function()
{
	CmdNcx.UpdateFontSize();
	CmdHist.UpdateFontSize();
	CmdMarks.UpdateFontSize();
	CmdRead.UpdateFontSize();
	CmdSearchRes.UpdateFontSize();
	
	//note que nao alteramos a fonte na caixa de informações
	//CmdInfo.UpdateFontSize();
},

//ativa a aba de inicio
activateStart:function()
{
	CSkin.activateStart();
},


//se ainda nao ativamos, nem lemos o arquivo
hasActivatedBook: false,

//ativa a aba de inicio
activateBook:function()
{
	CSkin.activateBook();

	if(CmdMain.hasActivatedBook)
		return;
		
	//efetiva a carga do livro
	CmdMain.hasActivatedBook = true;
	setTimeout("timeout_cmdmain_tfc()", 1);

	//acertamos o indice
	//se tivermos um elemento ativo, rolamos ele para a tela
	//somente funciona com timeout
	setTimeout("timeout_cmdmain_ifncx()", 1);
	
},

//exportar configuracoes
ExportarConfiguracao:function()
{
	try
	{
		this.WaitCursorOn();
		this.ExportarConfiguracaoGo();
		this.WaitCursorOff();
	}
	catch(e)
	{
		this.WaitCursorOff();
		CDialogs.WarnEscToContinue(e.toString(), null);
		return;
	}

	CDialogs.WarnEscToContinue(CMsgIface.DlgExportExpCon_Saved() + CUtils.GetExportConfigFile().path, null);
},
ExportarConfiguracaoGo:function()
{
	//salvamos uma copia das configuracoes
	var listaArquivos = CUtils.GetDataFolder();
	listaArquivos.append("configddr.txt");
	CPref.SalvarConfiguraceos(listaArquivos);
	
	//vamos criar o zip
	var destino = CUtils.GetExportConfigFile();
	var listaArquivos = CUtils.GetDataFolder();
	
	var aux_zipWriter = Components.Constructor("@mozilla.org/zipwriter;1", "nsIZipWriter");
	var aux_zipW = new aux_zipWriter();
	/*
		const PR_RDONLY      = 0x01;
		const PR_WRONLY      = 0x02;
		const PR_RDWR        = 0x04;
		const PR_CREATE_FILE = 0x08;
		const PR_APPEND      = 0x10;
		const PR_TRUNCATE    = 0x20;
		const PR_SYNC        = 0x40;
		const PR_EXCL        = 0x80;
	*/
	aux_zipW.open(destino, 4 | 8 | 32);

	//todos os arquivos do diretorio
	var aux_items = listaArquivos.directoryEntries;
	while (aux_items.hasMoreElements()) 
	{
		var aux_item = aux_items.getNext().QueryInterface(Components.interfaces.nsIFile);
		if (aux_item.isFile())
			aux_zipW.addEntryFile(aux_item.leafName, Components.interfaces.nsIZipWriter.COMPRESSION_DEFAULT, aux_item, false);
	}
	aux_zipW.close();
},

//importar configuracoes
ImportarConfiguracao:function()
{
	//confirmar a operacao
	if(!CUtils.ConfirmOperation(CMsgIface.DlgExportImpCon_AskFile_speak(),
		CMsgIface.DlgExportImpCon_AskFile_msg(), "") )
		return;
		
	var destino = CUtils.GetExportConfigFile();
	CDialogs.WarnEscToContinue(CMsgIface.DlgExportImpCon_AskFile_extra() + destino.path, null);
	try
	{
		this.WaitCursorOn();
		this.ImportarConfiguracaoGo();
		this.WaitCursorOff();
	}
	catch(e)
	{
		this.WaitCursorOff();
		CDialogs.WarnEscToContinue(CMsgIface.DlgExportImpCon_Error(), null);
		//throw e;
		return;
	}
	
	CDialogs.WarnEscToContinue(CMsgIface.DlgExportImpCon_Imported(), null);
},

ImportarConfiguracaoGo:function()
{
	//vamos criar o zip
	var destino = CUtils.GetExportConfigFile();

	var aux_zipReader = Components.classes["@mozilla.org/libjar/zip-reader;1"]
		.createInstance(Components.interfaces.nsIZipReader);
	aux_zipReader.open(destino);
	aux_zipReader.test(null);

	var aux_entries = aux_zipReader.findEntries(null);
	while (aux_entries.hasMore()) 
	{
		var aux_entryName = aux_entries.getNext();
		var destino = CUtils.GetDataFolder();
		destino.append(aux_entryName);
		try
		{
			//se ja existe, apaga
			if(destino.exists())
				destino.remove(false);
			aux_zipReader.extract(aux_entryName, destino);
		}
		catch(e)
		{
			//ignoramos erros
			//throw e;
		}
	}
	aux_zipReader.close();


	//lemos as configuracoes
	var listaArquivos = CUtils.GetDataFolder();
	listaArquivos.append("configddr.txt");
	CPref.CarregarConfiguraceos(listaArquivos);

	//aplicamos as configuracoes
	if(true)
	{
		//atualiza a traducao
		CMsg.RecarregarMensagens();
		CMsgIface.RecarregarMensagens();
		CmdMain.TraduzirInterface();
		
		//atualiza o marcador
		CmdMain.checkMarkerIndicator();
		CmdMain.UpdateFontSize();
	
		CSpeak.setAutonavList(CPref.listautonav());
		CSpeak.setTTSSpeed(CPref.voice_speed());

		CSpeak.setVolTTS(CPref.voice_volume());
		CSpeak.setVolAudioSystem(CPref.audio_volume());
		CTools.updateVolumes();
	}
	
	//carregar o historico
	CHist.ReloadHist();
	
	//e se tiver configuracao do livro atualmente aberto?
	//simplesmente mantemos os dados do livro aberto
	//vamos garantir que mantemos
	if(CmdMain.OPFpresent())
	{
		CmdMain.OPFGet().opffile.opfprefs._save();
		CmdMain.OPFGet().opffile.marks._save();
	}

/*
	limpar vozes que nao existem neste coputrador: nao precisa
	para a voz principal, ele vai automaticamente para a default
	para o livro, ele vai para uma em sapi4 ou sapi5, entao tb nao é problema
*/	

},

WaitCursorOn:function()
{
	//FAZER em algum momento: colocar o wait cursor por cima de tudo
	document.documentElement.style.cursor = "wait";
	CSpeak.forceEnd();
	CSpeak.CommandEchoGo_audio("tictac.mp3");
},


WaitCursorOff:function()
{
	document.documentElement.style.cursor = "auto";
	CSpeak.stopExtra();
},


ShowWarn:function(msg)
{
	//falamos
	CSpeak.CommandEchoGo_textWithEvent(msg, this.ShowWarnOff);
	
	//limitamos em X caracteres
	//nao precisamos mais, esta truncando no xul
	//if(msg.length > 30)
	//	msg = msg.substring(0,29) + "...";
	
	//colocamos na tela
	document.getElementById("avisos").value = msg;
	document.getElementById("bavisos").className = "AvisoBox";
},

ShowWarnOff:function(msg)
{
	//tiramos da tela
	document.getElementById("bavisos").className = "AvisoBoxHidden";
	document.getElementById("avisos").value = "";
}
}

