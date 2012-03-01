/// <reference path="CmdMain.js" />

//mapeamento de teclado

/*
propriedades de interesse:

event
	keypress charCode=97, keyCode=0
keyCode
	0
charCode
	97
detail
	0
which
	97
ctrlKey
	false
shiftKey
	false
altKey
	false
metaKey
	false
eventPhase
	3
timeStamp
	17210453
bubbles
	true
cancelable
	true
cancelBubble
	false
isTrusted
	true
isChar
	false
CAPTURING_PHASE
	1
AT_TARGET
	2
BUBBLING_PHASE
	3
DOM_VK_xxxx - tem as teclas

*/	

var CKeys = 
{
//nao pergunte como, mas o firefox manda um evento deteclado dentro do outro
processandoTelca: false,

//nos exercicios, nao podemos bloquear as teclas que devem ir para as caixas de texto
ModoExercicios_CaixaTextoAtiva: false,

//evento de keydown
keypress:function(evt)
{
	if(this.processandoTelca)
		return;

	this.processandoTelca = true;
	try
	{
		//vamos rodar
		var status_desta_tecla = this._keyevent_ckeys(evt);
		//a rotina retorna 0 se não proceessamos e devemos avisar, 1 se processamos, 2 se não processamos e devemos deixar o evento se propagar
		if(status_desta_tecla == 1)
		{
			//para cancelar a acao dessa tecla
			evt.preventDefault();
			evt.stopPropagation();
			this.processandoTelca = false;
			return;
		}

		if(status_desta_tecla == 2)
		{
			this.processandoTelca = false;
			return;
		}

		//alt-f4 repassamos
		if(evt.altKey == true && evt.keyCode == 115)
			return;
		
		//nao processamos a tecla, avisamos que a tecla nao existe
		var tecla = CSpellMsg.KeyText(evt);

		//mensagem
		tecla = CMsgIface.KeyNotMapped(tecla);
		
		//avisamos, ignorando eco de comandos
		CSpeak.CommandEchoGo_text(tecla);
		
		//para cancelar a acao dessa tecla
		evt.preventDefault();
		this.processandoTelca = false;
		return;
	}
	catch(e)
	{
		this.processandoTelca = false;
	}
},

//processamento efetivo
//retorna 0 se não proceessamos e devemos avisar, 1 se processamos, 2 se não processamos e devemos deixar o evento se propagar
_keyevent_ckeys:function(evt)
{
	//teclas com control
	if(evt.ctrlKey == true && evt.altKey == false)
	{
		//tecla control E exportar exercicios de dentro do exercício
		if(RunningInsideExercises)
		if(evt.charCode == 69 || evt.charCode == 101)
		{
			CButtons.clickButExpExercise();
			return 1;
		}

		//exerciciopendente tecla control E exportar exercicios de fora do exercício
		
		//tecla control V Volta para o começo do exercício.
		if(RunningInsideExercises)
		if(evt.charCode == 86 || evt.charCode == 118)
		{
			CButtons.clickBookStart();
			return 1;
		}

		//se estiver em uma caixa detexto dos exercicios, nao processamos nada
		if(this.ModoExercicios_CaixaTextoAtiva)
		{
			return 2;
		}

		//tecla control M indice de marcadores do livro
		if(!RunningInsideTutorial && !RunningInsideExercises)
		if(evt.charCode == 77 || evt.charCode == 109)
		{
			CButtons.clickMarkersBook();
			return 1;
		}
		
		//tecla control A ajuda global
		if(!RunningInsideTutorial)
		if(evt.charCode == 65 || evt.charCode == 97)
		{
			CButtons.clickHelpGlobal();
			return 1;
		}
		
		//tecla control C conf do livro
		if(!RunningInsideTutorial && !RunningInsideExercises)
		if(evt.charCode == 67 || evt.charCode == 99)
		{
			CButtons.clickPrefsLivro();		
			return 1;
		}

		//tecla control G Liga e desliga leitura de numero de pagina
		if(!RunningInsideTutorial && !RunningInsideExercises)
		if(evt.charCode == 71 || evt.charCode == 103)
		{
			CTools.clickIndPage();
			return 1;
		}

		//tecla control J liga/desliga leitura das listas
		if(evt.charCode == 74 || evt.charCode == 106)
		{
			CTools.clickNavAutoList();
			return 1;
		}

		//tecla control P, resultados da busca
		if(!RunningInsideExercises)
		if(evt.charCode == 80 || evt.charCode == 112)
		{
			CButtons.clickAbaBusca();
			return 1;
		}
		
		//exerciciopendente tecla control Y ligar/desligar exercicios

		//tecla control tab em exercicios
		//chaveia entre a leitura do corpo e da referencia
		if(RunningInsideExercises)
		if(evt.charCode == 0 && evt.keyCode == 9)
		{
			CmdRead.clickExerciseTogleReadingArea();
			return 1;
		}
		
		//tecla control + ou = VOLUME AUDIO MAIS
		if(evt.charCode == 43 || evt.charCode == 61)
		{
			CTools.clickIncVolAudio();
			return 1;
		}

		//tecla control - ou _ VOLUME AUDIO menos
		if(evt.charCode == 45 || evt.charCode == 95)
		{
			CTools.clickDecVolAudio();
			return 1;
		}

		//control seta para baixo
		if(!RunningInsideExercises)
		if(evt.charCode == 0 && evt.keyCode == 40)
		{
			CButtons.clicktoolBuscaNext();
			return 1;
		}
		//control seta para baixo nos exercicios = seta para baixo
		if(RunningInsideExercises)
		if(evt.charCode == 0 && evt.keyCode == 40)
		{
			CTools.clicktoolNext();
			return 1;
		}

		//control seta para cima
		if(!RunningInsideExercises)
		if(evt.charCode == 0 && evt.keyCode == 38)
		{
			CButtons.clicktoolBuscaPrev();
			return 1;
		}
		//control seta para cima nos exercicios = seta para cima
		if(RunningInsideExercises)
		if(evt.charCode == 0 && evt.keyCode == 38)
		{
			CTools.clicktoolPrev();
			return 1;
		}
		
		//control seta para direita
		if(!RunningInsideExercises)
		if(evt.charCode == 0 && evt.keyCode == 39)
		{
			if(CTools.clicktoolNextLev())
				return 1;
			return 0;
		}
		
		//control seta para esquerda
		if(!RunningInsideExercises)
		if(evt.charCode == 0 && evt.keyCode == 37)
		{
			if(CTools.clicktoolPrevLev())
				return 1;
			return 0;
		}
		
		//tecla control home, tela inicial
		if(!RunningInsideTutorial && !RunningInsideExercises)
		if(evt.charCode == 0 && evt.keyCode == 36)
		{
			CButtons.clickSplash();
			return 1;
		}
		
		//tecla control end, creditos
		if(!RunningInsideTutorial && !RunningInsideExercises)
		if(evt.charCode == 0 && evt.keyCode == 35)
		{
			CButtons.clickAbout();
			return 1;
		}
		
		//control del
		//no historioco, apaga a lista toda
		if(!RunningInsideTutorial && !RunningInsideExercises)
		if(CmdMain.getMode() == CmdHist)
		if(evt.charCode == 0 && evt.keyCode == 46)
		{
			CmdHist.doDelAllHist();
			return 1;
		}
		
		//control del
		//na lista de marcadores, apaga a lista toda
		if(!RunningInsideTutorial && !RunningInsideExercises)
		if(CmdMain.getMode() == CmdMarks)
		if(evt.charCode == 0 && evt.keyCode == 46)
		{
			CmdMarks.doDelAllMarks();
			return 1;
		}
		
	}
	
	//teclas com alt
	if(evt.ctrlKey == true && evt.altKey == true)
	{
		//tecla control alt M ativa/destiva indicador de marcadores
		if(!RunningInsideTutorial && !RunningInsideExercises)
		if(evt.charCode == 77 || evt.charCode == 109)
		{
			CTools.clickIndMark();
			return 1;
		}
		
	}
	

	//teclas normais, nao processamos com control ou alt
	//ignoramos o shift
	if(evt.ctrlKey == false && evt.altKey == false)
	{
		//esc fechar o aplicativo
		if(evt.charCode == 0 && evt.keyCode == 27)
		{
			CTools.clickExit();
			return 1;
		}
		
		//tab lista de comandos
		if(!RunningInsideTutorial && !RunningInsideExercises)
		if(evt.charCode == 0 && evt.keyCode == 9)
		{
			CTools.clickTab();
			return 1;
		}
		
		//tab em exercicios
		//chaveia entre a leitura do corpo e da referencia
		if(RunningInsideExercises)
		if(evt.charCode == 0 && evt.keyCode == 9)
		{
			CmdRead.clickExerciseTogleReadingArea();
			return 1;
		}
		
		//tecla F1 ajuda local
		if(!RunningInsideTutorial)
		if(evt.keyCode == 112 && evt.charCode == 0)
		{
			CButtons.clickHelpLocal();
			return 1;
		}
		
		//a partir destas teclas
		//se estiver em uma caixa detexto dos exercicios, nao processamos nada
		if(this.ModoExercicios_CaixaTextoAtiva)
		{
			return 2;
		}
		
		//tratamento do enter
		//ele depende de onde está o foco
		if(evt.charCode == 0 && evt.keyCode == 13)
		{
			CKeys._keyenter();
			return 1;
		}
		
		//espaco paly/apuse
		if(evt.charCode == 32)
		{
			CTools.clicktoolPlay();
			return 1;
		}
		
		//seta para baixo
		if(evt.charCode == 0 && evt.keyCode == 40)
		{
			CTools.clicktoolNext();
			return 1;
		}
		
		//seta para cima
		if(evt.charCode == 0 && evt.keyCode == 38)
		{
			CTools.clicktoolPrev();
			return 1;
		}
		
		//seta para esquerda
		if(!RunningInsideExercises)
		if(evt.charCode == 0 && evt.keyCode == 37)
		{
			if(CmdMain.getMode() == CmdRead)
			{
				if(CTools.clicktoolPrevLev())
					return 1;
				return 0;
			}
			if(CmdMain.getMode() == CmdHist)
			{
				CTools.clicktoolPrev();
				return 1;
			}
			if(CmdMain.getMode() == CmdNcx)
			{
				if(CTools.clicktoolPrevLev())
					return 1;
				return 0;
			}
			if(CmdMain.getMode() == CmdMarks)
			{
				if(CTools.clicktoolPrevLev())
					return 1;
				return 0;
			}
			if(CmdMain.getMode() == CmdSearchRes)
			{
				if(CTools.clicktoolPrevLev())
					return 1;
				return 0;
			}
			return 0;
		}
		
		//seta para direita
		if(!RunningInsideExercises)
		if(evt.charCode == 0 && evt.keyCode == 39)
		{
			if(CmdMain.getMode() == CmdRead)
			{
				if(CTools.clicktoolNextLev())
					return 1;
				return 0;
			}
			if(CmdMain.getMode() == CmdHist)
			{
				CTools.clicktoolNext();
				return 1;
			}
			if(CmdMain.getMode() == CmdNcx)
			{
				if(CTools.clicktoolNextLev())
					return 1;
				return 0;
			}
			if(CmdMain.getMode() == CmdMarks)
			{
				if(CTools.clicktoolNextLev())
					return 1;
				return 0;
			}
			if(CmdMain.getMode() == CmdSearchRes)
			{
				if(CTools.clicktoolNextLev())
					return 1;
				return 0;
			}
			return 0;
		}
		
		//pageup
		if(!RunningInsideExercises)
		if(evt.charCode == 0 && evt.keyCode == 33)
		{
			CmdMain.gotoPagePrev();
			return 1;
		}
		
		//pagedown
		if(!RunningInsideExercises)
		if(evt.charCode == 0 && evt.keyCode == 34)
		{
			CmdMain.gotoPageNext();
			return 1;
		}

		//home
		if(!RunningInsideTutorial && !RunningInsideExercises)
		if(evt.charCode == 0 && evt.keyCode == 36)
		{
			CButtons.clickHome();
			return 1;
		}
		
		//del
		//no historioco, apaga a entrada atual
		if(!RunningInsideTutorial && !RunningInsideExercises)
		if(CmdMain.getMode() == CmdHist)
		if(evt.charCode == 0 && evt.keyCode == 46)
		{
			CmdHist.doDelHist();
			return 1;
		}
		
		//del
		//na lista de marcadores, apaga o marcador atual
		if(!RunningInsideTutorial && !RunningInsideExercises)
		if(CmdMain.getMode() == CmdMarks)
		if(evt.charCode == 0 && evt.keyCode == 46)
		{
			CmdMarks.doDelMark();
			return 1;
		}
		
		//tecla O, abrir livro
		if(!RunningInsideTutorial && !RunningInsideExercises)
		if(evt.charCode == 79 || evt.charCode == 111)
		{
			//fazemos com settimeout para voltar imeidatamente
			//setTimeout("CButtons.clickOpen();", 10);
			CButtons.clickOpen();
			return 1;
		}
		
		//tecla P, nova busca
		if(!RunningInsideExercises)
		if(evt.charCode == 80 || evt.charCode == 112)
		{
			CButtons.clicktoolBusca();
			return 1;
		}
		
		//tecla L, coemco do livro
		if(!RunningInsideExercises)
		if(evt.charCode == 76 || evt.charCode == 108)
		{
			CButtons.clickBookStart();
			return 1;
		}
		
		//tecla V leitura
		if(!RunningInsideExercises)
		if(evt.charCode == 86 || evt.charCode == 118)
		{
			CButtons.clickRead();
			return 1;
		}
		
		//tecla V Volta para o começo do exercício.
		if(RunningInsideExercises)
		if(evt.charCode == 86 || evt.charCode == 118)
		{
			CButtons.clickBookStart();
			return 1;
		}
		
		//tecla H hstorico
		if(!RunningInsideTutorial && !RunningInsideExercises)
		if(evt.charCode == 72 || evt.charCode == 104)
		{
			CButtons.clickHist();
			return 1;
		}
		
		//tecla I indice
		if(!RunningInsideExercises)
		if(evt.charCode == 73 || evt.charCode == 105)
		{
			CButtons.clickNdx();
			return 1;
		}
		
		//tecla Z chavear mp3
		if(evt.charCode == 90 || evt.charCode == 122)
		{
			CButtons.switchMp3();
			return 1;
		}
		
		//tecla A ajuda local
		if(!RunningInsideTutorial)
		if(evt.charCode == 65 || evt.charCode == 97)
		{
			CButtons.clickHelpLocal();
			return 1;
		}
		
		//tecla T tutorial
		if(!RunningInsideTutorial)
		if(evt.charCode == 84 || evt.charCode == 116)
		{
			CButtons.clickHelpTutorial();
			return 1;
		}
		
		//tecla R suporte
		if(!RunningInsideTutorial && !RunningInsideExercises)
		if(evt.charCode == 82 || evt.charCode == 114)
		{
			CButtons.clickButFale();
			return 1;
		}
		
		//tecla Q créditos
		if(!RunningInsideTutorial && !RunningInsideExercises)
		if(evt.charCode == 81 || evt.charCode == 113)
		{
			CButtons.clickAbout();
			return 1;
		}
		
		//tecla U atualizacoes
		if(!RunningInsideTutorial && !RunningInsideExercises)
		if(evt.charCode == 85 || evt.charCode == 117)
		{
			CButtons.clickWebUpdate();
			return 1;
		}
		
		//tecla X chavear voz do livro
		if(evt.charCode == 88 || evt.charCode == 120)
		{
			CmdMain.VoiceTTSnext();
			return 1;
		}
		
		//tecla M marcador
		if(!RunningInsideTutorial && !RunningInsideExercises)
		if(evt.charCode == 77 || evt.charCode == 109)
		{
			CButtons.clickinsMarker();
			return 1;
		}
		
		//tecla C conf global
		if(!RunningInsideTutorial && !RunningInsideExercises)
		if(evt.charCode == 67 || evt.charCode == 99)
		{
			CButtons.clickPrefsGlobal();		
			return 1;
		}

		//tecla N indicador de nota de rodapé
		if(!RunningInsideExercises)
		if(evt.charCode == 78 || evt.charCode == 110)
		{
			CTools.clickIndNote();
			return 1;
		}

		//tecla G ir para pagina
		if(!RunningInsideTutorial && !RunningInsideExercises)
		if(evt.charCode == 71 || evt.charCode == 103)
		{
			CTools.clicktoolPage();
			return 1;
		}

		//tecla F tamanho da fonte
		if(evt.charCode == 70 || evt.charCode == 102)
		{
			CPref.fontsize_next();
			//eco de comando
			CSpeak.CommandEcho_text(CMsgIface.EchoFontsize(CPref.fontsize() ));
			//atualiza a tela
			CmdMain.UpdateFontSize();
			return 1;
		}

		//tecla J liga/desliga leitura automatica do texto
		if(evt.charCode == 74 || evt.charCode == 106)
		{
			CTools.clickNavAutoText();
			return 1;
		}

		//exerciciopendente tecla Y ligar/desligar exercicios
		if(false)
		if(!RunningInsideTutorial && !RunningInsideExercises)
		if(evt.charCode == 89 || evt.charCode == 121)
		{
			//exerciciopendente: esta versão abre um exercicio fixo
			CSpeak.forceEnd();

			//tem livro aberto?
			//se nao tiver livro, nao vamos
			if(!CmdMain.OPFpresent())
			{
				CmdMain.ShowWarn(CMsgIface.NoBookOpen());
				return 1;
			}
			if(CmdMain.OPFGet().opffile.GetThisIsExerciseMaster() == "")
			{
				CmdMain.ShowWarn(CMsgIface.ExerciseNoExercInBook());
				return 1;
			}

			//temos que calcular o endereco do exercicio
			var warningpath = "chrome://lidad/content/skin/acc/1024/exerc.xul";
			/*
			//exerciciopendente: criar o chrome://lidad/content/skin/acc/800/exerc.xul";
			if(CPref.interfaceRes())
				warningpath = "chrome://lidad/content/skin/acc/800/exerc.xul";
			*/

			//calcula o endereco base do diretorio de exercicios
			var exercisesBasePathParametro = CUtils.ResolveURL( CmdMain.OPFGet().opffile.GetThisIsExerciseMaster(), CmdMain.OPFGet().opffile.path);
			
			var retVals = 
				{ 
					exercisesBasePath:exercisesBasePathParametro,
					exercisesIDexercise:"1",		//exerciciopendente fixo por enquanto
					opfprefs_livro_exercicios: CmdMain.OPFGet().opffile.opfprefs
				};
			window.openDialog(warningpath, 'exercicio','modal,centerscreen,chrome,resizable', retVals);
			
			//ao sair do exercicio, reaplicar o tamanho da fonte (copiamos o mesmo que fazemos ao mudar as configuracoes globais)
			CmdMain.UpdateFontSize();
		
			CSpeak.setAutonavList(CPref.listautonav());
			CSpeak.setTTSSpeed(CPref.voice_speed());

			CSpeak.setVolTTS(CPref.voice_volume());
			CSpeak.setVolAudioSystem(CPref.audio_volume());
			CTools.updateVolumes();
			
			return 1;
		}

		//tecla E exportar marcadores/anotacoes
		if(!RunningInsideExercises)
		if(evt.charCode == 69 || evt.charCode == 101)
		{
			CButtons.clickButExport();
			return 1;
		}

		//tecla S soletracao
		//no tutorial nao temos pq a soletracao tem ajuda, que é o tutorial
		if(!RunningInsideTutorial)
		if(evt.charCode == 83 || evt.charCode == 115)
		{
			CTools.clickSpeel();
			return 1;
		}

		//tecla . VELOCIDADE TTS MAIS
		if(evt.charCode == 46)
		{
			CTools.clickIncSpeed();
			return 1;
		}

		//tecla , VELOCIDADE TTS MENOS
		if(evt.charCode == 44)
		{
			CTools.clickDecSpeed();
			return 1;
		}

		//tecla + ou = VOLUME TTS MAIS
		if(evt.charCode == 43 || evt.charCode == 61)
		{
			CTools.clickIncVolTTS();
			return 1;
		}

		//tecla - ou _ VOLUME TTS menos
		if(evt.charCode == 45 || evt.charCode == 95)
		{
			CTools.clickDecVolTTS();
			return 1;
		}

		//tecla 0, proximo marcador
		if(!RunningInsideTutorial && !RunningInsideExercises)
		if(evt.charCode == 48)
		{
			CmdMarks.gotoNext();
			return 1;
		}
		
		//tecla 9, marcador anterior
		if(!RunningInsideTutorial && !RunningInsideExercises)
		if(evt.charCode == 57)
		{
			CmdMarks.gotoPrevious();
			return 1;
		}
		
		//tecla 1 a 6, niveis
		//FAZER em algum momento  eo teclado numerico, devemos tratar
		if(!RunningInsideExercises)
		if(evt.charCode >= 49 && evt.charCode <= 54)
		{
			CTools.changeLevelTo(evt.charCode - 49 + 1, true);
			return 1;
		}
		
	}
	
	//nao processamos
	return 0;
},


//processa o enter
_keyenter:function()
{
	if(CmdMain.getMode() == CmdHist)
	{
		CmdHist.doenter();
		return;
	}
	
	if(CmdMain.getMode() == CmdNcx)
	{
		CmdNcx.doenter();
		return;
	}
	
	if(CmdMain.getMode() == CmdMarks)
	{
		CmdMarks.doenter();
		return;
	}
	
	if(CmdMain.getMode() == CmdSearchRes)
	{
		CmdSearchRes.doenter();
		return;
	}
	
	
}

}

