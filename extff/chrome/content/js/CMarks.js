/// <reference path="CUtils.js" />
/// <reference path="CUtils_ff.js" />
/// <reference path="CSMILFile.js" />
/// <reference path="CSMILArray.js" />
/// <reference path="CNCX.js" />
/// <reference path="CTextArray.js" />
/// <reference path="CTextItem.js" />

/*
nossas alterações em relacao ao daisy:
bookmark tem referenceText, dateLastUpdate, SMILFileIndex, SMILFileOffset, pageRef
SMILFileIndex e SMILFileOffset são para classificar os marcadores conforme a ordem em que aparecem no livro
pageRef é a referencia do indice de paginas; se nao existir ou estiver em branco, é porque nao existe
nota: atributo label do bookmark é o titulo do bookmark

Inserimos uma tag, lastReadDate, com a data da ultima vez que o arquivo foi aberto
 
exemnplo formato do arquivo:
<?xml version="1.0" encoding="UTF-8" ?>
<!DOCTYPE bookmarkSet PUBLIC "-//NISO//DTD bookmark 2005-1//EN"
  "http://www.daisy.org/z3986/2005/bookmark-2005-1.dtd">
 <bookmarkSet xmlns="http://www.daisy.org/z3986/2005/bookmark/">

	<lastReadDate>20080101</lastReadDate>

    <title>
      <text>Gone with the Wind</text>
      <audio src="gwtw_title.mp3" />
    </title>
    <uid>us-rfbd-JT065</uid>

    <lastmark>
      <ncxRef>gwtw.ncx#lvl1_5</ncxRef>
      <URI>gwtw_ch5.smil#para023</URI>
      <timeOffset>03:52.00</timeOffset>
    </lastmark>

    <bookmark>
      <ncxRef>gwtw.ncx#lvl1_1</ncxRef>
      <URI>gwtw_ch1.smil#para008</URI>
      <timeOffset>00:22.00</timeOffset>
    </bookmark>

    <bookmark>
      <ncxRef>gwtw.ncx#lvl1_3</ncxRef>
      <URI>gwtw_ch3.smil#para012</URI>
      <timeOffset>01:28.00</timeOffset>
      <note>
        <text>Atlanta burns.</text>
      </note>
    </bookmark>

    <hilite>
      <hiliteStart>
        <ncxRef>gwtw.ncx#lvl1_4</ncxRef>
        <URI>gwtw_ch4.smil#para001</URI>
        <timeOffset>00:00.00</timeOffset>
      </hiliteStart>
      <hiliteEnd>
        <ncxRef>gwtw.ncx#lvl1_4</ncxRef>
        <URI>gwtw_ch4.smil#para006</URI>
        <timeOffset>04:06.00</timeOffset>
      </hiliteEnd>
      <note>
        <audio src="us-rfbd-JT065.wav" clipBegin="00:00.00"
        clipEnd="00:10.00" />
      </note>
    </hilite>

 </bookmarkSet>
 * 
 */
//gerenciamento dos marcadores de um livro
function CMarks(path, id, title)
{
	this._path = path;
	this._id = id;
	this._title = title;


	//cria o nosso textlimits
		//avisamos que estamos no fim da lista
		var msgEnd = new CTextItem();
		msgEnd.SetText_string( CMsg.MarkersEnd());

		//avisamos que estamos começo fim da lista
		var msgStart = new CTextItem();
		msgStart.SetText_string( CMsg.MarkersStart());
		
	this._textLimits = new CTextLimits(this, msgStart, msgEnd, false);


	//carregamos o arquivo
	this._load();
}


CMarks.prototype._path = "";	//para montar o nome do arquivo
CMarks.prototype._id = "";	//para montar o nome do arquivo
CMarks.prototype._title = "";	//para salvar no arquivo
CMarks.prototype.xml = null;	//o XMLDocument dele
CMarks.prototype._cacheofSortedarrayBookmarks = null;	//cache dos itens classificados

//se quando abriu tinha um lastmark
CMarks.prototype.openedWithLastMark = false;

//data da ultima leitura
//este cara nao lemos diretamente do XML porque alteramos no XML
CMarks.prototype._lastReadDate = null;

//gerenciador dos limites
CMarks.prototype._textLimits = null;
//o item que estamos falando agora
CMarks.prototype.speakindex = -1;
//quem escuta os nossos eventos
CMarks.prototype._EventListener = null;


//quem escuta os nossos eventos
//tem que implementar MarkChangeActive e MarkChangeElements
CMarks.prototype.setEventListener = function(EventListener)
{
	this._EventListener = EventListener;
}



//carrega o arquivo
CMarks.prototype._load = function()
{
	try
	{
		var filename = CUtils.GetBookBaseFilename(this._path, this._id, ".bmk.xml");
		
		//se o arquivo nao existir, carregamos o default
		if(!filename.exists())
		{
			filename = CUtils.GetExtensionFolder();
			filename.append("defaults");
			filename.append("bookmarks.xml");
		}
		this.xml = CUtils.LoadXML("file:///" + filename.target);
		
		//lemos a data
		this._lastReadDate = null;
		var node = CUtils.GetXMLChildNoException(this.xml, "bookmarkSet", null);
		if(node != null)
		{
			var date = CUtils.GetXMLChildNoException(node, "lastReadDate", null);
			if(date)
			{
				this._lastReadDate = CUtils.StringToDate(date.textContent);
			}
		}

		this.openedWithLastMark = false;
		if(node != null)
		if(CUtils.GetXMLChildNoException(node, "lastmark", null) != null)
			this.openedWithLastMark = true;
	}
	catch(e)
	{
		CDialogs.WarnEscToContinue(CMsg.ErrorLoadingMarks(), null);

		if(this.xml == null)
		{
			//carrega o default
			var filename = CUtils.GetExtensionFolder();
			filename.append("defaults");
			filename.append("bookmarks.xml");
			this.xml = CUtils.LoadXML("file:///" + filename.target);
		}
	}

	//evento
	this._updateSortedarrayBookmarks();
	if(this._EventListener)
		this._EventListener.MarkChangeElements(this);


	//marcamos a data do ultimo acesso
	var node = CUtils.GetXMLChildNoException(this.xml, "bookmarkSet", null);
	if(node)
	{
		var date = CUtils.GetXMLChildNoException(node, "lastReadDate", null);
		if(date)
		{
			//atualizamos
			date.textContent = CUtils.DateToString(new Date());
		}
		else
		{
			//criamos
			var mark = this.xml.createElement("lastReadDate");
			mark.textContent = CUtils.DateToString(new Date());
			
			//coloca na lista	
			this.xml.documentElement.appendChild(mark);
		}
	}
	
		
	//salvamos para marcar a data do ultimo acesso
	this._save();
}

//salva o arquivo
CMarks.prototype._save = function()
{
	try
	{
		//colocamos o uid e o title
		//isso nao deve dar erro pq estamos usando a nossa base
		var node = CUtils.GetXMLChild(this.xml, "bookmarkSet", null);
		var uid = CUtils.GetXMLChild(node, "uid", null);
		uid.textContent = this._id;
		//agora o titulo
		uid = CUtils.GetXMLChild(node, "title", null);
		uid = CUtils.GetXMLChild(uid, "text", null);
		uid.textContent = this._title;
	
		//salva
		this._savefast();	
	}
	catch(e)
	{
		CDialogs.WarnEscToContinue(CMsg.ErrorSavingMarks(), null);
	}
}

//salva o arquivo, mais rapido
CMarks.prototype._savefast = function()
{
	//determinamos o nome do arquivo
	var filename = CUtils.GetBookBaseFilename(this._path, this._id, ".bmk.xml");
	var serializer = new XMLSerializer();
	var foStream = Components.classes["@mozilla.org/network/file-output-stream;1"]
		.createInstance(Components.interfaces.nsIFileOutputStream);

	//salvamos
	foStream.init(filename, 0x02 | 0x08 | 0x20, 0664, 0);   // write, create, truncate
	serializer.serializeToStream(this.xml, foStream, "");   // rememeber, doc is the DOM tree
	foStream.close();
}


//lista dos bookmarks
CMarks.prototype.getBookmarks = function()
{
	return this.xml.getElementsByTagName("bookmark");
}

//lista dos bookmarks
CMarks.prototype.getSortedarrayBookmarks = function()
{
	return this._cacheofSortedarrayBookmarks;
}

//lista dos bookmarks classificada conforme a ordem em que aparecem no livro
//retorna um array
CMarks.prototype._updateSortedarrayBookmarks = function()
{
	var nodes = this.getBookmarks();
	var ret = new Array();
	
	//transfere todos os elementeos para o array
	for(var i = 0; i < nodes.length; i++)
	{
		ret.push(nodes.item(i));
	}
	
	//agora classificamos
	ret.sort(_CMarksSort);
	this._cacheofSortedarrayBookmarks = ret;
}

//para sar o sort
function _CMarksSort(a,b)
{
	//nao damos erro
	try
	{
		var index1 = CUtils.GetXMLChildNoException(a, "SMILFileIndex", null).textContent + 1;
		var index2 = CUtils.GetXMLChildNoException(b, "SMILFileIndex", null).textContent + 1;
		if(index1 != index2)
			return index1 - index2;
			
		index1 = CUtils.GetXMLChildNoException(a, "SMILFileOffset", null).textContent + 1;
		index2 = CUtils.GetXMLChildNoException(b, "SMILFileOffset", null).textContent + 1;
		if(index1 != index2)
			return index1 - index2;
			
		//que estranho... sao iguais.....
		return 0;
	}
	catch(e)
	{
		//ignoramos erros
	}
	
	return 0;
}

//adiciona um marcador (bookmark ou lastmark)
CMarks.prototype._addmark = function(tag, ncxRef, URI, title, text, referenceText,
	SMILFileIndex, SMILFileOffset, pageRef)
{
	//vamos adicionar
	var mark = this.xml.createElement(tag);
	
	var aux;
	
	if(title != null)
	{
		aux = this.xml.createAttribute("label");
		aux.value = title;
		mark.attributes.setNamedItem(aux);
	}
	
	if(ncxRef != null)
	{
		aux = this.xml.createElement("ncxRef");
		aux.textContent = ncxRef;
		mark.appendChild(aux);
	}
	
	if(pageRef != null)
	{
		aux = this.xml.createElement("pageRef");
		aux.textContent = pageRef;
		mark.appendChild(aux);
	}
	
	if(URI != null)
	{
		aux = this.xml.createElement("URI");
		aux.textContent = URI;
		mark.appendChild(aux);
	}
	
	var auxnote = this.xml.createElement("note");
	mark.appendChild(auxnote);
	
	if(text != null)
	{
		//text fica dentro de note	
		aux = this.xml.createElement("text");
		aux.textContent = text;
		auxnote.appendChild(aux);
	}
	
	if(referenceText != null)
	{
		aux = this.xml.createElement("referenceText");
		aux.textContent = referenceText;
		mark.appendChild(aux);
	}
	
	aux = this.xml.createElement("dateLastUpdate");
	aux.textContent = CUtils.DateToString(new Date());
	mark.appendChild(aux);
	
	if(SMILFileIndex != null)
	{
		aux = this.xml.createElement("SMILFileIndex");
		aux.textContent = SMILFileIndex;
		mark.appendChild(aux);
	}
	
	if(SMILFileOffset != null)
	{
		aux = this.xml.createElement("SMILFileOffset");
		aux.textContent = SMILFileOffset;
		mark.appendChild(aux);
	}
	
	//coloca na lista	
	this.xml.documentElement.appendChild(mark);
}

//se existe o ponto atual de leitura
CMarks.prototype.hasLastMark = function()
{
	//se ja tiver, apagamos
	var node = CUtils.GetXMLChildNoException(this.xml, "bookmarkSet", null);
	var lastmark = CUtils.GetXMLChildNoException(node, "lastmark", null);
	if(lastmark != null)
		return true;
	
	return false;
}

//se existe o ponto atual de leitura
CMarks.prototype.getLastMark = function()
{
	//se ja tiver, apagamos
	var node = CUtils.GetXMLChildNoException(this.xml, "bookmarkSet", null);
	return CUtils.GetXMLChildNoException(node, "lastmark", null);
}


//marca o ponto atual de leitura
CMarks.prototype.setLastMark = function(ncxRef, URI, 
	SMILFileIndex, SMILFileOffset, pageRef)
{
	//NOTA: se estivermos rodando no modo de tutorial E como ajuda, não salvamos o ponto de leitura
	//isso porque o cara pode acessar a ajuda e depois o tutorial, e a gente quer que ele volte para
	//o ponto onde estava NO TUTORIAL, e não na ajuda
	//se der algum erro, ignoramos
	try
	{
		//nos exercicios, nunca salvamos o ponto de leitura
		if(typeof(RunningInsideExercises) != "undefined")
		if(RunningInsideExercises)
			return;

		if(typeof(RunningInsideTutorial) != "undefined")
		if(RunningInsideTutorial)
		if(window.arguments[0].chavebusca != null)
		if(window.arguments[0].chavebusca != "")
			return;
	}
	catch(e)
	{
		//ignoramos erros
	}
	
	//se ja tiver, apagamos
	var node = CUtils.GetXMLChildNoException(this.xml, "bookmarkSet", null);
	var lastmark = CUtils.GetXMLChildNoException(node, "lastmark", null);
	if(lastmark)
		node.removeChild(lastmark);
	
	this._addmark("lastmark", ncxRef, URI, null, null, null,
		SMILFileIndex, SMILFileOffset, pageRef);

	//salvamos
	this._savefast();
}

//adiciona um marcador
CMarks.prototype.addBookmark = function(ncxRef, URI, title, text, referenceText,
	SMILFileIndex, SMILFileOffset, pageRef)
{
	//se ja tiver, apagamos
	this._deleteBookmarkByURINoEvent(URI);
	
	this._addmark("bookmark", ncxRef, URI, title, text, referenceText,
		SMILFileIndex, SMILFileOffset, pageRef);
	
	//salvamos
	this._save();

	//evento
	this._updateSortedarrayBookmarks();
	if(this._EventListener)
		this._EventListener.MarkChangeElements(this);
}

//atualizxa um marcador
CMarks.prototype.updateBookmark = function(currentMark, title, text)
{
	if(currentMark.attributes)
	if(currentMark.attributes.getNamedItem("label"))
		currentMark.attributes.getNamedItem("label").value = title;
	
	var note = CUtils.GetXMLChildNoException(currentMark, "note", null);
	var currentText = CUtils.GetXMLChildNoException(note, "text", null);
	if(currentText)
		currentText.textContent = text;
	

	//salvamos
	this._save();

	//evento
	this._updateSortedarrayBookmarks();
	if(this._EventListener)
		this._EventListener.MarkChangeElements(this);
}


//remove todos os marcadores
CMarks.prototype.deleteAllBookmarks = function()
{
	//apagamos por URI
	//a gente bem que podia usar uma funcao direta... mas assim funciona
	var nodelist = this.getBookmarks();
	for(var i = 0; i < nodelist.length; i++)
	{
		var uri = CUtils.GetXMLChildNoException(nodelist.item(i), "URI");
		if(uri)
		{
			var toplevel = CUtils.GetXMLChild(this.xml, "bookmarkSet", null);
			toplevel.removeChild(nodelist.item(i));
				
			//atualiza a lista, para remover tudo mesmo
			i--;
			nodelist = this.getBookmarks();
		}
	}
	
	
	this._updateSortedarrayBookmarks();

	//salvamos
	this._save();

	//evento
	this._updateSortedarrayBookmarks();
	if(this._EventListener)
		this._EventListener.MarkChangeElements(this);
}

//remove um marcador
CMarks.prototype.deleteBookmarkByURI = function(URItoRemove)
{
	this._deleteBookmarkByURINoEvent(URItoRemove);
	this._updateSortedarrayBookmarks();

	//salvamos
	this._save();

	//evento
	this._updateSortedarrayBookmarks();
	if(this._EventListener)
		this._EventListener.MarkChangeElements(this);
}

//remove de verdade
CMarks.prototype._deleteBookmarkByURINoEvent = function(URItoRemove)
{
	//apagamos por URI
	//na verdade, isto não está certo pq podemos ter varios marcadore apontando para uma mesma URI
	//inclusive para o mesmo offset
	//mas, por enquanto, definimos que somente pode haver um unico marcador para um ponto do smil
	var nodelist = this.getBookmarks();
	for(var i = 0; i < nodelist.length; i++)
	{
		var uri = CUtils.GetXMLChildNoException(nodelist.item(i), "URI");
		if(uri)
		{
			if(uri.textContent == URItoRemove)
			{
				var toplevel = CUtils.GetXMLChild(this.xml, "bookmarkSet", null);
				toplevel.removeChild(nodelist.item(i));
				
				//atualiza a lista, para remover tudo mesmo
				i--;
				nodelist = this.getBookmarks();
			}
		}
	}
}

//acha um marcador
CMarks.prototype.getBookmarkByURI = function(URItoSearch)
{
	//achamos por URI
	var nodelist = this.getSortedarrayBookmarks();
	for(var i = 0; i < nodelist.length; i++)
	{
		var uri = CUtils.GetXMLChildNoException(nodelist[i], "URI");
		if(uri)
		{
			if(uri.textContent == URItoSearch)
			{
				return nodelist[i];
			}
		}
	}
	
	//nao achamos, null
	return null;
}

//comeca a falar do comeco
CMarks.prototype.speak_prepare = function()
{
	//marca se nao tem nada
	if(this.getSortedarrayBookmarks().length == 0)
		this._textLimits.setEmpty(true);
	else
		this._textLimits.setEmpty(false);
	
	this.speakindex = -1;
}
CMarks.prototype.speak = function()
{
	this.speak_prepare();
	this._speakcurrent();
}

//pega o texto a falar de um item
CMarks.prototype.getMarkerTextSpeak = function(i)
{
	var ret = "";
	if(i >= this.getSortedarrayBookmarks().length)
		return ret;
	if(this.speakindex < 0)
		return ret;

	try
	{
		var text = this.getSortedarrayBookmarks()[i].attributes.getNamedItem("label").value;
		if(text)
			ret = text;
	}
	catch(e)
	{
		//ignoramos erros
	}
	
	return ret;
}


//comeca a falar do ponto atual
CMarks.prototype._speakcurrent = function()
{
	if(this.speakindex >= this.getSortedarrayBookmarks().length)
		this.speakindex = this.getSortedarrayBookmarks().length - 1;
	if(this.speakindex < 0)
		this.speakindex = 0;
	
	//evento
	if(this._EventListener)
		this._EventListener.MarkChangeActive(this);
		
	if(this.getSortedarrayBookmarks().length == 0)
	{
		//avisamos que nao tem nada
		var msg = new CTextItem();
		msg.SetText_string( CMsg.MarkersEmpty());
		CSpeak.playItem(msg, this._textLimits);
		return;
	}

	//lemos o item atual
	var msg = new CTextItem();
	//falamos
	var text = this.getMarkerTextSpeak(this.speakindex);
	msg.SetText_string( text);

	//navegacao auto
	msg.listText = true;
	msg.spell = true;
	msg.autonav = CPref.listautonav();
	
	CSpeak.playItem(msg, this._textLimits);
}

//quando terminar de falar o item atual, avancamos para o proximo item
CMarks.prototype.TLevt_next = function()
{
	//nenhum item
	if(this.getSortedarrayBookmarks().length == 0)
		return;

	//se ja esta no fim, nao vamos falar
	if(this.speakindex + 1 >= this.getSortedarrayBookmarks().length)
	{
		//avisamos que nao tem nada
		this._textLimits.TL_bottomlimit();
		return;
	}
	
	this.speakindex++;
	this._speakcurrent();
}

//para voltar um item para tras
CMarks.prototype.TLevt_prev = function()
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

CMarks.prototype.TLevt_current = function()
{
	this._speakcurrent();
}

CMarks.prototype.setCurrentIndex = function(index)
{
	//valida o indice
	if(index < 0)
		index = 0;
	if(index >= this.getSortedarrayBookmarks().length)
		index = this.getSortedarrayBookmarks().length - 1;

	//altera
	this.speakindex = index;
	
	//evento
	if(this._EventListener)
		this._EventListener.MarkChangeActive(this);
}


		
CMarks.prototype.getLastReadDate = function()
{
	return this._lastReadDate;
}

