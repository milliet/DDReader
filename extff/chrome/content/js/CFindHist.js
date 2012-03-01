/// <reference path="CUtils.js" />
/// <reference path="CPref.js" />


/*
=======================================================================
historico da busca

formato do historico:

<findhist>
	<entry>
		<searchWords>termos da busca</searchWords>
		<dateaccess>data no nosso formato (veja CUtils.DateToString)</dateaccess>
	</entry>
</findhist>

*/

/*
=======================================================================
item de historico
somente contem os dados
*/

function CFindHistItem()
{
}

CFindHistItem.prototype.searchWords = "";
CFindHistItem.prototype.dateaccess = new Date();


/*
=======================================================================
lista de historico
*/

function CFindHist()
{
	this.initializeHist();
}

//dveria estar no construtor, mas dividomos para ficar mais modular
CFindHist.prototype.initializeHist = function()
{
	//inicializamos
	if(this._initializeHistCalled)
		return;
	this._initializeHistCalled = true;
	
	//na inicializacao, somente lemos do xml
	var file = CUtils.GetDataFolder();
	file.append("findhist.xml");

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
		xmlDoc = CUtils.GetXMLChild(xmlDoc, "findhist", null);
		for(var i=0;i<xmlDoc.childNodes.length;i++)
		{
			var thischild = xmlDoc.childNodes.item(i);

			//cria o novo item
			var item = new CFindHistItem();
			item.searchWords = CUtils.GetXMLChild(thischild, "searchWords", null).textContent;
			item.dateaccess = CUtils.StringToDate(CUtils.GetXMLChild(thischild, "dateaccess", null).textContent);
			
			//colocamos no FIM (pq ele foi gravado na ordem)
			this.histarray.push(item);
		}	
	}
	catch(e)
	{
		CDialogs.WarnEscToContinue(CMsg.ErrorLoadingFindHist(), null);
	}
}

//se inicializaram
CFindHist.prototype._initializeHistCalled = false;
//o nosso array de dados
CFindHist.prototype.histarray = new Array();

//salva em disco
CFindHist.prototype.save = function()
{
	this.initializeHist();
	
	//limitamos o tamanho da nossa lista
	if(this.histarray.length > CPref.maxsearchhistentries())
		this.histarray.length = CPref.maxsearchhistentries();
	
	//criamos um xml
	/*
	var theString='<?xml version="1.0" encoding="UTF-8"?><history></history>';
	var parser = new DOMParser();
	var xmlDoc = parser.parseFromString(theString, "text/xml");
	*/
	var basefile = CUtils.GetExtensionFolder();
	basefile.append("defaults");
	basefile.append("findhist.xml");
	var xmlDoc = CUtils.LoadXML("file:///" + basefile.target);
	var nodes = CUtils.GetXMLChild(xmlDoc, "findhist", null);

	//transferimos todos os itens	
	for(var i=0;i<this.histarray.length;i++)
	{
		var item = this.histarray[i];
		
		var elem = xmlDoc.createElement("entry");

		var searchWords = xmlDoc.createElement("searchWords");
		searchWords.textContent = item.searchWords;
		elem.appendChild(searchWords);
		
		var dateaccess = xmlDoc.createElement("dateaccess");
		dateaccess.textContent = CUtils.DateToString(item.dateaccess);
		elem.appendChild(dateaccess);
		
		nodes.appendChild(elem);
	}
	
	//onde vamos salvar
	var file = CUtils.GetDataFolder();
	file.append("findhist.xml");

	var serializer = new XMLSerializer();
	var foStream = Components.classes["@mozilla.org/network/file-output-stream;1"]
		.createInstance(Components.interfaces.nsIFileOutputStream);

	//salvamos
	foStream.init(file, 0x02 | 0x08 | 0x20, 0664, 0);   // write, create, truncate
	serializer.serializeToStream(xmlDoc, foStream, "");   // rememeber, doc is the DOM tree
	foStream.close();
}

//adiciona um item
CFindHist.prototype.addEntry = function(searchWords)
{
	//guardamos com trim
	searchWords = CUtils.TrimString(searchWords);
	//nao aceitamos strings vazias
	if(searchWords == "")
		return;

	this.initializeHist();
	this._addEntryNoSave(searchWords);
	this.save();
}

//adiciona um item sem salvar
CFindHist.prototype._addEntryNoSave = function(searchWords)
{
	//cria
	var item = new CFindHistItem();
	item.searchWords = searchWords;
	item.dateaccess = new Date();	//acesso = agora
	
	//colocamos no comeco
	this.histarray.unshift(item);
	
	//nao guardamos itens repetidos
	//comecamos de 1 para pular o item que acabamos de inserir
	for(var i=1;i<this.histarray.length;i++)
	{
		var item = this.histarray[i];

		if(searchWords == item.searchWords)
		{
			this.histarray.splice(i,1);
			i--;
		}
	}
	
}

