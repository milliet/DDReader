//gerencia coisas do skin

/*
nota: quando foros usar o skin visual, precis testar se esta reconheendo corretamente a perda do foco
(isto e, quando acessar outro apr]licativo tem que parar de falar imediatamente)
*/

var CSkin = 
{

HabilitarBotoesLivro:function()
{
	var listaHabilitarBotoesLivro = [ "toolLeitura", "toolMarker", "toolPrefs", "toolBusca",
		"buttonExport", "AbreIndiceLivro", "AbreMarcadoresLivro", "AbreBuscaLivro", 
		"LivroDados", "LivroAtualTab" ];

	for(var i = 0; i < listaHabilitarBotoesLivro.length; i++)
		document.getElementById(listaHabilitarBotoesLivro[i]).disabled = false;
},

//tamanho maximo dos resultados da busca para mostrar na tela
LimiteResutadoBusca:function()
{
	return 120;
},


CmdRead_setTitle:function(titulo)
{
	var livro = CSkin.PegarBaseLeitura();
	livro = livro.getElementById("LivroAtual");
	livro.value = titulo;
},


CmdMarks_present:function()
{
	document.getElementById("tabboxSidebar").selectedIndex = 2;
	document.getElementById("toolPlay").focus();
},

CmdSearchRes_activate:function()
{
	document.getElementById("tabboxSidebar").selectedIndex = 3;
	document.getElementById("toolPlay").focus();
},

CmdSplash_activate:function()
{
	document.getElementById("tabboxPrincipal").selectedIndex = 0;
	document.getElementById("toolPlay").focus();
},

CmdInfo_activate:function()
{
	document.getElementById("tabboxPrincipal").selectedIndex = 1;
	document.getElementById("toolPlay").focus();
},

CmdNcx_activate:function()
{
	document.getElementById("tabboxSidebar").selectedIndex = 1;
	document.getElementById("toolPlay").focus();
},

CmdRead_activate:function()
{
	document.getElementById("tabboxPrincipal").selectedIndex = 2;
	document.getElementById("toolPlay").focus();
},

//ativa o historico
CmdHist_activate:function()
{
	document.getElementById("tabboxSidebar").selectedIndex = 0;
	document.getElementById("toolPlay").focus();
},

//ativa a aba de inicio
activateStart:function()
{
//	document.getElementById("deckFrames").selectedIndex = 0;
},

//ativa a aba de inicio
activateBook:function()
{
//	document.getElementById("deckFrames").selectedIndex = 1;
},


//prefixo para os htmls que montamos
prefixoHtml:function()
{
	return "html:";
},

PegarBaseHistorico:function()
{
//	return document.getElementById("DivInicioHistorico");
	return document;
},


PegarBaseIndice:function()
{
	return document;
},

PegarBaseMarks:function()
{
	return document;
},

PegarBaseLeitura:function()
{
	return document;
},

PegarBaseInfo:function()
{
	return document;
},

//coloca o foco no nosso elemento base
RestaurarFocoSkin:function()
{
//	document.getElementById("inicio").focus();
	CDlgMan_focus.gotfocus();
},

//traduz coisas adicionais (parte é feita pela rotina geral)
TraduzirInterface:function(nossolocal)
{
	//localizacoes em htmls
	document.getElementById("AbreHistorico").textContent = nossolocal.PegarTexto("AbreHistorico");
//	document.getElementById("AbreMarcadores").textContent = nossolocal.PegarTexto("AbreMarcadores");
//	document.getElementById("AbreBiblioteca").textContent = nossolocal.PegarTexto("AbreBiblioteca");
	document.getElementById("Initop").textContent = nossolocal.PegarTexto("Initop");
	document.getElementById("homeTxt.1").textContent = nossolocal.PegarTexto("homeTxt.1");
	document.getElementById("homeTxt.2").textContent = nossolocal.PegarTexto("homeTxt.2");
	document.getElementById("LivroDados").textContent = nossolocal.PegarTexto("LivroDados");
	document.getElementById("homeDados.Title").textContent = nossolocal.PegarTexto("homeDados.Title");
	document.getElementById("homeDados.Author").textContent = nossolocal.PegarTexto("homeDados.Author");
	document.getElementById("homeDados.Publisher").textContent = nossolocal.PegarTexto("homeDados.Publisher");
	document.getElementById("homeDados.LastRead").textContent = nossolocal.PegarTexto("homeDados.LastRead");
	
	document.getElementById("AbreIndiceLivro").textContent = nossolocal.PegarTexto("AbreIndiceLivro");
	document.getElementById("AbreMarcadoresLivro").textContent = nossolocal.PegarTexto("AbreMarcadoresLivro");
	document.getElementById("AbreBuscaLivro").textContent = nossolocal.PegarTexto("AbreBuscaLivro");
	document.getElementById("livroPonto").textContent = nossolocal.PegarTexto("livroPonto");
}


//fim da variavel
}

