/// <reference path="CUtils.js" />
/// <reference path="CUtils_ff.js" />
/// <reference path="CExcept.js" />
/// <reference path="CTextArray.js" />
/// <reference path="CTextItem.js" />
/// <reference path="CSpeak.js" />

/*
classe auxiliar para retornar o minimo e o maximo, de uma numeracao de paginas
 */

function CNCXPagMinMax()
{
}
CNCXPagMinMax.prototype.min = -1;
CNCXPagMinMax.prototype.max = -1;


/*
gerenciamento de um NCX
*/

function CNCX(opfprefs, href, NCXEventListener)
{
	this._opfprefs = opfprefs;
	this.href = href;
    this.xml = CUtils.LoadXML(href);	//o XMLDocument dele
    
    //verificacao de segurança: nao permitimos scripts
    if(CUtils.HasScript(this.xml))
		throw new CExcept(CMsg.InvalidNCXscripts(), null, this.href);

	//cache da rotina GetMainNCX
	this._MainNCX = CUtils.GetXMLChild(this.xml, "ncx", this.href);
	this._MainNCX = CUtils.GetXMLChild(this._MainNCX, "navMap", this.href);

	//cache auxiliar do _getCurrentNCXEntry
	//navegamos pelos navPoint
	this._MainNCX_navPoints = this._MainNCX.getElementsByTagName("navPoint");
		
	//montamos o texto do indice principal
	this._FixNCX( this.xml, this.GetMainNCX(), 0, 0);

	//calcula o pageTargets, fica null se nao existir
	var node = CUtils.GetXMLChild(this.xml, "ncx", this.href);
	this._PageTargets = CUtils.GetXMLChildNoException(node, "pageList", this.href);
	if(this._PageTargets != null)
		this._PageTargets = this._PageTargets.getElementsByTagName("pageTarget");
	this._PageTargetIndex = 0;
	

	//calculamos o maior valor possivel do _currentNavpointIndex
	//a raiz da navegacao pelos navPoint
	node = this._MainNCX_navPoints;
	//o valor maximo
	this._maxCurrentNavpointIndex = node.length;
	
	//escutador de eventos
	this._NCXEventListener = NCXEventListener;
	
	//cria o nosso textlimits
		//avisamos que estamos no fim da lista
		var msgEnd = new CTextItem();
		msgEnd.SetText_string( CMsg.NCXafterEnd());

		//avisamos que estamos começo fim da lista
		var msgStart = new CTextItem();
		msgStart.SetText_string( CMsg.NCXafterStart());
		
	this._textLimits = new CTextLimits(this, msgStart, msgEnd, false);


	//apontamos para o comeco do indice
	this._SetCurrentNavpointIndex(0);
}

CNCX.prototype.href = "";	//href deste cara
CNCX.prototype.xml = null;	//o XMLDocument dele

CNCX.prototype._opfprefs = null;	//o opfprefs

//gerenciador dos limites
CNCX.prototype._textLimits = null;

CNCX.prototype._baseNameForID = "lidadNCX";
CNCX.prototype._currentNavpointIndex = -1;	//a opsicao atual da leitura do NCX
CNCX.prototype._maxCurrentNavpointIndex = -1;	//a opsicao atual da leitura do NCX
CNCX.prototype._MainNCX = null;	//para deixar a rotina GetMainNCX mais rapida
CNCX.prototype._MainNCX_navPoints = null;	//para deixar a rotina GetMainNCX mais rapida
CNCX.prototype._currentLevel = 100;		//o nivel de navegacao pelo indice

//para deixar a rotina GetPagetargets mais rapida
//pode ser null se não existir
CNCX.prototype._Pagetargets = null;

//a pagina ativa no momento
CNCX.prototype._PageTargetIndex = 0;


/*
quem recebe os eventos do NCX
tem que implementar:
NCXChangedItem(CNCX ncx, string id) - navegando pelo indice, acabou de ir para um novo item
	(falando ou porque alguem pediu opara o NCX se mover) (id pode ser null)
NCXPageChangedItem(CNCX ncx) - foi para outra página
*/
CNCX.prototype._NCXEventListener = null;


//pega o no do indice principal
CNCX.prototype.GetMainNCX = function()
{
	return this._MainNCX;
}

//pega o array de navpoints
CNCX.prototype.GetNavPoints = function()
{
	return this._MainNCX_navPoints;
}

//pega o item selecionado agora
CNCX.prototype._getCurrentNCXEntry = function()
{
	//a raiz da navegacao
	var node = this._MainNCX_navPoints;
	
	//garantimos que esteja valido
	//só por neurose, é garantdo no _SetCurrentNavpointIndex
	if(this._currentNavpointIndex < 0)
		this._currentNavpointIndex = 0;
	if(this._currentNavpointIndex >= this._maxCurrentNavpointIndex)
		this._currentNavpointIndex = this._maxCurrentNavpointIndex - 1;

	//apontamos para o ponto atual
	node = node.item(this._currentNavpointIndex);

	return node;
}

//para localizar o proixmo ou anterior
//procura levando em consideracao o nivel
//recebe e retorna o indice apropriados
//retorna -1 se nao tiver (procurando para baixo)
CNCX.prototype._searchLevel = function(ind, searchUp)
{
	//protecoes
 	if(ind >= this._maxCurrentNavpointIndex)
 	{
 		//opa, ta com problema....
		if(searchUp)
			return 0;
 		return -1;
 	}
 	if(ind <= 0)
 		return 0;
 	
 		
	//a raiz da navegacao
	//navegamos pelos navPoint
	while(true)
	{
		//apontamos para o ponto atual
		var node = this.GetNavPoints().item(ind);
		if(node.attributes)
		if(node.attributes.getNamedItem("lidadlevel"))
		if(node.attributes.getNamedItem("lidadlevel").value <= this._currentLevel)
		{
			//achamos
			return ind;
		}

		//nao serve, proximo (ou anterior)
		 if(searchUp)
		 {
		 	//buscando pra cima
		 	ind--;
		 	if(ind < 0)
		 		return 0;
		 }
		 else
		 {
		 	//buscando pra baixo
		 	ind++;
		 	if(ind >= this._maxCurrentNavpointIndex)
		 		return -1;
		 }
	}
}	


//para alterar o _currentNavpointIndex
CNCX.prototype._SetCurrentNavpointIndex = function(value)
{
	//mudamos
	this._currentNavpointIndex = value;
		
	//garantimos que esteja valido
	if(this._currentNavpointIndex < 0)
		this._currentNavpointIndex = 0;
	if(this._currentNavpointIndex >= this._maxCurrentNavpointIndex)
		this._currentNavpointIndex = this._maxCurrentNavpointIndex - 1;

	//se nao mudou nada, no final das contas nao avisamos....
	//pensando bem, avisamos sim...
	

	//avisamos que selecionou outro ponto
	if(this._NCXEventListener == null)
		return;

	
	//temos que descobrir o ID do text selecionado
	var selected = this._searchLevel(this._currentNavpointIndex, true);

	//a raiz da navegacao
	//navegamos pelos navPoint
	var node = this.GetNavPoints();
	//apontamos para o ponto atual
	node = node.item(selected);
	
	//node tem o no que esta ativo para a tela
	//pegamos o primeiro navlabel
	node = CUtils.GetXMLChildNoException(node, "navLabel", this.href);
	if(node == null)
		throw new CExcept( CMsg.InvalidNCX_no_navlabel(), null, this.href);

	//pegar o texto do ponto atual
	var txt = CUtils.GetXMLChildNoException(node, "text", this.href);
	var id = null;

	//somente se o texto existir
	if(txt != null)
	if(txt.attributes)
	if(txt.attributes.getNamedItem("id") != null)
	{
		id = txt.attributes.getNamedItem("id").value;
	}

	//disparamos o evento
	if(this._NCXEventListener != null)
		this._NCXEventListener.NCXChangedItem(this, id);
}


//comeca a falar do ponto atual
CNCX.prototype.speak = function()
{
	//marca se nao tem nada
	if(this._maxCurrentNavpointIndex == 0)
		this._textLimits.setEmpty(true);
	else
		this._textLimits.setEmpty(false);
	
	//vamos falar o item que está na tela, e nao o item que está efetivaemente selecionado
	//var node = this._getCurrentNCXEntry();
	var node = this._MainNCX_navPoints;
	node = node.item(this._searchLevel(this._currentNavpointIndex, true));

	
	//pegamos o primeiro navlabel
	node = CUtils.GetXMLChildNoException(node, "navLabel", this.href);
	if(node == null)
		throw new CExcept( CMsg.InvalidNCX_no_navlabel(), null, this.href);

	//preparamos a estrutura para falar o item
	var msg = new CTextItem();
	
	//pegar o texto do ponto atual
	var txt = CUtils.GetXMLChildNoException(node, "text", this.href);
	if(txt != null)
	{
		//somente se o texto existir
		msg.SetText_node(txt);
	}

	//vamos ver o audio	
	var audio = CUtils.GetXMLChildRecursiveNoException(node, "audio", this.href);
	if(audio != null)
	{
		//somente se o texto existir
		msg.SetAudio_node(audio, this.href);
	}
	
	//falamos o TTS?
	msg.forceTTS = this._opfprefs.forceTTS();
	msg.bookText = true;
	msg.bookVoice = this._opfprefs.VoiceTTS();
	msg.spell = true;

	//navegacao auto
	msg.listText = true;
	msg.autonav = CPref.listautonav();
	
	//agora, finalmente, vamos falar esse item
	CSpeak.playItem(msg, this._textLimits);
}


//quando terminar de falar o item atual, avancamos para o proximo item
CNCX.prototype.TLevt_next = function()
{
	//calcula o proximo item	
	var selected = this._searchLevel(this._currentNavpointIndex + 1, false);
	
	//se ja acabou, falamos que acabou
	if(selected < 0)
	{
		//avisamos que estamos no fim da lista
		this._textLimits.TL_bottomlimit();
		return;
	}
	
	//vamos para o proximo item
	this._SetCurrentNavpointIndex(selected);
		
	//falamos
	this.speak();
}

//para voltar um item para tras
CNCX.prototype.TLevt_prev = function()
{
	//se ja estamos no comeco, nao subimos mais, só avisamos quem está em cima
	if(this._currentNavpointIndex == 0)
	{
		//avisamos que estamos no fim da lista
		this._textLimits.TL_toplimit();
		return;
	}

	//calcula o proximo item	
	var selected = this._searchLevel(this._currentNavpointIndex -1, true);
	
	this._SetCurrentNavpointIndex(selected);
	this.speak();
}


//se pode voltar um item para tras
CNCX.prototype.TLevt_current = function()
{
	this.speak();
}

//vai para a proxima entrada do nivel selecionado, true se moveu o cursor
CNCX.prototype.gotoNextScreenEntry = function()
{
	var ret = true;

	//calcula o proximo item	
	var selected = this._searchLevel(this._currentNavpointIndex + 1, false);
	
	//se ja acabou, nao fazemos nada
	if(selected < 0)
		return false;
	if(selected == this._currentNavpointIndex)
		ret = false;
	
	//vamos para o proximo item
	this._SetCurrentNavpointIndex(selected);
	return ret;
},

//vai para a entrada anterior do nivel selecionado, true se moveu o cursor
CNCX.prototype.gotoPreviousScreenEntry = function()
{
	var ret = true;
	if(this._currentNavpointIndex  == 0)
		ret = false;

	//calcula o proximo item	
	var selected = this._searchLevel(this._currentNavpointIndex -1, true);
	
	this._SetCurrentNavpointIndex(selected);
	return ret;
}

//pularam um item no smil
//para todos os efeitos, movemos na indice de paginas e no indice principal
CNCX.prototype.SMILSkippedItem = function(smilarray, SMILrel_href, id, goingUp, customTest)
{
	this.SMILChangedItem(smilarray, SMILrel_href, id, goingUp);
}

//solucao temporaria para sincronizar quando anda para cima no texto
//se a ultima vez que sincronizou setou outro item e andou para cima, entao anda o NCX para cima
CNCX.prototype._lastSMILChangedMoved = false;

//o SMIL mexeu, pode ser que tenhamos que ativar outra entrada do indice
CNCX.prototype.SMILChangedItem = function(smilarray, SMILrel_href, id, goingUp)
{
	//note que o ID pode nao existir
	if(SMILrel_href == null || id == null)
		return;
	if(SMILrel_href == "" || id == "")
		return;
	
	//fazer no futuro: esa rotina vai ficar MUITO mais lenta.... ela precisa procurar a tentrada no SMIL acima do atualmente ativo que esteja no indice
	//agopra, ela somente anda com o destaque quando passa pelo item, mas nao sincroniza quem nao estiver no NCX
	//tipo quando mandar para ir para um item (retomar o ponto de leitura)

	//temos que montar com o href dele
	//fazer no futuro: usar rotina que compara caminhos absolutos, tirando os .. e . da URL
	//por enquanto, usamos o caminho relativo
	var relhref = SMILrel_href + "#" + id;

	//vamos procurar esse cara
	var node = this._MainNCX_navPoints;
	for(var i = 0; i < this._maxCurrentNavpointIndex; i++)
	{
		//pegamos o primeiro contet
		var content = CUtils.GetXMLChildNoException(node.item(i), "content", this.href);
		if(content != null)
		{
			if(content.attributes)
			{
				var src = content.attributes.getNamedItem("src");
				if(src != null)
				{
					//fazer no futuro: usar rotina que compara caminhos absolutos, tirando os .. e . da URL
					if(relhref == src.value)
					{
						//achamos
						this._SetCurrentNavpointIndex(i);
						this._lastSMILChangedMoved = true;
						
						//movemos a pagina
						this._SyncPageFromSMIL(relhref, goingUp);
						return;
					}
				}
			}
		}
	}
	
	//se nao achamos, nao fazemos nada
	//nao é obrigatorio ter as entradas no SMIL todas no NCX

	//nossa solucao temporaria
	if(this._lastSMILChangedMoved)
	{
		if(goingUp)
		{
			if(this._currentNavpointIndex > 0)
				this._SetCurrentNavpointIndex(this._currentNavpointIndex - 1);
		}
	}
	this._lastSMILChangedMoved = false;

	//movemos a pagina
	this._SyncPageFromSMIL(relhref, goingUp);
}

//solucao temporaria para sincronizar quando anda para cima no texto
//se a ultima vez que sincronizou setou outro item e andou para cima, entao anda o NCX para cima
CNCX.prototype._lastSyncPageFromSMILMoved = false;

//o SMIL mexeu, pode ser que tenhamos que ativar outra entrada do indice
CNCX.prototype._SyncPageFromSMIL = function(relhref, goingUp)
{
	if(!this.HasPageTargets())
		return;

	//fazer no futuro: esa rotina vai ficar MUITO mais lenta.... ela precisa procurar a tentrada no SMIL acima do atualmente ativo que esteja no indice
	//agopra, ela somente anda com o destaque quando passa pelo item, mas nao sincroniza quem nao estiver no NCX
	//tipo quando mandar para ir para um item (retomar o ponto de leitura)

	//temos que montar com o href dele
	//fazer no futuro: usar rotina que compara caminhos absolutos, tirando os .. e . da URL
	//por enquanto, usamos o caminho relativo

	//vamos procurar esse cara
	var node = this._PageTargets;
	for(var i = 0; i < node.length; i++)
	{
		//pegamos o primeiro contet
		var content = CUtils.GetXMLChildNoException(node.item(i), "content", this.href);
		if(content != null)
		{
			if(content.attributes)
			{
				var src = content.attributes.getNamedItem("src");
				if(src != null)
				{
					//fazer no futuro: usar rotina que compara caminhos absolutos, tirando os .. e . da URL
					if(relhref == src.value)
					{
						//achamos
						this.GotoPageTarget(i, false);
						this._lastSyncPageFromSMILMoved = true;
						return;
					}
				}
			}
		}
	}
	
	//se nao achamos, nao fazemos nada
	//nao é obrigatorio ter as entradas no SMIL todas no NCX

	//nossa solucao temporaria
	if(this._lastSyncPageFromSMILMoved)
	{
		if(goingUp)
		{
			if(this._PageTargetIndex > 0)
				this.GotoPageTarget(this._PageTargetIndex - 1, false);
		}
	}
	this._lastSyncPageFromSMILMoved = false;
}


//para ir para o comeco do indice
CNCX.prototype.gotoStartNCX = function()
{
	this.gotoNCXEntry( 0);
}

//para ir para uma entrada do indice
CNCX.prototype.gotoNCXEntry = function(position)
{
	this._SetCurrentNavpointIndex(position);
	this._SyncPageFromNCX();
}

//para pegar o nro de entradas
CNCX.prototype.GetNumberOfNavPoints = function()
{
	return this._maxCurrentNavpointIndex;
}

//para pegar a posicao atual
CNCX.prototype.GetCurrentNCXEntryNumber = function()
{
	return this._currentNavpointIndex;
}

//para pegar o content da posicao atual
CNCX.prototype.GetCurrentNCXEntryContentSrc = function()
{
	return this.GetCurrentNCXEntryContentSrcGo(false);
}


//para pegar o content da posicao atual
CNCX.prototype.GetCurrentScreenNCXEntryContentSrc = function()
{
	return this.GetCurrentNCXEntryContentSrcGo(true);
}


//para pegar o content da posicao atual
CNCX.prototype.GetCurrentNCXEntryContentSrcGo = function(getScreenEntry)
{
	//a raiz da navegacao
	var node = this._MainNCX_navPoints;
	
	//temos que descobrir o ID do text selecionado
	var selected = this._searchLevel(this._currentNavpointIndex, true);

	//apontamos para o ponto atual
	node = node.item(selected);

	//pegamos o primeiro navlabel
	node = CUtils.GetXMLChildNoException(node, "content", this.href);
	if(node == null)
		throw new CExcept( CMsg.InvalidNCX_no_content(), null, this.href);
	if(!node.attributes)
		throw new CExcept( CMsg.InvalidNCX_no_content(), null, this.href);
	var src = node.attributes.getNamedItem("src");
	if(src == null)
		throw new CExcept( CMsg.InvalidNCX_no_content(), null, this.href);
	if(src.value.split("#").length != 2)
		throw new CExcept(CMsg.InvalidNCX_no_content(), null, this.href);

	return src.value;
}



//pega o autor do livro
//retorna NULL se nao existir
//retorna um CTextArray
CNCX.prototype.GetAuthor = function()
{
	try
	{
		var node = CUtils.GetXMLChild(this.xml, "ncx", this.href);
		node = CUtils.GetXMLChildNoException(node, "docAuthor", this.href);
		if(node == null)
			return null;
			
		var este = new CTextItem();
		este.SetText_node(CUtils.GetXMLChildNoException(node, "text", this.href));
		este.SetAudio_node(CUtils.GetXMLChildRecursiveNoException(node, "audio", this.href), this.href);
		
		//falamos o TTS?
		este.forceTTS = this._opfprefs.forceTTS();
		este.bookText = true;
		este.bookVoice = this._opfprefs.VoiceTTS();
		este.spell = true;
		
		var ret = new CTextArray();
		ret.CTIarray.push(este);
		return ret;
	}
	catch(e)
	{
		throw new CExcept(CMsg.InvalidNCXgeneral(), e, this.href);
	}
}

//pega o titulo do livro
//retorna NULL se nao existir
//retorna um CTextArray
CNCX.prototype.GetTitle = function()
{
	try
	{
		var node = CUtils.GetXMLChild(this.xml, "ncx", this.href);
		node = CUtils.GetXMLChildNoException(node, "docTitle", this.href);
		if(node == null)
			return null;

		var este = new CTextItem();
		este.SetText_node(CUtils.GetXMLChildNoException(node, "text", this.href));
		este.SetAudio_node(CUtils.GetXMLChildRecursiveNoException(node, "audio", this.href), this.href);

		//falamos o TTS?
		este.forceTTS = this._opfprefs.forceTTS();
		este.bookText = true;
		este.bookVoice = this._opfprefs.VoiceTTS();
		este.spell = true;
		
		var ret = new CTextArray();
		ret.CTIarray.push(este);
		return ret;
	}
	catch(e)
	{
		throw new CExcept(CMsg.InvalidNCXgeneral(), e, this.href);
	}
}


/*
monta a versão texto do NCX principal
fazemos duas coisas:
- tiramos qualquer CLASS que exista (não está muito claro se a gente vai precisar disso futuramente)
- garantimos que todos os TEXT tenham um ID unico
- colocamos o lidadlevel nos navpoint e nos text
*/
CNCX.prototype._FixNCX = function(xmlDoc, node, id, nivel)
{
	//controle do nivel
	if(node.tagName)
	{
		if(node.tagName == "navPoint")
		{
			nivel++;
			
			//marca o nivel
			var classe = xmlDoc.createAttribute("lidadlevel");
			classe.value = nivel.toString();
			node.attributes.setNamedItem(classe);
		}
	}

	//em todos os nós
	for(var i=0;i<node.childNodes.length;i++)
	{
		var thischild = node.childNodes.item(i);
		
		//se for texto, tem classe
		//se nao for texto, removemos a classe
		if(thischild.tagName && thischild.attributes)
		{
			if(thischild.tagName == "text")
			{
				//colocamos a classe
				var classe = xmlDoc.createAttribute("class");
				if(nivel <= 6 && nivel > 0)
					classe.value = "sNCX" + nivel.toString();
				else
					classe.value = "sNCX0";
				
				thischild.attributes.setNamedItem(classe);

				//marca o nivel
				classe = xmlDoc.createAttribute("lidadlevel");
				classe.value = nivel.toString();
				thischild.attributes.setNamedItem(classe);
			}
			else
			{
				//removemos a classe
				if(thischild.attributes.getNamedItem("class") != null)
					thischild.attributes.removeNamedItem("class");
			}
		}


		//colocamos o ID se for texto e nao tiver
		if(thischild.tagName && thischild.attributes)
		{
			if(thischild.tagName == "text")
			{
				if(thischild.attributes.getNamedItem("id") == null)
				{
					var classe = xmlDoc.createAttribute("id");
					classe.value = this._baseNameForID + id.toString();
					thischild.attributes.setNamedItem(classe);
					id++;
				}
			}
		}

		//os filhos deste
		id = this._FixNCX(xmlDoc, thischild, id, nivel);
	}
	
	return id;
}

//pega o nivel de navegacao
CNCX.prototype.GetCurrentLevel = function()
{
	return this._currentLevel;
}

//determina o nivel de navegacao
CNCX.prototype.SetCurrentLevel = function(level)
{
	//minimo = 1
	if(level < 1)
		level = 1;
		
	this._currentLevel = level;
	//mover o destaque para o de nivel imeidatamente superior
	this._SetCurrentNavpointIndex( this._currentNavpointIndex);
}

//para pegar o ID da posicao atual (para marcadores)
CNCX.prototype.GetCurrentNCXRef = function()
{
	//o nome do arquivo faz parte, para ficar compativel com o exemplo do daisy
	var ret = this.href;

	//vamos isolar o nome do arquivo, tiramos as barras
	var lastSlash = ret.toString().lastIndexOf("/");
	var lastSlash2 = ret.toString().lastIndexOf("\\");
	if(lastSlash < lastSlash2)
		lastSlash = lastSlash2;
	//se nao tem barra nenhuma, mantem o nome todo
	if(lastSlash > 0)
		ret = ret.toString().substring(lastSlash + 1);

	//o separador
	ret += "#";
		
	//a raiz da navegacao
	var node = this._getCurrentNCXEntry();
	var achouID = false;
	
	//pegamos o ID
	if(node.attributes)
	if(node.attributes.getNamedItem)
	if(node.attributes.getNamedItem("id"))
	{
		ret += node.attributes.getNamedItem("id").value;
		achouID = true;
	}
	
	//se nao achou o ID, vamos montar um....
	if(!achouID)
	{
		ret += "lidadgeneratedncxid" + this._currentNavpointIndex;
	}

	return ret;
}


//para pegar o ID da posicao atual (para marcadores)
CNCX.prototype.gotoNCXRef = function(ncxRef)
{
	//nao damos erro se tiver problema, só ignoramos
	if(ncxRef.split("#").length != 2)
		return;
		
	ncxRef = ncxRef.split("#")[1];
	
	//fazemos um loop em todos os navpoints
	//vamos procurar esse cara
	var node = this._MainNCX_navPoints;
	for(var i = 0; i < this._maxCurrentNavpointIndex; i++)
	{
		//pegamos o cara
		var content = node.item(i);
		
		if(content)
		if(content.attributes)
		if(content.attributes.getNamedItem)
		if(content.attributes.getNamedItem("id"))
		{
			if(content.attributes.getNamedItem("id").value == ncxRef)
			{
				//oba, achamos!
				this._SetCurrentNavpointIndex(i);
				this._SyncPageFromNCX();
				return;
			}
		}

	}
}

//tem indice de paginas?
CNCX.prototype.HasPageTargets = function()
{
	if(this._PageTargets == null)
		return false;
	return true;
}

//a lista de paginas (array de pageTargets)
CNCX.prototype.GetPageTargets = function()
{
	return this._PageTargets;
}


//a pagina atual como texto
CNCX.prototype.GetCurrentPageAsText = function()
{
	if(!this.HasPageTargets())
		return "";

	var node = null;
	
	//se der algum erro, ignoramos
	try
	{
		node = this._PageTargets.item(this._PageTargetIndex);
		//para a gente retornar o valor
		//nao pode por causa dos numeros romanos... temos que usar o texto mesmo
		//return node.attributes.getNamedItem("value").value;
		
		//se der erro, voltamos o valor
		try
		{
			//o primeiro navlabel
			node = CUtils.GetXMLChildNoException(node, "navLabel", this.href);
			//pegar o texto do ponto atual
			var txt = CUtils.GetXMLChildNoException(node, "text", this.href);
			return txt.textContent;
		}
		catch(e)
		{
			return node.attributes.getNamedItem("value").value;
		}
	}
	catch(e)
	{
		//ignoramos erros
	}
	
	return "";
}

//para alterar a pagina atual, retorna true se alterou
CNCX.prototype.GotoPageNext = function()
{
	if(!this.HasPageTargets())
		return false;

	var newindex = this._PageTargetIndex + 1;
	
	//validacao
	if(newindex < 0)
		return false;
	if(newindex >= this._PageTargets.length)
		return false;

	//muda a pagina
	this.GotoPageTarget(newindex, true);
	return true;
}

//para alterar a pagina atual, retorna true se alterou
CNCX.prototype.GotoPagePrev = function()
{
	if(!this.HasPageTargets())
		return false;

	var newindex = this._PageTargetIndex - 1;
	
	//validacao
	if(newindex < 0)
		return false;
	if(newindex >= this._PageTargets.length)
		return false;

	//muda a pagina
	this.GotoPageTarget(newindex, true);
	return true;
}

//para alterar a pagina atual
CNCX.prototype.GotoPageTarget = function(newindex, syncncx)
{
	if(!this.HasPageTargets())
		return "";

	//validacao
	if(newindex < 0)
		newindex = 0;
	if(newindex >= this._PageTargets.length)
		newindex >= this._PageTargets - 1;
	this._PageTargetIndex = newindex;
	
	//dispara o evento de mudanca de pagina
	if(this._NCXEventListener != null)
		this._NCXEventListener.NCXPageChangedItem(this);

	//se for para sincronizar o NCX
	if(syncncx)
		this._SyncNCXFromPage();
}


//para pegar o content da posicao atual
CNCX.prototype.GetCurrentNCXPageEntryContentSrc = function()
{
	//se nao tem paginas, nao fazemos nada
	if(!this.HasPageTargets())
		return "";
	
	var newindex = this._PageTargetIndex;
	//validacao
	if(newindex < 0)
		return "";
	if(newindex >= this._PageTargets.length)
		return "";

	//a raiz da navegacao
	var node = this._PageTargets.item(this._PageTargetIndex);

	//pegamos o primeiro navlabel
	node = CUtils.GetXMLChildNoException(node, "content", this.href);
	if(node == null)
		throw new CExcept( CMsg.InvalidNCX_no_content(), null, this.href);
	if(!node.attributes)
		throw new CExcept( CMsg.InvalidNCX_no_content(), null, this.href);
	var src = node.attributes.getNamedItem("src");
	if(src == null)
		throw new CExcept( CMsg.InvalidNCX_no_content(), null, this.href);
	if(src.value.split("#").length != 2)
		throw new CExcept(CMsg.InvalidNCX_no_content(), null, this.href);

	return src.value;
}


//para pegar o ID da posicao atual da pagina (para marcadores)
CNCX.prototype.GetCurrentNCXPageRef = function()
{
	//se nao tem paginas, nao fazemos nada
	if(!this.HasPageTargets())
		return "";
	
	//o nome do arquivo faz parte, para ficar compativel com o exemplo do daisy
	var ret = this.href;

	//vamos isolar o nome do arquivo, tiramos as barras
	var lastSlash = ret.toString().lastIndexOf("/");
	var lastSlash2 = ret.toString().lastIndexOf("\\");
	if(lastSlash < lastSlash2)
		lastSlash = lastSlash2;
	//se nao tem barra nenhuma, mantem o nome todo
	if(lastSlash > 0)
		ret = ret.toString().substring(lastSlash + 1);

	//o separador
	ret += "#";

	//a raiz da navegacao
	var newindex = this._PageTargetIndex;
	//validacao
	if(newindex < 0)
		return "";
	if(newindex >= this._PageTargets.length)
		return "";
	//a raiz da navegacao
	var node = this._PageTargets.item(this._PageTargetIndex);

	var achouID = false;
	
	//pegamos o ID
	if(node.attributes)
	if(node.attributes.getNamedItem)
	if(node.attributes.getNamedItem("id"))
	{
		ret += node.attributes.getNamedItem("id").value;
		achouID = true;
	}
	
	//se nao achou o ID...
	if(!achouID)
		return "";

	return ret;
}

//para pegar o ID da posicao atual (para marcadores)
CNCX.prototype.gotoNCXPageRef = function(pageRef, syncNCX)
{
	//se nao tem paginas, nao fazemos nada
	if(!this.HasPageTargets())
		return;
	
	//nao damos erro se tiver problema, só ignoramos
	if(pageRef.split("#").length != 2)
		return;
		
	pageRef = pageRef.split("#")[1];
	
	//fazemos um loop em todos os pagetargets
	//vamos procurar esse cara
	var node = this._PageTargets;
	for(var i = 0; i < node.length; i++)
	{
		//pegamos o cara
		var content = node.item(i);
		
		if(content)
		if(content.attributes)
		if(content.attributes.getNamedItem)
		if(content.attributes.getNamedItem("id"))
		{
			if(content.attributes.getNamedItem("id").value == pageRef)
			{
				//oba, achamos!
				this.GotoPageTarget(i, syncNCX);
				return;
			}
		}

	}
}



//alteraram o NCX, devemos sincroniza o numero da pagina com ele
//vamos para a pagina com o palyorder imediatamente anterior ao do NCX atual
CNCX.prototype._SyncPageFromNCX = function()
{
	//se nao tem paginas, nao fazemos nada
	if(!this.HasPageTargets())
		return;
	
	//se der algum erro, ignoramos
	try
	{
		var node = this._getCurrentNCXEntry();
		//tem que converter para numero interio
		var playOrder = parseInt(node.attributes.getNamedItem("playOrder").value);
		
		//o playorder e o i que escolehmos até agora
		var cachedPlayOrderValue = -1;
		var cachedIndex = -1;
		
		node = this._PageTargets;
		for(var i = 0; i < node.length; i++)
		{
			//tem que converter para numero interio
			var playOrderPage = parseInt(node.item(i).attributes.getNamedItem("playOrder").value);
			if(playOrderPage > cachedPlayOrderValue && playOrderPage < playOrder)
			{
				cachedPlayOrderValue = playOrderPage;
				cachedIndex = i;
			}
		}
		
		//se achamos, mudamos
		if(cachedIndex > 0)
			this.GotoPageTarget(cachedIndex, false);
	}
	catch(e)
	{
		//ignoramos erros
	}
}

//alteraram a pagina, devemos sincroniza o numero do NCX com ele
//vamos para a pagina com o palyorder imediatamente anterior ao da pagina atual
CNCX.prototype._SyncNCXFromPage = function()
{
	//se nao tem paginas, nao fazemos nada
	if(!this.HasPageTargets())
		return;
	
	//se der algum erro, ignoramos
	try
	{
		var node = this._PageTargets.item(this._PageTargetIndex);
		//tem que converter para numero interio
		var playOrder = parseInt(node.attributes.getNamedItem("playOrder").value);
		
		//o playorder e o i que escolehmos até agora
		var cachedPlayOrderValue = -1;
		var cachedIndex = -1;
		
		node = this._MainNCX_navPoints;
		for(var i = 0; i < node.length; i++)
		{
			//tem que converter para numero interio
			var playOrderPage = parseInt(node.item(i).attributes.getNamedItem("playOrder").value);
			if(playOrderPage > cachedPlayOrderValue && playOrderPage < playOrder)
			{
				cachedPlayOrderValue = playOrderPage;
				cachedIndex = i;
			}
		}
		
		//se achamos, mudamos
		if(cachedIndex > 0)
			this._SetCurrentNavpointIndex(cachedIndex);
	}
	catch(e)
	{
		//ignoramos erros
	}
}

//pega a faixa permitida para numeracao de paginas, retorna um CNCXPagMinMax
CNCX.prototype.GetPageMinMax = function(pagetype)
{
	var ret = new CNCXPagMinMax();

	//vamos procurar todos esses cara
	var node = this._PageTargets;
	for(var i = 0; i < node.length; i++)
	{
		//se nao pegar o tipo, usa normal
		var tipo = "normal";
		
		//pegamos o type
		var item = node.item(i);
		if(item)
		if(item.attributes)
		if(item.attributes.getNamedItem)
		if(item.attributes.getNamedItem("type"))
		{
			var tipoaux = item.attributes.getNamedItem("type").value;
			//somente processamos os tipos exisentes, todos os outros viram normal
			if(tipoaux == "special" || tipoaux == "front")
			{
				tipo = tipoaux;
			}
		}
		
		//processamos a entrada
		if(tipo == pagetype)
		if(item)
		if(item.attributes)
		if(item.attributes.getNamedItem)
		if(item.attributes.getNamedItem("value"))
		{
			var valor = parseInt(item.attributes.getNamedItem("value").value);
			if(!isNaN(valor))
			{
				//colocamos no min ou no max
				if(ret.min < 0 || ret.min > valor)
					ret.min = valor;
				if(ret.max < 0 || ret.max < valor)
					ret.max = valor;
			}
		}
		
		
	}
	
	
	return ret;
}

//vai para uma pagina, retorna true se foi
CNCX.prototype.GotoPage = function(targetPage, targetType)
{
	//vamos procurar todos esses cara
	var node = this._PageTargets;
	for(var i = 0; i < node.length; i++)
	{
		//se nao pegar o tipo, usa normal
		var tipo = "normal";
		
		//pegamos o type
		var item = node.item(i);
		if(item)
		if(item.attributes)
		if(item.attributes.getNamedItem)
		if(item.attributes.getNamedItem("type"))
		{
			var tipoaux = item.attributes.getNamedItem("type").value;
			//somente processamos os tipos exisentes, todos os outros viram normal
			if(tipoaux == "special" || tipoaux == "front")
			{
				tipo = tipoaux;
			}
		}
		
		//processamos a entrada
		if(tipo == targetType)
		if(item)
		if(item.attributes)
		if(item.attributes.getNamedItem)
		if(item.attributes.getNamedItem("value"))
		{
			var valor = parseInt(item.attributes.getNamedItem("value").value);
			if(!isNaN(valor))
			if(valor == targetPage)
			{
				//achamos o ponto....
				this.GotoPageTarget(i, true);
				return true;
			}
		}
		
		
	}
	
	
	//nao achamos....
	return false;
}

//pega o ID de uma smilCustomTest com um bookStruct, retorna "" se nao achar
CNCX.prototype.GetSkipID = function(bookStruct)
{
	try
	{
		var node = CUtils.GetXMLChildNoException(this.xml, "ncx", this.href);
		node = CUtils.GetXMLChildNoException(node, "head", this.href);
		for(var i = 0; i < node.childNodes.length; i++)
		{
			var item = node.childNodes.item(i);
			if(item)
			if(item.tagName)
			if(item.tagName == "smilCustomTest")
			{
				//a tag tá certa
				if(item.attributes)
				if(item.attributes.getNamedItem)
				if(item.attributes.getNamedItem("bookStruct"))
				if(item.attributes.getNamedItem("bookStruct").value == bookStruct)
				{
					return item.attributes.getNamedItem("id").value;
				}
				
			}
			
		}
	}
	catch(e)
	{
		//nao fazemos nada, ignoramos erros e nao achamos o ID
	}
	
	return "";
}

