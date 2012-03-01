//gerencia coisas do skin

var CSkin = 
{

HabilitarBotoesLivro:function()
{
},

//tamanho maximo dos resultados da busca para mostrar na tela
LimiteResutadoBusca:function()
{
	return 60;
},

CmdRead_setTitle:function(titulo)
{
	if(RunningInsideExercises)
		return;
		
	var livro = CSkin.PegarBaseLeitura();
	livro = livro.getElementById("LivroAtual");
	livro.textContent = titulo;
},


CmdMarks_present:function()
{
	if(RunningInsideExercises)
		return;

	document.getElementById("livro").focus();
	this.RestaurarFocoSkin();
	
	//ativar nosso div
	//mostramos os divs que devem estar na tela
	var home = CSkin.PegarBaseMarks();
	var abre = home.getElementById("LivroMarcadores");
	var aba = home.getElementById("AbreMarcadoresLivro");
	abre.style.visibility = "visible";
	aba.className =  "AbreMarcadoresLivroAtivo";
	
	abre = home.getElementById("LivroBusca");
	aba = home.getElementById("AbreBuscaLivro");
	abre.style.visibility = "hidden";
	aba.className =  "AbreBuscaLivro";
	abre = home.getElementById("LivroBuscaHeader");
	abre.style.visibility = "hidden";

	abre = home.getElementById("LivroIndice");
	aba = home.getElementById("AbreIndiceLivro");
	abre.style.visibility = "hidden";
	aba.className =  "AbreIndiceLivro";
},

CmdSearchRes_activate:function()
{
	if(RunningInsideExercises)
		return;

	document.getElementById("livro").focus();
	this.RestaurarFocoSkin();
	
	//ativar nosso div
	//mostramos os divs que devem estar na tela
	var home = CSkin.PegarBaseLeitura();
	var abre;
	var aba;
	abre = home.getElementById("LivroBusca");
	aba = home.getElementById("AbreBuscaLivro");
	abre.style.visibility = "visible";
	aba.className =  "AbreBuscaLivroAtivo";
	abre = home.getElementById("LivroBuscaHeader");
	abre.style.visibility = "visible";
	
	abre = home.getElementById("LivroMarcadores");
	aba = home.getElementById("AbreMarcadoresLivro");
	abre.style.visibility = "hidden";
	aba.className =  "AbreMarcadoresLivro";

	abre = home.getElementById("LivroIndice");
	aba = home.getElementById("AbreIndiceLivro");
	abre.style.visibility = "hidden";
	aba.className =  "AbreIndiceLivro";
},

CmdSplash_activate:function()
{
	if(RunningInsideExercises)
		return;

	document.getElementById("inicio").focus();
	this.RestaurarFocoSkin();
	
	//ativar nosso div
	//mostramos os divs que devem estar na tela
	var home = document.getElementById("inicio").contentDocument;
	var abre = home.getElementById("InicioAbertura");
	abre.style.visibility = "visible";
	
	abre = home.getElementById("InicioLivroDados");
	abre.style.visibility = "hidden";
	
	abre = home.getElementById("LivroDados");
	abre.style.visibility = "hidden";
},

CmdInfo_activate:function()
{
	if(RunningInsideExercises)
		return;

	document.getElementById("inicio").focus();
	this.RestaurarFocoSkin();
	
	//ativar nosso div
	//mostramos os divs que devem estar na tela
	var home = document.getElementById("inicio").contentDocument;
	var abre = home.getElementById("InicioAbertura");
	abre.style.visibility = "hidden";
	
	abre = home.getElementById("InicioLivroDados");
	abre.style.visibility = "visible";
	
	abre = home.getElementById("LivroDados");
	abre.style.visibility = "visible";
},

//ativa o historico
CmdHist_activate:function()
{
	if(RunningInsideExercises)
		return;

	document.getElementById("inicio").focus();
	this.RestaurarFocoSkin();

	
	//ativar nosso div
	//mostramos os divs que devem estar na tela
	var home = CSkin.PegarBaseHistorico();
	var abre = home.getElementById("InicioHistorico");
	var aba = home.getElementById("AbreHistorico");
	abre.style.visibility = "visible";
	aba.className =  "AbreHistoricoAtivo";
	
	abre = home.getElementById("InicioMarcadores");
	aba = home.getElementById("AbreMarcadores");
	abre.style.visibility = "hidden";
	aba.className =  "AbreMarcadores";

	abre = home.getElementById("InicioBiblioteca");
	aba = home.getElementById("AbreBiblioteca");
	abre.style.visibility = "hidden";
	aba.className =  "AbreBiblioteca";
},

CmdNcx_activate:function()
{
	if(RunningInsideExercises)
		return;

	document.getElementById("livro").focus();
	this.RestaurarFocoSkin();
	
	//ativar nosso div
	//mostramos os divs que devem estar na tela
	var home = CSkin.PegarBaseIndice();
	var abre = home.getElementById("LivroIndice");
	var aba = home.getElementById("AbreIndiceLivro");
	abre.style.visibility = "visible";
	aba.className =  "AbreIndiceLivroAtivo";
	
	abre = home.getElementById("LivroBusca");
	aba = home.getElementById("AbreBuscaLivro");
	abre.style.visibility = "hidden";
	aba.className =  "AbreBuscaLivro";
	abre = home.getElementById("LivroBuscaHeader");
	abre.style.visibility = "hidden";

	abre = home.getElementById("LivroMarcadores");
	aba = home.getElementById("AbreMarcadoresLivro");
	abre.style.visibility = "hidden";
	aba.className =  "AbreMarcadoresLivro";
},

CmdRead_activate:function()
{
	if(RunningInsideExercises)
		document.getElementById("exerclivro").focus();
	else
		document.getElementById("livro").focus();
	this.RestaurarFocoSkin();
},

//ativa a aba de inicio
activateStart:function()
{
	if(RunningInsideExercises)
		return;
		
	document.getElementById("deckFrames").selectedIndex = 0;
	document.getElementById("inicio").focus();
	this.RestaurarFocoSkin();
},

//ativa a aba de inicio
activateBook:function()
{
	if(RunningInsideExercises)
	{
		document.getElementById("exerclivro").focus();
	}
	else
	{
		document.getElementById("deckFrames").selectedIndex = 1;
		document.getElementById("livro").focus();
	}
	this.RestaurarFocoSkin();
},


//prefixo para os htmls que montamos
prefixoHtml:function()
{
	return "";
},

PegarBaseHistorico:function()
{
	if(RunningInsideExercises)
		return document;
	return document.getElementById("inicio").contentDocument;
},

PegarBaseIndice:function()
{
	if(RunningInsideExercises)
		return document;
	return document.getElementById("livro").contentDocument;
},

PegarBaseMarks:function()
{
	if(RunningInsideExercises)
		return document;
	return document.getElementById("livro").contentDocument;
},

PegarBaseLeitura:function()
{
	if(RunningInsideExercises)
		return document;
	return document.getElementById("livro").contentDocument;
},

PegarBaseInfo:function()
{
	if(RunningInsideExercises)
		return document;

	return document.getElementById("inicio").contentDocument;
},


RestoreFocus_executado: false,

//coloca o foco no nosso elemento base
RestaurarFocoSkin:function()
{
	//coloca o foco no nosso controle de foco
	document.getElementById("controle_semfoco").hidden = false;
	document.getElementById("controle_semfoco").focus();
	document.getElementById("controle_semfoco").hidden = true;

	//escuta o evento de blur
	if(!this.RestoreFocus_executado)
	{
		document.getElementById("controle_semfoco").addEventListener('blur', CmdMain.blurevent, false);
		this.RestoreFocus_executado = true;
	}
		

	//nao pode colocar isto, dá foco demais
	//CDlgMan_focus.gotfocus();
},

//traduz coisas adicionais (parte é feita pela rotina geral)
TraduzirInterface:function(nossolocal)
{
	//localizacoes em htmls
	if(!RunningInsideExercises)
	{
		document.getElementById("inicio").contentDocument.getElementById("AbreHistorico").textContent = nossolocal.PegarTexto("AbreHistorico");
		document.getElementById("inicio").contentDocument.getElementById("AbreMarcadores").textContent = nossolocal.PegarTexto("AbreMarcadores");
		document.getElementById("inicio").contentDocument.getElementById("AbreBiblioteca").textContent = nossolocal.PegarTexto("AbreBiblioteca");
		document.getElementById("inicio").contentDocument.getElementById("Initop").textContent = nossolocal.PegarTexto("Initop");
		document.getElementById("inicio").contentDocument.getElementById("homeTxt.1").textContent = nossolocal.PegarTexto("homeTxt.1");
		document.getElementById("inicio").contentDocument.getElementById("homeTxt.2").textContent = nossolocal.PegarTexto("homeTxt.2");
		document.getElementById("inicio").contentDocument.getElementById("LivroDados").textContent = nossolocal.PegarTexto("LivroDados");
		document.getElementById("inicio").contentDocument.getElementById("homeDados.Title").textContent = nossolocal.PegarTexto("homeDados.Title");
		document.getElementById("inicio").contentDocument.getElementById("homeDados.Author").textContent = nossolocal.PegarTexto("homeDados.Author");
		document.getElementById("inicio").contentDocument.getElementById("homeDados.Publisher").textContent = nossolocal.PegarTexto("homeDados.Publisher");
		document.getElementById("inicio").contentDocument.getElementById("homeDados.LastRead").textContent = nossolocal.PegarTexto("homeDados.LastRead");
	}
	
	if(!RunningInsideExercises)
	{
		document.getElementById("livro").contentDocument.getElementById("AbreIndiceLivro").textContent = nossolocal.PegarTexto("AbreIndiceLivro");
		document.getElementById("livro").contentDocument.getElementById("AbreMarcadoresLivro").textContent = nossolocal.PegarTexto("AbreMarcadoresLivro");
		document.getElementById("livro").contentDocument.getElementById("AbreBuscaLivro").textContent = nossolocal.PegarTexto("AbreBuscaLivro");
		document.getElementById("inicio").contentDocument.getElementById("livroPonto").textContent = nossolocal.PegarTexto("livroPonto");
	}
}


//fim da variavel
}

