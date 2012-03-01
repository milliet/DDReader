//controle do modo de leitura

//temos uma classe inicial que ajuda a controlar o texto sendo exibido na ela
//colocamos como uma classe individual porque nos exercícios temos 2 livros sendo exibidos ao mesmo tempo,
//e as variáveis são exatamente as mesmas
function CmdAuxRead_Variables()
{
	this.this_currentTextfile = "";
	this.this_currentTextNode = null;
	this.this_currentTextClass = "";
}

//URI do arquivo que está na tela
CmdAuxRead_Variables.prototype.this_currentTextfile = "";
//elemento dentro do arquivo que está ativo
CmdAuxRead_Variables.prototype.this_currentTextNode = null;
//a classe dele
CmdAuxRead_Variables.prototype.this_currentTextClass = "";



/*
classe efetiva do controle do modo de leitura
*/
var CmdRead = 
{
//para deixar o nosso modo na tela, sem ativar
preactivate:function()
{
	//se nao tiver livro, nao vamos
	if(!CmdMain.OPFpresent())
		return;
		
	//ativa a tela do livro
	CmdMain.activateBook();
},

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
	CSkin.CmdRead_activate();
	
	//e comeca a falar
	CmdMain.OPFGet().opffile.smils.speak();
},


//atualizar os dados na tela
update:function()
{
	//se nao tiver livro, nao vamos
	if(!CmdMain.OPFpresent())
		return;

	//atualizamos o titulo na area de titulo
	var titulo = CmdMain.OPFGetMeta(CmdMain.OPFGet().opffile.metadata_tagTitle, false).toString();
	CSkin.CmdRead_setTitle(titulo);

	//no update nao fazemos nada...
	//na verdade, recebemos eventos via TextfileChanged
},

//limpa a tela
clear:function()
{
	if(RunningInsideExercises)
	{
		var livroCorpo = document.getElementById("exerclivro");
		livroCorpo.innerHTML = " ";
		livroCorpo = document.getElementById("exerctextoref");
		livroCorpo.innerHTML = " ";
	}
	else
	{
		var livro = CSkin.PegarBaseLeitura();
		livro = livro.getElementById("LivroLeitura").contentDocument;
		var livroCorpo = livro.getElementById("LivroLeituraCorpo");
		livroCorpo.innerHTML = " ";
	}

	//zera as nossas variaveis
	this.AuxRead_Variables.this_currentTextfile= "";
	this.AuxRead_Variables.this_currentTextNode= null;
	this.AuxRead_Variables.this_currentTextClass= "";

	this.AuxRead_Var_ExerciseBody.this_currentTextfile= "";
	this.AuxRead_Var_ExerciseBody.this_currentTextNode= null;
	this.AuxRead_Var_ExerciseBody.this_currentTextClass= "";
},


//atualiza o tamanho da fonte
UpdateFontSize:function()
{
	if(RunningInsideExercises)
	{
		var livroCorpo = document.getElementById("exerclivro").contentDocument;;
		livroCorpo = livroCorpo.getElementById("LivroLeituraCorpo");
		livroCorpo.style.fontSize = CPref.fontsize() + "%";
		
		var livroCorpo = document.getElementById("exerctextoref").contentDocument;;
		livroCorpo = livroCorpo.getElementById("LivroLeituraCorpo");
		livroCorpo.style.fontSize = CPref.fontsize() + "%";
	}
	else
	{
		var home = CSkin.PegarBaseLeitura();
		home = home.getElementById("LivroLeitura").contentDocument;
		if(home == null)
			return;
		home = home.getElementById("LivroLeituraCorpo");
		if(home == null)
			return;
			
		//coloca o tamanho selecionado
		home.style.fontSize = CPref.fontsize() + "%";
	}
},


//variaveis de controle do estado da leitura
//estas controlam o livro normal e a referencia do exercicio (o que aparece na parte de baixo da tela)
AuxRead_Variables: new CmdAuxRead_Variables(),
//estas controlam o corpo do exercicio, que fica na parte de baixo da tela
AuxRead_Var_ExerciseBody: new CmdAuxRead_Variables(),

//somente nso exercicios, qual o conjunto ativo: o crpo ou a referencia
AuxRead_Vars_ExcerciseBody_active: false,

//evento TextfileChanged
TextfileChanged:function(textfilearray)
{
	this.TextfileChangeRoutine(textfilearray, this.AuxRead_Variables, false);
},

//evento TextfileChanged
//esta rotina so existe quando no modo de exercicios
TextfileChange_ExerciseBody:function(textfilearray)
{
	this.TextfileChangeRoutine(textfilearray, this.AuxRead_Var_ExerciseBody, true);
},

//a leitura chegou em um controle
//esta rotina so existe quando no modo de exercicios
ExerciseBody_HitControl:function(id_controle_ativar, tipo_controle)
{
	if(!RunningInsideExercises)
		return;

	var livro = CSkin.PegarBaseLeitura();
	var livroCorpo = null;
	livro = livro.getElementById("exerclivro").contentDocument;
	livroCorpo = livro.getElementById("LivroLeituraCorpo");

	//avisamos ao gerenciador dos controles
	CDlgExerciseManager.DlgMan_HitControl(tipo_controle, id_controle_ativar, livro.getElementById(id_controle_ativar), livro);
},

TextfileChangeRoutine:function(textfilearray, CurrentAuxReadVariables, corpo_exercicio_ativo)
{
	var livro = CSkin.PegarBaseLeitura();
	var livroCorpo = null;
	if(RunningInsideExercises)
	{
		if(corpo_exercicio_ativo)
		{
			livro = livro.getElementById("exerclivro").contentDocument;
			livroCorpo = livro.getElementById("LivroLeituraCorpo");
		}
		else
		{
			livro = livro.getElementById("exerctextoref").contentDocument;
			livroCorpo = livro.getElementById("LivroLeituraCorpo");
		}
	}
	else
	{
		livro = livro.getElementById("LivroLeitura").contentDocument;
		livroCorpo = livro.getElementById("LivroLeituraCorpo");
	}
	
	//vamos ver se mudou o arquivo
	if(CurrentAuxReadVariables.this_currentTextfile != textfilearray.getCurrentTextfile().TXTabs_href)
	{
		CurrentAuxReadVariables.this_currentTextfile = textfilearray.getCurrentTextfile().TXTabs_href;

		//nao funciona se o xml nao tiver um dtd de transformacao
		//frame.src = document.getElementById("iframetexto");
		
		//vamos fazer a transformacao XSLT
		//se der erro, colocamos o texto corrido, fazer oq ue...
		try
		{
			var basefile = CUtils.GetExtensionFolder();
			basefile.append("defaults");
			basefile.append("transfdef.xsl");
			var transformador = new XSLTProcessor();
			transformador.importStylesheet( CUtils.LoadXML("file:///" + basefile.target) );

			//processar a partir da string
			var documentoXML = new DOMParser().parseFromString( textfilearray.getCurrentTextfile().TextFileraw, "text/xml" );
			var documentoTransformado = transformador.transformToDocument(documentoXML);

/*
esta alternaiva é mais lenta
			livroCorpo.innerHTML = " ";
			livroCorpo.replaceChild(
				documentoTransformado.documentElement, //com o cloneNode é muito mais lento
				livroCorpo.childNodes.item(0) );

			//precisamos disto para que os estilos sejam renderizados
			livroCorpo.innerHTML += " ";
*/
			livroCorpo.innerHTML =(new XMLSerializer()).serializeToString(documentoTransformado.documentElement);
		}
		catch(e)
		{
			livroCorpo.innerHTML = textfilearray.getCurrentTextfile().TextFileraw;
		}

		//temos que resolver o SRC de todos os IMGs
		var imgs = livroCorpo.getElementsByTagName("img");
		for(var i = 0; i < imgs.length; i++)
		{
			var src = imgs.item(i).src;
			//as imagens relativas sao resolvidas conforme o base href da pagina de leitura
			//CALCULAR O CAMINHO DO LEITURA.HTML DA INTERFACE ATUAL
			var basehref = document.location.toString();
			
			//pegamos ate a ultima barra
			var lastSlash = basehref.lastIndexOf("/");
			var lastSlash2 = basehref.lastIndexOf("\\");
			if(lastSlash < lastSlash2)
				lastSlash = lastSlash2;
			basehref = basehref.substring(0, lastSlash + 1);
			if(src.indexOf(basehref) == 0)
			{
				imgs.item(i).src = CUtils.ResolveURL(imgs.item(i).src.substring(basehref.length), textfilearray.getCurrentTextfile().TXTabs_href);
			}
		}
		
		this.UpdateFontSize();
	}
	
	
	//mover o destaque
	
	//tiramos o destaque anterior
	if(CurrentAuxReadVariables.this_currentTextNode)
	{
		//ignoramos erros
		try
		{
			CurrentAuxReadVariables.this_currentTextNode.attributes.getNamedItem("class").value = CurrentAuxReadVariables.this_currentTextClass;
		}
		catch(e)
		{
			//nao fazemos nada
		}
	}

	//limpa o item anterior, nao precisamos mais dele	
	CurrentAuxReadVariables.this_currentTextNode = null;
	CurrentAuxReadVariables.this_currentTextClass = "";
	
	//armazenamos o item atual
	//se der erro, ignoramos, fazer o que....
	try
	{
		CurrentAuxReadVariables.this_currentTextNode = livro.getElementById(textfilearray.getCurrentAnchor());
		CurrentAuxReadVariables.this_currentTextClass = "";
		
		if(CurrentAuxReadVariables.this_currentTextNode.attributes.getNamedItem("class"))
		{
			CurrentAuxReadVariables.this_currentTextClass = CurrentAuxReadVariables.this_currentTextNode.attributes.getNamedItem("class").value;
		}
		
		//movemos na tela
		if(CurrentAuxReadVariables.this_currentTextNode != null)
		{
			//somente se nao está visivel
			var docum = livro.documentElement;
			var precisa = false;
			if(CurrentAuxReadVariables.this_currentTextNode.offsetTop < docum.scrollTop)
				precisa = true;
			if(CurrentAuxReadVariables.this_currentTextNode.offsetTop + CurrentAuxReadVariables.this_currentTextNode.scrollHeight > docum.scrollTop + docum.clientHeight)
				precisa = true;
			if(precisa)
				CurrentAuxReadVariables.this_currentTextNode.scrollIntoView(true);
		}
	}
	catch(e)
	{
		//ignoramos erros
	}


	//se for um item invalido, paramos por aqui
	//mas nao damos erro por causa dos livros só audio
	if(CurrentAuxReadVariables.this_currentTextNode == null)
	{
		//mas nao damos erro por causa dos livros só audio
		//this._warnIDerror();
		return;
	}
	if(CurrentAuxReadVariables.this_currentTextNode.attributes == null)
	{
		//mas nao damos erro por causa dos livros só audio
		//this._warnIDerror();
		return;
	}
	if(CurrentAuxReadVariables.this_currentTextNode.attributes.getNamedItem == null)
	{
		//mas nao damos erro por causa dos livros só audio
		//this._warnIDerror();
		return;
	}
		
	//mudamos o destaque do elemento atual
	this._changeHiliteClass(CurrentAuxReadVariables, "LeituraHilite");
},

//mudamos o destaque do elemento atual
_changeHiliteClass:function(CurrentAuxReadVariables, hiliteStyleToApply)
{
	if(CurrentAuxReadVariables.this_currentTextNode == null)
		return;

	if(CurrentAuxReadVariables.this_currentTextNode.attributes.getNamedItem("class"))
	{
		//verificar e pensar melor
		//noque que sobrepomos a claase... mas isso só sera um problema quando tiver estilo no html do livro
		//CurrentAuxReadVariables.this_currentTextNode.attributes.getNamedItem("class").value += " " + hiliteStyleToApply;
		CurrentAuxReadVariables.this_currentTextNode.attributes.getNamedItem("class").value = hiliteStyleToApply;
	}
	else
	{
		//tem que criar o atributo class
		var classe = document.createAttribute("class");
		classe.value = hiliteStyleToApply;
		CurrentAuxReadVariables.this_currentTextNode.attributes.setNamedItem(classe);
	}

},


//damos um erro, somente uma vez por sessao
_warnIDerror:function()
{
	if(!CmdMain.OPFpresent())
		return;
		
	//se ja demos erro, nao falamos de novo
	if(CmdMain.OPFGet().warnIDerror)
		return;
	
	CmdMain.OPFGet().warnIDerror = true;
	CDialogs.WarnEscToContinue(CMsgIface.TextError(), null);
},


//pega o texto para TTS do elemento autalmente selecionado
getCurrentTextTTS:function()
{
	return this.getCurrentTextTT_Routine(this.AuxRead_Variables);
},

//esta rotina so existe quando no modo de exercicios
getCurrentTextTTS_ExerciseBody:function()
{
	return this.getCurrentTextTT_Routine(this.AuxRead_Var_ExerciseBody);
},

getCurrentTextTT_Routine:function(variaveis_ativas)
{
	//qualquer erro, retornamos um elemento vazio
	try
	{
		if(variaveis_ativas.this_currentTextNode != null)
			return variaveis_ativas.this_currentTextNode;
	}
	catch(e)
	{
	}
	
	//um no com texto vazio
	var ret = document.createElement("span");
	ret.textContent = "";
	return ret;
},

//pega a arvore de html atualmente na tela
getCurrentHTMLTree:function()
{
	if(RunningInsideExercises)
	{
		var livro = CSkin.PegarBaseLeitura();
		livro = livro.getElementById("exerclivro").contentDocument;
		var livroCorpo = livro.getElementById("LivroLeituraCorpo");
		return livroCorpo;
	}
	else
	{
		var livro = CSkin.PegarBaseLeitura();
		livro = livro.getElementById("LivroLeitura").contentDocument;
		var livroCorpo = livro.getElementById("LivroLeituraCorpo");
		return livroCorpo;
	}
},


//terminou de carregar os exercicios
ExerciseFinishedLoading:function()
{
	if(!RunningInsideExercises)
		return;

	this.Exercise_no_focus();
	
	//tem que criar todos os controles, a lista está no smilexerc
	var livro = CSkin.PegarBaseLeitura();
	var livroCorpo = null;
	livro = livro.getElementById("exerclivro").contentDocument;
	livroCorpo = livro.getElementById("LivroLeituraCorpo");
	var array_controles = CmdMain.OPFGet().OPFControExerBodyInstance.opffile.smils.SmilExerciseBody.get_array_control();
	for(var i = 0; i < array_controles.length; i++)
	{
		//vamos criar a amarracao para esse controle
		var noteitem = array_controles.item(i);
		if(noteitem.attributes)
		if(noteitem.attributes.getNamedItem("id"))
		if(noteitem.attributes.getNamedItem("smilref"))
		{
			//avisamos ao gerenciador dos controles
			var id_controle_ativar = noteitem.attributes.getNamedItem("id").value;
			CDlgExerciseManager.DlgMan_CreateControl(noteitem.attributes.getNamedItem("type").value, 
				noteitem.attributes.getNamedItem("smilref").value, 
				id_controle_ativar, livro.getElementById(id_controle_ativar), livro);
		}
	}

	
	
	//tem que deixar o texto de referencia ativo
	this.AuxRead_Vars_ExcerciseBody_active = false;
	this._changeHiliteClass(this.AuxRead_Var_ExerciseBody, "LeituraHiliteInativo");
	CmdMain.OPFGet().opffile.smils.speak();
},
	
//durante a leitura do exercicio, apertaram TAB para chavear entre a área da referencia e a área do corpo
clickExerciseTogleReadingArea:function()
{
	CSpeak.forceEnd();
	if(!RunningInsideExercises)
		return;

	//tiramos o foco de qq controle
	//se nao estiver visivel nao funciona
	CmdRead.Exercise_no_focus();
	
	CDlgExerciseManager.ExerciseTogleReadingArea();

	if(this.AuxRead_Vars_ExcerciseBody_active)
	{
		this.AuxRead_Vars_ExcerciseBody_active = false;
		this._changeHiliteClass(this.AuxRead_Var_ExerciseBody, "LeituraHiliteInativo");
		this._changeHiliteClass(this.AuxRead_Variables, "LeituraHilite");
		CmdMain.OPFGet().opffile.smils.speak();
		CSpeak.CommandEcho_text(CMsgIface.ExerciseEchoReferenceActivated());
	}
	else
	{
		this.AuxRead_Vars_ExcerciseBody_active = true;
		this._changeHiliteClass(this.AuxRead_Var_ExerciseBody, "LeituraHilite");
		this._changeHiliteClass(this.AuxRead_Variables, "LeituraHiliteInativo");
		CmdMain.OPFGet().OPFControExerBodyInstance.opffile.smils.speak();
		CSpeak.CommandEcho_text(CMsgIface.ExerciseEchoBodyActivated());
	}


},

//tira o foco de qq caixa de texto que esteja ativa
Exercise_no_focus:function()
{
	document.getElementById("controle_semfoco").hidden = false;
	document.getElementById("controle_semfoco").focus();
	document.getElementById("controle_semfoco").hidden = true;
},

//volta a ler o corpo do exercicio
ExerciseBody_COntinueReading:function(going_up)
{
	this.Exercise_no_focus();
	if(going_up)
		CmdMain.OPFGet().OPFControExerBodyInstance.opffile.smils.gotoPrevious();
	else
		CmdMain.OPFGet().OPFControExerBodyInstance.opffile.smils.gotoNext();
		
	//pra continuar com a leitura
	CSpeak.forceEnd();
	CmdMain.OPFGet().OPFControExerBodyInstance.opffile.smils.speak();
},

//move o corp do exercício para um determinado smilref
ExerciseMoveBookBodyToSmilref:function(smilref_controle)
{
	if(!RunningInsideExercises)
		return;

	//ativamos o corpo, e precisar
	CDlgExerciseManager.ExerciseTogleReadingArea();

	if(!this.AuxRead_Vars_ExcerciseBody_active)
	{
		this.AuxRead_Vars_ExcerciseBody_active = true;
		this._changeHiliteClass(this.AuxRead_Var_ExerciseBody, "LeituraHilite");
		this._changeHiliteClass(this.AuxRead_Variables, "LeituraHiliteInativo");
	}
	
	//temos que mover o smil
	CmdMain.OPFGet().OPFControExerBodyInstance.opffile.smils.ExerciseMoveBookBodyToSmilref(smilref_controle);
},

clickButExpExerciseGo:function()
{
	//somente nos exercícios
	if(!RunningInsideExercises)
		return;
	CSpeak.forceEnd();

	var texto_crlf = "\r\n";
	
	//tem que listar todos os controles, a lista está no smilexerc
	var texto_texto_exportacao = "";
	var numero_texto_exportacao = 1;
	var livro = CSkin.PegarBaseLeitura();
	var livroCorpo = null;
	livro = livro.getElementById("exerclivro").contentDocument;
	livroCorpo = livro.getElementById("LivroLeituraCorpo");
	var array_controles = CmdMain.OPFGet().OPFControExerBodyInstance.opffile.smils.SmilExerciseBody.get_array_control();
	for(var i = 0; i < array_controles.length; i++)
	{
		//vamos ver se esse cara está la lista de labelfor
		var noteitem = array_controles.item(i);
		if(noteitem.attributes)
		if(noteitem.attributes.getNamedItem("id"))
		{
			var id_controle_ativar = noteitem.attributes.getNamedItem("id").value;
			//exerciciopendente exportar corretamente
			//vamos montar a pergunta
			if(numero_texto_exportacao == 1)
				texto_texto_exportacao += "Pergunta: Em que consiste o trabalho dos historiadores? " + texto_crlf;
			if(numero_texto_exportacao == 2)
				texto_texto_exportacao += "Pergunta: Por que as conclusões dos historiadores não são absolutas nem definitivas? " + texto_crlf;
			texto_texto_exportacao += "Resposta: " + livro.getElementById(id_controle_ativar).value;
			texto_texto_exportacao +=  texto_crlf;
			texto_texto_exportacao +=  texto_crlf;
			numero_texto_exportacao++;
		}
	}

   gClipboardHelper = Components.classes["@mozilla.org/widget/clipboardhelper;1"].  
   getService(Components.interfaces.nsIClipboardHelper);  
   gClipboardHelper.copyString(texto_texto_exportacao);  
	CDialogs.WarnEscToContinue("O texto com as respostas foi colocado na área de transferência; abra o seu editor de textos e use o comando Colar. Texto das respostas: " + texto_crlf + texto_crlf + texto_texto_exportacao, null);
}

	
//fim da variavel
}


