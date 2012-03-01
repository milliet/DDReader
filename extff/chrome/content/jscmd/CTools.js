/// <reference path="CmdHist.js" />
/// <reference path="CmdNcx.js" />
/// <reference path="CmdInfo.js" />
/// <reference path="CmdLibNdx.js" />
/// <reference path="CmdMain.js" />
/// <reference path="CmdRead.js" />
/// <reference path="CmdSplash.js" />
/// <reference path="CMsgIface.js" />


//controle das ferramentas (os botoes de controle de audio)

var CTools = 
{

//vamos escutar evento de que esta tocando ou pausado
speakevents:
{
	Spkevt_start: function()
	{
		var botao = document.getElementById("toolPlay");
		botao.image = "img/pause.gif";
	},
	Spkevt_end: function()
	{
		var botao = document.getElementById("toolPlay");
		botao.image = "img/play.gif";
	}
},

//no onload da pagina
initializetools:function()
{
	//rotina para avisar
	CSpeak.setEventListener(this.speakevents);
},



//clicaram no paly/pause
clicktoolPlay:function()
{
	var botao = document.getElementById("toolPlay");
	if(CSpeak.isActive())
	{
		if(CSpeak.isPaused())
		{
			CSpeak.resume();
			botao.image = "img/pause.gif";
		}
		else
		{
			CSpeak.pause();
			botao.image = "img/play.gif";
		}
	}
	else
	{
		botao.image = "img/pause.gif";
		CSpeak.gotoStart();		
	}
},

//proximo
clicktoolNext:function()
{
	CSpeak.gotoNext();
},

clicktoolPrev:function()
{
	CSpeak.gotoPrevious();
},

//proximo nivel, retorna true se processou
clicktoolNextLev:function()
{
	//na leitura do texto, avanca o nivel
	if(CmdMain.getMode() == CmdRead)
	{
		var status = CmdNcx.nextScreenEntry();

		//vai para esse ponto
		CmdNcx.doenter();
		if(!status)
			CSpeak.CommandEchoGo_text(CMsg.TextEnd());
		return true;
	}
	
	if(CmdMain.getMode() == CmdSearchRes)
	{
		//fim da busca
		CButtons.clicktoolBuscaEnd();
		return true;
	}
	
	if(CmdMain.getMode() == CmdHist)
	{
		//fim do historivo
		if(CHist.histarray.length == 0)
		{
			CmdMain.ShowWarn(CMsg.HistoryEmpty());
			return true;
		}
		CHist.speakindex = CHist.histarray.length - 1;
		CHist._speakcurrent();
		return true;
	}
	
	if(CmdMain.getMode() == CmdNcx)
	{
		//se nao tiver livro, nao vamos
		if(!CmdMain.OPFpresent())
		{
			CmdMain.ShowWarn(CMsgIface.NoBookOpen());
			return true;
		}
		
		CmdMain.OPFGet().opffile.ncx._currentNavpointIndex = CmdMain.OPFGet().opffile.ncx._maxCurrentNavpointIndex - 1;
		CmdMain.OPFGet().opffile.ncx.TLevt_prev();
		//avancamos se nao for o ultimo indice
		//estamos acessando variaveis privadas, mas tudo bem... o certo era fazer uma rotina la no ncx...
		var ncs = CmdMain.OPFGet().opffile.ncx;
		if(ncs._searchLevel(ncs._currentNavpointIndex + 1, false) >= 0)
			ncs.TLevt_next();
		return true;
	}
	
	
	if(CmdMain.getMode() == CmdMarks)
	{
		//se nao tiver livro, nao vamos
		if(!CmdMain.OPFpresent())
		{
			CmdMain.ShowWarn(CMsgIface.NoBookOpen());
			return true;
		}
		//se nao tem item...
		if(CmdMain.OPFGet().opffile.marks.getSortedarrayBookmarks().length <= 0)
		{
			CmdMain.ShowWarn(CMsgIface.NoMarkers());
			return true;
		}
		
		var mark = CmdMain.OPFGet().opffile.marks;
		mark.setCurrentIndex( mark.getSortedarrayBookmarks().length - 1);
		mark.TLevt_current();
		return true;
	}
	
	
	//nao processamos
	return false;
},

clicktoolPrevLev:function()
{
	//na leitura do texto, avanca o nivel
	if(CmdMain.getMode() == CmdRead)
	{
		var status = CmdNcx.previousScreenEntry()
		
		//vai para esse ponto
		CmdNcx.doenter();
		if(!status)
			CSpeak.CommandEchoGo_text(CMsg.TextStart());
		return true;
	}
	
	if(CmdMain.getMode() == CmdSearchRes)
	{
		//fim da busca
		CButtons.clicktoolBuscaStart();
		return true;
	}
	
	if(CmdMain.getMode() == CmdHist)
	{
		//fim do historivo
		if(CHist.histarray.length == 0)
		{
			CmdMain.ShowWarn(CMsg.HistoryEmpty());
			return true;
		}
		CHist.speak();
		return true;
	}
	
	if(CmdMain.getMode() == CmdNcx)
	{
		//se nao tiver livro, nao vamos
		if(!CmdMain.OPFpresent())
		{
			CmdMain.ShowWarn(CMsgIface.NoBookOpen());
			return true;
		}
		
		CmdMain.OPFGet().opffile.ncx._currentNavpointIndex = -1;
		CmdMain.OPFGet().opffile.ncx.TLevt_next();
		return true;
	}
	
	if(CmdMain.getMode() == CmdMarks)
	{
		//se nao tiver livro, nao vamos
		if(!CmdMain.OPFpresent())
		{
			CmdMain.ShowWarn(CMsgIface.NoBookOpen());
			return true;
		}
		//se nao tem item...
		if(CmdMain.OPFGet().opffile.marks.getSortedarrayBookmarks().length <= 0)
		{
			CmdMain.ShowWarn(CMsgIface.NoMarkers());
			return true;
		}
		
		var mark = CmdMain.OPFGet().opffile.marks;
		mark.setCurrentIndex( 0);
		mark.TLevt_current();
		return true;
	}
	
	//nao processamos
	return false;
},

changeLevelTo:function(level, echo)
{
	if(RunningInsideExercises)
		return;
	
	CmdNcx.SetCurrentLevel(level);
	document.getElementById("toolNivel").value = level;
	if(echo)
		CSpeak.CommandEcho_text(CMsgIface.EchoLevel(level));
},

changeLevel:function()
{
	if(RunningInsideExercises)
		return;
	
	this.changeLevelTo( document.getElementById("toolNivel").value, true);
},

//ir para pagina
clicktoolPage:function()
{
	CmdMain.clickPage();
},

//chavear leitura de pagina
clickIndPage:function()
{
	CmdMain.clickIndPage();
},

clickIndMark:function()
{
	CmdMain.clickIndMark();
},

//chavear leitura de pagina
clickIndNote:function()
{
	CmdMain.clickIndNote();
},

//aumentar velocidade TTS
clickIncSpeed:function()
{
	var speed = CPref.voice_speed();
	if(speed >= 10)
	{
		CSpeak.CommandEcho_text(CMsgIface.EchoSpeedMax());
		return;
	}
	speed++;
	CPref.voice_speed_set(speed);

	//sempre recomecamos a frase se estamos usando TTS
	if(CSpeak.isActiveTTS())
		CSpeak.gotoStart();
	
	//se estamos falando um livro com MP3, avisar (porque a velocidade nao sera alterada)
	CSpeak.CommandEcho_text(CMsgIface.EchoSpeedInc(speed, CSpeak.isActiveAudio() ) );
	this.updateVolumes();
},

//diminuir velocidade TTS
clickDecSpeed:function()
{
	var speed = CPref.voice_speed();
	if(speed <= -10)
	{
		CSpeak.CommandEcho_text(CMsgIface.EchoSpeedMin());
		return;
	}
	speed--;
	CPref.voice_speed_set(speed);
	
	//sempre recomecamos a frase se estamos usando TTS
	if(CSpeak.isActiveTTS())
		CSpeak.gotoStart();
	
	//se estamos falando um livro com MP3, avisar (porque a velocidade nao sera alterada)
	CSpeak.CommandEcho_text(CMsgIface.EchoSpeedDec(speed, CSpeak.isActiveAudio() ) );
	this.updateVolumes();
},

//aumentar volume TTS
clickIncVolTTS:function()
{
	var speed = CPref.voice_volume();
	if(speed >= 1)
	{
		CSpeak.CommandEcho_text(CMsgIface.EchoVolTTSMax());
		return;
	}
	speed += 0.1;
	CPref.voice_volume_set(speed);

	//sempre recomecamos a frase se estamos usando TTS no sapi4
	if(CSpeak.isActiveTTS())
	if(CSpeak.currentVoiceSAPI4())
		CSpeak.gotoStart();
	
	CSpeak.CommandEcho_text(CMsgIface.EchoVolTTSInc(speed));
	this.updateVolumes();
},

//diminuir volume TTS
clickDecVolTTS:function()
{
	var speed = CPref.voice_volume();
	if(speed <= 0)
	{
		CSpeak.CommandEcho_text(CMsgIface.EchoVolTTSMin());
		return;
	}
	speed -= 0.1;
	CPref.voice_volume_set(speed);

	//sempre recomecamos a frase se estamos usando TTS no sapi4
	if(CSpeak.isActiveTTS())
	if(CSpeak.currentVoiceSAPI4())
		CSpeak.gotoStart();
	
	CSpeak.CommandEcho_text(CMsgIface.EchoVolTTSDec(speed));
	this.updateVolumes();
},

//aumentar volume audio
clickIncVolAudio:function()
{
	//se nao tiver livro, nao vamos
	if(!CmdMain.OPFpresent())
	{
		CmdMain.ShowWarn(CMsgIface.NoBookOpen());
		return;
	}

	var speed = CmdMain.OPFGet().opffile.opfprefs.AudioVolume();
	//o default é usar do sistema, e é -1
	if(speed < 0) speed = 1;

	if(speed >= 1)
	{
		CSpeak.CommandEcho_text(CMsgIface.EchoVolAudioMax());
		return;
	}
	speed += 0.1;
	CmdMain.OPFGet().opffile.opfprefs.AudioVolume_set(speed);
	CSpeak.setVolAudioBook(speed);
	CSpeak.CommandEcho_text(CMsgIface.EchoVolAudioInc(speed));
	this.updateVolumes();
},

//diminuir volume audio
clickDecVolAudio:function()
{
	//se nao tiver livro, nao vamos
	if(!CmdMain.OPFpresent())
	{
		CmdMain.ShowWarn(CMsgIface.NoBookOpen());
		return;
	}

	var speed = CmdMain.OPFGet().opffile.opfprefs.AudioVolume();

	//o default é usar do sistema, e é -1
	if(speed < 0) speed = 1;
	
	if(speed <= 0)
	{
		CSpeak.CommandEcho_text(CMsgIface.EchoVolAudioMin());
		return;
	}
	speed -= 0.1;
	CmdMain.OPFGet().opffile.opfprefs.AudioVolume_set(speed);
	CSpeak.setVolAudioBook(speed);
	CSpeak.CommandEcho_text(CMsgIface.EchoVolAudioDec(speed));
	this.updateVolumes();
},

//atualizamos os indicadores de volume na tela
updateVolumes:function()
{
	//audio
	if(!CmdMain.OPFpresent())
	{
		//document.getElementById("toolVel").value = 100;
		document.getElementById("imagevolaudio").height = 40;
	}
	else
	{
		//document.getElementById("toolVel").value = CmdMain.OPFGet().opffile.opfprefs.AudioVolume() * 100;
		document.getElementById("imagevolaudio").height = 40 * CmdMain.OPFGet().opffile.opfprefs.AudioVolume();
	}
	if(document.getElementById("imagevolaudio").height < 2)
		document.getElementById("imagevolaudio").height = 2;
	
	//tts
	//document.getElementById("toolVol").value = CPref.voice_volume() * 100;
	document.getElementById("imagevoltts").height = 40 * CPref.voice_volume();
	if(document.getElementById("imagevoltts").height < 2)
		document.getElementById("imagevoltts").height = 2;
	
	//velocidade tts
	//vai de -10 a 10, tem que ir de 0 a 40
	document.getElementById("imageveltts").height = 2 * (CPref.voice_speed() + 10);
	if(document.getElementById("imageveltts").height < 2)
		document.getElementById("imageveltts").height = 2;


	//para aplicar a mudanca de altura tem que alterar o src de todas as imagens
	if(document.getElementById("imagevolaudio").src == "img/volaudio.jpg")
		document.getElementById("imagevolaudio").src= "img/volaudio2.jpg";
	else
		document.getElementById("imagevolaudio").src= "img/volaudio.jpg";

	if(document.getElementById("imagevoltts").src == "img/voltts.jpg")
		document.getElementById("imagevoltts").src= "img/voltts2.jpg";
	else
		document.getElementById("imagevoltts").src= "img/voltts.jpg";

	if(document.getElementById("imageveltts").src == "img/veltts.jpg")
		document.getElementById("imageveltts").src= "img/veltts2.jpg";
	else
		document.getElementById("imageveltts").src= "img/veltts.jpg";
},

//soletrar
clickSpeel:function()
{
	var current = CSpeak.getCurrent();
	var spell = false;
	if(current)
	if(current.spell)
	{
		//somente soletramos se o texto nao estiver vazio
		if(current.GetText_string() != "")
			spell = true;
	}
		
	//se nao podemos soletrar
	if(!spell)
	{
		CSpeak.CommandEcho_text(CMsgIface.EchoNoSpell());
		return;
	}

	//paramos o som
	CSpeak.forceEnd();
	
	//chamamos a caixa de dialogo
	var prefs = null;
	if(CmdMain.OPFpresent())
		prefs = CmdMain.OPFGet().opffile.opfprefs;
	var retVals = { okButton:false, speakitem: current, opfprefs: prefs };
	window.openDialog('../dlg/Spell.xul','Spell','modal,centerscreen,resizable=no', retVals);
	
	//religamos o som
	CSpeak.gotoStart();
	CSpeak.CommandEcho_text(CMsgIface.EchoSpellOff());
},

//chavear navegacao automaitca do livro
clickNavAutoText:function()
{
	//se nao tiver livro, nao vamos
	if(!CmdMain.OPFpresent())
	{
		CmdMain.ShowWarn(CMsgIface.NoBookOpen());
		return;
	}

	if(CmdMain.OPFGet().opffile.opfprefs.NavigateAuto())
	{
		//eco de comando
		CSpeak.CommandEcho_text(CMsgIface.EchoNavigateAutoOff());
		//atualiza a configuracao
		CmdMain.OPFGet().opffile.opfprefs.NavigateAuto_set(false);
		CSpeak.setAutonavBook(false);
	}
	else
	{
		//atualiza a configuracao
		CmdMain.OPFGet().opffile.opfprefs.NavigateAuto_set(true);
		CSpeak.setAutonavBook(true);
		
		//se ligou e nao estava falando nada, mandamos para o proximo item
		if(!CSpeak.isActive())
			CSpeak.gotoNext();

		//eco de comando
		CSpeak.CommandEcho_text(CMsgIface.EchoNavigateAutoOn());
	}
},

//chavear navegacao automaitca das listas
clickNavAutoList:function()
{
	if(CPref.listautonav())
	{
		//eco de comando
		CSpeak.CommandEcho_text(CMsgIface.EchoNavListAutoOff());
		//atualiza a configuracao
		CPref.listautonav_set(false);
		CSpeak.setAutonavList(false);
	}
	else
	{
		//atualiza a configuracao
		CPref.listautonav_set(true);
		CSpeak.setAutonavList(true);
		
		//se ligou e nao estava falando nada, mandamos para o proximo item
		if(!CSpeak.isActive())
			CSpeak.gotoNext();

		//eco de comando
		CSpeak.CommandEcho_text(CMsgIface.EchoNavListAutoOn());
	}
},


//soletrar
clickExit:function()
{
	//paramos o som
	CSpeak.forceEnd();

	//tutorial sai sem aviso
	if(RunningInsideTutorial)
	{
		//fechamos o aplicativo
		CSpeak.forceEnd();
		CDialogs.CloseApplication();
		return;
	}
	

	//exercicos so confirma se alterou alguma coisa
	if(RunningInsideExercises)
	{
		//exerciciopendente verificamos se alterou alguma coisa do exercicio
		
		//fechamos o aplicativo
		CSpeak.forceEnd();
		CDialogs.CloseApplication();
		return;
	}
	
	//chamamos a caixa de dialogo
	var retVals = { okButton:false };
	window.openDialog('../dlg/Exit.xul','Exit','modal,centerscreen,resizable=no', retVals);

	if(retVals.okButton)
	{
		//fechamos o aplicativo
		CSpeak.forceEnd();
		CDialogs.CloseApplication();
		return;
	}
	
	//religamos o som
	CSpeak.gotoStart();
},

//tab, lista de coandos
clickTab:function()
{
	//paramos o som
	CSpeak.forceEnd();

	//chamamos a caixa de dialogo
	var retVals = { okButton:false, nome_comando:"" };
	window.openDialog('../dlg/tabcmd_base.xul','tabcmd','modal,centerscreen,resizable=no', retVals);

	if(!retVals.okButton)
	{
		//religamos o som
		CSpeak.gotoStart();
		
		return;
	}

	if(retVals.nome_comando == "tabcmd_abrir")
		CButtons.clickOpen();
	if(retVals.nome_comando == "tabcmd_hist")
		CButtons.clickHist();
	if(retVals.nome_comando == "tabcmd_conf")
		CButtons.clickPrefsGlobal();		
	if(retVals.nome_comando == "tabcmd_leit")
		CButtons.clickRead();
	if(retVals.nome_comando == "tabcmd_ind")
		CButtons.clickNdx();
	if(retVals.nome_comando == "tabcmd_cflivro")
		CButtons.clickPrefsLivro();		
	if(retVals.nome_comando == "tabcmd_busca")
		CButtons.clicktoolBusca();
	if(retVals.nome_comando == "tabcmd_lmark")
		CButtons.clickMarkersBook();
	if(retVals.nome_comando == "tabcmd_edtmark")
		CButtons.clickinsMarker();
	if(retVals.nome_comando == "tabcmd_dbib")
		CButtons.clickHome();
	if(retVals.nome_comando == "tabcmd_tut")
		CButtons.clickHelpTutorial();
	if(retVals.nome_comando == "tabcmd_sup")
		CButtons.clickButFale();
	if(retVals.nome_comando == "tabcmd_nav")
		CButtons.chamarTutorial("1.5");
	if(retVals.nome_comando == "tabcmd_sole")
		CTools.clickSpeel();
	if(retVals.nome_comando == "tabcmd_fonte")
	{
		CPref.fontsize_next();
		//eco de comando
		CSpeak.CommandEcho_text(CMsgIface.EchoFontsize(CPref.fontsize() ));
		//atualiza a tela
		CmdMain.UpdateFontSize();
	}
	if(retVals.nome_comando == "tabcmd_irpag")
		CTools.clicktoolPage();
	if(retVals.nome_comando == "tabcmd_laudio")
		CButtons.switchMp3();
	if(retVals.nome_comando == "tabcmd_voz")
		CmdMain.VoiceTTSnext();
	if(retVals.nome_comando == "tabcmd_rbusca")
		CButtons.clickAbaBusca();
	if(retVals.nome_comando == "tabcmd_llista")
		CTools.clickNavAutoList();
	if(retVals.nome_comando == "tabcmd_laut")
		CTools.clickNavAutoText();
	if(retVals.nome_comando == "tabcmd_rodape")
		CTools.clickIndNote();
	if(retVals.nome_comando == "tabcmd_lpag")
		CTools.clickIndPage();
	if(retVals.nome_comando == "tabcmd_indmark")
		CTools.clickIndMark();
	if(retVals.nome_comando == "tabcmd_export")
		CButtons.clickButExport();
	if(retVals.nome_comando == "tabcmd_cred")
		CButtons.clickAbout();
	if(retVals.nome_comando == "tabcmd_atu")
		CButtons.clickWebUpdate();

	
}

//fim da variavel
}


