//NOTA: este arquivo tb vai para o instalador, quando mudar alguma coisa, tem que testar no instalador tambem

/*
===========================================
===========================================
===========================================
o controle basico

NOTA: este cara é um singleton, que tem que ter o nome estático de __CSpeakControl
isso para que as rotinas de timeout funcionem

NOTA 2: interface do callingObject:
Spkevt_next() - acabou de falar o atual
Spkevt_prev_go() - para voltar para o anterior (note que ele primeiro cirula na lista interna paa depois repassar o evento)
Spkevt_prev_cap() - retorna TRUE se capaz de voltar para o anterior (se não for, nao dispara o evento Spkevt_prev_go e fica no primeiro item da lista que está tocando)

*/

var erroGeralBloquearTudo = false;
function _CSpeakControl()
{
	if(erroGeralBloquearTudo)
		return;
		
	//se der erro, temos que avisar
	try
	{
		//instanciamos
		var iface = Components.interfaces.ILidaAudio;
		var componente= Components.classes["@lidad.dll/lidaaudio;1"].createInstance();
		this._componente= componente.QueryInterface(iface);

		componente= Components.classes["@lidad.dll/lidaaudio;1"].createInstance();
		this._compextra= componente.QueryInterface(iface);
		
		//testamos a versao
		var version = this._componente.getVersion();
		var expected = "Lida-D versão 3.0, lidad.ddl versão 1.1.6";
		if(version != expected)
		{
			erroGeralBloquearTudo = true;
			CDialogs.FatalError_exception(CMsg.DllWrongVersion(version, expected));
			return;
		}

		//testar se tem TTS e audio
		var noinstaladro = false;
		if(! (typeof RunningInsideInstaller == "undefined") )
		if(RunningInsideInstaller != null)
		if(RunningInsideInstaller)
			noinstaladro = true;
		
		if(!noinstaladro)
		{
			var hastts = true;
			if(!this._componente.isTTSinstalled())
			{
				hastts = false;
			}
			if(this._componente.voicesCount() == 0)
			{
				hastts = false;
			}
			if(!hastts)
			{
				erroGeralBloquearTudo = true;
				try
				{
					if(this._componente.isAudioInstalled())
					{
						//colocamos o volume no maximo
						this._componente.volAudio = 1;
						this._compextra.volAudio = 1;
						
						//falamos em WAV para nao dar erro
						//e se der ignoramos
						var fp = CUtils.GetExtensionFolder();
						fp.append("chrome");
						fp.append("content");
						fp.append("lang");
						fp.append(CPref.language());
						fp.append("audio");
						fp.append("notts.mp3");
						this._compextra.playAudio(fp.target, -1, -1);
					}
				}
				catch(e)
				{
				}
				CDialogs.FatalError_exception(CMsg.NoTTSInstalled());
				try
				{
					//tentamos forcar a fechar imediatamente
					window.close();
				}
				catch(e)
				{
				}
				
				return;
			}


			//verifica o audio
			if(!this._componente.isAudioInstalled())
			{
				CDialogs.WarnEscToContinue(CMsg.NoAudioInstalled(), null);
			}
			
			
			//colocamos o volume no maximo
			this._componente.volAudio = 1;
			this._compextra.volAudio = 1;
			this._componente.volTTS = 1;
			this._compextra.volTTS = 1;
		}
	}
	catch(e)
	{
		CDialogs.FatalError_exception( CMsg.DllNotLoaded(e.toString()) );
	}
}

//o componente
_CSpeakControl.prototype._componente = null;
//componente para eco de comandos e outras funcoes
_CSpeakControl.prototype._compextra = null;

//se estamos tocando audio ou TTS
_CSpeakControl.prototype._activeAudio = false;
_CSpeakControl.prototype._activeTTS = false;
_CSpeakControl.prototype._activeextraAudio = false;
_CSpeakControl.prototype._activeextraTTS = false;
//se esta pausado
_CSpeakControl.prototype._pausedAudio = false;
_CSpeakControl.prototype._pausedTTS = false;

//rotida para chamar ao terminar a lista
_CSpeakControl.prototype._callingObject = null;
//identificador do timeout que estamos usando, -1 é que nao estamos usando
_CSpeakControl.prototype._timeoutID = -1;
//o limite de tempo do nosso tiemout
_CSpeakControl.prototype._timeoutTimePrimeiro = 400;
_CSpeakControl.prototype._timeoutTimeOutros = 100;

//a voz selecionada em cada componente
_CSpeakControl.prototype._compVoice = "";
_CSpeakControl.prototype._compextraVoice = "";


//o singleton
var __CSpeakControl = new _CSpeakControl();


//para ver se esamos com coisa tocando ou para tocar
_CSpeakControl.prototype.isActive = function()
{
	if(this._activeextraAudio)
		return true;
	if(this._activeextraTTS)
		return true;
	if(this._activeAudio)
		return true;
	if(this._activeTTS)
		return true;

	//nao temos tts e nem audio
	return false;
}


//para ver se esamos com coisa tocando TTS
_CSpeakControl.prototype.isActiveTTS = function()
{
	if(this._activeTTS)
		return true;

	//nao temos tts
	return false;
}

//para ver se esamos com coisa tocando mp3
_CSpeakControl.prototype.isActiveAudio = function()
{
	if(this._activeAudio)
		return true;

	//nao temos tts
	return false;
}

//para ver se esamos em pausa oou nao
_CSpeakControl.prototype.isPaused = function()
{
	//se tem eco de comando nao estamos em pausa
	if(this._activeextraAudio || this._activeextraTTS)
		return false;

	//o audio tem que esar ativo e em pausa
	//lembre-se que a pausa somente é válida se o áudio está ativo
	if(this._activeAudio && this._pausedAudio)
		return true;
	if(this._activeTTS && this._pausedTTS)
		return true;

	//nao temos tts e nem audio em pausa
	return false;
}

//invertermos o estado de pausa
//somente se tem alguma coisa ativa
_CSpeakControl.prototype.pauseToggle = function()
{
	//se nao estamos falando nada, ignora
	if(!this._activeextraAudio && !this._activeextraTTS && !this._activeAudio && !this._activeTTS)
		return;
		
	//se estamos em pausa, resuma
	if(this.isPaused())
		this.resume();
	else
		this.pause();
}


//para pausar o que estiver ativo
_CSpeakControl.prototype.pause = function()
{
	//se pediram pausa e estamos em um eco de comando, abortamos o eco e damos a pausa
	if(this._activeextraAudio || this._activeextraTTS)
		this.stopExtra();

	if(this._activeAudio)
	{
		this._pausedAudio = true;
		this._componente.pauseAudio();
		return;
	}
	if(this._activeTTS)
	{
		this._pausedTTS = true;
		this._componente.pauseTTS();
		return;
	}
}

//para retomar a falar
_CSpeakControl.prototype.resume = function()
{
	//se tiver extra, para com ele
	//comentado em 25-8-08 para permitir dar eco de comando ao fechar caixas de dialogo
	//por exemplo, a caixa de dialogo de soletração
	//mas nao adiantou... 
	this.stopExtra();
	

	if(this._activeAudio)
	{
		this._pausedAudio = false;
		this._componente.resumeAudio();
		return;
	}
	if(this._activeTTS)
	{
		this._pausedTTS = false;
		this._componente.resumeTTS();
		return;
	}
}

//para parar o extra
_CSpeakControl.prototype.stopExtra = function()
{
	if(this._timeoutID != -1 && !this._activeAudio && !this._activeTTS)
	{
		clearTimeout(this._timeoutID);
		this._timeoutID = -1;
	}
	
	if(this._activeextraAudio)
	{
		this._activeextraAudio = false;
		this._compextra.stopAudio();
	}
	if(this._activeextraTTS)
	{
		this._activeextraTTS = false;
		this._compextra.stopTTS();
	}
}

//para parar todo mundo
_CSpeakControl.prototype.stopAll = function()
{
	if(this._timeoutID != -1)
	{
		clearTimeout(this._timeoutID);
		this._timeoutID = -1;
	}
	
	this._pausedAudio = false;
	this._pausedTTS = false;

	if(this._activeAudio)
	{
		this._activeAudio = false;
		this._componente.stopAudio();
	}
	if(this._activeTTS)
	{
		this._activeTTS = false;
		this._componente.stopTTS();
	}
}


//para iniciar o timeout
function timeout_cscmon()
{
	__CSpeakControl._monitor();
}

_CSpeakControl.prototype._startMonitor = function(primeiraVez)
{
	if(__CSpeakControl._timeoutID == -1)
	{
		if(primeiraVez)
		{
			//na primeira vez, temos um tempo maior, porque e o texto está vazio e usamos
			//um tempo muiot curto não conseguimos navegar para cima com o teclado
			__CSpeakControl._timeoutID = setTimeout("timeout_cscmon()", __CSpeakControl._timeoutTimePrimeiro);
		}
		else
		{
			__CSpeakControl._timeoutID = setTimeout("timeout_cscmon()", __CSpeakControl._timeoutTimeOutros);
		}
	}
}


_CSpeakControl.prototype._monitor = function()
{
	__CSpeakControl._timeoutID = -1;
	if(__CSpeakControl._activeextraAudio)
	{
		//estamos tocando audio
		if(__CSpeakControl._compextra.getStatusAudio() == 0)
		{
			__CSpeakControl._activeextraAudio = false;
			//volta a falar o normal
			__CSpeakControl.resume();
			//e continua monitorando
			// return;
		}
		
		//proxima monitoracao
		__CSpeakControl._startMonitor(false);
		return;
	}
	
	if(__CSpeakControl._activeextraTTS)
	{
		//estmos tocando TTS
		if(__CSpeakControl._compextra.getStatusTTS() == 0)
		{
			//evento
			if(__CSpeakControl._evntfor_playextraTTS != null)
				__CSpeakControl._evntfor_playextraTTS();

			__CSpeakControl._activeextraTTS = false;
			//volta a falar o normal
			__CSpeakControl.resume();
			//e continua monitorando
			// return;
		}
		
		//proxima monitoracao
		__CSpeakControl._startMonitor(false);
		return;
	}
	
	if(__CSpeakControl._activeAudio)
	{
		//estamos tocando audio
		if(__CSpeakControl._componente.getStatusAudio() == 0)
		{
			__CSpeakControl._activeAudio = false;
			if(__CSpeakControl._callingObject != null)
				__CSpeakControl._callingObject.Spkevt_next();
			return;
		}
		
		//proxima monitoracao
		__CSpeakControl._startMonitor(false);
		return;
	}
	
	if(__CSpeakControl._activeTTS)
	{
		//estmos tocando TTS
		if(__CSpeakControl._componente.getStatusTTS() == 0)
		{
			__CSpeakControl._activeTTS = false;
			if(__CSpeakControl._callingObject != null)
				__CSpeakControl._callingObject.Spkevt_next();
			return;
		}
		
		//proxima monitoracao
		__CSpeakControl._startMonitor(false);
		return;
	}
	
	//sei la o que a gente está fazendo....
	//nao fazemos nada, e o timeout vai morrer sozinho
}


//para falar alguma coisa
//callingObject, se diferente de null, veja a interface do callingObject
_CSpeakControl.prototype.playTTS = function(callingObject, msg)
{
	this.stopAll();
	this._callingObject = callingObject;
	var status = this._componente.playTTS(msg);
	
	//se esta falando, marca que o tts está ativo
	if(status)
	{
		this._activeTTS = true;
		this._startMonitor(true);
	}
	return status;
}

//para tocar alguma coisa
//callingObject, se diferente de null, veja a interface do callingObject
_CSpeakControl.prototype.playAudio = function(callingObject, path, start, end)
{
	this.stopAll();
	this._callingObject = callingObject;
	var status = this._componente.playAudio(path, start, end);
	
	//se esta falando, marca que o audio está ativo
	if(status == 0)
	{
		this._activeAudio = true;
		this._startMonitor(true);
	}
	return status;
}


//para falar alguma coisa
_CSpeakControl.prototype._evntfor_playextraTTS = null;
_CSpeakControl.prototype.playextraTTS = function(msg, evnt)
{
	this.pause();
	this._evntfor_playextraTTS = evnt;
	var status = this._compextra.playTTS(msg);
	
	//se esta falando, marca que o tts está ativo
	if(status)
	{
		this._activeextraTTS = true;
		this._startMonitor(true);
	}
	else
	{
		//continua falando o resto
		this.resume();
	}
	return status;
}

//para tocar alguma coisa
_CSpeakControl.prototype.playextraAudio = function(path, start, end)
{
	this.pause();
	var status = this._compextra.playAudio(path, start, end);
	
	//se esta falando, marca que o audio está ativo
	if(status == 0)
	{
		this._activeextraAudio = true;
		this._startMonitor(true);
	}
	else
	{
		//continua falando o resto
		this.resume();
	}
	return status;
}

//a selecaqo de voz (com cache)
_CSpeakControl.prototype.setVoice = function(id)
{
	if(this._compVoice == id)
		return
	this._compVoice = id;
	this._componente.setVoice(id);
}

_CSpeakControl.prototype.setExtraVoice = function(id)
{
	if(this._compextraVoice == id)
		return
	this._compextraVoice = id;
	this._compextra.setVoice(id);
}



//a selecaqo de velocidade
_CSpeakControl.prototype.setSpeedTTS = function(id)
{
	this._componente.speedTTS = id;
}

_CSpeakControl.prototype.setSpeedExtraTTS = function(id)
{
	this._compextra.speedTTS = id;
}

//a selecaqo de volume
_CSpeakControl.prototype.setVolTTS = function(id)
{
	//-1 == default
	if(id < 0)
		return;
	this._componente.volTTS = id;
}
_CSpeakControl.prototype.setVolExtraTTS = function(id)
{
	//-1 == default
	if(id < 0)
		return;
	this._compextra.volTTS = id;
}

_CSpeakControl.prototype.setVolAudio = function(id)
{
	//-1 == default
	if(id < 0)
		return;
	this._componente.volAudio = id;
}
_CSpeakControl.prototype.setVolExtraAudio = function(id)
{
	//-1 == default
	if(id < 0)
		return;
	this._compextra.volAudio = id;
}



/*
===========================================
===========================================
===========================================
o CSpeak é o nivel externo de acesso

NOTA: este cara é um singleton, que tem que ter o nome estático de CSpeak
isso para que as rotinas de timeout funcionem
*/

//singleton
function _CSpeak()
{
	this._controle = __CSpeakControl;
}

//o controlador
_CSpeak.prototype._controle = null;

//a lista a tocar
_CSpeak.prototype._list = null;
//indice do elemento atualmente tocando
_CSpeak.prototype._listCurrent = -1;
//rotida para chamar ao terminar a lista
_CSpeak.prototype._callingObject = null;
//se estamos usando somente TTS nesta sessao
_CSpeak.prototype._forceTTS = false;
//quem esta escutando eventos de inicio e fim de reproducao
//tem que implementar Spkevt_start e Spkevt_end
_CSpeak.prototype._eventListener = null;
//se o evento de item anterior é processado pela gente ou sempre passamos para cima
_CSpeak.prototype._alwaysPumpPreviousEvent = false;

//nota: zera o _forceTTS quando carregar outro livro, isso é feito no nivel da interface



//para acessar as funcoes estaticas
var CSpeak = new _CSpeak();

//quem esta escutando eventos de inicio e fim de reproducao
//tem que implementar Spkevt_start e Spkevt_end
_CSpeak.prototype.setEventListener = function(eventListener)
{
	this._eventListener = eventListener;
}


//para falar somente um item imeicxatamente, no meio do texto
_CSpeak.prototype.echotyping = function(msg)
{
	if(!CPref.echotyping())
		return;

	this.CommandEchoGo_text(msg);
}

//para falar somente um item imeicxatamente, no meio do texto
_CSpeak.prototype.CommandEcho_text = function(msg)
{
	if(!CPref.echocommands())
		return;

	this.CommandEchoGo_text(msg);
}
_CSpeak.prototype.CommandEchoGo_text = function(msg)
{
	//eco de comandos sempre usa a voz do sistema
	this.CommandEchoGo_textWithEvent(msg, null);
}

//este avisa quando terminar
_CSpeak.prototype.CommandEchoGo_textWithEvent = function(msg, evnt)
{
	//eco de comandos sempre usa a voz do sistema
	this._controle.setExtraVoice(CPref.voice_system());
	this._controle.playextraTTS(msg, evnt);
}

//para falar somente um item imeicxatamente, no meio do texto
//o path é o nome do arquivo dentro de skin
_CSpeak.prototype.CommandEcho_audio = function(path)
{
	if(!CPref.echocommands())
		return;

	this.CommandEchoGo_audio(path);
}
_CSpeak.prototype.CommandEchoGo_audio = function(path)
{
	this._controle.stopExtra();
	var fp = CUtils.GetExtensionFolder();
	fp.append("chrome");
	fp.append("content");
	fp.append("skin");
	fp.append("comm");
	fp.append(path);
	this._controle.playextraAudio(fp.target, -1, -1);
}

_CSpeak.prototype.CommandEcho_localaudio = function(path)
{
	if(!CPref.echocommands())
		return;

	this.CommandEchoGo_localaudio(path);
}
_CSpeak.prototype.CommandEchoGo_localaudio = function(path)
{
	this._controle.stopExtra();
	var fp = CUtils.GetExtensionFolder();
	fp.append("chrome");
	fp.append("content");
	fp.append("lang");
	fp.append(CPref.language());
	fp.append("audio");
	fp.append(path);
	this._controle.playextraAudio(fp.target, -1, -1);
}

_CSpeak.prototype.PlayExtraAudioLocale = function(path)
{
	this._controle.stopExtra();
	var fp = CUtils.GetExtensionFolder();
	fp.append("chrome");
	fp.append("content");
	fp.append("lang");
	fp.append(CPref.language());
	fp.append("audio");
	fp.append(path);
	this._controle.playextraAudio(fp.target, -1, -1);
}

_CSpeak.prototype.stopExtra = function()
{
	this._controle.stopExtra();
}


//para falar somente um item
//callingObject, se diferente de null, veja a interface do callingObject
_CSpeak.prototype.playItem = function(textItem, callingObject)
{
	this.playItemEx(textItem, callingObject, false);
}

//para falar somente um item
//callingObject, se diferente de null, veja a interface do callingObject
_CSpeak.prototype.playItemEx = function(textItem, callingObject, alwaysPumpPreviousEvent)
{
	var lista = new CTextArray();
	lista.CTIarray.push(textItem);
	this.playArrayEx(lista, callingObject, alwaysPumpPreviousEvent);
}

//para falar uma lista de itens
//callingObject, se diferente de null, veja a interface do callingObject
_CSpeak.prototype.playArray = function(textArray, callingObject)
{
	this.playArrayEx(textArray, callingObject, false);
}

//para falar uma lista de itens
_CSpeak.prototype.playArrayEx = function(textArray, callingObject, alwaysPumpPreviousEvent)
{
	this._alwaysPumpPreviousEvent = alwaysPumpPreviousEvent;
	
	//avisa que comecamos
	if(this._eventListener != null)
		this._eventListener.Spkevt_start();

	this._list = textArray;
	this._listCurrent = -1;
	this._callingObject = callingObject;

	this._playNextItem(false);
}

//quando terminou o item atual
_CSpeak.prototype.Spkevt_next = function()
{
	this._playNextItem(true);
}

//para avancar para o proximo item
_CSpeak.prototype._playNextItem = function(testauto)
{
	//vamos ver se este item tem navigate auto
	//no item anterior (atual)
	if(testauto)
	if(this._list)
	if(this._listCurrent < this._list.CTIarray.length)	
	if(!this._list.CTIarray[ this._listCurrent].autonav)
	{
		return;
	}

	//lista valida?
	if(this._list == null)
	{
		this._endedList(true);
		return;
	}

	//propximo
	this._listCurrent++;
	//se nao tiver, acabou
	if(this._listCurrent >= this._list.CTIarray.length)	
	{
		this._listCurrent = this._list.CTIarray.length;
		this._endedList(true);
		return;
	}

	//vamos tocar o item
	//current é um CTextItem
	var current = this._list.CTIarray[ this._listCurrent];

	//vamos ver se deve ser por TTS
	var tts = true;
	if(current.HasAudio() && !this._forceTTS)
		tts = false;
	var ttstext = current.GetTextTTS();
	if(ttstext != null && ttstext != "" && current.forceTTS)
		tts = true;
	
	if(!tts)
	{
		var status = this._controle.playAudio(this, current.audioSrc, current.audioStart, current.audioEnd);
			/*
			valores retornados:
			0 = OK
			1 = arquivo nao encontrado
			2 = falta codec
			3 = outros erros
			*/
		if(status != 0)
		{
			var hasTTS = true;
			if(ttstext == "")
				hasTTS = false;
			var msg = new CTextItem();
			msg.SetText_string( CMsg.ErrorOnAudio_general(hasTTS) );
			
			switch(status)
			{
				case 1:
					msg.SetText_string( CMsg.ErrorOnAudio_nofile(hasTTS, current.audioSrc) );
					break;
				case 2:
					msg.SetText_string( CMsg.ErrorOnAudio_nocodec(hasTTS, current.audioSrc) );
					break;
				case 3:
					//a mensagem padrao, erro generico
					break;
			}
		
			//mostramos o erro e tratamos o retorno
			var noinstaladro = false;
			if(! (typeof RunningInsideInstaller == "undefined") )
			if(RunningInsideInstaller != null)
			if(RunningInsideInstaller)
				noinstaladro = true;
			
			if(!noinstaladro)
			{
				try
				{
					//eco de comandos sempre usa a voz do sistema
					this._controle.stopAll();
					this._controle.setExtraVoice(CPref.voice_system());
					//chama diretamente o componente
					this._controle._compextra.playTTS(msg.toString() );
				}
				catch(e)
				{
					//ignoramos erros
				}
			
				var status = CDialogs.ErrorOnAudio_CTextItem(hasTTS, msg);
				//pode ser RetryWithTTS ou Continue
				if(status == CDialogs.RetryWithTTS)
				{
					this._forceTTS = true;
					this._listCurrent--;
					this._playNextItem(false);
					return;
				}
			}
			
			//resultado é Continue
			this.Spkevt_next();
			return;
		}
		
		return;
	}
	else
	{
		//verifica a voz a usar
		if(current.bookText)
			this._controle.setVoice(current.bookVoice);
		else
			this._controle.setVoice(CPref.voice_system());

		var status = this._controle.playTTS(this, ttstext);
		if(!status)
		{
			var noinstaladro = false;
			if(! (typeof RunningInsideInstaller == "undefined") )
			if(RunningInsideInstaller != null)
			if(RunningInsideInstaller)
				noinstaladro = true;
			
			if(!noinstaladro)
			{
				//damos um erro
				var msg = new CTextItem();
				msg.SetText_string( CMsg.ErrorOnTTS() );
				CDialogs.Error_ContinueOrCloseapplication(msg);
				//se retornou é para continuar
			}
			this.Spkevt_next();
		}
		
		return;
	}
}

//matamos as nossas variaveis
//chamado, por exemplo, quando abre outro livro ou fecha a janela
_CSpeak.prototype.stopAndClear = function()
{
	this.forceEnd();
	this._callingObject = null;
	this._list = null;
	this._listCurrent = -1;
}

//a lista terminou
_CSpeak.prototype._endedList = function(generateEvent)
{
	var callingObject = this._callingObject;
	
	//avisa que terminamos
	if(this._eventListener != null)
		this._eventListener.Spkevt_end();

	//mantemos todas as variaveis
	//por exemplo, podem pedir para voltar para o anterior
	//this.stopAndClear();

	//somente podemos chamar o Spkevt_next() deposi que ja fizemos tudo
	//nao podemos fazer mais nada daqui pra frente, nesta rotina

	//nao fazemos o callback para o objeto que está esperando terminar de falar
	if(generateEvent)
		if(callingObject != null)
			callingObject.Spkevt_next();
}


//a lista terminou
_CSpeak.prototype.forceEnd = function()
{
	//paramos tudo
	this._controle.stopAll();
	this._controle.stopExtra();
	//nao fazemos o callback para o objeto que está esperando terminar de falar
	this._endedList(false);
}


//para pausar o que estiver ativo
_CSpeak.prototype.pause = function()
{
	this._controle.pause();
}

//para inverter o estado de pausa
_CSpeak.prototype.pauseToggle = function()
{
	this._controle.pauseToggle();
}

//para ver se esamos em pausa oou nao
_CSpeak.prototype.isPaused = function()
{
	return this._controle.isPaused();
}


//para ver se esamos em pausa oou nao
_CSpeak.prototype.isActive = function()
{
	return this._controle.isActive();
}

//para ver se esamos em pausa oou nao
_CSpeak.prototype.isActiveTTS = function()
{
	return this._controle.isActiveTTS();
}


//estamos falando audio agora?
_CSpeak.prototype.isActiveAudio = function()
{
	return this._controle.isActiveAudio();
}


//para retomar a falar
_CSpeak.prototype.resume = function()
{
	this._controle.resume();
}

//para ir para o prixmo item
_CSpeak.prototype.gotoNext = function()
{
	//paramos tudo
	this._controle.stopAll();
	this._controle.stopExtra();

	//vamos para o proximo	
	this._playNextItem(false);
}

//para voltar para o item anterior
_CSpeak.prototype.gotoPrevious = function()
{
	//paramos tudo
	this._controle.stopAll();
	this._controle.stopExtra();

	//temos que tirar 2, ficamos no minimo em -1
	if(this._listCurrent <= 0 || this._alwaysPumpPreviousEvent)
	{
		var hasPrev = false;
		if(this._callingObject != null)
			if(this._callingObject.Spkevt_prev_cap())
				hasPrev = true;
				
		//paramos tudo
		if(hasPrev)
		{
			//salvamos para quem mandar o evento
			var callingObject = this._callingObject;
			this.forceEnd();
			
			//mandamos o evento
			if(callingObject != null)
				callingObject.Spkevt_prev_go();

			//retornamos, pq ja alteraram nossas variaveis
			return;
		}
	}

	//voltamos um item	
	this._listCurrent -= 2;
	if(this._listCurrent < -1)
		this._listCurrent = -1;

	//e tocamos esse cara
	this._playNextItem(false);
}


//para tocar novamente o item atual
_CSpeak.prototype.gotoStart = function()
{
	//paramos tudo
	this._controle.stopAll();
	this._controle.stopExtra();

	//voltamos para o comeco
	this._listCurrent = -1;

	//e tocamos esse cara
	this._playNextItem(false);
}

//para tocar o ultimo item da lista atual
_CSpeak.prototype.gotoEnd = function()
{
	//paramos tudo
	this._controle.stopAll();
	this._controle.stopExtra();

	//voltamos para o comeco
	this._listCurrent = this._list.CTIarray.length - 2;

	//e tocamos esse cara
	this._playNextItem(false);
}

//para mudar o autonav de itens do livro que estao tocando no momento
_CSpeak.prototype.setAutonavBook = function(value)
{
	if(this._list == null)
		return;
	for(var i = 0; i < this._list.CTIarray.length; i++)
	{
		//note que o indice é do livro e é uma lista
		//esta modificacao afeta somente o livro em si, e nao listas que facam parte do livro
		if(this._list.CTIarray[i].bookText)
		if(!this._list.CTIarray[i].listText)
			this._list.CTIarray[i].autonav = value;
	}
}


//para mudar o autonav de itens do livro que estao tocando no momento
_CSpeak.prototype.setAutonavList = function(value)
{
	if(this._list == null)
		return;

	for(var i = 0; i < this._list.CTIarray.length; i++)
	{
		if(this._list.CTIarray[i].listText)
			this._list.CTIarray[i].autonav = value;
	}
}

//alterar a velocidade do TTS, velocidade vai de -10 a +10
_CSpeak.prototype.setTTSSpeed = function(value)
{
	this._controle.setSpeedTTS(value);
	//o controle extra tambem
	this._controle.setSpeedExtraTTS(value);
}


//alterar o volume do TTS, de 0 a 1
_CSpeak.prototype.setVolTTS = function(value)
{
	this._controle.setVolTTS(value);
	this._controle.setVolExtraTTS(value);
}


//conversao da escala de volume
//o volume e a atenuacao em dB
_CSpeak.prototype._convertVolAudio = function(value)
{
	//-1 é o default, usamos o volume maximo
	if(value < 0)
		return 1;
		
	if(value > 0.9)
		return 1;
	if(value <= 0.9 && value > 0.8)
		return 0.984747503;
	if(value <= 0.8 && value > 0.7)
		return 0.967696662;
	if(value <= 0.7 && value > 0.6)
		return 0.948366013;
	if(value <= 0.6 && value > 0.5)
		return 0.926050417;
	if(value <= 0.5 && value > 0.4)
		return 0.899656668;
	if(value <= 0.4 && value > 0.3)
		return 0.86735333;
	if(value <= 0.3 && value > 0.2)
		return 0.825707085;
	if(value <= 0.2 && value > 0.1)
		return 0.767009999;
	if(value <= 0.1 && value > 0.0)
		return 0.666666667;
	if(value <= 0.0)
		return 0;
}


//alterar o volume do audio do livro, de 0 a 1
_CSpeak.prototype.setVolAudioBook = function(value)
{
	//o livro só toca no principal, nunca no extra
	this._controle.setVolAudio(this._convertVolAudio(value));
}

//alterar o volume do audio do livro, de 0 a 1
_CSpeak.prototype.setVolAudioSystem = function(value)
{
	//o livro só toca no principal, nunca no extra
	//o extra só toca coisas do sistema
	this._controle.setVolExtraAudio(this._convertVolAudio(value));
}


//acessa o no do texto sendo falado, null se nao existir
_CSpeak.prototype.getCurrent = function()
{
	//lista valida?
	if(this._list == null)
		return null;

	//se nao tiver, acabou
	if(this._listCurrent >= this._list.CTIarray.length)	
		return null;

	//vamos retornar o item
	return this._list.CTIarray[ this._listCurrent];
}

//====================================
//====================================
//funcoes de vozes, acessamos diretamente o componente
//numero de vozes
_CSpeak.prototype.voicesCount = function()
{
	return this._controle._componente.voicesCount();
}
_CSpeak.prototype.voiceID = function(index)
{
	return this._controle._componente.voiceID(index);
}
_CSpeak.prototype.voiceName = function(index)
{
	return this._controle._componente.voiceName(index);
}
_CSpeak.prototype.voiceLang = function(index)
{
	return this._controle._componente.voiceLang(index);
}
_CSpeak.prototype.getVoiceID = function()
{
	return this._controle._componente.getVoiceID();
}
_CSpeak.prototype.setVoice = function(id)
{
	this._controle.setVoice(id);
}

//se a voz atual é sapi4
_CSpeak.prototype.currentVoiceSAPI4 = function()
{
	var atual = this._controle._componente.getCurrVoiceType();
	if(atual == 0)
		return true;
	return false;
}

//este tem processamento
_CSpeak.prototype.getVoiceName = function()
{
	//pegamos o id da voz atual
	var id = this.getVoiceID();
	
	//procuramos esse id
	var max = this.voicesCount();
	for(var i = 0; i < max; i++)
	{
		if(this.voiceID(i) == id)
			return this._controle._componente.voiceName(i);
	}
	
	//nao achamos....
	CDialogs.LogMessage(CMsg.VoiceNameFromIDNotFound_Message());
	return CMsg.VoiceNameFromIDNotFound_VoiceName();
}

//compara uma string em formato de idioma de voz com uma string em formato de idioma de html
//retorno: 0 diferente, 1 parcial, 2 igual
_CSpeak.prototype.VoiceInLanguage = function(voice, html)
{
	//o html é dividido com -
	var htmls = html.toString().toLowerCase().split("-");
	var idioma = htmls[0];
	var dialeto = "";
	if(htmls.length > 1)
		dialeto = htmls[1];

	//o numero do idioma
	var voz = parseInt(voice.toString(), 16);
	var vozidioma = voz & 0x3ff;
	var vozdialeto = voz & 0xf400;
	vozdialeto = vozdialeto / 0x100;

	//vamos determinar o idioma e o dialeto
	switch(idioma)
	{
		case "pt":
			if(vozidioma != 22)
				return 0;
			
			//reconhecemos o pt e o br
			if(dialeto == "br" && vozdialeto == 1)
				return 2;
			if(dialeto == "pt" && vozdialeto == 2)
				return 2;

			return 1;
			
		case "en":
			if(vozidioma != 9)
				return 0;
			
			//reconhecemos o us e o gb
			if(dialeto == "us" && vozdialeto == 1)
				return 2;
			if(dialeto == "gb" && vozdialeto == 2)
				return 2;

			return 1;

		case "es":
			if(vozidioma != 10)
				return 0;
			
			//reconhecemos nenhum.....
			return 1;

		case "nl":
			if(vozidioma != 19)
				return 0;
			
			//reconhecemos nenhum.....
			return 1;

		case "da":
			if(vozidioma != 6)
				return 0;
			
			//nao tem subvariacoes
			return 2;

		case "fr":
			if(vozidioma != 12)
				return 0;
			
			//reconhecemos nenhum.....
			return 1;

		case "it":
			if(vozidioma != 16)
				return 0;
			
			//reconhecemos nenhum.....
			return 1;

		case "sw":
			if(vozidioma != 29)
				return 0;
			
			//reconhecemos nenhum.....
			return 1;
	}
	
	//se nao reconhecemos a voz do html, qq coisa serve....
	return 1;
	
}

