
var tabcmdCKeys = 
{
//nao pergunte como, mas o firefox manda 
processandoTelca: false,


//evento de keydown
keypress:function(evt)
{
	if(this.processandoTelca)
		return;
	this.processandoTelca = true;
	this.executar_keypress(evt);
	this.processandoTelca = false;
},

executar_keypress:function(evt)
{
	try
	{
		//vamos rodar
		var este_processamento = this._keyevent(evt);
		if(este_processamento == "repassar")
			return;
			
		if(este_processamento != "")
		{
			//para cancelar a acao dessa tecla
			evt.preventDefault();
			clicktabcmd(este_processamento);
			return;
		}

		//alt-f4 repassamos
		if(evt.altKey == true && evt.keyCode == 115)
			return;
		
		//nao processamos a tecla, avisamos que a tecla nao existe
		var tecla = CSpellMsg.KeyText(evt);

		//mensagem
		tecla = CMsgIface.KeyNotMapped(tecla);
		
		//avisamos, ignorando eco de comandos
		CSpeak.forceEnd();
		CSpeak.CommandEchoGo_text(tecla);
		
		//para cancelar a acao dessa tecla
		evt.preventDefault();
		return;
	}
	catch(e)
	{
	}
},

//processamento efetivo
//retorna true se processamos o evento
_keyevent:function(evt)
{
	//teclas com control
	if(evt.ctrlKey == true && evt.altKey == false)
	{
		//tecla control M indice de marcadores do livro
		if(evt.charCode == 77 || evt.charCode == 109)
		{
			return "tabcmd_lmark";
		}
		
		//tecla control A ajuda global
		if(evt.charCode == 65 || evt.charCode == 97)
		{
			return "tabcmd_tut";
		}
		
		//tecla control C conf do livro
		if(evt.charCode == 67 || evt.charCode == 99)
		{
			return "tabcmd_cflivro";
		}

		//tecla control G Liga e desliga leitura de numero de pagina
		if(evt.charCode == 71 || evt.charCode == 103)
		{
			return "tabcmd_lpag";
		}

		//tecla control J liga/desliga leitura das listas
		if(evt.charCode == 74 || evt.charCode == 106)
		{
			return "tabcmd_llista";
		}

		//tecla control P, resultados da busca
		if(evt.charCode == 80 || evt.charCode == 112)
		{
			return "tabcmd_rbusca";
		}
		
		//control seta para baixo
		if(evt.charCode == 0 && evt.keyCode == 40)
		{
			return "repassar";
		}
		
		//control seta para cima
		if(evt.charCode == 0 && evt.keyCode == 38)
		{
			return "repassar";
		}
		
		//control seta para direita
		if(evt.charCode == 0 && evt.keyCode == 39)
		{
			return "repassar";
		}
		
		//control seta para esquerda
		if(evt.charCode == 0 && evt.keyCode == 37)
		{
			return "repassar";
		}
		
	}
	
	//teclas com alt
	if(evt.ctrlKey == true && evt.altKey == true)
	{
		//tecla control alt M ativa/destiva indicador de marcadores
		if(evt.charCode == 77 || evt.charCode == 109)
		{
			return "tabcmd_indmark";
		}
		
	}
	

	//teclas normais, nao processamos com control ou alt
	//ignoramos o shift
	if(evt.ctrlKey == false && evt.altKey == false)
	{
		//tratamento do enter
		//ele depende de onde está o foco
		if(evt.charCode == 0 && evt.keyCode == 13)
		{
			return "repassar";
		}
		
		//esc fechar o aplicativo
		if(evt.charCode == 0 && evt.keyCode == 27)
		{
			return "repassar";
		}
		
		//tab lista de comandos
		if(evt.charCode == 0 && evt.keyCode == 9)
		{
			return "repassar";
		}
		
		//espaco paly/apuse
		if(evt.charCode == 32)
		{
			return "repassar";
		}
		
		//seta para baixo
		if(evt.charCode == 0 && evt.keyCode == 40)
		{
			return "repassar";
		}
		
		//seta para cima
		if(evt.charCode == 0 && evt.keyCode == 38)
		{
			return "repassar";
		}
		
		//seta para esquerda
		if(evt.charCode == 0 && evt.keyCode == 37)
		{
			return "repassar";
		}
		
		//seta para direita
		if(evt.charCode == 0 && evt.keyCode == 39)
		{
			return "repassar";
		}

		//tecla O, abrir livro
		if(evt.charCode == 79 || evt.charCode == 111)
		{
			return "tabcmd_abrir";
		}
		
		//tecla P, nova busca
		if(evt.charCode == 80 || evt.charCode == 112)
		{
			return "tabcmd_busca";
		}
		
		//tecla V leitura
		if(evt.charCode == 86 || evt.charCode == 118)
		{
			return "tabcmd_leit";
		}
		
		//tecla H hstorico
		if(evt.charCode == 72 || evt.charCode == 104)
		{
			return "tabcmd_hist";
		}
		
		//tecla I indice
		if(evt.charCode == 73 || evt.charCode == 105)
		{
			return "tabcmd_ind";
		}
		
		//tecla Z chavear mp3
		if(evt.charCode == 90 || evt.charCode == 122)
		{
			return "tabcmd_laudio";
		}
		
		//tecla A ajuda local
		if(evt.charCode == 65 || evt.charCode == 97)
		{
			return "tabcmd_tut";
		}
		
		//tecla F1 ajuda local
		if(evt.keyCode == 112 && evt.charCode == 0)
		{
			return "tabcmd_tut";
		}
		
		//tecla T tutorial
		if(evt.charCode == 84 || evt.charCode == 116)
		{
			return "tabcmd_tut";
		}
		
		//tecla R suporte
		if(evt.charCode == 82 || evt.charCode == 114)
		{
			return "tabcmd_sup";
		}
		
		//tecla Q créditos
		if(evt.charCode == 81 || evt.charCode == 113)
		{
			return "tabcmd_cred";
		}
		
		//tecla U atualizacoes
		if(evt.charCode == 85 || evt.charCode == 117)
		{
			return "tabcmd_atu";
		}
		
		//tecla X chavear voz do livro
		if(evt.charCode == 88 || evt.charCode == 120)
		{
			return "tabcmd_voz";
		}
		
		//tecla M marcador
		if(evt.charCode == 77 || evt.charCode == 109)
		{
			return "tabcmd_edtmark";
		}
		
		//tecla C conf global
		if(evt.charCode == 67 || evt.charCode == 99)
		{
			return "tabcmd_conf";
		}

		//tecla N indicador de nota de rodapé
		if(evt.charCode == 78 || evt.charCode == 110)
		{
			return "tabcmd_rodape";
		}

		//tecla G ir para pagina
		if(evt.charCode == 71 || evt.charCode == 103)
		{
			return "tabcmd_irpag";
		}

		//tecla F tamanho da fonte
		if(evt.charCode == 70 || evt.charCode == 102)
		{
			return "tabcmd_fonte";
		}

		//tecla J liga/desliga leitura automatica do texto
		if(evt.charCode == 74 || evt.charCode == 106)
		{
			return "tabcmd_laut";
		}

		//tecla S soletracao
		if(evt.charCode == 83 || evt.charCode == 115)
		{
			return "tabcmd_sole";
		}

		//tecla E exportar marcadores/anotacoes
		if(evt.charCode == 69 || evt.charCode == 101)
		{
			return "tabcmd_export";
		}

	}
	
	//nao processamos
	return false;
}



}


