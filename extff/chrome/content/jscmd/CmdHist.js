/// <reference path="../js/CHist.js" />

//controle do historico

var CmdHist = 
{

HistEvents:
{
	//o elemento que estava anteriormente ativo
	PreviousHilite: null,

	//modou o item ativo
	HistChangeActive: function(hist)
	{
		//volta o item anterior
		if(this.PreviousHilite != null)
		{
			try
			{
				this.PreviousHilite.attributes.getNamedItem("class").value = "HistoricoLista";
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
			//no ifram de home
			var home = CSkin.PegarBaseHistorico();
			this.PreviousHilite = home.getElementById("InicioHistoricoItem" + CHist.speakindex);
			if(this.PreviousHilite)
			{
				this.PreviousHilite.attributes.getNamedItem("class").value = "HistoricoListaHilite";
				
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
	HistChangeElements: function(hist)
	{	
		//prefixo para o html
		var prefixoHtml = CSkin.prefixoHtml();
		
		//nao temos nada ativo
		this.PreviousHilite = null;
		
		//reconstroi a lista
		var home = CSkin.PegarBaseHistorico();

		//se o historico estiver vazio, mostra isso		
		if(CHist.histarray.length <= 0)
		{
			home.getElementById("InicioHistorico").innerHTML = '<' + prefixoHtml + 'span class="HistoricoLista">' 
				+ CMsgIface.NoHistory() + '</' + prefixoHtml + 'span>';
			return;
		}

		//limpa a lista
		home.getElementById("InicioHistorico").innerHTML = "";
		// DAQUI PARA A FRENTE PEDRO ALTEROU PARA MONTAR O HTM EM TABELA
		var msg = '<' + prefixoHtml + 'table width="100%" border="0" cellspacing="0" cellpadding="4">';
		for(var i=0; i<CHist.histarray.length; i++)
		{
			var item = CHist.histarray[i];
			var msgitem = "";
			//msg += "< - removablemedia: " + item.removablemedia;
			//msg += "opfuri: " + item.opfuri;
			msgitem = item.title;
			//msg += "dateaccess: " + item.dateaccess;

			home.getElementById("InicioHistoricoConv").textContent = msgitem;
			msg +="<" + prefixoHtml + "tr onclick='window.parent.CmdHist.gotohistitem(" + i +");' class='HistoricoLista' id='InicioHistoricoItem" + i + "'>";
			msg += "<" + prefixoHtml + "td width='15px'>" + (i + 1) + "</" + prefixoHtml + "td>";
			msg += "<" + prefixoHtml + "td>" + home.getElementById("InicioHistoricoConv").innerHTML + "</" + prefixoHtml + "td></" + prefixoHtml + "tr>";
		}
		msg += '</' + prefixoHtml + 'table>';
		// ALTERADO ATÉ AQUI PELO PEDRO
		
		//limpa o div de conversao
		home.getElementById("InicioHistoricoConv").textContent = "";
		//transfere para a tela
		home.getElementById("InicioHistorico").innerHTML = msg;
	}
},

//no onload da pagina
initializehist:function()
{
	CHist.setEventListener(this.HistEvents);
	var home = CSkin.PegarBaseHistorico();
	var aba = home.getElementById("AbreHistorico");
	aba.className =  "AbreHistoricoAtivo";
	this.update();
},


//para carregar um item do historico
gotohistitem:function(i)
{
	//paramos de falar
	CSpeak.stopAndClear();
	
	if(i < 0 || i >= CHist.histarray.length)
	{
		CDialogs.WarnEscToContinue(CMsgIface.HistoryError(), null);
		return false;
	}
	
	if(!CButtons.OpenOPFbyPath(CHist.histarray[i].opfuri, true, false))
		return false;
		
	return true;
},

//para carregar um item do historico
doenter:function()
{
	var i = CHist.speakindex;
	if(i < 0 || i >= CHist.histarray.length)
	{
		CDialogs.WarnEscToContinue(CMsgIface.HistoryError(), null);
		return false;
	}
	
	if(!CButtons.OpenOPFbyPath(CHist.histarray[i].opfuri, true, false))
		return false;
		
	return true;
},

//para apagar um item do historico
doDelHist:function()
{
	//paramos de falar
	CSpeak.forceEnd();
	
	//se a lista de marcadores estiver vazia, mostra isso
	if(CHist.histarray.length <= 0)
	{
		var msg = new CTextItem();
		msg.SetText_string( CMsgIface.NoHistory());
		CSpeak.playItem(msg, null);
		return;
	}
	
	//confirma
	var text = "";
	if(CHist.speakindex < CHist.histarray.length && CHist.speakindex >= 0)
		text = CHist.histarray[CHist.speakindex].title;
	if(!CUtils.ConfirmOperation(CMsgIface.Confirm_DeleteOneHist_speak(), CMsgIface.Confirm_DeleteOneHist_msg(), text))
	{
		CHist._speakcurrent();
		return;
	}
		
	//apagamos
	var speakindex = CHist.speakindex;
	CHist.doDelHist();
	CHist.speakindex = speakindex;

	//volta a falar
	CHist._speakcurrent();
},

//para apagar todo o historico
doDelAllHist:function()
{
	//paramos de falar
	CSpeak.forceEnd();
	
	//se a lista de marcadores estiver vazia, mostra isso
	if(CHist.histarray.length <= 0)
	{
		var msg = new CTextItem();
		msg.SetText_string( CMsgIface.NoHistory());
		CSpeak.playItem(msg, null);
		return;
	}
	
	//confirma
	if(!CUtils.ConfirmOperation(CMsgIface.Confirm_DeleteAllHist_speak(), CMsgIface.Confirm_DeleteAllHist_msg(), ""))
	{
		CHist._speakcurrent();
		return;
	}
		
	//apagamos
	CHist.doDelAllHist();
	CHist.speak();
},

//atualiza o tamanho da fonte
UpdateFontSize:function()
{
	var home = CSkin.PegarBaseHistorico();
	home = home.getElementById("InicioHistorico");
	if(home == null)
		return;
		
	//coloca o tamanho selecionado
	home.style.fontSize = CPref.fontsize() + "%";
},


//para ativar o nosso modo
activate:function()
{
	//nos marcamos como ativos
	CmdMain.setMode(this);

	//ativa a tela de inicio
	CmdMain.activateStart();
	
	CSkin.CmdHist_activate();
	
	//comecamos a falar
	CHist.speak();
},


//atualizar os dados na tela
update:function()
{
	this.HistEvents.HistChangeElements(CHist);
	this.HistEvents.HistChangeActive(CHist);
	this.UpdateFontSize();
}

//fim da variavel
}


