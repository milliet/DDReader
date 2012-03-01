var manager = new CDlgManager();
var dirsleft = new Array();

/*
parametros:
okButton: se clicaram no OK
path: retoran o arquivo escolhido
basepath: opctional, a partide onde procurar
rodandoDaTelaInicial: se esta rodando ]da tela inicial, diferencas:
	se so tiver um arquivo, seleciona ele automaticamente
	se nao tiver nenhum arquivo, retorna imediatamente
nenhumArquivo: só se rodandoDaTelaInicial, indica se nao tem nenhum aarquivo
*/

function finishLoad()
{
	var nossolocal = new CLocale("xuls.properties");
	nossolocal.AplicarIDs( [ "lidad-searchfile", "opensearch.title", "opensearch.volttsLABEL", "opensearch.veloLABEL", "opensearch.ButHelp", "opensearch.fontsize", "opensearch.botcancel" ] );



	CDlgManager_LoadedDialog(CMsgIface.DlgOpenSearchStart());

	//fala as coisas
	controles.voiceid = CPref.voice_system();
	controles.volume = CPref.voice_volume();
	controles.speed = CPref.voice_speed();
	controles.auto = CPref.listautonav();
	controles.fontsize = CPref.fontsize();
	applychanges();
	
	

	//efetivamente faz a busca
	if(window.arguments[0].basepath != "")
	{
		pushone(window.arguments[0].basepath);
		updatesearchstatustxt = window.arguments[0].basepath;
	}
	else
	{
		//vamos procurar em todo mundo
		pushone("C:\\");
		pushone("D:\\");
		pushone("E:\\");
		pushone("F:\\");
		pushone("G:\\");
		pushone("H:\\");
		pushone("I:\\");
		pushone("J:\\");
		pushone("K:\\");
		pushone("L:\\");
		pushone("M:\\");
		pushone("N:\\");
		pushone("O:\\");
		pushone("P:\\");
		pushone("Q:\\");
		pushone("R:\\");
		pushone("S:\\");
		pushone("T:\\");
		pushone("U:\\");
		pushone("V:\\");
		pushone("W:\\");
		pushone("X:\\");
		pushone("Y:\\");
		pushone("Z:\\");
		updatesearchstatustxt = "C:\\";
		dirsleft.reverse()
	}
	updatesearchstatus();
	rodaum();
}

//o cara para colocar na tela, vazio = acabnou de procurar
var updatesearchstatustxt = CMsgIface.DlgOpenSearchComputer();
function updatesearchstatus()
{
	if(updatesearchstatustxt == "")
		return;
	//coloca na tela
	var home = document.getElementById("inicio").contentDocument;
	home.getElementById("InicioHistorico").textContent = CMsgIface.DlgOpenSearchSearch() + updatesearchstatustxt;
	setTimeout("timeout_opensearch_upd();", 1000);
}

function timeout_opensearch_upd()
{
	updatesearchstatus();
}

function pushone(path)
{
	var file = Components.classes["@mozilla.org/file/local;1"].createInstance(Components.interfaces.nsILocalFile);
	file.initWithPath(path);
	dirsleft.push(file);
}

function rodaum()
{
	//pega o primiero elemento
	var este = dirsleft.pop();
	updatesearchstatustxt = este.target;
	
	try
	{
		var entries = este.directoryEntries;
		while(entries.hasMoreElements())
		{
			var entry = entries.getNext();
			entry.QueryInterface(Components.interfaces.nsIFile);
			if(entry.isDirectory())
				dirsleft.push(entry);
			else
			{
				//vamos ver a extensao
				var path = entry.target;
				if(path.toLowerCase().indexOf(".opf") > 0)
				{
					//vamos tentar adicionar
					try
					{
						var novo = new itembusca(path);
						encontrados.push(novo);
					}
					catch(e)
					{
						//ignoramos erros
					}
				}
			}
		}
	}
	catch(e)
	{
		//ignoramos erros
	}
	
	//se acabou, acabou....
	if(dirsleft.length > 0)
		setTimeout("timeout_openasearch_ru();", 1);
	else
		acabounusca();
}

function timeout_openasearch_ru()
{
	rodaum();
}

function acabounusca()
{
	updatesearchstatustxt = "";

	//vamos ver as coisas da tela inicial
	if(window.arguments[0].rodandoDaTelaInicial)
	{
		CSpeak.forceEnd();
		if(encontrados.length <= 0)
		{
			window.arguments[0].nenhumArquivo = true;
			clickok();
			return;
		}
		//se só tiver 1
		if(encontrados.length == 1)
		{
			window.arguments[0].path = encontrados[0].path;
			clickok();
			return;
		}
		
	}
	

	encontrados.sort(_auxSort);

	//vamos transferir as coisas
		//nao temos nada ativo
		this.PreviousHilite = null;
		
		//reconstroi a lista
		var home = document.getElementById("inicio").contentDocument;

		//se o historico estiver vazio, mostra isso		
		if(encontrados.length <= 0)
		{
			home.getElementById("InicioHistorico").innerHTML = '<span class="BuscaArquivoLista">' 
				+ CMsgIface.DlgOpenSearchNoBook() + '</span>';
			CSpeak.CommandEchoGo_text(CMsgIface.DlgOpenSearchNoBook());
			return;
		}

		//limpa a lista
		home.getElementById("InicioHistorico").innerHTML = "";
		// DAQUI PARA A FRENTE PEDRO ALTEROU PARA MONTAR O HTM EM TABELA
		var msg = '<table width="100%" border="0" cellspacing="0" cellpadding="4">';
		for(var i=0; i<encontrados.length; i++)
		{
			var item = encontrados[i];
			var msgitem = "";
			//msg += "< - removablemedia: " + item.removablemedia;
			//msg += "opfuri: " + item.opfuri;
			msgitem = item.title;
			//msg += "dateaccess: " + item.dateaccess;

			home.getElementById("InicioHistoricoConv").textContent = msgitem;
			msg +="<tr onclick='window.parent.gotohistitem(" + i +");' class='BuscaArquivoLista' id='InicioHistoricoItem" + i + "'>";
			msg += "<td width='15px'>" + (i + 1) + "</td>";
			msg += "<td>" + home.getElementById("InicioHistoricoConv").innerHTML + "</td></tr>";
		}
		msg += '</table>';
		// ALTERADO ATÉ AQUI PELO PEDRO
		
		//limpa o div de conversao
		home.getElementById("InicioHistoricoConv").textContent = "";
		//transfere para a tela
		home.getElementById("InicioHistorico").innerHTML = msg;
		
	CSpeak.forceEnd();
	
	falaatual = new fala();
	falaatual.speak();
}

//o cara que tem as infs
function itembusca(path)
{
	this.path = "file:///" + path;	//onde está o arquivo
    xml = CUtils.LoadXML("file:///" + path);	//o XMLDocument dele
	xml = CUtils.GetXMLChildNoException(xml, "package", this.path);
	xml = CUtils.GetXMLChildNoException(xml, "metadata", this.path);
	xml = CUtils.GetXMLChildNoException(xml, "dc-metadata", this.path);
	xml = CUtils.GetXMLChildNoException(xml, "dc:Title", this.path);
	this.title = xml.textContent;
}


//o array do que achamos
var encontrados = new Array();

//para sar o sort
function _auxSort(a,b)
{
	if(a.title == b.title)
		return 0;
	if(a.title > b.title)
		return 1;
	return -1;
}


var falaatual = null;

//o conttrole da fala
function fala()
{
	this.histarray = encontrados;
	this.PreviousHilite = null;
	
	//cria o nosso textlimits
		//avisamos que estamos no fim da lista
		var msgEnd = new CTextItem();
		msgEnd.SetText_string( CMsgIface.DlgOpenSearchListEnd());

		//avisamos que estamos começo fim da lista
		var msgStart = new CTextItem();
		msgStart.SetText_string( CMsgIface.DlgOpenSearchListStart());
		
	this._textLimits = new CTextLimits(this, msgStart, msgEnd, false);
	//o item que estamos falando agora
	this.speakindex = -1;
}

//comeca a falar do comeco
fala.prototype.speak = function()
{
	//marca se nao tem nada
	if(this.histarray.length == 0)
		this._textLimits.setEmpty(true);
	else
		this._textLimits.setEmpty(false);
	
	this.speakindex = -1;
	this._speakcurrent();
}

fala.prototype.TLevt_current = function()
{
	this._speakcurrent();
}

//comeca a falar do ponto atual
fala.prototype._speakcurrent = function()
{
	if(this.speakindex >= this.histarray.length)
		this.speakindex = this.histarray.length - 1;
	if(this.speakindex < 0)
		this.speakindex = 0;
	
	//evento
	{
		//volta o item anterior
		if(this.PreviousHilite != null)
		{
			try
			{
				this.PreviousHilite.attributes.getNamedItem("class").value = "BuscaArquivoLista";
				this.PreviousHilite = null;
			}
			catch(e)
			{
				//ignoramos erros
				this.PreviousHilite = null;
			}
		}
		
		//pega o teim atual
		try
		{
			//no ifram de home
			var home = document.getElementById("inicio").contentDocument;
			this.PreviousHilite = home.getElementById("InicioHistoricoItem" + this.speakindex);
			if(this.PreviousHilite)
			{
				this.PreviousHilite.attributes.getNamedItem("class").value = "BuscaArquivoListaHilite";
				
				//coloca na tela
				this.PreviousHilite.scrollIntoView(false);
			}
		}
		catch(e)
		{
			//ignoramos erros
			this.PreviousHilite = null;
		}
	}

	if(this.histarray.length == 0)
	{
		//avisamos que nao tem nada
		var msg = new CTextItem();
		msg.SetText_string( CMsgIface.DlgOpenSearchNoBook());
		CSpeak.playItem(msg, this._textLimits);
		return;
	}

	//lemos o item atual
	var msg = new CTextItem();
	//falamos com o numero na frente
	//var text = (this.speakindex + 1).toString() + ". ";
	var text = "";
	text += this.histarray[this.speakindex].title;
	msg.SetText_string( text);
	
	//navegacao auto
	msg.listText = true;
	msg.autonav = controles.auto;
	msg.spell = true;

	msg.bookText = true;
	msg.bookVoice = controles.voiceid;
	
	
	CSpeak.playItem(msg, this._textLimits);
	return;
}

//quando terminar de falar o item atual, avancamos para o proximo item
fala.prototype.TLevt_next = function()
{
	//nenhum item
	if(this.histarray.length == 0)
		return;

	//se ja esta no fim, nao vamos falar
	if(this.speakindex + 1 >= this.histarray.length)
	{
		//avisamos que nao tem nada
		this._textLimits.TL_bottomlimit();
		return;
	}
	
	this.speakindex++;
	this._speakcurrent();
}

//para voltar um item para tras
fala.prototype.TLevt_prev = function()
{
	//se ja estamos no comeco, nao subimos mais, só avisamos quem está em cima
	if(this.speakindex <= 0)
	{
		//avisamos que estamos no fim da lista
		this._textLimits.TL_toplimit();
		return;
	}


	this.speakindex--;
	this._speakcurrent();
}


function gotohistitem(i)
{
	try
	{
	window.arguments[0].path = encontrados[i].path;
	}
	catch(e)
	{
		//se der erro aborta
		clickcancel();
	}
	clickok();
	
}


//deram um OK
function clickok()
{
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

function CKeys_keypress(evt)
{
	if(updatesearchstatustxt != "")
		return;

	//vamos rodar
	if(_keyevent(evt))
	{
		//para cancelar a acao dessa tecla
		evt.preventDefault();
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
	return;
}

//processamento efetivo
//retorna true se processamos o evento
function _keyevent(evt)
{
	//teclas com control
	if(evt.ctrlKey == true && evt.altKey == false)
	{
		//tecla control J liga/desliga leitura das listas
		if(evt.charCode == 74 || evt.charCode == 106)
		{
			clicknavigateauto();
			return true;
		}

		//control seta para direita
		if(evt.charCode == 0 && evt.keyCode == 39)
		{
			clicktoolNextLev();
			return true;
		}
		
		//control seta para esquerda
		if(evt.charCode == 0 && evt.keyCode == 37)
		{
			clicktoolPrevLev();
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
			_keyenter();
			return true;
		}
		
		//esc fechar o aplicativo
		if(evt.charCode == 0 && evt.keyCode == 27)
		{
			clickcancel();
			return true;
		}
		
		//espaco paly/apuse
		if(evt.charCode == 32)
		{
			clicktoolPlay();
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
		
		//tecla A ajuda
		if(evt.charCode == 65 || evt.charCode == 97)
		{
			clickhelp();
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
			controles.voiceid = CSpeak.voiceID(i);
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

		//tecla S soletracao
		if(evt.charCode == 83 || evt.charCode == 115)
		{
			clickSpeel();
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

	}
	
	//nao processamos
	return false;
}

//mudaram a voz
function changevoiceBook()
{
		if(updatesearchstatustxt != "")
			return;
	
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



//processa o enter
function _keyenter()
{
	gotohistitem(falaatual.speakindex);
}


function clickSpeel()
{
		if(updatesearchstatustxt != "")
			return;
	
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
	var retVals = { okButton:false, speakitem: current, opfprefs: prefs };
	window.openDialog('Spell.xul','Spell','modal,centerscreen,resizable=no', retVals);
	
	//religamos o som
	CSpeak.gotoStart();
	CSpeak.CommandEcho_text(CMsgIface.EchoSpellOff());
}

//nossas variaveis de controle
var controles = 
{
voiceid: "",
volume: 1,
speed: 0,
fontsize: 100,
auto: true
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


function changefont()
{
		if(updatesearchstatustxt != "")
			return;
	
	//temos que salvar o html e setar ele de novo depois de alterar a fonte
	//se nao, ele perde o espacamento, meio doido
	var home = document.getElementById("inicio").contentDocument;
	var tmp = home.getElementById("InicioHistorico").innerHTML;

	controles.fontsize = document.getElementById("fontSize").value;
	//eco de comando
	CSpeak.CommandEcho_text(CMsgIface.EchoFontsize(controles.fontsize));
	applychanges();
	home.getElementById("InicioHistorico").innerHTML.innerHTML = tmp;
}

function clicknavigateauto()
{
		if(updatesearchstatustxt != "")
			return;
	
	controles.auto = document.getElementById("navigateauto").checked;
	CSpeak.setAutonavBook(controles.auto);
	CSpeak.setAutonavList(controles.auto);
	
	applychanges();

	if(controles.auto)
	{
		CSpeak.forceEnd();
		falaatual.TLevt_next();
	}
}

function clicktoolPlay()
{
		if(updatesearchstatustxt != "")
			return;
	
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
}

function clicktoolPrevLev()
{
		if(updatesearchstatustxt != "")
			return;
	
	falaatual.speakindex = -1;
	falaatual.speak();
}

function clicktoolPrev()
{
		if(updatesearchstatustxt != "")
			return;
	
	CSpeak.gotoPrevious();
}

function clicktoolNextLev()
{
		if(updatesearchstatustxt != "")
			return;
	
	falaatual.speakindex = encontrados.length - 1;
	falaatual._speakcurrent();
}

function clicktoolNext()
{
		if(updatesearchstatustxt != "")
			return;
	
	CSpeak.gotoNext();
}


function changefocus()
{
	document.getElementById("inicio").focus();
}


function applychanges()
{
	changefocus();
	
	//spell.voiceid = controles.voiceid;
	
	//atuo
	document.getElementById("navigateauto").checked = controles.auto;
	//spell.autonav = controles.auto;
	
	//fonte
	document.getElementById("fontSize").value = controles.fontsize;

	var home = document.getElementById("inicio").contentDocument;
	var livroCorpo = home.getElementById("InicioHistorico");
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

function clickhelp()
{
	if(updatesearchstatustxt != "")
		return;
	CSpeak.forceEnd();
	CTutorial.chamarTutorial("2.1.");
}

