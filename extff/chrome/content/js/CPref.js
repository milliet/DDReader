//somente funcoes estaticas
function _CPref()
{
	this._prefs = Components.classes["@mozilla.org/preferences-service;1"].
		getService(Components.interfaces.nsIPrefBranch);
		
	//a lista de fontes
	this.fontsize_list.push(100);
	this.fontsize_list.push(125);
	this.fontsize_list.push(150);
	this.fontsize_list.push(175);
	this.fontsize_list.push(200);
	
	this.MigrarConfiguraceos_2011_02_28();
}

//as preferencias
_CPref.prototype._prefs = null;
//a lista de fontes possiveis
_CPref.prototype.fontsize_list = new Array();
//em 20110404 tiramos o suporte ao SAPI4, mas damos um aviso em MP3 se o cara estava usando uma voz SAPI4
_CPref.prototype.warn_sapi4_previouslyselected = false;


//para migrar as configuracoes
//ate 20110228 a gente usava o prefixo lidad. depois disso, por exigencia do pessoal do mozzilla, 
//passamos a usar o prefixo extensions.lidad. entao esta rotina faz a migracao, para quem tinha 
//instalado a versao anteior
_CPref.prototype.MigrarConfiguraceos_2011_02_28 = function()
{
	//a migracao ja foi feita?
	if(this._get_bool("extensions.lidad.migrate20110228", false) )
		return;
	
	//vamos migrar
	//lemos todos os lidad e migramos para extensions.lidad
	var obj_emporario = new Object();
	var lista_filhos = this._prefs.getChildList("lidad.",obj_emporario);
	for(var ilista_filhos = 0; ilista_filhos < lista_filhos.length; ilista_filhos++)
	{
		var este_filho = lista_filhos[ilista_filhos];
		switch(this._prefs.getPrefType(este_filho) )
		{
			case 32: //string
				this._prefs.setCharPref("extensions." + este_filho, this._prefs.getCharPref(este_filho) );
				break;
			case 64: //int
				this._prefs.setIntPref("extensions." + este_filho, this._prefs.getIntPref(este_filho) );
				break;
			case 128: //bool
				this._prefs.setBoolPref("extensions." + este_filho, this._prefs.getBoolPref(este_filho) );
				break;
		}
	}
	
	this._prefs.setBoolPref("extensions.lidad.migrate20110228", true)
}

//para salvar as configuracoes em um arquivo
_CPref.prototype.SalvarConfiguraceos = function(path)
{
	var obj_emporario = new Object();
	var lista_filhos = this._prefs.getChildList("extensions.lidad.",obj_emporario);

	//salvar em xml
	var aux_xmldoc = document.implementation.createDocument("", "", null);
	var aux_raiz = aux_xmldoc.createElement("raiz");
	
	//formato: config com atributo nome e valor
	for(var ilista_filhos = 0; ilista_filhos < lista_filhos.length; ilista_filhos++)
	{
		var este_filho = lista_filhos[ilista_filhos];

		//aglumas a gente pula
		var pular_este_filho = false;
		if(este_filho == "extensions.lidad.bookfolder")
			pular_este_filho = true;
		//todas as senhas
		if(este_filho.indexOf("extensions.lidad.pass") == 0)
			pular_este_filho = true;
		if(pular_este_filho)
			continue;
		
		//cira o negocio
		var este_filho_xml = aux_xmldoc.createElement("config");
		este_filho_xml.setAttribute("nome", este_filho);
		switch(this._prefs.getPrefType(este_filho) )
		{
			case 32: //string
				este_filho_xml.setAttribute("valor", this._prefs.getCharPref(este_filho) );
				break;
			case 64: //int
				este_filho_xml.setAttribute("valor", this._prefs.getIntPref(este_filho) );
				break;
			case 128: //bool
				este_filho_xml.setAttribute("valor", this._prefs.getBoolPref(este_filho) );
				break;
		}
		aux_raiz.appendChild(este_filho_xml);
	}
	aux_xmldoc.appendChild(aux_raiz);

	//vamos salvar
	var serializer = new XMLSerializer();
	var foStream = Components.classes["@mozilla.org/network/file-output-stream;1"]
		.createInstance(Components.interfaces.nsIFileOutputStream);

	//salvamos
	foStream.init(path, 0x02 | 0x08 | 0x20, 0664, 0);   // write, create, truncate
	serializer.serializeToStream(aux_xmldoc, foStream, "");   // rememeber, doc is the DOM tree
	foStream.close();
}

//para ler as configuracoes
_CPref.prototype.CarregarConfiguraceos = function(path)
{
	//carregamos o xml
	var re = new RegExp("\\\\", "g");
	path = "file:///" + path.path.replace( re ,"/");
	var aux_xmldoc = CUtils.LoadXML(path);
	var lista_filhos = aux_xmldoc.getElementsByTagName("config");

	for(var ilista_filhos = 0; ilista_filhos < lista_filhos.length; ilista_filhos++)
	{
		var este_filho = lista_filhos[ilista_filhos].attributes.getNamedItem("nome").value;
		//20110228: compatibilidade com as versoes anteriores
		//se nao tiver, colocamos o extensions. na frente
		if(este_filho.indexOf("extensions.") != 0)
			este_filho = "extensions." + este_filho;

		//aglumas a gente pula
		var pular_este_filho = false;
		if(este_filho == "extensions.lidad.bookfolder")
			pular_este_filho = true;
		//todas as senhas
		if(este_filho.indexOf("extensions.lidad.pass") == 0)
			pular_este_filho = true;
		if(pular_este_filho)
			continue;
		
		//cira o negocio
		//se der algum erro, ignoramos e vaos para o proximo
		try
		{
			switch(this._prefs.getPrefType(este_filho) )
			{
				case 32: //string
					this._prefs.setCharPref(este_filho, lista_filhos[ilista_filhos].attributes.getNamedItem("valor").value );
					break;
				case 64: //int
					this._prefs.setIntPref(este_filho, parseInt(lista_filhos[ilista_filhos].attributes.getNamedItem("valor").value, 10) );
					break;
				case 128: //bool
					if(lista_filhos[ilista_filhos].attributes.getNamedItem("valor").value == "true")
						this._prefs.setBoolPref(este_filho, true);
					else
						this._prefs.setBoolPref(este_filho, false);
					break;
			}
		}
		catch(e)
		{
			//nao damos erro, simpeslemnte ignoramos
			//alert(e.toString());
		}
	}
}


//rotinas de get protegidas
_CPref.prototype._get_bool = function(PreferenceName, DefaultPreference)
{
	try
	{
		return this._prefs.getBoolPref(PreferenceName);
	}
	catch(e)
	{
	}
	return DefaultPreference;
}
_CPref.prototype._get_int = function(PreferenceName, DefaultPreference)
{
	try
	{
		return this._prefs.getIntPref(PreferenceName);
	}
	catch(e)
	{
	}
	return DefaultPreference;
}
_CPref.prototype._get_char = function(PreferenceName, DefaultPreference)
{
	try
	{
		return this._prefs.getCharPref(PreferenceName);
	}
	catch(e)
	{
	}
	return DefaultPreference;
}



//as propriedades
_CPref.prototype.language_set = function(value)
{
	this._prefs.setCharPref("extensions.lidad.language", value);
}

_CPref.prototype.language = function()
{
	var ret = this._prefs.getCharPref("extensions.lidad.language");
	if(ret == "")
	{
		//vamos ler do firefox
		/*
		este aqui le do sistema operacional
		var ls = Components.classes["@mozilla.org/intl/nslocaleservice;1"].getService(Components.interfaces.nsILocaleService)
			.getApplicationLocale().getCategory("NSILOCALE_MESSAGES");
		*/
		ls = navigator.language;

		//somente aceitamos en, es, pt
		ls = ls.toString().toLowerCase().substr(0,2);
		switch(ls)
		{
			case "en":
			case "es":
				ret = ls;
				break;
			case "pt":
				ret = "pt-br";
				break;
			default:
				ret = "en";	//default = ingles
				this.language_set(ret);
				//esta mensagem esta hard-coded mesmo
				CDialogs.WarnEscToContinue("DDR is not available in your language, using English. To change it, press C to go to the preferences screen and select another language.", null);
				break;
		}
		
		this.language_set(ret);
	}
	
	//validacao de neurotico, somente permitimos as que sabemso
	if(ret != "en" && ret != "es" && ret != "pt-br")
		ret = "en";	//default = ingles
	return ret;
}

//diz se usamos interface 800x600 (true) ou 1024x768 (false)
_CPref.prototype.interfaceRes = function()
{
	//vamos forcar a resolucao de 800?
	if(this._prefs.getBoolPref("extensions.lidad.interfaceRes800"))
		return true;
		
	if(screen.height < 768 || screen.width < 1024)
		return true;
		
	return false;
}

_CPref.prototype.maxhistoryentries = function()
{
	return this._get_int("extensions.lidad.maxhistoryentries", 1000);
}

_CPref.prototype.maxsearchhistentries = function()
{
	return this._get_int("extensions.lidad.maxsearchhistentries", 1000);
}

_CPref.prototype.defaultlevel = function()
{
	return this._get_int("extensions.lidad.defaultlevel", 4);
}

_CPref.prototype.bookmarkbeep = function()
{
	return this._get_bool("extensions.lidad.bookmarkbeep", true);
}

_CPref.prototype.bookmarkbeep_set = function(value)
{
	this._prefs.setBoolPref("extensions.lidad.bookmarkbeep", value);
}

_CPref.prototype.echocommands = function()
{
	return this._get_bool("extensions.lidad.echocommands", true);
}

_CPref.prototype.echotyping = function()
{
	return this._get_bool("extensions.lidad.echotyping", true);
}

_CPref.prototype.voice_system = function()
{
//este aqui é meio complicado:
/*
Ao executar pela primeira vez, como determinar a voz do sistema: 
Verificamos se a voz default do sistema (primeiro em SAPI5, se nao existir, em SAPI4) 
e o idioma da extensao. Se nao for, procuramos uma voz com o idioma da extensao. 
Se nao acharmos, usamos a default do sistema.
*/

	var ret = this._get_char("extensions.lidad.voice.system", "");
	
	//20110404: se for sapi4, nao usamos
	if(ret.indexOf("SAPI4") == 0)
	{
		this.warn_sapi4_previouslyselected = true;
		ret = "";
		this.voice_system_set("");
	}
	
	if(ret != "")
		return ret;
	
	//primeira vez
	//vamos ver o idioma da voz
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
	
	//ja sabemos o idioma da voz default do sistema
	if(CSpeak.VoiceInLanguage(voiceLang, this.language() ) != 0)
	{
		//vamos usar o default do sistema
		this.voice_system_set(atual);
		return atual;
	}
	
	//procuramos uma voz nesse idioma
	var retCandidate = "";
	for(i = 0; i < CSpeak.voicesCount(); i++)
	{
		voiceLang = CSpeak.voiceLang(i);
		var compara = CSpeak.VoiceInLanguage(voiceLang, this.language() );
		if(compara == 2)
		{
			this.voice_system_set(CSpeak.voiceID(i));
			return CSpeak.voiceID(i);
		}
		if(compara == 1)
		{
			retCandidate = CSpeak.voiceID(i);
		}
	}
	
	//terminamos de procurar e nao achamos um match ideal
	//vamos usar um match parcial
	//se tb nao tiver achado, retorna vazio....
	this.voice_system_set(retCandidate);

	return retCandidate;
}

_CPref.prototype.voice_system_set = function(value)
{
	this._prefs.setCharPref("extensions.lidad.voice.system", value);
}

_CPref.prototype.voice_speed = function()
{
	return this._get_int("extensions.lidad.voice.speed", 1);
}

_CPref.prototype.voice_speed_set = function(value)
{
	//limites: entre -10 e 10
	if(value < -10)
		value = -10;
	if(value > 10)
		value = 10;
	this._prefs.setIntPref("extensions.lidad.voice.speed", value);
	CSpeak.setTTSSpeed(value);
}

//guardamos os volumes multiplicados por 100
_CPref.prototype.voice_volume = function()
{
	return this._get_int("extensions.lidad.voice.volume", 100) / 100;
}

_CPref.prototype.voice_volume_set = function(value)
{
	//limites: entre 0 e 1
	if(value < 0)
		value = 0;
	if(value > 1)
		value = 1;
	this._prefs.setIntPref("extensions.lidad.voice.volume", value * 100);
	CSpeak.setVolTTS(value);
}

//guardamos os volumes multiplicados por 100
_CPref.prototype.audio_volume = function()
{
	return this._get_int("extensions.lidad.audio.volume", 100) / 100;
}


_CPref.prototype.extendededit = function()
{
	return this._get_int("extensions.lidad.extendededit", true);
}

_CPref.prototype.fontsize = function()
{
	return this._get_int("extensions.lidad.fontsize", 100);
}

_CPref.prototype.fontsize_set = function(value)
{
	this._prefs.setIntPref("extensions.lidad.fontsize", value);
}

//vai para a proxima fonte
_CPref.prototype.fontsize_next_get = function(atual)
{
	//procura a fonte atual
	for(var i = 0; i < this.fontsize_list.length; i++)
	{
		if(this.fontsize_list[i] == atual)
			break;
	}
	
	//pegamos a proxima fonte
	i++;
	if(i >= this.fontsize_list.length)
		i = 0;

	return this.fontsize_list[i];
}

//vai para a proxima fonte
_CPref.prototype.fontsize_next = function()
{
	//seta a nova fonte
	this.fontsize_set(this.fontsize_next_get(this.fontsize()));
}

//navegacao automaitca nas listas
_CPref.prototype.listautonav = function()
{
	return this._get_bool("extensions.lidad.listautonav", true);
}

_CPref.prototype.listautonav_set = function(value)
{
	this._prefs.setBoolPref("extensions.lidad.listautonav", value);
}

//diretorio da biblioteca
_CPref.prototype.bookfolder = function()
{
	var ret = this._get_char("extensions.lidad.bookfolder", "");
	if(ret == "")
		ret = CUtils.GetDocumentsFolder().target;
		
	//criamos o diretorio, se não existir
	try
	{
		var file = Components.classes["@mozilla.org/file/local;1"]
			.createInstance(Components.interfaces.nsILocalFile);
		file.initWithPath(ret);
		
		if( !file.exists() || !file.isDirectory() )
		{	
			//se ja existe como arquivo, apaga
			//if(file.exists())
			//	file.remove(false);
			
			// if it doesn't exist, create
			file.create(Components.interfaces.nsIFile.DIRECTORY_TYPE, 0777);
		}
	}
	catch(e)
	{
		//se der erro, nao fazemos nada
	}
	
	return ret;
}

//tela inteira
_CPref.prototype.fullscreen = function()
{
	return this._get_bool("extensions.lidad.fullscreen", true);
}

_CPref.prototype.debugLocalization = function()
{
	return this._get_bool("extensions.lidad.debugLocalization", false);
}

_CPref.prototype.passNumber = function()
{
	return this._get_int("extensions.lidad.pass.number", 0);
}

_CPref.prototype.exportphrases = function()
{
	var ret = this._get_int("extensions.lidad.exportphrases", 3);
	if(ret < 0)
		ret = 0;
	//limitado a 5
	if(ret > 5)
		ret = 5;
	return ret;
}


_CPref.prototype.passNumber_set = function(value)
{
	this._prefs.setIntPref("extensions.lidad.pass.number", value);
}

_CPref.prototype.passCRC = function(index)
{
	return this._get_char("extensions.lidad.pass.CRC" + index, "");
}

_CPref.prototype.passCRC_set = function(index, value)
{
	this._prefs.setCharPref("extensions.lidad.pass.CRC" + index, value);
}

_CPref.prototype.passPIN = function(index)
{
	return this._get_char("extensions.lidad.pass.CRE" + index, "");
}

_CPref.prototype.passPIN_set = function(index, value)
{
	this._prefs.setCharPref("extensions.lidad.pass.CRE" + index, value);
}

_CPref.prototype.skin = function()
{
	return this._get_char("extensions.lidad.skin", "default");
}


_CPref.prototype.skin_visual = function()
{
	//sempre desabilitada
	return false;
	/*
	if(this.skin() == "visual")
		return true;
	return false;
	*/
}


//para acessar as funcoes estaticas
//este cara fica no fim do arquivo pq ele usa a funcoes que esta defnidas no arquivo
var CPref = new _CPref();


