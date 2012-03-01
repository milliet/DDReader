
//controle do indice principal

var CmdNcx = 
{

//para ativar o nosso modo
activate:function()
{
	//se nao tiver livro, nao vamos
	if(!CmdMain.OPFpresent())
	{
		CmdMain.ShowWarn(CMsgIface.NoBookOpen());
		return;
	}
		
	//paramos de falar
	CSpeak.stopAndClear();
	
	
	//nos marcamos como ativos
	CmdMain.setMode(this);

	//ativa a tela do livro
	CmdMain.activateBook();
	

	CSkin.CmdNcx_activate();

	//comecamos a falar
	CmdMain.OPFGet().opffile.ncx.speak();
},


//atualizar os dados na tela
update:function()
{
	if(RunningInsideExercises)
		return;

	//prefixo para o html
	//no indice, nao temos, pq é um html externo
	//var prefixoHtml = CSkin.prefixoHtml();
	var prefixoHtml = "";
	
	var livro = CSkin.PegarBaseIndice();
	var conversao = livro.getElementById("LivroIndiceConv");
	livro = livro.getElementById("LivroIndice").contentDocument;
	livro = livro.getElementById("LivroIndiceCorpo");


	//limpamos a tela
	livro.innerHTML = " ";
	
	//se nao tem livro, fica em branco
	if(!CmdMain.OPFpresent())
		return;

	//pegamos o NCX	
	var html = '<' + prefixoHtml + 'table width="100%" border="0" cellspacing="0" cellpadding="0">';
	var nav = CmdMain.OPFGet().opffile.ncx.GetNavPoints();
	for(var i = 0; i < nav.length; i++)
	{
		var node = nav.item(i);

		//pegamos o primeiro navlabel
		node = CUtils.GetXMLChildNoException(node, "navLabel", null);
		//se der erro, igmoramos
		if(node != null)
		{
			//pegar o texto do ponto atual
			var txt = CUtils.GetXMLChildNoException(node, "text", this.href);
			if(txt != null)
			{
				//somente se o texto existir				
				// ALTERADO PELO PEDRO PARA INCLUIR VISUAL EM TABELA
					html += "<" + prefixoHtml + "tr lidadlevel='" + txt.attributes.getNamedItem("lidadlevel").value
					+ "' onclick='window.parent.parent.CmdNcx.gotoNCXitem(" + i + ");'><" + prefixoHtml + "td  class='"
					+ txt.attributes.getNamedItem("class").value
					+ "' id='" + txt.attributes.getNamedItem("id").value + "'>" ;

				//convertemos o texto para html
				conversao.textContent = txt.textContent;
				html += conversao.innerHTML;
				
				html += "</" + prefixoHtml + "td></" + prefixoHtml + "tr>";
				html += "\r\n";
			}
		}
	}
	html += "</" + prefixoHtml + "table>";
	//limpa o div de conversao
	conversao.textContent = "";
	
	//acerta o tamanho da fonte
	this.UpdateFontSize();
	
	//transfere para a tela
	livro.innerHTML = html;
},


//atualiza o tamanho da fonte
UpdateFontSize:function()
{
	if(RunningInsideExercises)
		return;

	var livro = CSkin.PegarBaseIndice();
	livro = livro.getElementById("LivroIndice").contentDocument;
	livro = livro.getElementById("LivroIndiceCorpo");
	
	if(livro == null)
		return;
		
	//coloca o tamanho selecionado
	livro.style.fontSize = CPref.fontsize() + "%";
},


//vai para um item do indice
gotoNCXitem:function(i)
{
	//se nao tiver livro, nao vamos
	if(!CmdMain.OPFpresent())
		return;

	//paramos de falar
	CSpeak.stopAndClear();

	//vai par a entrada
	CmdMain.OPFGet().opffile.ncx.gotoNCXEntry(i);
	
	//liga a aba da leitura para mover o cursor
	CmdRead.preactivate();
	
	//manda o smil se mover
	var href = CmdMain.OPFGet().opffile.ncx.GetCurrentNCXEntryContentSrc();
	CmdMain.OPFGet().opffile.smils.gotoHref(href);

	//seta o foco na letiura
	CmdRead.activate();
},

//limpa a tela
clear:function()
{
	if(RunningInsideExercises)
		return;

	var livro = CSkin.PegarBaseIndice();
	livro = livro.getElementById("LivroIndice").contentDocument;
	livro = livro.getElementById("LivroIndiceCorpo");
	livro.innerHTML = " ";
},


//para carregar um item do historico
doenter:function()
{
	//se nao tiver livro, nao vamos
	if(!CmdMain.OPFpresent())
		return;

	//paramos de falar
	CSpeak.stopAndClear();

	//move o indice (para forca a atualizacao da pagina)
	CmdMain.OPFGet().opffile.ncx.gotoNCXEntry(CmdMain.OPFGet().opffile.ncx.GetCurrentNCXEntryNumber());
	
	//liga a aba da leitura para mover o cursor
	CmdRead.preactivate();
	
	//manda o smil se mover
	var href = CmdMain.OPFGet().opffile.ncx.GetCurrentScreenNCXEntryContentSrc();
	CmdMain.OPFGet().opffile.smils.gotoHref(href);

	//seta o foco na letiura
	CmdRead.activate();
},


//no selecionado
_currentNodeItem: null,
//classe do no sem a selecao
_currentNodeClass: "",

//mudou a entrada de ncx ativa
NCXChangedItem:function(ncx, id)
{
	if(RunningInsideExercises)
		return;

	//tiramos o destaque do anterior
	if(this._currentNodeItem && this._currentNodeClass)
	{
		try
		{
			this._currentNodeItem.attributes.getNamedItem("class").value = this._currentNodeClass;
		}
		catch(e)
		{
			//ignoramos erros
		}
		
		//nao precisamos mais deste
		this._currentNodeItem = null;
	}
	
	//pegamos o item novo
	if(id == null)
		return;
	
	var livro = CSkin.PegarBaseIndice();
	livro = livro.getElementById("LivroIndice").contentDocument;
	//livro = livro.getElementById("LivroIndiceCorpo");

	//nao queremos que de erro
	if(!livro.getElementById(id))
		return;
	if(!livro.getElementById(id).attributes)
		return;
	if(!livro.getElementById(id).attributes.getNamedItem("class") )
		return;
		
	//vamos guardar o atual
	this._currentNodeClass = livro.getElementById(id).attributes.getNamedItem("class").value;
	this._currentNodeItem = livro.getElementById(id);
	
	//agora vamos mudar
	this._currentNodeItem.attributes.getNamedItem("class").value += " sNCXhilite";
	this._currentNodeItem.scrollIntoView(false);
},

/*
controle do nivel
funcionamento:
- se o foco está no indice, ao alterar o nivel, ativamos esse nivel
(se necessário, alteramos o item selecionado) e começamos a falar esse item
- se o foco não está no indiceo, ativamos o nivel e nao fazemos nada com a fala
*/
SetCurrentLevel:function(level)
{
	if(RunningInsideExercises)
		return;

/*
	//nota: alterar diretamente o estilo nao funciona....
	var livro = document.getElementById("livro").contentDocument;
	livro = livro.getElementById("LivroIndice").contentDocument;
	livro = livro.styleSheets.item("LidaD.css").cssRules;
	for(var i = 1; i < 7; i++)
	{
		if(i <= level)
			livro.item(".sNCX" + i).style.visibility = "visible";
		else
			livro.item(".sNCX" + i).style.visibility = "hidden";
	}
	//nivel 0
	if(level >= 6)
		livro.item(".sNCX0").style.visibility = "visible";
	else
		livro.item(".sNCX0").style.visibility = "hidden";
*/

	//temos que acertar a visualizacao dos itens
	var livro = CSkin.PegarBaseIndice();
	livro = livro.getElementById("LivroIndice").contentDocument;
	livro = livro.getElementsByTagName("tr");
	for(var i = 0; i < livro.length; i++)
	{
		var thisitem = livro.item(i);
		if(thisitem.attributes)
		if(thisitem.attributes.getNamedItem)
		if(thisitem.attributes.getNamedItem("lidadlevel"))
		{
			var thislevel = thisitem.attributes.getNamedItem("lidadlevel").value;
			//se o nivel for maior ou igual a 6, abre todo mundo
			if(thislevel <= level || level >= 6)
				thisitem.style.display = "";
			else
				thisitem.style.display = "none";
		}
	}
	


	//se nao tiver livro, nao vamos
	if(!CmdMain.OPFpresent())
		return;

	//seta o nivel
	CmdMain.OPFGet().opffile.SetCurrentLevel(level);

	//comecamos a falar se o foco está na gente
	if(CmdMain.getMode() == this)
		CmdMain.OPFGet().opffile.ncx.speak();
},

GetCurrentLevel:function()
{
	//se nao tiver livro, nao vamos
	if(!CmdMain.OPFpresent())
		return CPref.defaultlevel();

	//pega o nivel
	return CmdMain.OPFGet().opffile.GetCurrentLevel();
},

//vai para a proxima entrada do nivel selecionado
nextScreenEntry:function()
{
	//se nao tiver livro, nao vamos
	if(!CmdMain.OPFpresent())
		return;

	//vamos
	return CmdMain.OPFGet().opffile.ncx.gotoNextScreenEntry();
},

//vai para a entrada anterior do nivel selecionado
previousScreenEntry:function()
{
	//se nao tiver livro, nao vamos
	if(!CmdMain.OPFpresent())
		return;

	//vamos
	return CmdMain.OPFGet().opffile.ncx.gotoPreviousScreenEntry();
}


//fim da variavel
}


