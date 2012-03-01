//nossas variaveis de controle
var controles = 
{
voiceid: "",
volume: 1,
speed: 0,
fontsize: 100,
auto: false
}

//terminou de carregar
function finishload()
{
	var nossolocal = new CLocale("xuls.properties");
	nossolocal.AplicarIDs( [ "lidad-spell", "spell.title", "spell.volttsLABEL", "spell.veloLABEL", "toolSpell", "navigateauto", "spell.help", "spell.botcancel", "spell.fontSize" ] );

	//fala as coisas
	CDlgManager_LoadedDialog(CMsgIface.EchoSpell() + CMsgIface.DialogSpellLoad() );

	//vamos determinar a nossa configuracao
	controles.voiceid = CPref.voice_system();
	controles.volume = CPref.voice_volume();
	controles.speed = CPref.voice_speed();
	controles.fontsize = CPref.fontsize();
	var opfprefs = window.arguments[0].opfprefs;
	if(opfprefs != null)
	{
		//tem livro aberto, vamos ver se o texto é do livro
		if(window.arguments[0].speakitem.bookText)
			controles.voiceid = window.arguments[0].speakitem.bookVoice;
	}

	//preenche os combos
	// preenchercombovozes("voiceBook");
	
	//vamos montar 2 arrays: um com as palavras de tela e outro com as palavras para fala
	initspell();
	
	applychanges();
}

/*
function preenchercombovozes(oID)
{
	var lista = document.getElementById(oID);
	lista.removeAllItems();
	var max = CSpeak.voicesCount();
	for(var i = 0; i < max; i++)
		lista.appendItem(CSpeak.voiceName(i),CSpeak.voiceID(i));
}
*/


//atualizamos a partir dos nossos controles na tela
function applychanges()
{

	/*
	//voz na tela
	var lista = document.getElementById("voiceBook");
	var max = CSpeak.voicesCount();
	for(var i = 0; i < max; i++)
	{
		if(controles.voiceid == CSpeak.voiceID(i)){
			lista.selectedIndex = i;
		}
	}
	*/
	spell.voiceid = controles.voiceid;
	
	//atuo
	document.getElementById("navigateauto").checked = controles.auto;
	spell.autonav = controles.auto;
	
	//fonte
	document.getElementById("fontSize").value = controles.fontsize;
	var livro = document.getElementById("texto").contentDocument;
	var livroCorpo = livro.getElementById("LivroLeituraCorpo");
	if(livroCorpo != null)
		livroCorpo.style.fontSize = controles.fontsize + "%";
	
	//volume
	CSpeak.setVolTTS(controles.volume);

	//velocidade
	CSpeak.setTTSSpeed(controles.speed);


	//tts
	//document.getElementById("toolVol").value = CPref.voice_volume() * 100;
	document.getElementById("imagevoltts").height = 40 * controles.volume;
	if(document.getElementById("imagevoltts").height < 2)
		document.getElementById("imagevoltts").height = 2;
	
	//velocidade tts
	//vai de -10 a 10, tem que ir de 0 a 40
	document.getElementById("imageveltts").height = 2 * (controles.speed + 10);
	if(document.getElementById("imageveltts").height < 2)
		document.getElementById("imageveltts").height = 2;


	//para aplicar a mudanca de altura tem que alterar o src de todas as imagens
	if(document.getElementById("imagevoltts").src == "img/voltts.jpg")
		document.getElementById("imagevoltts").src= "img/voltts2.jpg";
	else
		document.getElementById("imagevoltts").src= "img/voltts.jpg";

	if(document.getElementById("imageveltts").src == "img/veltts.jpg")
		document.getElementById("imageveltts").src= "img/veltts2.jpg";
	else
		document.getElementById("imageveltts").src= "img/veltts.jpg";
}

//mudaram a fonte na tela
function changefont()
{
	//temos que salvar o html e setar ele de novo depois de alterar a fonte
	//se nao, ele perde o espacamento, meio doido
	var livro = document.getElementById("texto").contentDocument;
	var livroCorpo = livro.getElementById("LivroLeituraCorpo");
	var tmp = livroCorpo.innerHTML;


	controles.fontsize = document.getElementById("fontSize").value;
	//eco de comando
	CSpeak.CommandEcho_text(CMsgIface.EchoFontsize(controles.fontsize));
	applychanges();
	livroCorpo.innerHTML = tmp;
}

//velocidade
function clickDecVelTTS()
{
	if(controles.speed <= -10)
	{
		CSpeak.CommandEcho_text(CMsgIface.EchoSpeedMin());
		return;
	}
	controles.speed--;
	applychanges();
	CSpeak.CommandEcho_text(CMsgIface.EchoSpeedDec(controles.speed));
}

function clickIncVelTTS()
{
	if(controles.speed >= 10)
	{
		CSpeak.CommandEcho_text(CMsgIface.EchoSpeedMax());
		return;
	}
	controles.speed++;
	applychanges();
	CSpeak.CommandEcho_text(CMsgIface.EchoSpeedInc(controles.speed));
}

//volume
function clickDecVolTTS()
{
	if(controles.volume <= 0)
	{
		CSpeak.CommandEcho_text(CMsgIface.EchoVolTTSMin());
		return;
	}
	controles.volume -= 0.1;
	CSpeak.CommandEcho_text(CMsgIface.EchoVolTTSDec(controles.volume));
	applychanges();
}
function clickIncVolTTS()
{
	if(controles.volume >= 1)
	{
		CSpeak.CommandEcho_text(CMsgIface.EchoVolTTSMax());
		return;
	}
	controles.volume += 0.1;
	CSpeak.CommandEcho_text(CMsgIface.EchoVolTTSInc(controles.volume));
	applychanges();
}

//clicaram no auto
function clicknavigateauto()
{
	controles.auto = document.getElementById("navigateauto").checked;
	CSpeak.setAutonavBook(controles.auto);
	CSpeak.setAutonavList(controles.auto);
	
	applychanges();

	//se nao estiver falando nada, anda
	//if(!CSpeak.isActive())
	//	spell.TLevt_next();
	
	//alias, sempre anda
	CSpeak.forceEnd();
	spell.TLevt_next();

/*
nao temos eco de comando, para comecar a falar imediatamente
	if(controles.auto)
		CSpeak.CommandEcho_text(CMsgIface.EchoNavigateAutoOn());
	else
		CSpeak.CommandEcho_text(CMsgIface.EchoNavigateAutoOff());
*/
}

//mudaram a voz
function changevoiceBook()
{
	//controles.voiceid = document.getElementById("voiceBook").value;
	//CSpeak.CommandEcho_text(CMsgIface.EchoNextVoice(document.getElementById("voiceBook").label));

	//voz na tela
	var voz = "nova voz";
	var max = CSpeak.voicesCount();
	for(var i = 0; i < max; i++)
	{
		if(controles.voiceid == CSpeak.voiceID(i)){
			voz = CSpeak.voiceName(i);
		}
	}
	CSpeak.CommandEcho_text(CMsgIface.EchoNextVoice(voz));
	applychanges();
}

function clickhelp()
{
	CSpeak.forceEnd();
	CTutorial.chamarTutorial("4.2.");
}


//deram um cancelar
function clickcancel()
{
	CSpeak.forceEnd();
	window.close();
}

var spell = null;
var SpellEvt =
{
	previous: null,
	EVTSPChange: function(spell, index)
	{
		if(this.previous != null)
		{
			try
			{
				this.previous.attributes.getNamedItem("class").value = "normal";
			}
			catch(e)
			{
				//nao fazemos nada
			}
		}
		
		var livro = document.getElementById("texto").contentDocument;
		this.previous = livro.getElementById("sp" + (index*2 + 1) );
		try
		{
			this.previous.attributes.getNamedItem("class").value = "destaque";
			//coloca na tela
			this.previous.scrollIntoView(false);
		}
		catch(e)
		{
			//nao fazemos nada
		}
	}
}

function initspell()
{
	spell = new CSpell( window.arguments[0].speakitem.GetText_NodeOrString() , SpellEvt);
	
	var livro = document.getElementById("texto").contentDocument;
	var livroCorpo = livro.getElementById("LivroLeituraCorpo");

	//vamos montar o html
	var html = "";
	var texto = "";
	var arr = spell.GetSpeakarr();
	var arrsp = spell.GetSpellarr();
	for(var i=0; i < arr.length; i++)
	{
		livro.getElementById("converte").textContent = arr[i];
		html += '<span class="normal" id="sp' + i.toString() + '">';
		html += livro.getElementById("converte").innerHTML;
		html += '</span>';
		//texto +=  i.toString() + ": --" + arr[i] + "--" + arrsp[i] + "--" + String.fromCharCode(13);
	}
	livro.getElementById("converte").textContent = "";
	livroCorpo.innerHTML = html;
}


//eventos de tela
function clicktoolPrev()
{
CSpeak.forceEnd();
spell.TLevt_prev();
}

function clicktoolNext()
{
CSpeak.forceEnd();
spell.TLevt_next();
}

function clickspell()
{
//sempre que soletra sai do modo automatico
document.getElementById("navigateauto").checked = false;
spell.autonav = false;

CSpeak.forceEnd();
var txt = spell.getTextSpell();
txt = CSpellMsg.SpellText(txt);
var msg = new CTextItem();
msg.SetText_string( txt);
msg.bookText = true;
msg.bookVoice = controles.voiceid;
CSpeak.playItem(msg, null);
}


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

//evento de keydown
keypress:function(evt)
{
	//vamos rodar
	if(this._keyevent(evt))
	{
		//para cancelar a acao dessa tecla
		evt.preventDefault();
		return;
	}

	//alt-f4 repassamos
	if(evt.altKey == true && evt.keyCode == 115)
		return;
	//esc repassamos
	if(evt.keyCode == 27)
		return;
	
	//nao processamos a tecla, avisamos que a tecla nao existe
	var tecla = CSpellMsg.KeyText(evt);

	//mensagem
	tecla = CMsgIface.KeyNotMapped(tecla);
	
	//avisamos, ignorando eco de comandos
	CSpeak.CommandEchoGo_text(tecla);
	
	//para cancelar a acao dessa tecla
	evt.preventDefault();
	return;
},

//processamento efetivo
//retorna true se processamos o evento
_keyevent:function(evt)
{
	//teclas com control
	if(evt.ctrlKey == true && evt.altKey == false)
	{
		//tecla control J liga/desliga leitura das listas
		if(evt.charCode == 74 || evt.charCode == 106)
		{
			document.getElementById("navigateauto").checked = !document.getElementById("navigateauto").checked;
			clicknavigateauto();
			return true;
		}

	}
	
	//teclas normais, nao processamos com control ou alt
	//ignoramos o shift
	if(evt.ctrlKey == false && evt.altKey == false)
	{
		//tratamento do enter
		if(evt.charCode == 0 && evt.keyCode == 13)
		{
			clickspell();
			return true;
		}
		
		//seta para baixo
		if(evt.charCode == 0 && evt.keyCode == 40)
		{
			clicktoolNext();
			return true;
		}
		
		//seta para cima
		if(evt.charCode == 0 && evt.keyCode == 38)
		{
			clicktoolPrev();
			return true;
		}
		
		//seta para esquerda
		if(evt.charCode == 0 && evt.keyCode == 37)
		{
			clicktoolPrev();
			return true;
		}
		
		//seta para direita
		if(evt.charCode == 0 && evt.keyCode == 39)
		{
			clicktoolNext();
			return true;
		}
		
		//tab
		if(evt.charCode == 0 && evt.keyCode == 9 && evt.shiftKey == false)
		{
			clicktoolNext();
			return true;
		}
		
		//shift tab
		if(evt.charCode == 0 && evt.keyCode == 9 && evt.shiftKey == true)
		{
			clicktoolPrev();
			return true;
		}
		
		//tecla X chavear voz do livro
		if(evt.charCode == 88 || evt.charCode == 120)
		{
			//procura a selecionada atualmente
			var max = CSpeak.voicesCount();
			for(var i = 0; i < max; i++)
			{
				if(controles.voiceid == CSpeak.voiceID(i))
				{
					//achamos o atual
					break;
				}
			}
			
			//vamos para a proxima
			i++;
			if(i >= max)
				 i =0;
			//document.getElementById("voiceBook").value = CSpeak.voiceID(i);
			changevoiceBook();
			return true;
		}
		
		//tecla F tamanho da fonte
		if(evt.charCode == 70 || evt.charCode == 102)
		{
			document.getElementById("fontSize").value = CPref.fontsize_next_get(controles.fontsize);
			changefont();
			return true;
		}

		//tecla J liga/desliga leitura automatica do texto
		if(evt.charCode == 74 || evt.charCode == 106)
		{
			document.getElementById("navigateauto").checked = !document.getElementById("navigateauto").checked;
			clicknavigateauto();
			return true;
		}

		//tecla . VELOCIDADE TTS MAIS
		if(evt.charCode == 46)
		{
			clickIncVelTTS();
			return true;
		}

		//tecla , VELOCIDADE TTS MENOS
		if(evt.charCode == 44)
		{
			clickDecVelTTS();
			return true;
		}

		//tecla + ou = VOLUME TTS MAIS
		if(evt.charCode == 43 || evt.charCode == 61)
		{
			clickIncVolTTS();
			return true;
		}

		//tecla - ou _ VOLUME TTS menos
		if(evt.charCode == 45 || evt.charCode == 95)
		{
			clickDecVolTTS();
			return true;
		}

		//tecla S soletracao
		if(evt.charCode == 83 || evt.charCode == 115)
		{
			clickcancel();
			return true;
		}

		//tecla A ajuda
		if(evt.charCode == 65 || evt.charCode == 97)
		{
			clickhelp();
			return true;
		}

	}
	
	//nao processamos
	return false;
}


}

function changefocus()
{
	document.getElementById("toolSpell").focus();
}

