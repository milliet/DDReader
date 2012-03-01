//controle do resultado da busca

var CmdSearchRes = 
{

SearchEvents:
{
	//o elemento que estava anteriormente ativo
	PreviousHilite: null,
	//o array que estamos mostrando
	ArrayOnScreen: null,

	//modou o item ativo
	SearchChangeActive: function(index)
	{
		//volta o item anterior
		if(this.PreviousHilite != null)
		{
			try
			{
				this.PreviousHilite.attributes.getNamedItem("class").value = "BuscaLista";
				this.PreviousHilite = null;
			}
			catch(e)
			{
				//ignoramos erros
				this.PreviousHilite = null;
			}
		}
		
		//pega o teim atual
		try
		{
			//no ifram de livro
			var home = CSkin.PegarBaseLeitura();
			this.PreviousHilite = home.getElementById("InicioBuscaItem" + index);
			if(this.PreviousHilite)
			{
				this.PreviousHilite.attributes.getNamedItem("class").value = "BuscaListaHilite";
				
				//coloca na tela
				this.PreviousHilite.scrollIntoView(false);
			}
		}
		catch(e)
		{
			//ignoramos erros
			this.PreviousHilite = null;
		}
	},
	
	//modaram os elementos do historico, reconstruimos a lista
	SearchChangeElements: function(ArrayOnScreen, searchWords, dictionarySarch, dictionaryFound)
	{	
		if(RunningInsideExercises)
			return;

		//prefixo para o html
		var prefixoHtml = CSkin.prefixoHtml();
		
		//nao temos nada ativo
		this.PreviousHilite = null;
		this.ArrayOnScreen = ArrayOnScreen;
		
		//reconstroi a lista
		var home = CSkin.PegarBaseLeitura();

		//se a lista de marcadores estiver vazia, mostra isso
		if(ArrayOnScreen.length <= 0)
		{
			if(dictionarySarch && dictionaryFound)
			{
				home.getElementById("LivroBusca").innerHTML = "";
				home.getElementById("LivroBuscaHeader").textContent = CMsgIface.SearchResDict(searchWords);
				return;
			}
			
			//home.getElementById("LivroBusca").innerHTML = '<span class="BuscaLista">' 
			//	+ CMsgIface.NoSearchRes() + '</span>';
			home.getElementById("LivroBusca").innerHTML = "";
			home.getElementById("LivroBuscaHeader").textContent = CMsgIface.NoSearchRes();
			return;
		}

		var limite_resultados_busca = 50;
		home.getElementById("LivroBuscaHeader").textContent = CMsgIface.ResultsFor(ArrayOnScreen.length, limite_resultados_busca, searchWords);

		//limpa a lista da tela
		home.getElementById("LivroBusca").innerHTML = "";
		
		var msg = '<' + prefixoHtml + 'table width="100%" border="0" cellspacing="0" cellpadding="4">';
		for(var i=0; i<ArrayOnScreen.length && i < limite_resultados_busca; i++)
		{
			var item = ArrayOnScreen[i];
			var msgitem = item.textContent;

			//limitamos em 60
			if(msgitem.length > CSkin.LimiteResutadoBusca())
				msgitem = msgitem.substring(0, CSkin.LimiteResutadoBusca() - 1) + "...";

			home.getElementById("LivroBuscaConv").textContent = msgitem;
			msg +="<" + prefixoHtml + "tr onclick='window.parent.CmdSearchRes.gotomarker(" + i +");' class='BuscaLista' id='InicioBuscaItem" + i + "'>";
			msg += "<" + prefixoHtml + "td width='15px' valign='top'>" + (i + 1) + "</" + prefixoHtml + "td>";
			msg += "<" + prefixoHtml + "td valign='top'>" + home.getElementById("LivroBuscaConv").innerHTML + "</" + prefixoHtml + "td></" + prefixoHtml + "tr>";
		}
		msg += '</' + prefixoHtml + 'table>';
		
		//limpa o div de conversao
		home.getElementById("LivroBuscaConv").textContent = "";
		//transfere para a tela
		home.getElementById("LivroBusca").innerHTML = msg;
	}
},

//o gerenciador
searchres:null,


//para limpar a tela
clear:function()
{
	if(RunningInsideExercises)
		return;

	var home = CSkin.PegarBaseLeitura();
	//limpa o div
	home.getElementById("LivroBusca").innerHTML = "";
	this.searchres.changeArray(new Array(), null, "", false, false);
},

//para setar um resultaod de busca
setResults:function(arr, opfprefs, searchWords, dictionarySarch, dictionaryFound)
{
	if(RunningInsideExercises)
		return;

	this.searchres.changeArray(arr, opfprefs, searchWords, dictionarySarch, dictionaryFound);
},

//se tem algum resultado
hasResults:function()
{
	if(this.searchres.array.length == null)
		return false;
	if(this.searchres.array.length <= 0)
		return false;
	return true;
},


gotoNext:function()
{
	if(this.searchres.speakindex + 1 >= this.searchres.array.length)
	{
		CmdMain.ShowWarn(CMsgIface.NoSearchNext());
		return;
	}
	this.gotomarker(this.searchres.speakindex + 1);
	CSpeak.CommandEcho_text(CMsgIface.SearchNext());
},

gotoPrev:function()
{
	if(this.searchres.speakindex <= 0)
	{
		CmdMain.ShowWarn(CMsgIface.NoSearchPrev());
		return;
	}
	this.gotomarker(this.searchres.speakindex - 1);
	CSpeak.CommandEcho_text(CMsgIface.SearchPrev());
},

gotoEnd:function()
{
	this.searchres.setCurrentIndex(this.searchres.array.length - 1);
	this.searchres._speakcurrent();
},

gotoStart:function()
{
	this.searchres.setCurrentIndex(0);
	this.searchres._speakcurrent();
},

//para carregar um item do historico
gotomarker:function(i)
{
	//se nao tiver livro, nao vamos
	if(!CmdMain.OPFpresent())
		return false;

	//paramos de falar
	CSpeak.stopAndClear();
	
	//se der erro, avisamos
	try
	{
		//pega a lista de marcadores
		var arraymarkers = this.SearchEvents.ArrayOnScreen;

		if(i < 0 || i >= arraymarkers.length)
		{
			CDialogs.WarnEscToContinue(CMsgIface.SearchResError(), null);
			return false;
		}
		
		var thismarker = arraymarkers[i];
		
		//liga a aba da leitura para mover o cursor
		CmdRead.preactivate();

		//NAO TEMOS COMO FAZER:
		//sincronizar o NCX
		//sincronizar as paginas

		//pegamos a URI
		if(thismarker.attributes)
		if(thismarker.attributes.getNamedItem)
		if(thismarker.attributes.getNamedItem("smilref"))
		if(thismarker.attributes.getNamedItem("smilref").value != "")
		{
			CmdMain.OPFGet().opffile.smils.gotoHref(thismarker.attributes.getNamedItem("smilref").value);
		}
		
		//seta o foco na letiura
		CmdRead.activate();
	
		//move os marcadores
		this.searchres.setCurrentIndex(i);
		
		return true;
	}
	catch(e)
	{
		throw new CExcept(CMsgIface.SearchResError(), e, null);
	}
	return false;
},

//para carregar um item do historico
doenter:function()
{
	var arraymarkers = this.SearchEvents.ArrayOnScreen;
	if(arraymarkers.length < 1)
	{
		CmdMain.ShowWarn(CMsgIface.NoSearchRes());
		return;
	}

	return this.gotomarker(this.searchres.speakindex);
},

//atualiza o tamanho da fonte
UpdateFontSize:function()
{
	var home = CSkin.PegarBaseLeitura();
	home = home.getElementById("LivroBusca");
	if(home == null)
		return;
		
	//coloca o tamanho selecionado
	home.style.fontSize = CPref.fontsize() + "%";
},

//para ativar o nosso modo
activate:function()
{
	//se nao tiver livro, nao vamos
	if(!CmdMain.OPFpresent())
		return false;

	//nos marcamos como ativos
	CmdMain.setMode(this);

	//ativa a tela de inicio
	CmdMain.activateBook();
	CSkin.CmdSearchRes_activate();
	
	//comecamos a falar
	//a primeira coisa que falamos é o resultado da busca
	this.searchres.speak();

	var msg = "";
	if(CPref.echocommands())
		msg += CMsgIface.EchoSearchRes() + " ";
	var home = CSkin.PegarBaseLeitura();
	msg += 	home.getElementById("LivroBuscaHeader").textContent;
	CSpeak.CommandEchoGo_text(msg);
	
},


//atualizar os dados na tela
update:function()
{
	//se nao tiver livro, nao vamos
	if(!CmdMain.OPFpresent())
		return;

	this.UpdateFontSize();
}

//fim da variavel
}


//o gerenciador
CmdSearchRes.searchres = new CSearchRes(CmdSearchRes.SearchEvents);

