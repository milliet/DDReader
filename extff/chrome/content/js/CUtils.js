/// <reference path="CExcept.js" />
/// <reference path="CMsg.js" />

//somente funcoes estaticas
function _CUtils()
{
}

//para acessar as funcoes estaticas
var CUtils = new _CUtils();
/// <reference path="CUtils_ff.js" />

//criar um XML vazio
//_CUtils.prototype.CreateXML = function()

//carrega o texto de um arquivo
_CUtils.prototype.LoadFileRaw = function(path)
{
	//deve ter um jeito mais eficiente de fer isso, usando file stream, mas assim funciona bem
	//lias, nao precisa, de qq forma é bastante rapido
	var livrox = new XMLHttpRequest();
	livrox.open("GET", path, false); 
	livrox.send(null);
	return livrox.responseText;
}

//nunca da excecao, carrega um xml
_CUtils.prototype.LoadXMLNoException = function(path)
{
	var xmlDoc = new XMLHttpRequest();
	
	try
	{
		xmlDoc.open("GET", path, false);
		xmlDoc.send(null);
		if(xmlDoc.readyState == 4 && (xmlDoc.status == 200 || xmlDoc.status == 0) )
		if(xmlDoc.responseText != null)
		{
			//seria mais correto usar o stream, mas ai talvez nao funcone na rede, em http
			parser=new DOMParser();
			var xml = parser.parseFromString(xmlDoc.responseText,"text/xml");
			return xml;
		}
	}
	catch(e)
	{
	}
	
	return null;
}


//carregar um XML
_CUtils.prototype.LoadXML = function(path)
{
	var xmlDoc = new XMLHttpRequest();
	
	try
	{
		xmlDoc.open("GET", path, false);
		xmlDoc.send(null);
		if(xmlDoc.readyState == 4 && (xmlDoc.status == 200 || xmlDoc.status == 0) )
		if(xmlDoc.responseText != null)
		{
			//seria mais correto usar o stream, mas ai talvez nao funcone na rede, em http
			parser=new DOMParser();
			var xml = parser.parseFromString(xmlDoc.responseText,"text/xml");
			return xml;
		}
	}
	catch(e)
	{
		//vamos testar o erro
		var msg = CMsg.FileNotFoundOrError();
		if(e.name == "NS_ERROR_FILE_UNRECOGNIZED_PATH")
			msg = CMsg.FileNotFound();
		if(e.name == "NS_ERROR_FILE_NOT_FOUND")
			msg = CMsg.FileNotFound();

		throw new CExcept(msg, e, path);
	}

	//deu algum erro
	var msg = CMsg.FileNotFoundOrError();
	if(xmlDoc.status != 200 && xmlDoc.status != 0)
		throw new CExcept(CMsg.FileNotFound(), null, path);
	
	//nao parseou o xml, deve ser...	
	throw new CExcept(CMsg.InvalidXML(), null, path);

/*
esta versao nao funciona no FF 3

	var xmlDoc = this.CreateXML();
	xmlDoc.async=false;
	try
	{
		var status = xmlDoc.load(path);
	}
	catch(e)
	{
		//vamos testar o erro
		var msg = CMsg.FileNotFoundOrError();
		if(e.name == "NS_ERROR_FILE_UNRECOGNIZED_PATH")
			msg = CMsg.FileNotFound();
		if(e.name == "NS_ERROR_FILE_NOT_FOUND")
			msg = CMsg.FileNotFound();

		throw new CExcept(msg, e, path);
	}
	
	//erro na carga
	if(!status)
		throw new CExcept(CMsg.InvalidXML(), null, path);
		
	return xmlDoc;
*/
}


//resolve um endereço a partir de um endereço base
//o certo seria usar um componente do FF, mas é bem mais facil fazer tudo em javascript
_CUtils.prototype.ResolveURL = function(path, reference)
{
	//fazer no futuro: resolver coisas do tipo ./file, ../folder/file, etc
	//isso é importante para as rotinas de busca pq elas vao comparar o nome do arquivo
	
	//se tiver : é absoluto
	if(path.toString().indexOf(":", 0) > 0)
		return path;
	
	//presumimos relativo
	var lastSlash = reference.toString().lastIndexOf("/");
	var lastSlash2 = reference.toString().lastIndexOf("\\");
	if(lastSlash < lastSlash2)
		lastSlash = lastSlash2;
		
	//se nao tem barra nenhuma, acho que tá errado....
	if(lastSlash < 0)
		throw new CExcept(CMsg.InvalidReference(), null, reference);

	var ret = reference.toString().substring(0, lastSlash + 1);
	ret = ret + path;
	return ret;	
}


//verifica se um XML tem algum script
//returna true se tiver
_CUtils.prototype.HasScript = function(xml)
{
	for(var i=0;i<xml.childNodes.length;i++)
	{
		if(xml.childNodes.item(i).tagName)
			if(xml.childNodes.item(i).tagName.toUpperCase() == "SCRIPT")
				return true;
		
		if(this.HasScript(xml.childNodes.item(i)))
			return true;
	}
	
	//nao achamos
	return false;
}

//para pegar um filho especifico por tag, entre qualquer um dos filhos
//retorna null se nao achar
_CUtils.prototype.GetXMLChildRecursiveNoException = function(xml, tag, path)
{
	try
	{
		return xml.getElementsByTagName(tag)[0];
	}
	catch(e)
	{
		//usamos a outra rotina
		return this.GetXMLChildNoException(xml, tag, path);
	}

}


//para pegar um filho especifico por tag
//retorna null se nao achar
_CUtils.prototype.GetXMLChildNoException = function(xml, tag, path)
{
	try
	{
		for(var i=0;i<xml.childNodes.length;i++)
		{
			var item = xml.childNodes.item(i);
			if(item)
				if(item.tagName)
					if(item.tagName == tag)
						return item;
		}
		
		//nao achamos
		return null;
	}
	catch(e)
	{
		//nao fazemos nada
		return null;
	}
}

//para pegar um filho especifico por tag
_CUtils.prototype.GetXMLChild = function(xml, tag, path)
{
	var ret = this.GetXMLChildNoException(xml, tag, path);
	
	//nao achamos
	if(ret == null)
		throw new CExcept(CMsg.InvalidXMLtag(), null, path);
	
	return ret;
}

//para pegar o nosso diretorio de dados
//também garante que exista e seja um diretorio
//retorna um http://xulplanet.com/references/xpcomref/ifaces/nsIFile.html
_CUtils.prototype.GetDataFolder = function()
{
	//criamos o diretorio
	var file = Components.classes["@mozilla.org/file/directory_service;1"]
		.getService(Components.interfaces.nsIProperties)
		.get("ProfD", Components.interfaces.nsIFile);
	file.append("lidaddata");
	if( !file.exists() || !file.isDirectory() )
	{	
		//se ja existe como arquivo, apaga
		if(file.exists())
			file.remove(false);
		
		// if it doesn't exist, create
		file.create(Components.interfaces.nsIFile.DIRECTORY_TYPE, 0777);
	}
	
	return file;
}

//para pegar o diretorio do meus documentos
//retorna um http://xulplanet.com/references/xpcomref/ifaces/nsIFile.html
_CUtils.prototype.GetDocumentsFolder = function()
{
	//criamos o diretorio
	var file = Components.classes["@mozilla.org/file/directory_service;1"]
		.getService(Components.interfaces.nsIProperties)
		.get("Pers", Components.interfaces.nsIFile);
	file.append(CMsg.MyBooksFolder());
	if( !file.exists() || !file.isDirectory() )
	{	
		//se ja existe como arquivo, apaga
		//if(file.exists())
		//	file.remove(false);
		
		// if it doesn't exist, create
		file.create(Components.interfaces.nsIFile.DIRECTORY_TYPE, 0777);
	}
	
	return file;
}

//para pegar o arquivo de exportacao da configracao
_CUtils.prototype.GetExportConfigFile = function()
{
	//criamos o diretorio
	var file = this.GetDocumentsFolder();
	file.append("config.zip");
	return file;
}


//para pegar o diretorio da minhas anotacoes
//retorna um http://xulplanet.com/references/xpcomref/ifaces/nsIFile.html
_CUtils.prototype.GetExportNotesFolder = function()
{
	//criamos o diretorio
	var file = this.GetDocumentsFolder();
	file.append(CMsg.MyExportNotesFolder());
	if( !file.exists() || !file.isDirectory() )
	{	
		// if it doesn't exist, create
		file.create(Components.interfaces.nsIFile.DIRECTORY_TYPE, 0777);
	}
	
	return file;
}

//verifica se um arquivo exite
_CUtils.prototype.FileExist = function(path)
{
//http://xulplanet.com/references/xpcomref/ifaces/nsIFile.html
	//criamos o diretorio
	var file = Components.classes["@mozilla.org/file/local;1"]
		.createInstance(Components.interfaces.nsILocalFile);
		
	//se tiver file:/// na frente, tiramos
	if(path.indexOf("file:///") == 0)
		path = path.substring(8);
	//torcamos os / por \
	var re = new RegExp("/", "g");
	path = path.replace(re, "\\");
	try
	{
		file.initWithPath(path);
		var ret = file.exists();
		return ret;
	}
	catch(e)
	{
		//se deu erro, nao existe
	}
	
	return false;
}

//verifica se um arquivo exite e apaga ele
_CUtils.prototype.DeleteIfFileExist = function(path)
{
//http://xulplanet.com/references/xpcomref/ifaces/nsIFile.html
	//criamos o diretorio
	var file = Components.classes["@mozilla.org/file/local;1"]
		.createInstance(Components.interfaces.nsILocalFile);
		
	//se tiver file:/// na frente, tiramos
	if(path.indexOf("file:///") == 0)
		path = path.substring(8);
	//torcamos os / por \
	var re = new RegExp("/", "g");
	path = path.replace(re, "\\");
	try
	{
		file.initWithPath(path);
		if(file.exists())
			file.remove(false);
		return ret;
	}
	catch(e)
	{
		//se deu erro, nao existe
	}
	
	return false;
}


//NormalizeFilename transforma uma strng em um nome de arquivo
//somente permite a-z A-Z 0-9 - _ .
_CUtils.prototype.NormalizeFilename = function(path)
{
	var ret = "";
	for(var i=0; i < path.length; i++)
	{
		var letra = path.charAt(i);
		var valida = false;
		if(letra >= 'a' && letra <= 'z')
			valida = true;
		if(letra >= 'A' && letra <= 'Z')
			valida = true;
		if(letra >= '0' && letra <= '9')
			valida = true;
		if(letra == '.' || letra == '-' || letra == '_')
			valida = true;
			
		if(!valida)
			letra = "_";
		
		ret += letra;
	}
	
	return ret;
}


//NormalizeFilename transforma uma strng em um nome de arquivo
//somente permite a-z A-Z acentuados 0-9 - _ e espaco
_CUtils.prototype.NormalizeListaAcentos = "áàâãÁÀÂÃéêÉÊíÍóôõÓÔÕúÚçÇñ";
_CUtils.prototype.NormalizeListaLetras  = "aaaaAAAAeeEEiIoooOOOuUcCn";
_CUtils.prototype.NormalizeAcentosFilename = function(path)
{
	var ret = "";
	for(var i=0; i < path.length; i++)
	{
		var letra = path.charAt(i);
		
		//conversao de acentos
		if(CUtils.NormalizeListaAcentos.indexOf(letra) >= 0)
			letra = CUtils.NormalizeListaLetras.charAt( CUtils.NormalizeListaAcentos.indexOf(letra));
		
		var valida = false;
		if(letra >= 'a' && letra <= 'z')
			valida = true;
		if(letra >= 'A' && letra <= 'Z')
			valida = true;
		if(letra >= '0' && letra <= '9')
			valida = true;
		if(letra == '-' || letra == '_' || letra == ' ')
			valida = true;
			
		if(!valida)
			letra = " ";
		
		ret += letra;
	}
	
	return CUtils.TrimString(ret);
}




//para transforar um livro em nome de arquivo
//inclui o diretorio e o nome, nao inclui extensao
//retorna um http://xulplanet.com/references/xpcomref/ifaces/nsIFile.html
_CUtils.prototype.GetBookBaseFilename = function(path, uid, extra)
{
	//comecamos no nosso diretorio de dados
	var ret = this.GetDataFolder();

	//vamos isolar o nome do arquivo
	//tiramos o ponto do fim e as barras
	var lastSlash = path.toString().lastIndexOf("/");
	var lastSlash2 = path.toString().lastIndexOf("\\");
	if(lastSlash < lastSlash2)
		lastSlash = lastSlash2;
	//se nao tem barra nenhuma, mantem o nome todo
	if(lastSlash > 0)
		path = path.toString().substring(lastSlash + 1);
	//se tiver ponto, ranca ele fora
	if(path.toString().indexOf(".") > 1)
		path = path.toString().substring(0, path.toString().indexOf("."));
	
	
	//primeiro montamos o nome do arquivo
	//somente os primeiros 50
	var filename = this.NormalizeFilename(path)
	if(filename.length > 50)
		filename = filename.substring(0, 49);
		
	//depois o UID
	//limitqamos em 100 caracteres
	filename += this.NormalizeFilename(uid);
	if(filename.length > 100)
		filename = filename.substring(0, 99);
	
	//anexamos o extra
	filename += this.NormalizeFilename(extra);
	
	ret.append(filename);
	return ret;
}

//para retornar o diretorio da extensao
//retorna um http://xulplanet.com/references/xpcomref/ifaces/nsIFile.html

_CUtils.prototype.GetExtensionFolder = function()
{
	// the extension's id from install.rdf
	var MY_ID = "LIDA-D@caracol.com.br";
	if(! (typeof RunningInsideInstaller == "undefined") )
	if(RunningInsideInstaller != null)
	if(RunningInsideInstaller)
		MY_ID = "DDR-Installer@caracol.com.br";

	var file = null;
	
	//para o firefox 3
	try
	{
		var em = Components.classes["@mozilla.org/extensions/manager;1"].
				 getService(Components.interfaces.nsIExtensionManager);
		file = em.getInstallLocation(MY_ID).getItemLocation(MY_ID);
	}
	catch(e)
	{
		//se deu excecao, deve ser o firefox 4
		
		/*
		este código nao funciona porque a rotina getAddonByID não e´sincorna
		isso quer dizer o seguinte: ele demora um tempo para setar a variavel,
		e  gente tem que retornar ela imediatamente
		
		Components.utils.import("resource://gre/modules/AddonManager.jsm"); 
		AddonManager.getAddonByID(MY_ID, function(esteaddon) {
			_CUtils_GetExtensionFolder_ReturnVariable = esteaddon.getResourceURI("").QueryInterface(Components.interfaces.nsIFileURL).file;
			} );
		*/

		//file = this.GetDataFolder();
		file = Components.classes["@mozilla.org/file/directory_service;1"]
			.getService(Components.interfaces.nsIProperties)
			.get("ProfD", Components.interfaces.nsIFile);
		file.append("extensions");
		file.append("LIDA-D@caracol.com.br");
	}
	
	// returns nsIFile for the extension's folder
	return file;
}

//transforma uma data em string
_CUtils.prototype.DateToString = function(data)
{
	var msg = "";
	msg += data.getFullYear();
	msg += "-";
	msg += (data.getMonth() + 1);
	msg += "-";
	msg += data.getDate();
	msg += "-";
	msg += data.getHours();
	msg += "-";
	msg += data.getMinutes();
	msg += "-";
	msg += data.getSeconds();
	msg += "-";
	msg += data.getMilliseconds();

	return msg;
}

//o contrario da rotina acma
_CUtils.prototype.StringToDate = function(msg)
{
	//se der erro, retornamos hoje
	var data = new Date();
	try
	{
		msg = msg.toString().split("-");
		data.setFullYear(msg[0]);
		data.setMonth( parseInt(msg[1]) - 1 );
		data.setDate(msg[2]);
		data.setHours(msg[3]);
		data.setMinutes(msg[4]);
		data.setSeconds(msg[5]);
		data.setMilliseconds(msg[6]);
	}
	catch(e)
	{
	}
	return data;
}

//trim
_CUtils.prototype.TrimString = function(txt)
{
	var re = new RegExp("^\\s+|\\s+$", "g");
	return txt.replace(re,"");
}

//confirmar operacao
_CUtils.prototype.ConfirmOperation = function(speak, message, extra)
{
	//paramos o som (embora quem chame ja deva ter desligado)
	CSpeak.forceEnd();

	//chamamos a caixa de dialogo
	var retVals = { okButton:false, textSpeak:speak, textMessage:message, textExtra:extra };
	window.openDialog('../dlg/Confirm.xul','Exit','modal,centerscreen,resizable=no', retVals);

	if(retVals.okButton)
	{
		return true;
	}
	
	return false;
}


/*
do SMIL 2.0

Clock values have the following syntax:
Clock-value         ::= ( Full-clock-value | Partial-clock-value | Timecount-value )
Full-clock-value    ::= Hours ":" Minutes ":" Seconds ("." Fraction)?
Partial-clock-value ::= Minutes ":" Seconds ("." Fraction)?
Timecount-value     ::= Timecount ("." Fraction)? (Metric)?
Metric              ::= "h" | "min" | "s" | "ms"
Hours               ::= DIGIT+; any positive number
Minutes             ::= 2DIGIT; range from 00 to 59
Seconds             ::= 2DIGIT; range from 00 to 59
Fraction                ::= DIGIT+
Timecount           ::= DIGIT+
2DIGIT                    ::= DIGIT DIGIT
DIGIT                        ::= [0-9]

For Timecount values, the default metric suffix is "s" (for seconds). No embedded white space is allowed in clock values, although leading and trailing white space characters will be ignored.

The following are examples of legal clock values:

    * Full clock values: 
        02:30:03    = 2 hours, 30 minutes and 3 seconds
        50:00:10.25 = 50 hours, 10 seconds and 250 milliseconds
    * Partial clock value: 
        02:33   = 2 minutes and 33 seconds
        00:10.5 = 10.5 seconds = 10 seconds and 500 milliseconds
    * Timecount values:
        3.2h    = 3.2 hours = 3 hours and 12 minutes
        45min   = 45 minutes
        30s     = 30 seconds
        5ms     = 5 milliseconds
        12.467  = 12 seconds and 467 milliseconds


No embedded white space is allowed in clock values, although leading and trailing white space characters will be ignored.
*/

function CUtilsConvert(text)
{
	this.origText = text.toString();
	this.text = text.toString();
}
CUtilsConvert.prototype.text = "";
CUtilsConvert.prototype.origText = "";

//pula os digitos ou os separadores
//retorna tudo que pulou
CUtilsConvert.prototype._skip = function(separators)
{
	var index = 0;
	while(this.text.length > index)
	{
		var caract = this.text.charAt(index);
		//ve se e um digito
		var isdigit = "0123456789 .".indexOf(caract);
		
		//procuramos um digito?
		var ret = false;
		if(!separators && isdigit < 0)
			ret = true;
		if(separators && !(isdigit < 0) )
			ret = true;

		//para retornar, arrumamos a variavel e o que temos que retornar
		if(ret)
		{
			var retval = this.text.substring(0, index);
			this.text = this.text.substring(index);
			return retval;
		}
			
		//rodamos a string
		index++;
	}
	
	//acabou a string
	var retval = this.text;
	this.text = "";
	return retval;
}


//calcula um trecho
CUtilsConvert.prototype._evaluate = function(parte, sep)
{
	if(parte < 0)
		return 0;
		
	sep = sep.toLowerCase();
	if(sep == "h")
		return parte * 60 * 60 * 1000;
	if(sep == "min")
		return parte * 60 * 1000;
	if(sep == "s" || sep == "")	//default é segundos
		return parte * 1000;
	if(sep == "ms")
		return parte;

	//xi, o separador é desconhecido
	throw new CExcept(CMsg.UnknownSeparatorInTime(sep), null, null);
	return parte;
}


//a conversao completa
CUtilsConvert.prototype.Convert = function()
{
	try
	{
		this.text = this.origText;
		
		//o parseFloat pega um numero com ponto opcional e espacos
		//usamos o parse e depois avancamos até a proxima letra
		var parte1 = -1;
		var sep1 = "";
		var parte2 = -1;
		var sep2 = "";
		var parte3 = -1;
		var sep3 = "";
		var parte4 = -1;
		var sep4 = "";
		
		
		if(this.text != "")
			parte1 = parseFloat(this.text);
		this._skip(false);
		sep1 = this._skip(true);
	
		if(this.text != "")
			parte2 = parseFloat(this.text);
		this._skip(false);
		sep2 = this._skip(true);
		
		if(this.text != "")
			parte3 = parseFloat(this.text);
		this._skip(false);
		sep3 = this._skip(true);
		
		if(this.text != "")
			parte4 = parseFloat(this.text);
		this._skip(false);
		sep4 = this._skip(true);
		
		
		//vamos transformar os : em unidades
		//podem ser 2 : ou 1 :
		if(sep1 == ":" && sep2 == ":")
		{
			sep1 = "h";
			sep2 = "min";
		}
		if(sep1 == ":")
		{
			sep1 = "min";
		}


		//agora vamos acumular cada cara
		var ret = this._evaluate(parte1, sep1);
		ret += this._evaluate(parte2, sep2);
		ret += this._evaluate(parte3, sep3);
		ret += this._evaluate(parte4, sep4);
		
		//terminamos
		return ret;
	}
	catch(e)
	{
		throw new CExcept(CMsg.InvalidClock(this.origText), e, null);
	}
}

/*
para manipulacao do registro do windows
*/

//ganrate que uma chave tenha um determinado valor
//se tiver outro valor, alteramos para esse valor
function CUtilRegEnsure(path, chave, valor)
{
	if(CUtilRegRdUser(path,chave) == valor)
		return;
		
	var wrk = Components.classes["@mozilla.org/windows-registry-key;1"]
		.createInstance(Components.interfaces.nsIWindowsRegKey);

	//acessamos sempre o CURRENT_USER
	//	wrk.create(wrk.ROOT_KEY_LOCAL_MACHINE, path, wrk.ACCESS_WRITE);
	wrk.create(wrk.ROOT_KEY_CURRENT_USER, path, wrk.ACCESS_WRITE);
	wrk.writeStringValue(chave, valor);
	wrk.close();
}


//le um valor
//do usuario
function CUtilRegRdUser(path, chave)
{
	try
	{
		var wrk = Components.classes["@mozilla.org/windows-registry-key;1"]
			.createInstance(Components.interfaces.nsIWindowsRegKey);
//		wrk.open(wrk.ROOT_KEY_LOCAL_MACHINE, path, wrk.ACCESS_READ);
		wrk.open(wrk.ROOT_KEY_CURRENT_USER, path, wrk.ACCESS_READ);

		var id = wrk.readStringValue(chave);
		wrk.close();
		return id;
	}
	catch(e)
	{
		return "";
	}
}

//da maquina
function CUtilRegRdMachine(path, chave)
{
	try
	{
		var wrk = Components.classes["@mozilla.org/windows-registry-key;1"]
			.createInstance(Components.interfaces.nsIWindowsRegKey);
		wrk.open(wrk.ROOT_KEY_LOCAL_MACHINE, path, wrk.ACCESS_READ);
//		wrk.open(wrk.ROOT_KEY_CURRENT_USER, path, wrk.ACCESS_READ);

		var id = wrk.readStringValue(chave);
		wrk.close();
		return id;
	}
	catch(e)
	{
		return "";
	}
}


/*
criado em 20100913
para manipular o tempo do imeout dos scripts do firefox
*/
var _CUtilsTimeout_timeout_copia = 60*15 + 3;	//15 minutos
var _CUtilsTimeout_timeout_normal = 75;	//1 minuto e meio

//ao iniciar
function CUtilsTimeout_inicial()
{
	//aumenta o tempo de timeout dos scripts
	var _prefs = Components.classes["@mozilla.org/preferences-service;1"].
		getService(Components.interfaces.nsIPrefBranch);
	try
	{
		//coloca 60 segundos, no minimo
		if(_prefs.getIntPref(PreferenceName) < _CUtilsTimeout_timeout_normal)
			_prefs.setIntPref("dom.max_chrome_script_run_time", _CUtilsTimeout_timeout_normal);
		//se por acaso ficou o timeout grande, diminuimos
		if(_prefs.getIntPref(PreferenceName) == _CUtilsTimeout_timeout_copia)
			_prefs.setIntPref("dom.max_chrome_script_run_time", _CUtilsTimeout_timeout_normal);
	}
	catch(e)
	{
		//coloca 60 segundos
		_prefs.setIntPref("dom.max_chrome_script_run_time", _CUtilsTimeout_timeout_normal);
	}
}



//ao iniciar
function CUtilsTimeout_copia()
{
	//aumenta o tempo de timeout dos scripts
	var _prefs = Components.classes["@mozilla.org/preferences-service;1"].
		getService(Components.interfaces.nsIPrefBranch);
	try
	{
		_prefs.setIntPref("dom.max_chrome_script_run_time", _CUtilsTimeout_timeout_copia);
	}
	catch(e)
	{
		//ignora erros
	}
}



