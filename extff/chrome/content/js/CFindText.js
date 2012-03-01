/*
para fazer a busca indexaa
no fim do arquivo, tem a rotina que faz busca simpels

o que temos aqui:
classe CFindText: o sistema de buca
classe CFindText_smilitem: quando localiza um smilref, tem que armazenar ele, e usamos um array destes caras
rotina CFindText_buscasimples: para fazer a busca não indexada

*/

function CFindText(path)
{
	this.path = path;
	this.searchxml = null;
	this.VerificatemBuscaIndexada();
	this.smilfilearray = new Array();
	this.smilfilenames = new Array();
}
CFindText.prototype.temBuscaIndexada = false;
CFindText.prototype.path = "";
CFindText.prototype.searchxml = null;
CFindText.prototype.smilfilearray = null;	//um array de XML, com o serach_X.xml
CFindText.prototype.smilfilenames = null;	//os nomes dos arquivos que estao no smilfilearray



//indica se existe busca indexada
CFindText.prototype.VerificatemBuscaIndexada = function()
{
	this.temBuscaIndexada = false;
	if(CUtils.FileExist(CUtils.ResolveURL("search.xml", this.path)))
		this.temBuscaIndexada = true;
}

//faz uma busca
//retorna um array de nos, contendo cada um um atributo smilref
//para mostrar o resultado da busca, pode-se pegar o textcontent desses nos
CFindText.prototype.FazerBusca = function(usarIndexada, searchfor, node)
{
	if(!usarIndexada || !this.temBuscaIndexada)
		return CFindText_buscasimples(searchfor, node);
		
	return this.FazerBuscaIndexada(searchfor, node);
}

//faz uma busca no dicionário
//entra uma stirng com a busca desejada, sai uma string com o smilref
CFindText.prototype.FazerBuscaDicionario = function(searchfor)
{
	//a busca no dicionario sempre é indexada
	if(!this.temBuscaIndexada)
	{
		//damos erro
		return "";
	}
	
	searchfor = this.PrepararBuscaIndexada(searchfor, true);

	//nos interessa tudo, unidos sem espaço nem nada
	searchfor = searchfor.join("");
	
	//se nao tiver o que buscar, retorna na hora
	if(searchfor == "")
		return "";
	
	//20110720: se nao encontrar uma que comecar igual ao texto de busca, encontramos a que tiver mais letras iguais no comeco
	//variavel para guardar a palavra mais proxima
	var palavra_mais_proxima_indice = -1;
	var palavra_mais_proxima_letras = 0;

	//agora fazemos a busca das palavras que sobraram
	var listastopwords = this.searchxml.getElementsByTagName("text");
	var estapalavra = searchfor.substr(0, palavra_mais_proxima_letras + 1);
	for(var ilistastopwords = 0; ilistastopwords < listastopwords.length; )
	{
		//pegamos a primeira palavra que COMECAR igual ao texto da busca
		//note que so estamos comparando com uma letra a mais da passada anterior do loop
		if(listastopwords[ilistastopwords].textContent.toString().indexOf( estapalavra) == 0)
		{
			palavra_mais_proxima_indice = ilistastopwords;

			//vamos aumentar a busca em uma letra
			//e continuamos a comparacao na mesma palavra
			palavra_mais_proxima_letras++;
			estapalavra = searchfor.substr(0, palavra_mais_proxima_letras + 1);
			
			//se ja chegamos no tamanho da busca, pode parar por aqui
			if(palavra_mais_proxima_letras >= searchfor.length)
				break;
		}
		else
		{
			//essa palavra não server, temos um candidato melhor, vamos par a próxima
			ilistastopwords++;
		}
	}
	
	//achamos alguma coisa?
	if( palavra_mais_proxima_indice < 0)
		return "";
		
	//achamos a palavra
	//se der algum erro, ignoramos
	try
	{
		var esteparent = listastopwords[palavra_mais_proxima_indice].parentNode;
		var estesearchfile = CUtils.GetXMLChild(esteparent, "smilfile", "").textContent;
		var esteid = esteparent.attributes.getNamedItem("id").value;
		var estalistasmilrefs = this.Carregarsmilref(estesearchfile, esteid);
		estalistasmilrefs = estalistasmilrefs.childNodes;
		for(var iestalistasmilrefs = 0; iestalistasmilrefs < estalistasmilrefs.length; iestalistasmilrefs++)
		{
			if(estalistasmilrefs[iestalistasmilrefs].tagName)
			if(estalistasmilrefs[iestalistasmilrefs].tagName == "smilref")
			{
				//achamos a primeira, retornamos diretamente daqui
				var esteadicionar = estalistasmilrefs[iestalistasmilrefs].textContent;
				return esteadicionar;
			}
		}
	}
	catch(e)
	{
		//ignoramos erros
		//throw e;
	}
	
	//nao achamos (na verdade, deu algum erro esquisito)
	return "";
}



//fase comum da busca indexada - preparacao do texto e eliminaçõa de stop words, etc
//entra uma string, sai um array de termos de busca
CFindText.prototype.PrepararBuscaIndexada = function(searchfor, modo_dicionario)
{
	var searchforNovo = "";

	//carrega o xml
	if(this.searchxml == null)
		this.searchxml = CUtils.LoadXML(CUtils.ResolveURL("search.xml", this.path));


	//primiero, busca e troca nas expressoes geraulres
	searchfor = searchfor.replace( new RegExp('"', "g"), " ");
	
	//virgula
	searchfor = searchfor.replace( new RegExp("([^\\d])\\,([^\\d])", "g"), "$1 $2");
	searchfor = searchfor.replace( new RegExp("([\\d])\\,([^\\d])", "g"), "$1 $2");
	searchfor = searchfor.replace( new RegExp("([^\\d])\\,([\\d])", "g"), "$1 $2");
	searchfor = searchfor.replace( new RegExp("\\,$", "g"), " ");

	//ponto
	searchfor = searchfor.replace( new RegExp("([^\\d])\\.([^\\d])", "g"), "$1 $2");
	searchfor = searchfor.replace( new RegExp("([\\d])\\.([^\\d])", "g"), "$1 $2");
	searchfor = searchfor.replace( new RegExp("([^\\d])\\.([\\d])", "g"), "$1 $2");
	searchfor = searchfor.replace( new RegExp("\\.$", "g"), " ");

	//<!---traco no meio de digitos some--->
	searchfor = searchfor.replace( new RegExp("([\\d])-([\\d])", "g"), "$1 $2");
	
	//tudo minusucla
	searchfor = searchfor.toLowerCase();

	/*	
	<!---dicionario tiramos espacos e hifens (existem verbetes com espaço e hifen, e no ddreader tame
	tirar isso; se o cara procurar com ou sem hifen, acha o vrbete--->
	<cfif procesandodicionario>
		<cfset texto = Replace(texto, " ", "", "all")>
		<cfset texto = Replace(texto, "-", "", "all")>
		<cfloop index="iListaTrocaLetrasDicionario" from="1" to="#Len(ListaTrocaLetrasDicionario)#" step="2">
			<cfset texto = Replace(texto, Mid(ListaTrocaLetrasDicionario, iListaTrocaLetrasDicionario, 1), Mid(ListaTrocaLetrasDicionario, iListaTrocaLetrasDicionario+1, 1), "all")>
		</cfloop>
	</cfif>
	
	ListaTrocaLetrasDicionario está na tag replaceletter
	*/
	if(modo_dicionario)
	{
		var ListaTrocaLetrasDicionario = this.searchxml.getElementsByTagName("replaceletter");
		if(ListaTrocaLetrasDicionario.length > 0)
		{
			//existe, pegamos a string
			ListaTrocaLetrasDicionario = ListaTrocaLetrasDicionario[0].textContent;
			searchforNovo = "";
			for(var i = 0; i < searchfor.length; i++)
			{
				var iListaTrocaLetrasDicionario = ListaTrocaLetrasDicionario.indexOf(searchfor.charAt(i));
				if( iListaTrocaLetrasDicionario < 0)
				{
					//nao esta na lista
					searchforNovo += searchfor.charAt(i);
				}
				else
				{
					//esta na lista
					if( iListaTrocaLetrasDicionario % 2 == 0)
					{
						//é par, vamos trocar
						searchforNovo += ListaTrocaLetrasDicionario.charAt(iListaTrocaLetrasDicionario + 1);
					}
					else
					{
						//é impar, mantemos
						searchforNovo += searchfor.charAt(i);
					}
					
				}
			}
			searchfor = searchforNovo;
		}
		searchfor = searchfor.replace( new RegExp(" ", "g"), "");
		searchfor = searchfor.replace( new RegExp("-", "g"), "");
	}
	
	//troca tudo que nao for letra
	var listaletras = this.searchxml.getElementsByTagName("letters")[0].textContent;
	searchforNovo = "";
	for(var i = 0; i < searchfor.length; i++)
	{
		if(listaletras.indexOf(searchfor.charAt(i)) < 0)
			searchforNovo += " ";
		else
			searchforNovo += searchfor.charAt(i);
	}
	//searchfor vira array
	searchfor = searchforNovo.split(" ");
	
	
	//elimina as palavras que forem stop words
	searchforNovo = new Array();
	var listastopwords = this.searchxml.getElementsByTagName("sword");
	for(var i = 0; i < searchfor.length; i++)
	{
		var estapalavra = searchfor[i];
		if(estapalavra != "")
		{
			//verifica se é uma stop word
			var umastopword = false;
			for(var ilistastopwords = 0; ilistastopwords < listastopwords.length; ilistastopwords++)
			{
				if(estapalavra == listastopwords[ilistastopwords].textContent)
				{
					umastopword = true;
					break;
				}
			}
			
			if(!umastopword)
				searchforNovo.push( estapalavra);
		}
	}
	searchfor = searchforNovo;
	
	return searchfor;
}


//faz uma busca indexada
CFindText.prototype.FazerBuscaIndexada = function(searchfor, node)
{
	searchfor = this.PrepararBuscaIndexada(searchfor, false);

	
	//agora fazemos a busca das palavras que sobraram
	//este é um array de CFindText_smilitem
	var searchforNovo = new Array();
	var listastopwords = this.searchxml.getElementsByTagName("text");
	for(var i = 0; i < searchfor.length; i++)
	{
		var estapalavra = searchfor[i];
		for(var ilistastopwords = 0; ilistastopwords < listastopwords.length; ilistastopwords++)
		{
			if(estapalavra == listastopwords[ilistastopwords].textContent)
			{
				//achamos a palavra
				//se der algum erro, ignoramos
				try
				{
					var esteparent = listastopwords[ilistastopwords].parentNode;
					var estesearchfile = CUtils.GetXMLChild(esteparent, "smilfile", "").textContent;
					var esteid = esteparent.attributes.getNamedItem("id").value;
					var estalistasmilrefs = this.Carregarsmilref(estesearchfile, esteid);
					estalistasmilrefs = estalistasmilrefs.childNodes;
					for(var iestalistasmilrefs = 0; iestalistasmilrefs < estalistasmilrefs.length; iestalistasmilrefs++)
					{
						if(estalistasmilrefs[iestalistasmilrefs].tagName)
						if(estalistasmilrefs[iestalistasmilrefs].tagName == "smilref")
						{
							//vaos soar ou adicionar
							var esteadicionar = estalistasmilrefs[iestalistasmilrefs].textContent;
							var achou = false;
							for(var isearchforNovo = 0; isearchforNovo < searchforNovo.length; isearchforNovo++)
							{
								if(searchforNovo[isearchforNovo].estesmilref == esteadicionar)
								{
									achou = true;
									searchforNovo[isearchforNovo].contagem++;
								}
							}
							
							//se nao achou, adiciona
							if(!achou)
								searchforNovo.push( new CFindText_smilitem(esteadicionar) );
						}
					}
					break;
				}
				catch(e)
				{
					//ignoramos erros
					//throw e;
				}
			}
		}
	}
	searchfor = searchforNovo;
	//da o sort
	searchfor.sort(CFindText_smilitem_sort);


	//array de retorno
	this.BuscaSmilrefRcursiva(node, searchfor);

	//transfere somente os nos
	var array_resultados = new Array();
	for(var i = 0; i < searchfor.length; i++)
	{
		if(searchfor[i].node != null)
			array_resultados.push(searchfor[i].node);
	}
	return array_resultados;
}

/*
rotina para fazer a busca recursiva em nos dos smilrefs que estamos procurando
*/
CFindText.prototype.BuscaSmilrefRcursiva = function(node, array_busca)
{
	for(var i = 0; i < node.childNodes.length; i++)
	{
		//procuramos odo o array de busca neste no
		if(node.attributes)
		if(node.attributes.getNamedItem)
		if(node.attributes.getNamedItem("smilref"))
		{
			var estesmilref = node.attributes.getNamedItem("smilref").value;
			for(var iarray_busca = 0; iarray_busca < array_busca.length; iarray_busca++)
			{
				if(array_busca[iarray_busca].node == null)
				if(array_busca[iarray_busca].estesmilref == estesmilref)
					array_busca[iarray_busca].node = node;
			}
			
		}

		//procuramos nos filhos
		this.BuscaSmilrefRcursiva(node.childNodes[i], array_busca);
	}
}


/*
carrega um xml de busca individual
retorna o no com o ID desejado
se der erro, pode dar excecao

formato:
<?xml version="1.0" encoding="UTF-8"?>
<search>
<smilrefs id="id321">
<smilref>speechgen0023.smil#tcp2300</smilref>
<smilref>speechgen0023.smil#tcp2339</smilref>
</smilrefs>
<smilrefs id="id322">
<smilref>speechgen0007.smil#tcp460</smilref>
</smilrefs>
</search>
*/
CFindText.prototype.Carregarsmilref = function(nomearquivo, id_palavra_busca)
{
	//vamos ver se ja tem
	for(var i = 0; i < this.smilfilenames.length; i++)
	{
		if(this.smilfilenames[i] == nomearquivo)
			return this.Carregarsmilref_buscaid( this.smilfilearray[i], id_palavra_busca);
	}
	
	
	this.smilfilearray = new Array();
	this.smilfilenames = new Array();
	
	//nao, tem, carregamos
	var novoxml = CUtils.LoadXML(CUtils.ResolveURL(nomearquivo, this.path));
	this.smilfilearray.push(novoxml);
	this.smilfilenames.push(nomearquivo);
	return this.Carregarsmilref_buscaid(novoxml, id_palavra_busca);
}

CFindText.prototype.Carregarsmilref_buscaid = function(xml, id_palavra_busca)
{
	var estesearchfile = xml.getElementsByTagName("smilrefs");
	for(var i = 0; i < estesearchfile.length; i++)
	{
		if( estesearchfile[i].attributes.getNamedItem("id").value == id_palavra_busca)
			return estesearchfile[i];
	}
	
	//nao achamos
	return null;
}

//CFindText_smilitem
function CFindText_smilitem(estesmilref)
{
	this.estesmilref = estesmilref;
	this.contagem = 1;
	this.node = null;
}
CFindText_smilitem.prototype.estesmilref = "";
CFindText_smilitem.prototype.contagem = 1;
CFindText_smilitem.prototype.node = null;
CFindText_smilitem.prototype.toString = function()
{
	return this.estesmilref + " " + this.contagem;
}

//para sar o sort
function CFindText_smilitem_sort(a,b)
{
	if(b.contagem != a.contagem)
		return b.contagem - a.contagem;
	
	//classifica pela ordem, isto nao funciona la muito bem...
	return b.estesmilref - a.estesmilref;
}



/*
=================================================================
=================================================================
=================================================================
=================================================================
para localizar TEXTO dentro do texto que está na tela
esta classe não usa nossas funcoes estendidas de busca
*/

//retorna um array de nos, contendo cada um um atributo smilref
//para mostrar o resultado da busca, pode-se pegar o textcontent desses nos
function CFindText_buscasimples(searchfor, node)
{
	var ret = new Array();
	var shownErrorMessage = false;

	//copiamos a rotina do find do firefox, mas fizemos vairas modificacoes	
	var finder = Components.classes["@mozilla.org/embedcomp/rangefind;1"]
				.createInstance().QueryInterface(Components.interfaces.nsIFind);

    var mSearchRange = node.ownerDocument.createRange();
    mSearchRange.setStart(node, 0);
    mSearchRange.setEnd(node, node.childNodes.length);

	var mStartPt = null;
	var mEndPt = null;
    mStartPt = node.ownerDocument.createRange();
    mEndPt = node.ownerDocument.createRange();
    mStartPt.setStart(node, 0);
    mStartPt.setEnd(node, 0);
    mEndPt.setStart(node, node.childNodes.length);
    mEndPt.setEnd(node, node.childNodes.length);

	var retRange = null;
	while((retRange = finder.Find(searchfor, mSearchRange, mStartPt, mEndPt)))
	{
		//trata este cara
		var found = retRange.startContainer;
		//acha alguem que tenha smilref
		if(found == null)
			break;
			
		while(found != found.ownerDocument)
		{
			var thisIsError = true;
			if(found.attributes)
			if(found.attributes.getNamedItem)
			if(found.attributes.getNamedItem("smilref"))
			if(found.attributes.getNamedItem("smilref").value != "")
			{
				//adicona no retorno
				ret.push(found);
				thisIsError = false;
				break;
			}
			
			//se nao tem smilref, vamos avisar
			if(thisIsError && !shownErrorMessage && ret.length == 0)
			{
				shownErrorMessage = true;
				//quando procura "palavra" no "contrato social", acontce uma coisa esquisita:
				//ele acha alguma ocorrencia fora do smilref
				//entao é melhor não mostrar a mensagem de erro
				//e ele acha o resto
				//CDialogs.WarnEscToContinue(CMsg.SearchresNoSmilref(), null);
			}
			
			//nao achou, sobe na arvore
			if(found.parentNode == null)
				break;
			found = found.parentNode;
		}

		//se nao achou,o proximo é simplesmente o proximo ponto
		if(found == found.ownerDocument)
			found = retRange.startContainer;
		
		//para achar o proximo
		mStartPt = node.ownerDocument.createRange();
		mStartPt.setStart(found, found.childNodes.length);
		mStartPt.setEnd(found, found.childNodes.length);

	}
	return ret;
}

