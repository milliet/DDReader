/// <reference path="CUtils.js" />
/// <reference path="CUtils_ff.js" />
/// <reference path="CSMILFile.js" />
/// <reference path="CSMILArray.js" />
/// <reference path="CNCX.js" />
/// <reference path="CTextArray.js" />
/// <reference path="CTextItem.js" />

//gerenciamento das preferencias de um livro
function COPFPrefs(path, id, lang)
{
	this._path = path;
	this._id = id;
	this._lang = CUtils.TrimString(lang);

	//carregamos o arquivo
	this._load();
}


COPFPrefs.prototype._path = "";	//para montar o nome do arquivo
COPFPrefs.prototype._id = "";	//para montar o nome do arquivo
COPFPrefs.prototype._lang = "";	//idioma do livro, pode ser vazio
COPFPrefs.prototype.xml = null;	//o XMLDocument dele


//carregamos o arquivo
COPFPrefs.prototype._load = function()
{
	try
	{
		var filename = CUtils.GetBookBaseFilename(this._path, this._id, ".prefs.xml");
		
		//se o arquivo nao existir, carregamos o default
		if(!filename.exists())
		{
			filename = CUtils.GetExtensionFolder();
			filename.append("defaults");
			filename.append("bookprefs.xml");
		}
		this.xml = CUtils.LoadXML("file:///" + filename.target);
		
	}
	catch(e)
	{
		CDialogs.WarnEscToContinue(CMsg.ErrorLoadingOPFPrefs(), null);

		if(this.xml == null)
		{
			//carrega o default
			var filename = CUtils.GetExtensionFolder();
			filename.append("defaults");
			filename.append("bookprefs.xml");
			this.xml = CUtils.LoadXML("file:///" + filename.target);
		}
	}

}

//salva o arquivo
COPFPrefs.prototype._save = function()
{
	try
	{
		var filename = CUtils.GetBookBaseFilename(this._path, this._id, ".prefs.xml");
		var serializer = new XMLSerializer();
		var foStream = Components.classes["@mozilla.org/network/file-output-stream;1"]
			.createInstance(Components.interfaces.nsIFileOutputStream);

		//salvamos
		foStream.init(filename, 0x02 | 0x08 | 0x20, 0664, 0);   // write, create, truncate
		serializer.serializeToStream(this.xml, foStream, "");   // rememeber, doc is the DOM tree
		foStream.close();
	}
	catch(e)
	{
		CDialogs.WarnEscToContinue(CMsg.ErrorSavingOPFPrefs(), null);
	}
}

//para criar uma nova confuguraqcao
COPFPrefs.prototype._setTag = function(tag, value)
{
	var taglist = this.xml.getElementsByTagName(tag);
	if(taglist.length > 0)
	{
		taglist.item(0).textContent = value;
		//salvamos
		this._save();
		return;
	}

	//cria uma
	var newitem = this.xml.createElement(tag);
	newitem.textContent = value;
	CUtils.GetXMLChild(this.xml, "bookprefs", this._path).appendChild(newitem);

	//salvamos
	this._save();
}

//para ler uma confuguraqcao, null se nao existe
COPFPrefs.prototype._getTag = function(tag)
{
	tag = this.xml.getElementsByTagName(tag);
	if(tag.length > 0)
		return tag.item(0).textContent;
	return null;
}


//para ler uma confuguraqcao bool
COPFPrefs.prototype._getTagBool = function(tag, def)
{
	var ret = this._getTag(tag);
	if(ret != null)
	{
		if(ret == "false")
			return false;
		return true;
	}
	return def;
}

//para ler uma confuguraqcao int
COPFPrefs.prototype._getTagInt = function(tag, def)
{
	var ret = this._getTag(tag);
	if(ret != null)
	{
		try
		{
			ret = parseInt(ret);
			if(!isNaN(ret))
				return ret;
		}
		catch(e)
		{
			//ignoramos erros e usamos o default
		}
	}
	return def;
}

//para ler uma confuguraqcao string
COPFPrefs.prototype._getTagString = function(tag, def)
{
	var ret = this._getTag(tag);
	if(ret != null)
	{
		try
		{
			return ret.toString();
		}
		catch(e)
		{
			//ignoramos erros e usamos o default
		}
	}
	return def;
}




//getters e setters


//toca com TTS mesmo que tenha MP3
COPFPrefs.prototype.forceTTS = function()
{
	return this._getTagBool("forceTTS", false);
}

COPFPrefs.prototype.forceTTS_set = function(value)
{
	this._setTag("forceTTS", value);
}

//nivel do indice
COPFPrefs.prototype.CurrentLevel = function()
{
	return this._getTagInt("CurrentLevel", CPref.defaultlevel());
}

COPFPrefs.prototype.CurrentLevel_set = function(value)
{
	this._setTag("CurrentLevel", value);
}

//pular notas
COPFPrefs.prototype.SkipNote = function()
{
	return this._getTagBool("SkipNote", false);
}

COPFPrefs.prototype.SkipNote_set = function(value)
{
	this._setTag("SkipNote", value);
}

//pular pagnas
COPFPrefs.prototype.SkipPage = function()
{
	return this._getTagBool("SkipPage", false);
}

COPFPrefs.prototype.SkipPage_set = function(value)
{
	this._setTag("SkipPage", value);
}

//listar todas as vozes
COPFPrefs.prototype.ListAllVoices = function()
{
	//se nao tiver idioma do livro, SEMPRE listamos todas as vozes
	if(this._lang == "")
		return true;
	return this._getTagBool("ListAllVoices", false);
}

COPFPrefs.prototype.ListAllVoices_set = function(value)
{
	this._setTag("ListAllVoices", value);
}

//voz, esta tem cache do dado para acelerar
COPFPrefs.prototype._VoiceTTS_cache = "";
COPFPrefs.prototype.VoiceTTS = function()
{
	//primeiro acesso?
	if(this._VoiceTTS_cache == "")
		this._VoiceTTS_cache = this._getTagString("VoiceTTS", "");
	
	//se nao tem, usa a conf padrao
	if(this._VoiceTTS_cache == "")
	{
		/*
		Ao abrir pela primeira vez:
			Se idioma do livro não existir ou for igual ao idioma da extensão, usa a voz do sistema.
			Se o idioma do livro existir e for diferente da extensão, procura uma voz nesse idioma.
			Se não existir uma voz no idioma do livro, pega a voz do sistema.
		*/
		
		//o html é dividido com -
		var idi1 = this._lang.toString().toLowerCase().split("-");
		var idi2 = CPref.language().toLowerCase().split("-");
		if(idi1[0] == idi2[0])
		{
			//livro igual a sistema
			this._VoiceTTS_cache = CPref.voice_system();
			return this._VoiceTTS_cache;
		}
		
		//se o livro nao tem idioma, usa do sistema
		if(this._lang == "")
		{
			//livro igual a sistema
			this._VoiceTTS_cache = CPref.voice_system();
			return this._VoiceTTS_cache;
		}

		//vamos procurar um idioma igual ao do livro
		//procuramos uma voz nesse idioma
		var retCandidate = "";
		for(var i = 0; i < CSpeak.voicesCount(); i++)
		{
			voiceLang = CSpeak.voiceLang(i);
			var compara = CSpeak.VoiceInLanguage(voiceLang, this._lang );
			if(compara == 2)
			{
				this._VoiceTTS_cache = CSpeak.voiceID(i);
				return this._VoiceTTS_cache;
			}
			if(compara == 1)
			{
				retCandidate = CSpeak.voiceID(i);
			}
		}
		
		//terminamos de procurar e nao achamos um match ideal
		//vamos usar um match parcial
		if(retCandidate != "")
		{
			this._VoiceTTS_cache = retCandidate;
			return this._VoiceTTS_cache;
		}
		
		//nao tem jeito, vamos usar a do sistema
		this._VoiceTTS_cache = CPref.voice_system();
		
	}
		
	return this._VoiceTTS_cache;
}

COPFPrefs.prototype.VoiceTTS_set = function(value)
{
	this._setTag("VoiceTTS", value);
	this._VoiceTTS_cache = value;
}

//vai para a proxima voz, retorna o nome de tela da nova voz
COPFPrefs.prototype.VoiceTTS_next = function()
{
	//procura a selecionada atualmente
	var max = CSpeak.voicesCount();
	for(var i = 0; i < max; i++)
	{
		if(this._VoiceTTS_cache == CSpeak.voiceID(i))
		{
			//achamos o atual
			break;
		}
	}
	
	//vamos para a proxima
	var iorig = i;
	i++;
	if(i >= max)
		 i =0;
		 
	
	//vamos procurar a proxima voz que tenha o mesmo idioma
	if(!this.ListAllVoices())
	{
		var ibusca = i;
		do
		{
			voiceLang = CSpeak.voiceLang(ibusca);
			var compara = CSpeak.VoiceInLanguage(voiceLang, this._lang );
			if(compara == 2 || compara == 1)
			{
				i = ibusca;
				break;
			}

			ibusca++;
			if(ibusca >= max)
				 ibusca = 0;
		}
		while(ibusca != i);
	}

	
	//alteramos a voz
	this.VoiceTTS_set(CSpeak.voiceID(i));
	
	//retorna o nome
	return CSpeak.voiceName(i);
}

//navegacao automatica notas, esta tem cache do dado para acelerar
COPFPrefs.prototype._NavigateAuto_cache = 123;
COPFPrefs.prototype.NavigateAuto = function()
{
	if(this._NavigateAuto_cache == 123)
		this._NavigateAuto_cache = this._getTagBool("NavigateAuto", true);
	return this._NavigateAuto_cache;
}

COPFPrefs.prototype.NavigateAuto_set = function(value)
{
	this._setTag("NavigateAuto", value);
	this._NavigateAuto_cache = this._getTagBool("NavigateAuto", true);
}

//volume do audio
COPFPrefs.prototype.AudioVolume = function()
{
	return this._getTagInt("AudioVolume", 100) / 100;
}

COPFPrefs.prototype.AudioVolume_set = function(value)
{
	this._setTag("AudioVolume", value * 100);
}

