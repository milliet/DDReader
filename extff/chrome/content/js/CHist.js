/// <reference path="CUtils.js" />
/// <reference path="CPref.js" />


/*
=======================================================================
formato do historico:

<history>
	<entry removablemedia=true>
			//removablemedia indica se é CD ou outra midia removivel
		<opfuri>file:///c:/aquele lugar.opf</opfuri>
		<title>o titulo do livro</title>
		<dateaccess>data no nosso formato (veja CUtils.DateToString)</dateaccess>
	</entry>
</history>

*/

/*
=======================================================================
item de historico
somente contem os dados
*/

function CHistItem()
{
}

CHistItem.prototype.removablemedia = false;
CHistItem.prototype.opfuri = "";
CHistItem.prototype.title = "";
CHistItem.prototype.bookid = "";
CHistItem.prototype.dateaccess = new Date();


/*
=======================================================================
lista de historico
*/

//somente funcoes estaticas
function _CHist()
{
}

//antes de usar, deve inicializar, esquema singleton
_CHist.prototype.initializeHist = function()
{
	//inicializamos
	if(this._initializeHistCalled)
		return;
	this._initializeHistCalled = true;
	
	//cria o nosso textlimits
		//avisamos que estamos no fim da lista
		var msgEnd = new CTextItem();
		msgEnd.SetText_string( CMsg.HistoryEnd());

		//avisamos que estamos começo fim da lista
		var msgStart = new CTextItem();
		msgStart.SetText_string( CMsg.HistoryStart());
		
	this._textLimits = new CTextLimits(this, msgStart, msgEnd, false);
	
	//na inicializacao, somente lemos do xml
	var file = CUtils.GetDataFolder();
	file.append("history.xml");

	//arquivo nao existe, deixamos o array vazio
	if(!file.exists())
		return;

	//vamos tentar carregar o arquivo
	var xmlDoc = CUtils.LoadXMLNoException("file:///" + file.target);
	//erro na carga, deixamos o array vazio
	if(xmlDoc == null)
		return;

	//vamos parsear
	//se der algum erro, ignoramos o erro e carregamos o que tivermos conseguido
	try
	{
		xmlDoc = CUtils.GetXMLChild(xmlDoc, "history", null);
		for(var i=0;i<xmlDoc.childNodes.length;i++)
		{
			var thischild = xmlDoc.childNodes.item(i);

			//cria o novo item			
			var item = new CHistItem();
			item.removablemedia = thischild.attributes.getNamedItem("removablemedia").value;
			item.opfuri = CUtils.GetXMLChild(thischild, "opfuri", null).textContent;
			item.title = CUtils.GetXMLChild(thischild, "title", null).textContent;
			item.bookid = CUtils.GetXMLChild(thischild, "bookid", null).textContent;
			item.dateaccess = CUtils.StringToDate(CUtils.GetXMLChild(thischild, "dateaccess", null).textContent);
			
			//colocamos no FIM (pq ele foi gravado na ordem)
			this.histarray.push(item);
		}	
	}
	catch(e)
	{
		CDialogs.WarnEscToContinue(CMsg.ErrorLoadingHistory(), null);
	}
	
	//so para garantir que esteja na ordem
	this._sort();
}

//se inicializaram
_CHist.prototype._initializeHistCalled = false;
//o nosso array de dados
_CHist.prototype.histarray = new Array();
//o item que estamos falando agora
_CHist.prototype.speakindex = -1;
//quem escuta os nossos eventos
_CHist.prototype._EventListener = null;
//gerenciador dos limites
_CHist.prototype._textLimits = null;

//para acessar as funcoes estaticas
var CHist = new _CHist();

//quem escuta os nossos eventos
//tem que implementar HistChangeElements e HistChangeActive
_CHist.prototype.setEventListener = function(EventListener)
{
	this.initializeHist();
	this._EventListener = EventListener;
}


//salva em disco
_CHist.prototype._save = function()
{
	//resetamos a lista do que estamos falando
	//nao fica nada selecionado
	this.speakindex = -1;
	
	//limitamos o tamanho da nossa lista
	if(this.histarray.length > CPref.maxhistoryentries())
		this.histarray.length = CPref.maxhistoryentries();
	
	//criamos um xml
	/*
	var theString='<?xml version="1.0" encoding="UTF-8"?><history></history>';
	var parser = new DOMParser();
	var xmlDoc = parser.parseFromString(theString, "text/xml");
	*/
	var basefile = CUtils.GetExtensionFolder();
	basefile.append("defaults");
	basefile.append("history.xml");
	var xmlDoc = CUtils.LoadXML("file:///" + basefile.target);
	
	var nodes = CUtils.GetXMLChild(xmlDoc, "history", null);

	//transferimos todos os itens	
	for(var i=0;i<this.histarray.length;i++)
	{
		var item = this.histarray[i];
		
		var elem = xmlDoc.createElement("entry");

		var classe = xmlDoc.createAttribute("removablemedia");
		classe.value = item.removablemedia;
		elem.attributes.setNamedItem(classe);
		
		var opfuri = xmlDoc.createElement("opfuri");
		opfuri.textContent = item.opfuri;
		elem.appendChild(opfuri);
		
		var title = xmlDoc.createElement("title");
		title.textContent = item.title;
		elem.appendChild(title);
		
		var dateaccess = xmlDoc.createElement("dateaccess");
		dateaccess.textContent = CUtils.DateToString(item.dateaccess);
		elem.appendChild(dateaccess);
		
		var bookid = xmlDoc.createElement("bookid");
		bookid.textContent = item.bookid;
		elem.appendChild(bookid);
		
		nodes.appendChild(elem);
	}
	
	//onde vamos salvar
	var file = CUtils.GetDataFolder();
	file.append("history.xml");

	var serializer = new XMLSerializer();
	var foStream = Components.classes["@mozilla.org/network/file-output-stream;1"]
		.createInstance(Components.interfaces.nsIFileOutputStream);

	//salvamos
	foStream.init(file, 0x02 | 0x08 | 0x20, 0664, 0);   // write, create, truncate
	serializer.serializeToStream(xmlDoc, foStream, "");   // rememeber, doc is the DOM tree
	foStream.close();
	
	//evento
	if(this._EventListener)
		this._EventListener.HistChangeElements(this);
}

//para sar o sort
function _CHistSort(a,b)
{
	return b.dateaccess - a.dateaccess;
}

//da o sort no array
_CHist.prototype._sort = function()
{
	this.histarray.sort(_CHistSort);
}

//apaga tudo
_CHist.prototype.doDelAllHist = function()
{
	this.initializeHist();
	this.histarray = new Array();
	this._sort();
	this._save();
}

//apaga o item sendo falado
_CHist.prototype.doDelHist = function()
{
	this.initializeHist();
	
	//apagamos transferindo item a item
	var newhistarray = new Array();
	for(var i=0;i<this.histarray.length;i++)
	{
		if(i != this.speakindex)
			newhistarray.push( this.histarray[i]);
	}

	this.histarray = newhistarray;
	this._sort();
	this._save();
}

//recarrega o historico
_CHist.prototype.ReloadHist = function()
{
	this.initializeHist();
	this.histarray = new Array();

	//forca a recarregar
	this._initializeHistCalled = false;
	this.initializeHist();
	this._sort();

	//evento
	if(this._EventListener)
		this._EventListener.HistChangeElements(this);
}

//adiciona um item
_CHist.prototype.addEntry = function(opffile)
{
	this.initializeHist();
	this._addEntryNoSave(opffile);
	this._sort();
	this._save();
}

//adiciona um item sem salvar
_CHist.prototype._addEntryNoSave = function(opffile)
{
	//vamos verificar se já existe
	//em 2-9-08, verificamos por id, e nao por diretorio
	var bookid = opffile.GetBookId();
	for(var i=0;i<this.histarray.length;i++)
	{
		if(this.histarray[i].bookid == bookid)
		{
			//ja tem
			
			//marca a data do ultimo acesso
			var item = this.histarray[i];
			item.dateaccess = new Date();	//acesso = agora
			item.removablemedia = false;	//FAZER em algum momento: nao sabemos determinar
			
			//marca tb o titulo
			item.title = opffile.GetMedata(opffile.metadata_tagTitle).toString();
			item.bookid = opffile.GetBookId();
			item.opfuri = opffile.path;

			return;
		}
	}
	
	//se ainda nao tem, cria
	var item = new CHistItem();
	item.removablemedia = false;	//FAZER em algum momento: nao sabemos determinar
	item.opfuri = opffile.path;
	item.title = opffile.GetMedata(opffile.metadata_tagTitle).toString();
	item.bookid = opffile.GetBookId();
	item.dateaccess = new Date();	//acesso = agora
	
	//colocamos no comeco
	this.histarray.unshift(item);
}

//comeca a falar do comeco
_CHist.prototype.speak = function()
{
	this.initializeHist();
	
	//marca se nao tem nada
	if(this.histarray.length == 0)
		this._textLimits.setEmpty(true);
	else
		this._textLimits.setEmpty(false);
	
	this.speakindex = -1;
	this._speakcurrent();
}

_CHist.prototype.TLevt_current = function()
{
	this._speakcurrent();
}

//comeca a falar do ponto atual
_CHist.prototype._speakcurrent = function()
{
	if(this.speakindex >= this.histarray.length)
		this.speakindex = this.histarray.length - 1;
	if(this.speakindex < 0)
		this.speakindex = 0;
	
	//evento
	if(this._EventListener)
		this._EventListener.HistChangeActive(this);
		
	if(this.histarray.length == 0)
	{
		//avisamos que nao tem nada
		var msg = new CTextItem();
		msg.SetText_string( CMsg.HistoryEmpty());
		CSpeak.playItem(msg, this._textLimits);
		return;
	}

	//lemos o item atual
	var msg = new CTextItem();
	//falamos com o numero na frente
	var text = (this.speakindex + 1).toString() + ". ";
	text += this.histarray[this.speakindex].title;
	msg.SetText_string( text);
	
	//navegacao auto
	msg.listText = true;
	msg.autonav = CPref.listautonav();
	msg.spell = true;
	
	CSpeak.playItem(msg, this._textLimits);
	return;
}

//quando terminar de falar o item atual, avancamos para o proximo item
_CHist.prototype.TLevt_next = function()
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
_CHist.prototype.TLevt_prev = function()
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


