/// <reference path="CUtils.js" />
/// <reference path="CUtils_ff.js" />
/// <reference path="CExcept.js" />

/*
gerenciamento de um trecho de texto
*/

function CTextItem()
{
}

//propriedades que comecam com _ deveriam ser private, tem uns controles 
//entao é melhor acessar pelos get e set
CTextItem.prototype._textNode = null;	//texto para tela
CTextItem.prototype._textString = null;	//texto para tela
CTextItem.prototype.audioSrc = null;	//href completo do arquivo de audio
CTextItem.prototype.audioStart = -1;	//milisseconds para iniciar o audio dentro do arquivo de som
CTextItem.prototype.audioEnd = -1;	//milisseconds final do audio
CTextItem.prototype.forceTTS = false;	//se true, toca em TTS
CTextItem.prototype.bookText = false;	//se true, é texto do livro
CTextItem.prototype.bookVoice = "";	//ID da voz para TTS
CTextItem.prototype.listText = false;	//texto de uma lista (historico, lista de marcadores, indice do livro ou resultado da busca)
CTextItem.prototype.autonav = true;	//se faz navegacao automatica (ao terminar este item, vai automaticamente para o proximo)
CTextItem.prototype.spell = false;	//se pode ser soletrado

//le o audio (clipBegin clipEnd src)
CTextItem.prototype.SetAudio_node = function(node, basehref)
{
	this.audioSrc = null;
	this.audioStart = -1;
	this.audioEnd = -1;
	if(node == null)
		return;

	//src é obrigatorio, se não existir não lemos o resto
	if(node.attributes.getNamedItem("src") == null)
		return;
	var src = node.attributes.getNamedItem("src").value;
	this.audioSrc = CUtils.ResolveURL(src, basehref);

	if(node.attributes.getNamedItem("clipBegin") != null)
		this.audioStart = new CUtilsConvert(node.attributes.getNamedItem("clipBegin").value).Convert();

	if(node.attributes.getNamedItem("clipEnd") != null)
		this.audioEnd = new CUtilsConvert(node.attributes.getNamedItem("clipEnd").value).Convert();
		
	//vamos validar esses tempos
	var erro = false;
	//tem que ser positivo (isto é, existir)
	if(this.audioStart < 0 || this.audioEnd < 0)
		erro = true;
	//tem que terminar depois de começar
	if(this.audioStart > this.audioEnd)
		erro = true;
	
	//damos erro
	if(erro)
	{
		CDialogs.Error_ContinueOrOpenotherbook( CMsg.InvalidAudio(this.audioSrc, basehref));
		//se é para continuar, marcamos que o audio nao existe
		this.audioSrc = null;
		this.audioStart = -1;
		this.audioEnd = -1;
	}
}


CTextItem.prototype.SetText_node = function(node)
{
	this._textNode = node;
	this._textString = null;
}

CTextItem.prototype.SetText_string = function(text)
{
	this._textNode = null;
	this._textString = text;
}

CTextItem.prototype.GetText_string = function()
{
	if(this._textString != null)
		return this._textString;
	
	try
	{
		//de ser algum erro, volta vazio
		return this._textNode.textContent;
	
		/*
		20100901
		esta é  uma alternativ melhor, porque permite soletar o ALT das imagens
		porém.... precisa de mais alteracoes na caixa de dialog spell.js, para tratar essa situacao
		por enquanto, deixamos assim
		
		if(this._textNode == null)
			return "";

		//de ser algum erro, volta vazio
		//primeiro, tiramos uma copia apra nao mudar o original que está na tela
		var nodes = this._textNode.cloneNode(true);
		
		//vamos processar os IMG
		//trocamos pelo ALT
		//se a tag for abbr, precisa processar
		if(nodes.tagName)
		if(nodes.tagName.toLowerCase() == "img")
		{
			//pega o title e usa como texto
			if(nodes.attributes)
			if(nodes.attributes.getNamedItem("alt"))
			{
				nodes.textContent = nodes.attributes.getNamedItem("alt").value;
			}
		}
		//mesmo que seja img, pode rodar o resto

		var nodelist = nodes.getElementsByTagName("img");
		
		//loop em todos os img
		for(i = 0; i < nodelist.length; i++)
		{
			var noteitem = nodelist.item(i);

			//pega o title e usa como texto
			if(noteitem.attributes)
			if(noteitem.attributes.getNamedItem("alt"))
			{
				noteitem.textContent = noteitem.attributes.getNamedItem("alt").value;
			}
		}
		
		//retorna o texto qie ficou
		return nodes.textContent;
		*/
		
	}
	catch(e)
	{
		return "";
	}
}

//retorna o no
//se nao tiver, retora a string
CTextItem.prototype.GetText_NodeOrString = function()
{
	if(this._textNode != null)
		return this._textNode;
	return this._textString;
}

//texto para o tts
CTextItem.prototype.GetTextTTS = function()
{
	//se nao tiver arvore, volta o texto
	if(this._textNode == null)
		return this.GetText_string();

	//se der algum erro, pega o texto que tiver
	try
	{	
		//vamos processar os ABREV
		//primeiro, tiramos uma copia apra nao mudar o original que está na tela
		var nodes = this._textNode.cloneNode(true);
		
		//se a tag for abbr, precisa processar
		if(nodes.tagName)
		if(nodes.tagName.toLowerCase() == "abbr")
		{
			//pega o title e usa como texto
			if(nodes.attributes)
			if(nodes.attributes.getNamedItem("title"))
			{
				nodes.textContent = nodes.attributes.getNamedItem("title").value;
			}
		}
		//mesmo que seja abbr, pode rodar o resto
		
		
		var nodelist = nodes.getElementsByTagName("abbr");
		
		//loop em todos os abrev
		for(var i = 0; i < nodelist.length; i++)
		{
			var noteitem = nodelist.item(i);

			//pega o title e usa como texto
			if(noteitem.attributes)
			if(noteitem.attributes.getNamedItem("title"))
			{
				noteitem.textContent = noteitem.attributes.getNamedItem("title").value;
			}
		}
		
		//vamos processar os IMG
		//trocamos pelo ALT
		//se a tag for abbr, precisa processar
		if(nodes.tagName)
		if(nodes.tagName.toLowerCase() == "img")
		{
			//pega o title e usa como texto
			if(nodes.attributes)
			if(nodes.attributes.getNamedItem("alt"))
			{
				nodes.textContent = nodes.attributes.getNamedItem("alt").value;
			}
		}
		//mesmo que seja img, pode rodar o resto

		nodelist = nodes.getElementsByTagName("img");
		
		//loop em todos os img
		for(i = 0; i < nodelist.length; i++)
		{
			var noteitem = nodelist.item(i);

			//pega o title e usa como texto
			if(noteitem.attributes)
			if(noteitem.attributes.getNamedItem("alt"))
			{
				noteitem.textContent = noteitem.attributes.getNamedItem("alt").value;
			}
		}
		
		//retorna o texto qie ficou
		//note que, se estiver vazio, o sisema de tts vai dar um tempo minimo
		return nodes.textContent;
	}
	catch(e)
	{
		//ignoramos erros
		return this.GetText_string();
	}
}

CTextItem.prototype.HasAudio = function()
{
	if(this.audioSrc == null)
		return false;
	
	if(this.audioSrc == "")
		return false;
	
	return true;
}

CTextItem.prototype.toString = function()
{
	return this.GetText_string();
}
