/// <reference path="../js/CHist.js" />

//controle dos marcadores do livro

var CmdMarks = 
{

MarkEvents:
{
	//o elemento que estava anteriormente ativo
	PreviousHilite: null,

	//modou o item ativo
	MarkChangeActive: function(mark)
	{
		//volta o item anterior
		if(this.PreviousHilite != null)
		{
			try
			{
				this.PreviousHilite.attributes.getNamedItem("class").value = "MarcadoresLista";
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
			var home = CSkin.PegarBaseMarks();
			this.PreviousHilite = home.getElementById("InicioMarcadorItem" + mark.speakindex);
			if(this.PreviousHilite)
			{
				this.PreviousHilite.attributes.getNamedItem("class").value = "MarcadoresListaHilite";
				
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
	MarkChangeElements: function(mark)
	{	
		if(RunningInsideExercises)
			return;

		//prefixo para o html
		var prefixoHtml = CSkin.prefixoHtml();
		
		//nao temos nada ativo
		this.PreviousHilite = null;
		
		//reconstroi a lista
		var home = CSkin.PegarBaseMarks();

		//se a lista de marcadores estiver vazia, mostra isso
		if(mark.getSortedarrayBookmarks().length <= 0)
		{
			home.getElementById("LivroMarcadores").innerHTML = '<' + prefixoHtml + 'span class="MarcadoresLista">' 
				+ CMsgIface.NoMarkers() + '</' + prefixoHtml + 'span>';
			return;
		}

		//limpa a lista da tela
		home.getElementById("LivroMarcadores").innerHTML = "";
		
		//pega a lista de marcadores
		var arraymarkers = mark.getSortedarrayBookmarks();

		var msg = '<' + prefixoHtml + 'table width="100%" border="0" cellspacing="0" cellpadding="4">';
		for(var i=0; i<arraymarkers.length; i++)
		{
			var item = arraymarkers[i];
			var msgitem = "";

			//vamos mostrar somente o titulo
			if(item.attributes)
			if(item.attributes.getNamedItem("label"))
				msgitem = item.attributes.getNamedItem("label").value;
				
			//limitamos em 60
			if(msgitem.length > 60)
				msgitem = msgitem.substring(0,59) + "...";

			home.getElementById("LivroMarcadoresConv").textContent = msgitem;
			msg +="<" + prefixoHtml + "tr onclick='window.parent.CmdMarks.gotomarker(" + i +");' class='MarcadoresLista' id='InicioMarcadorItem" + i + "'>";
			msg += "<" + prefixoHtml + "td width='15px' valign='top'>" + (i + 1) + "</" + prefixoHtml + "td>";
			msg += "<" + prefixoHtml + "td valign='top'>" + home.getElementById("LivroMarcadoresConv").innerHTML + "</" + prefixoHtml + "td></" + prefixoHtml + "tr>";
		}
		msg += '</' + prefixoHtml + 'table>';
		
		//limpa o div de conversao
		home.getElementById("LivroMarcadoresConv").textContent = "";
		//transfere para a tela
		home.getElementById("LivroMarcadores").innerHTML = msg;
	}
},

//para limpar a tela
clear:function()
{
	if(RunningInsideExercises)
		return;

	var home = CSkin.PegarBaseMarks();
	//limpa o div
	home.getElementById("LivroMarcadores").innerHTML = "";
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
		var arraymarkers = CmdMain.OPFGet().opffile.marks.getSortedarrayBookmarks();

		if(i < 0 || i >= arraymarkers.length)
		{
			CDialogs.WarnEscToContinue(CMsgIface.MarkerError(), null);
			return false;
		}
		
		var thismarker = arraymarkers[i];
		
		//liga a aba da leitura para mover o cursor
		CmdRead.preactivate();

		//sincronizar o NCX
		var ncxRef = CUtils.GetXMLChildNoException(thismarker, "ncxRef", null);
		CmdMain.OPFGet().opffile.ncx.gotoNCXRef(ncxRef.textContent);

		//sincronizar as paginas
		var pageRef = CUtils.GetXMLChildNoException(thismarker, "pageRef", null);
		if(pageRef)
			CmdMain.OPFGet().opffile.ncx.gotoNCXPageRef(pageRef.textContent, false);

		//pegamos a URI
		var uri = CUtils.GetXMLChildNoException(thismarker, "URI", null);
		CmdMain.OPFGet().opffile.smils.gotoHref(uri.textContent);
		
		//seta o foco na letiura
		CmdRead.activate();
	
		//move os marcadores
		CmdMain.OPFGet().opffile.marks.setCurrentIndex(i);
		
		return true;
	}
	catch(e)
	{
		throw new CExcept(CMsgIface.MarkerError(), e, null);
	}
	return false;
},

//para apagar um item do historico
doDelMark:function()
{
	//paramos de falar
	CSpeak.forceEnd();
	
	var marks = CmdMain.OPFGet().opffile.marks;
	
	//se a lista de marcadores estiver vazia, mostra isso
	if(marks.getSortedarrayBookmarks().length <= 0)
	{
		var msg = new CTextItem();
		msg.SetText_string( CMsgIface.NoMarkers());
		CSpeak.playItem(msg, null);
		return;
	}
	
	//confirma
	if(!CUtils.ConfirmOperation(CMsgIface.Confirm_DeleteOneMark_speak(), CMsgIface.Confirm_DeleteOneMark_msg(), marks.getMarkerTextSpeak(marks.speakindex)))
	{
		marks._speakcurrent();
		return;
	}
		
	//apagamos
	var arraymarkers = marks.getSortedarrayBookmarks();
	var i = marks.speakindex;
	//se o marcador nao existir, ignoramos o comando
	if(i < 0 || i >= arraymarkers.length)
		return;
	
	var thismarker = arraymarkers[i];
	var currentURI = CUtils.GetXMLChildNoException(thismarker, "URI", null);
	if(currentURI == null)
		return;
	currentURI = currentURI.textContent;
	previousspeakindex = marks.speakindex;
	
	//removemos
	marks.deleteBookmarkByURI( currentURI );

	//voltamos a falar
	marks.speak_prepare();
	marks.setCurrentIndex( previousspeakindex);
	marks._speakcurrent();
},

//para apagar todo o historico
doDelAllMarks:function()
{
	//paramos de falar
	CSpeak.forceEnd();
	
	var marks = CmdMain.OPFGet().opffile.marks;

	//se a lista de marcadores estiver vazia, mostra isso
	if(marks.getSortedarrayBookmarks().length <= 0)
	{
		var msg = new CTextItem();
		msg.SetText_string( CMsgIface.NoMarkers());
		CSpeak.playItem(msg, null);
		return;
	}
	
	//confirma
	if(!CUtils.ConfirmOperation(CMsgIface.Confirm_DeleteAllMark_speak(), CMsgIface.Confirm_DeleteAllMark_msg(), ""))
	{
		marks._speakcurrent();
		return;
	}

	//removemos
	marks.deleteAllBookmarks();

	//voltamos a falar
	marks.speak();
},

//para carregar um item do historico
doenter:function()
{
	return this.gotomarker(CmdMain.OPFGet().opffile.marks.speakindex);
},

//atualiza o tamanho da fonte
UpdateFontSize:function()
{
	if(RunningInsideExercises)
		return;

	var home = CSkin.PegarBaseMarks();
	home = home.getElementById("LivroMarcadores");
	if(home == null)
		return;
		
	//coloca o tamanho selecionado
	home.style.fontSize = CPref.fontsize() + "%";
},

//atiavamos na tela
present:function()
{
	if(RunningInsideExercises)
		return;
		
	//se nao tiver livro, nao vamos
	if(!CmdMain.OPFpresent())
		return false;

	//ativa a tela de inicio
	CmdMain.activateBook();
	CSkin.CmdMarks_present();
},


//para ativar o nosso modo
activate:function()
{
	//se nao tiver livro, nao vamos
	if(!CmdMain.OPFpresent())
		return false;

	//nos marcamos como ativos
	CmdMain.setMode(this);

	this.present();
	
	//comecamos a falar
	CmdMain.OPFGet().opffile.marks.speak();

	CSpeak.CommandEcho_text(CMsgIface.EchoMarks());
},


//atualizar os dados na tela
update:function()
{
	//se nao tiver livro, nao vamos
	if(!CmdMain.OPFpresent())
		return false;

	this.MarkEvents.MarkChangeElements(CmdMain.OPFGet().opffile.marks);
	this.MarkEvents.MarkChangeActive(CmdMain.OPFGet().opffile.marks);
	this.UpdateFontSize();
	
	CmdMain.OPFGet().opffile.marks.setEventListener(this.MarkEvents);
},

gotoNext:function()
{
	//se nao tiver livro, nao vamos
	if(!CmdMain.OPFpresent())
	{
		CmdMain.ShowWarn(CMsgIface.NoBookOpen());
		return;
	}
	
	//se nao tem item...
	if(CmdMain.OPFGet().opffile.marks.getSortedarrayBookmarks().length <= 0)
	{
		CmdMain.ShowWarn(CMsgIface.NoMarkers());
		return;
	}
	//se ja esta no ultimo....
	if(CmdMain.OPFGet().opffile.marks.speakindex + 1 >= CmdMain.OPFGet().opffile.marks.getSortedarrayBookmarks().length)
	{
		CmdMain.ShowWarn(CMsgIface.MarkersEchoEnd());
		return;
	}
	
	//vamos para a frente
	this.present();

	this.gotomarker(CmdMain.OPFGet().opffile.marks.speakindex + 1);
	CSpeak.CommandEcho_text(CMsgIface.EchoMarkNext());
},

gotoPrevious:function()
{
	//se nao tiver livro, nao vamos
	if(!CmdMain.OPFpresent())
	{
		CmdMain.ShowWarn(CMsgIface.NoBookOpen());
		return;
	}
	
	//se nao tem item...
	if(CmdMain.OPFGet().opffile.marks.getSortedarrayBookmarks().length <= 0)
	{
		CmdMain.ShowWarn(CMsgIface.NoMarkers());
		return;
	}
	//se ja esta no ultimo....
	if(CmdMain.OPFGet().opffile.marks.speakindex - 1 < 0)
	{
		CmdMain.ShowWarn(CMsgIface.MarkersEchoStart());
		return;
	}
	
	//vamos para a frente
	this.present();

	this.gotomarker(CmdMain.OPFGet().opffile.marks.speakindex - 1);
	CSpeak.CommandEcho_text(CMsgIface.EchoMarkPrev());
}



//fim da variavel
}


