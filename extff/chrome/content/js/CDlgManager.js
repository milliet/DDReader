//controles de timeout diversos
var timeout_DlgMan_HitControl = 100;
var timeout_CDlgMan_focus_gotfocus = 50;
var timeout_CDlgMan_focus_lostfocus = 100;	//precisa ser maior que o timeout_CDlgMan_focus_gotfocus


/*
para que as caixas de diálogo falem

tem que criar uma variavel para cada controle de tela (checkbox, menu, botao, etc)
e adicionar cada um deles no manager
os controles precisam ter o evento onfocus

cada controle possui a seguinte interface:
id: id do controle
item: item sendo controlado
eventText: pega o texto a ser falado
key: processa uma tecla (somente para o textbox)
*/



/*
=============================================================================
=============================================================================
utilitarios gerais
*/

//para indicar que acaboud de carregar uma caixa de dialogo
//funcao estatica, nao é usada somente por caixas gerenciadas
function CDlgManager_LoadedDialog(msg)
{
	window.addEventListener('blur', CDlgMan_focus.lostfocus, false);

	//velocidade do TTS
	CSpeak.setTTSSpeed(CPref.voice_speed());
	
	//volumes
	CSpeak.setVolTTS(CPref.voice_volume());
	CSpeak.setVolAudioSystem(CPref.audio_volume());
	CSpeak.setVolAudioBook(CPref.audio_volume());

	//texto inicial da caixa de dialogo	
	CSpeak.CommandEchoGo_text(msg);
}



/*
=============================================================================
=============================================================================
gerenciamento de foco de uma caixa de diálogo
este cara é um singleton porque precisamos do nome da classe para o setTimeout
*/

function _CDlgMan_focus()
{
	//se estamos com o foco
	this._weHaveFocus = true;
	//o id do nosso timeout, para poder cancelar ele
	this._timeoutid = -1;
	//se estamos falando (quer dizer, se o foco ainda esta com a gente, e so esta pulando entre os controles)
	this._stillSpeaking = true;
	//rotina a chamar quando reativar o foco
	this._callback = null;
}

//rotina chamada ao voltar o foco
_CDlgMan_focus.prototype.setCallback = function(callback)
{
	this._callback = callback;
}

//para o setTimeout
function timeout__CDlgMan_focus()
{
	CDlgMan_focus._weHaveFocus = true;
}
function timeout__CDlgMan_stop()
{
	CDlgMan_focus.stop();
	if(typeof(window.CSkin) != "undefined")
		CSkin.RestaurarFocoSkin();
}


//quando alguem receber o foco
_CDlgMan_focus.prototype.gotfocus = function()
{
	//com timeout para ocorrer depois de alguma perda de foco
	//note que o ajuste do tmepo é fundamental
	setTimeout("timeout__CDlgMan_focus()", timeout_CDlgMan_focus_gotfocus);
	if(CDlgMan_focus._timeoutid != -1)
		clearTimeout(CDlgMan_focus._timeoutid);
	CDlgMan_focus._timeoutid = -1;
	
	//se a gente nao estva falando, comecamos a falar
	if(!CDlgMan_focus._stillSpeaking)
	{
		CDlgMan_focus._stillSpeaking = true;
		if(CDlgMan_focus._callback != null)
			CDlgMan_focus._callback();
	}
}

//quando alguem perder o foco
_CDlgMan_focus.prototype.lostfocus = function()
{
	CDlgMan_focus._weHaveFocus = false;
	//colocamos o timeout para disparar o evento
	if(CDlgMan_focus._timeoutid != -1)
		clearTimeout(CDlgMan_focus._timeoutid);
	CDlgMan_focus._timeoutid = setTimeout("timeout__CDlgMan_stop()", timeout_CDlgMan_focus_lostfocus);
}


//vamos ignorar o proximo blur
//os exercicios tem um comportamento meio diferente
_CDlgMan_focus.prototype.ignorenextblur = function()
{
	if(CDlgMan_focus._timeoutid != -1)
		clearTimeout(CDlgMan_focus._timeoutid);
	CDlgMan_focus._timeoutid = -1;
}

//vamos parar de falar
_CDlgMan_focus.prototype.stop = function()
{
	if(CDlgMan_focus._weHaveFocus)
		return;

	//paramos de falar
	CSpeak.forceEnd();
	CDlgMan_focus._stillSpeaking = false;
},

//o objeto
CDlgMan_focus = new _CDlgMan_focus();



/*
=============================================================================
=============================================================================
auxiliar para navegar no textbox
pega a unidade atual
calcula tudo no construtor
*/
function CDlgMan_tbex_unit(controle)
{
	var texto = controle.value;
	if(texto.length == 0)
		return;
	var indice = controle.selectionStart;
	this.separator = CSpell_IsSeparator(texto.charAt(indice));

	//temos que "excpandir" a selecao atuaql para englobar a unidade atual
	//isto é, se for um separador, voltamos a avançamos até esbarra em não-separadores
	//e vice-versa

	this.start = indice;
	while(this.start > 0)
	{
		var thissep = CSpell_IsSeparator(texto.charAt(this.start));
		if(thissep != this.separator)
		{
			this.start ++;
			break;
		}
		this.start --;
	}
	
	
	this.end = indice;
	while(this.end < texto.length)
	{
		var thissep = CSpell_IsSeparator(texto.charAt(this.end));
		if(thissep != this.separator)
		{
			this.end --;
			break;
		}
		this.end ++;
	}
	
	//armazena a palavra
	this.word = texto.toString().substring(this.start, this.end + 1);
}

//inicio da unidade
CDlgMan_tbex_unit.prototype.start = 0;
//fim da unidade
CDlgMan_tbex_unit.prototype.end = 0;
//palavra da unidade
CDlgMan_tbex_unit.prototype.word = "";
//se é um conjunto de speraradores
CDlgMan_tbex_unit.prototype.separator = false;


/*
=============================================================================
=============================================================================
gerenciador de textbox com edicao estendida

NOTA: o textbox deve ter:
onfocus="manager.focoid('iddocontrole')" 
onkeypress="manager.key(this, event)" 
oninput="manager.change(this)" 
*/

function CDlgMan_tbext(id, controle, msglabel, max, eventListener, chavebusca)
{
	this.id = id;
	this.item = controle;
	this.msglabel = msglabel + ". ";
	this.max = max;
	this.eventListener = eventListener;
	this.chavebusca = chavebusca;
}

//o id deste cara
CDlgMan_tbext.prototype.id = "";
//o controle
CDlgMan_tbext.prototype.item = null;
//mensagem de label deste cara
CDlgMan_tbext.prototype.msglabel = "";
//tamanho maximo
CDlgMan_tbext.prototype.max = 10000;
//tem que implementar: onenter
CDlgMan_tbext.prototype.eventListener = null;

CDlgMan_tbext.prototype.eventText = function()
{
	return this.msglabel;
}

CDlgMan_tbext.prototype.change = function()
{
	if (this.item.textLength > this.max)
	{
		var msg = CMsgIface.LimitadoA1() + this.max + CMsgIface.LimitadoA2();
		CDialogs.WarnEscToContinue(msg, null);
		this.item.value = String(this.item.value).substring(0,this.max);
	}
}

CDlgMan_tbext.prototype.key = function(evnt)
{
	//sde nao estamos usando a nossa edicao, anao fazemos nada
	if(!CPref.extendededit())
	{
		//tratamento do enter
		if(evnt.charCode == 0 && evnt.keyCode == 13)
		{
			if(this.eventListener != null)
				this.eventListener.onenter();
			return;
		}
		
		//eco de digitacao
		if(evnt.charCode != 0)
		{
			var tecla = String.fromCharCode(evnt.charCode);
			CSpeak.echotyping( CSpellMsg.SpellText(tecla) );
		}
		return;
	}
		
	//garantimos que nao tenha nada selecionado
	this.item.selectionEnd = this.item.selectionStart;
	
	//vamos rodar
	if(this._keyevent(evnt))
	{
		//para cancelar a acao dessa tecla
		evnt.preventDefault();
		return;
	}

	//eco de digitacao
	if(evnt.charCode != 0)
	{
		var tecla = String.fromCharCode(evnt.charCode);
		CSpeak.echotyping( CSpellMsg.SpellText(tecla) );
	}
}

CDlgMan_tbext.prototype._keyevent = function(evt)
{
	//teclas com control
	if(evt.ctrlKey == true && evt.altKey == false)
	{
		//tecla control del	Apaga o conteúdo do campo
		if(evt.keyCode == 46 && evt.charCode == 0)
		{
			this.item.value = "";
			CSpeak.CommandEcho_text(CMsg.FieldDeleted());
			return true;
		}
		
		//tecla control L ler campo
		if(evt.charCode == 76 || evt.charCode == 108)
		{
			//Lê o conteúdo atual (se está lendo, pára a leitura). 
			//MUDAMOS O COMPORTAMENTO: nao para nao, sempre recomeca
			/*
			if(CSpeak.isActive())
				CSpeak.forceEnd();
			else
				CSpeak.CommandEchoGo_text(this.item.value);
			*/
			CSpeak.forceEnd();
			CSpeak.CommandEchoGo_text(this.item.value);
			return true;
		}

		//tecla control A ajuda (somente se a ajuda xistir)
		if(evt.charCode == 65 || evt.charCode == 97)
		if(this.chavebusca != "")
		{
			CSpeak.forceEnd();
			CTutorial.chamarTutorial(this.chavebusca);
			CSpeak.CommandEcho_text(CMsgIface.EchoTutorialOff());
			return true;
		}


		//tecla control espaço ler campo
		if(evt.charCode == 32)
		{
			//Lê o conteúdo atual (se está lendo, pára a leitura). 
			//MUDAMOS O COMPORTAMENTO: nao para nao, sempre recomeca
			var atual = new CDlgMan_tbex_unit(this.item);
			var letra = atual.word;
			if(atual.separator)
				letra = CSpellMsg.SpellText(letra);
			CSpeak.forceEnd();
			CSpeak.CommandEchoGo_text(letra);
			return true;
		}

		//tecla control S soletrar campo
		if(evt.charCode == 83 || evt.charCode == 115)
		{
			var atual = new CDlgMan_tbex_unit(this.item);
			var letra = atual.word;
			letra = CSpellMsg.SpellText(letra);
			CSpeak.forceEnd();
			CSpeak.CommandEchoGo_text(letra);
			return true;
		}

		//tratamento do enter
		if(evt.charCode == 0 && evt.keyCode == 13)
		{
			if(this.eventListener != null)
				this.eventListener.onenter();
			return true;
		}
		

		//seta para esquerda, inicio do texto
		if(evt.charCode == 0 && evt.keyCode == 37)
		{
			this.item.selectionStart = 0;
			this.item.selectionEnd = 0;
			CSpeak.forceEnd();
			CSpeak.CommandEcho_text(CMsg.FieldStart());
			return true;
		}
		
		//seta para direita, fim do texto
		if(evt.charCode == 0 && evt.keyCode == 39)
		{
			this.item.selectionStart = this.item.value.length;
			this.item.selectionEnd = this.item.value.length;
			CSpeak.forceEnd();
			CSpeak.CommandEcho_text(CMsg.FieldEnd());
			return true;
		}
	}
	
	//teclas normais, nao processamos com control ou alt
	//ignoramos o shift
	if(evt.ctrlKey == false && evt.altKey == false)
	{

		//Home, inicio do texto
		if(evt.charCode == 0 && evt.keyCode == 36)
		{
			this.item.selectionStart = 0;
			this.item.selectionEnd = 0;
			CSpeak.forceEnd();
			CSpeak.CommandEcho_text(CMsg.FieldStart());
			return true;
		}
		
		//End, fim do texto
		if(evt.charCode == 0 && evt.keyCode == 35)
		{
			this.item.selectionStart = this.item.value.length;
			this.item.selectionEnd = this.item.value.length;
			CSpeak.forceEnd();
			CSpeak.CommandEcho_text(CMsg.FieldEnd());
			return true;
		}

		//seta para baixo 
		//Navega pelas letras da unidade atual. Move o ponto de inserção somente dentro da unidade atual.
		if(evt.charCode == 0 && evt.keyCode == 40)
		{
			if(this.item.value == "")
				return true;
			var atual = new CDlgMan_tbex_unit(this.item);
			//se estiver no fim, vai para o comeco
			if(this.item.selectionStart >= atual.end)
				this.item.selectionStart = atual.start;
			else
				this.item.selectionStart++;
			
			//fim = comeco
			this.item.selectionEnd = this.item.selectionStart;
			
			//fala a letra atual
			var max = this.item.selectionStart;
			if(max == this.item.value.length)
				max = this.item.value.length - 1;
			var letra = this.item.value.substring(max, max + 1);
			letra = CSpellMsg.SpellText(letra);

			CSpeak.forceEnd();
			var msg = new CTextItem();
			msg.SetText_string( letra);
			CSpeak.playItem(msg, null);

			return true;
		}
		
		//seta para cima
		//Navega pelas letras da unidade atual. Move o ponto de inserção somente dentro da unidade atual.
		if(evt.charCode == 0 && evt.keyCode == 38)
		{
			if(this.item.value == "")
				return true;

			var atual = new CDlgMan_tbex_unit(this.item);
			//se estiver no fim, vai para o comeco
			if(this.item.selectionStart <= atual.start)
				this.item.selectionStart = atual.end;
			else
				this.item.selectionStart--;
			
			//fim = comeco
			this.item.selectionEnd = this.item.selectionStart;
			
			//fala a letra atual
			var max = this.item.selectionStart;
			if(max == this.item.value.length)
				max = this.item.value.length - 1;
			var letra = this.item.value.substring(max, max + 1);
			letra = CSpellMsg.SpellText(letra);

			CSpeak.forceEnd();
			var msg = new CTextItem();
			msg.SetText_string( letra);
			CSpeak.playItem(msg, null);

			return true;
		}
		
		
		//seta para esquerda
		//Anda entre as unidades (palavras e separadores) e fala a unidade assim que mover
		if(evt.charCode == 0 && evt.keyCode == 37)
		{
			if(this.item.value == "")
				return true;

			var atual = new CDlgMan_tbex_unit(this.item);
			//volta uma unidade
			if(atual.start > 0)
				this.item.selectionStart = atual.start - 1;
			else
				this.item.selectionStart = 0;
			
			//vai para o comeco dessa undiade
			atual = new CDlgMan_tbex_unit(this.item);
			this.item.selectionStart = atual.start;
			
			//fim = comeco
			this.item.selectionEnd = this.item.selectionStart;
			
			//fala a unidade atual
			var letra = atual.word;
			//se for um bloco de separadores, soletra
			if(atual.separator)
				letra = CSpellMsg.SpellText(letra);

			CSpeak.forceEnd();
			var msg = new CTextItem();
			msg.SetText_string( letra);
			CSpeak.playItem(msg, null);

			return true;
		}
		
		//seta para direita
		//Anda entre as unidades (palavras e separadores) e fala a unidade assim que mover
		if(evt.charCode == 0 && evt.keyCode == 39)
		{
			if(this.item.value == "")
				return true;

			var atual = new CDlgMan_tbex_unit(this.item);
			//volta uma unidade
			if(atual.end + 1 < this.item.value.length)
				this.item.selectionStart = atual.end + 1;
			else
				this.item.selectionStart = this.item.value.length;
			
			//fim = comeco
			this.item.selectionEnd = this.item.selectionStart;
			
			//fala a unidade atual
			atual = new CDlgMan_tbex_unit(this.item);
			var letra = atual.word;
			//se for um bloco de separadores, soletra
			if(atual.separator)
				letra = CSpellMsg.SpellText(letra);

			CSpeak.forceEnd();
			var msg = new CTextItem();
			msg.SetText_string( letra);
			CSpeak.playItem(msg, null);

			return true;
		}
		
		//Del	Apaga a unidade atual
		if(evt.charCode == 0 && evt.keyCode == 46)
		{
			if(this.item.value == "")
				return true;

			var atual = new CDlgMan_tbex_unit(this.item);
			//volta uma unidade
			var txt = this.item.value.toString();
			this.item.value = txt.substring(0, atual.start) + txt.substring(atual.end + 1, txt.length);

			this.item.selectionStart = atual.start;
			//fim = comeco
			this.item.selectionEnd = this.item.selectionStart;
			
			//fala a unidade atual
			var atual = new CDlgMan_tbex_unit(this.item);
			var letra = atual.word;
			//se for um bloco de separadores, soletra
			if(atual.separator)
				letra = CSpellMsg.SpellText(letra);

			CSpeak.forceEnd();
			var msg = new CTextItem();
			msg.SetText_string( letra);
			CSpeak.playItem(msg, null);

			return true;
		}
	}
	
	//nao processamos
	return false;
}



/*
=============================================================================
=============================================================================
gerenciador de menulist

NOTA: o menulist deve ter:
onfocus="manager.foco(this)" 
oncommand="manager.foco(this)" 
*/
function CDlgMan_ml(id, msglabel, extramsg, onemsg)
{
	this.id = id;
	this.item = document.getElementById(this.id);
	this.extramsg = ". " + extramsg;
	this.msglabel = msglabel + ". ";
	this.onemsg = null;
	if(onemsg != null)
		this.onemsg = onemsg + ". ";
}

//o id deste cara
CDlgMan_ml.prototype.id = "";
//o controle
CDlgMan_ml.prototype.item = null;
//para montar a mensagem a falar
CDlgMan_ml.prototype.extramsg = "";
//mensagem de label deste cara
CDlgMan_ml.prototype.msglabel = "";
//mensagem se so tiver uma opcao
CDlgMan_ml.prototype.onemsg = "";


CDlgMan_ml.prototype.eventText = function()
{
	try
	{
		if(this.onemsg != null)
		if(this.item.childNodes.item(0).childNodes.length == 1)
		{
			var ret = this.msglabel;
			ret += this.item.label;
			ret += this.onemsg;
			return ret;
		}
	}
	catch(e)
	{
		//ignoramos erros
	}
	
	//o que falamos deste controle
	var ret = this.msglabel;
	ret += this.item.label;
	ret += this.extramsg;
	return ret;
}



/*
=============================================================================
=============================================================================
gerenciador de checkbox

NOTA: o checkbox deve ter:
onfocus="manager.foco(this)" 
oncommand="manager.foco(this)" 
onclick="manager.foco(this)" 
*/
function CDlgMan_cb(id, controle, onmsg, offmsg, extramsg)
{
	this.id = id;
	this.item = controle;
	this.onmsg = ". " + onmsg;
	this.offmsg = ". " + offmsg;
	this.extramsg = ". " + extramsg;

	//nos exercicios fica ponto a mais	
	if(RunningInsideExercises)
	{
		this.onmsg = onmsg;
		this.offmsg = offmsg;
		this.extramsg = extramsg;
	}

}

//o id deste cara
CDlgMan_cb.prototype.id = "";
//o controle
CDlgMan_cb.prototype.item = null;
//para montar a mensagem a falar
CDlgMan_cb.prototype.onmsg = "";
CDlgMan_cb.prototype.offmsg = "";
CDlgMan_cb.prototype.extramsg = "";


CDlgMan_cb.prototype.eventText = function()
{
	//o que falamos deste controle
	var ret = this.item.label;
	if(this.item.checked)
		ret += this.onmsg;
	else
		ret += this.offmsg;
	ret += this.extramsg;
	return ret;
}


/*
=============================================================================
=============================================================================
gerenciador de botao

NOTA: o botao deve ter:
onfocus="manager.foco(this)" 
*/
function CDlgMan_but(id, msg)
{
	this.id = id;
	this.item = document.getElementById(this.id);
	this.msg = msg;
}

//o id deste cara
CDlgMan_but.prototype.id = "";
//o controle
CDlgMan_but.prototype.item = null;
//para montar a mensagem a falar
CDlgMan_but.prototype.msg = "";


CDlgMan_but.prototype.eventText = function()
{
	//o que falamos deste controle
	return this.msg;
}


/*
=============================================================================
=============================================================================
gerenciador de textbox de senha
Basicamente, é um campo de senha que o backspace apaga tudo e tem um eco de digitacao diferente

NOTA: o textbox deve ter:
onfocus="manager.focoid('iddocontrole')" 
onkeypress="manager.key(this, event)" 
oninput="manager.change(this)" 
*/

function CDlgMan_pass(id, msglabel, eventListener)
{
	this.id = id;
	this.item = document.getElementById(this.id);
	this.msglabel = msglabel + ". ";
	this.eventListener = eventListener;
}

//o id deste cara
CDlgMan_pass.prototype.id = "";
//o controle
CDlgMan_pass.prototype.item = null;
//mensagem de label deste cara
CDlgMan_pass.prototype.msglabel = "";
//tem que implementar: onenter
CDlgMan_pass.prototype.eventListener = null;

CDlgMan_pass.prototype.eventText = function()
{
	return this.msglabel;
}

CDlgMan_pass.prototype.change = function()
{
	//nao fazemos naa, nao tem nenhum limite
}


CDlgMan_pass.prototype.key = function(evnt)
{
	//tratamento do enter
	if(evnt.charCode == 0 && evnt.keyCode == 13)
	{
		if(this.eventListener != null)
			this.eventListener.onenter();
		return;
	}
		
	//backspace ou del, apaga tudo
	if( (evnt.charCode == 0 && evnt.keyCode == 8) || (evnt.charCode == 0 && evnt.keyCode == 46) )
	{
		CSpeak.forceEnd();
		CSpeak.CommandEchoGo_text( CMsgIface.PassDeletedField() );
		this.item.value = "";
		return;
	}
		
	//eco de digitacao
	if(evnt.charCode != 0)
	{
		CSpeak.CommandEchoGo_audio("typepass.mp3");
	}
	return;
}


/*
=============================================================================
=============================================================================
o gerenciador
*/

function CDlgManager()
{
}

//o array de controles que gerenciamos
CDlgManager.prototype.array = new Array();


//para adicionar um controle gerenciado
CDlgManager.prototype.add = function(item)
{
	this.array.push(item);
}

//gambiarra braba: podemos desabilitar a mensagem do proximo foco
//é para resolver um problema ao selecionar um item de um listbox, que implica em uma mudanca posterior de foco
//e nao existe outra alternativa para cancelar o evento do foco
CDlgManager.prototype.ignoreNextFocus = false;


//evento de foco ou alteracao, vamos falar
CDlgManager.prototype.foco = function(id)
{
	if(this.ignoreNextFocus)
	{
		//20100503: alguma mudança no firefox 3.6.3, com esta linha passa a funcionar
		this.ignoreNextFocus = false;
		return;
	}
	
	//procura na nossa lista
	for(var i = 0; i < this.array.length; i++)
	{
		if(this.array[i].item == id)
		{
			CSpeak.forceEnd();
			CSpeak.CommandEchoGo_text( this.array[i].eventText() );
			return;
		}
	}
	
}


//evento de foco ou alteracao, vamos falar
CDlgManager.prototype.focoid = function(id)
{
	if(this.ignoreNextFocus)
	{
		//20100503: alguma mudança no firefox 3.6.3, com esta linha passa a funcionar
		this.ignoreNextFocus = false;
		return;
	}
	
	//procura na nossa lista
	for(var i = 0; i < this.array.length; i++)
	{
		if(this.array[i].id == id)
		{
			CSpeak.forceEnd();
			CSpeak.CommandEchoGo_text( this.array[i].eventText() );
			return;
		}
	}
	
}


//evento de tecla, vamos processar
CDlgManager.prototype.key = function(id, evnt)
{
	//procura na nossa lista
	for(var i = 0; i < this.array.length; i++)
	{
		if(this.array[i].item == id)
		{
			this.array[i].key(evnt);
			return;
		}
	}
	
	//nao achamos, nao fazemos nada
}


//evento de alteracao de caixa de texto
CDlgManager.prototype.change = function(id)
{
return;
	//procura na nossa lista
	for(var i = 0; i < this.array.length; i++)
	{
		if(this.array[i].item == id)
		{
			this.array[i].change();
			return;
		}
	}
	
	//nao achamos, nao fazemos nada
}


