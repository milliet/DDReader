/*
gerenciamento dos conttoles que aceitam entrada de teclado do exercicio

é extremamente parecido com o CDlgManager (e usa algumas funcoes dele)
*/



/*
=============================================================================
=============================================================================
o gerenciador
este aqui é um singleton
*/

function _CDlgExerciseManager()
{
	this.array = new Array();
}

//o array de controles que gerenciamos
_CDlgExerciseManager.prototype.array = null;


//o blur das caixas de texto
function _CDlgExercise_blur()
{
	CKeys.ModoExercicios_CaixaTextoAtiva = false;
	
	//precisamos avisar para o caso de o foco ter ido para outro aplicativo
	CDlgMan_focus.lostfocus();
}

//o key das caixas de texto
function _CDlgExercise_key(controle, evnt)
{
	for(var i = 0; i < CDlgExerciseManager.array.length; i++)
	{
		if(CDlgExerciseManager.array[i].controle == controle)
		{
			CDlgExerciseManager.array[i].key(evnt);
			return;
		}
	}
}

function _CDlgExercise_foco(controle)
{
	//procura na nossa lista
	for(var i = 0; i < CDlgExerciseManager.array.length; i++)
	{
		if(CDlgExerciseManager.array[i].controle == controle)
		{
			CDlgMan_focus.ignorenextblur();
			CKeys.ModoExercicios_CaixaTextoAtiva = true;
			CSpeak.forceEnd();
			CmdRead.ExerciseMoveBookBodyToSmilref( CDlgExerciseManager.array[i].smilref_controle );
			CSpeak.CommandEchoGo_text( CDlgExerciseManager.array[i].eventText());
			return;
		}
	}
}
function _CDlgExercise_fococb(controle)
{
	//procura na nossa lista
	for(var i = 0; i < CDlgExerciseManager.array.length; i++)
	{
		if(CDlgExerciseManager.array[i].controle == controle)
		{
			CDlgMan_focus.ignorenextblur();
			CSpeak.forceEnd();
			CmdRead.ExerciseMoveBookBodyToSmilref( CDlgExerciseManager.array[i].smilref_controle );
			CSpeak.CommandEchoGo_text( CDlgExerciseManager.array[i].eventText() );
			return;
		}
	}
}


//o foco chegou em um controle
//tipo_controle é o type do smilexer.xml
_CDlgExerciseManager.prototype.DlgMan_HitControl = function(tipo_controle, id_controle_ativar, controle_ativar, conteiner_controle)
{
	if(controle_ativar == null)
		return;
	controle_ativar.focus();

	//vamos procurar no nosso array
	//procura na nossa lista
	for(var i = 0; i < this.array.length; i++)
	{
		if(this.array[i].id == id_controle_ativar)
		{
			//já está tudo certo

			//fazemos com timeout para o caso de outro controle estar perdendo o foco
			if(tipo_controle == "text")
			{
				setTimeout( function() {
					CKeys.ModoExercicios_CaixaTextoAtiva = true;
					}, timeout_DlgMan_HitControl);
			}

			return;
		}
	}
	
	
	//xi.... não sei que tipo e esse negócio....
	//acho que nao fazemos nada... nao sei o que fazer!
}

//amarrar os eventos dos controles ao carregar o exercicio
//tipo_controle é o type do smilexer.xml
_CDlgExerciseManager.prototype.DlgMan_CreateControl = function(tipo_controle, smilref_controle, id_controle_ativar, controle_ativar, conteiner_controle)
{
	if(controle_ativar == null)
		return;
	
	if(tipo_controle == "text")
	{
		//temos que criar o controle
		var item = new CDlgExerciseMan_tbext(smilref_controle, id_controle_ativar, controle_ativar);
		this.array.push(item);
	}
	if(tipo_controle == "radio" || tipo_controle == "checkbox")
	{
		//temos que criar o controle
		var item = new CDlgExerciseMan_cb(smilref_controle, id_controle_ativar, controle_ativar,
			CMsgIface.ExerciseAlternativeMarked(),
			CMsgIface.ExerciseAlternativeUnmarked(),
			""
			);
		this.array.push(item);
	}
	
	
	//xi.... não sei que tipo e esse negócio....
	//acho que nao fazemos nada... nao sei o que fazer!
}


//chavearam enre as areas de leitura do exercicio
_CDlgExerciseManager.prototype.ExerciseTogleReadingArea = function()
{
	CKeys.ModoExercicios_CaixaTextoAtiva = false;
}

//para acessar as funcoes estaticas
var CDlgExerciseManager = new _CDlgExerciseManager();


/*
para conrolar caixa de texto
todos os controles usados pelo _CDlgExerciseManager precisam ter os seguinte elementos:
id
eventText
key
controle
*/

/*
=============================================================================
=============================================================================
gerenciador de textbox com edicao estendida
*/

function CDlgExerciseMan_tbext(smilref_controle, id, controle)
{
	this.smilref_controle = smilref_controle;
	this.id = id;
	this.controle = controle;
	this.DlgMan_tbext = new CDlgMan_tbext(id, controle,
		"digite a sua resposta", //exerciciopendente, tem que pegar a perguntaa
		1000000, null, "5.2" //exerciciopendente chave de busca da ajuda correta
		);

	controle.addEventListener('keypress', function(event) { _CDlgExercise_key(this, event); }, false);
	controle.addEventListener('focus', function(event) { _CDlgExercise_foco(this); }, false);
	controle.addEventListener('blur', _CDlgExercise_blur, false);
}

//o smilref no livro
CDlgExerciseMan_tbext.prototype.smilref_controle = "";
//o id
CDlgExerciseMan_tbext.prototype.id = "";
//o controle
CDlgExerciseMan_tbext.prototype.controle = null;
//o gerenciador em si
CDlgExerciseMan_tbext.prototype.DlgMan_tbext = null;

//auxiliar do getenciamento de teclado
//retorna TRUE se processo e deve cancelar o resto
CDlgExerciseMan_tbext.prototype.processartecla = function(evt)
{
/*
tratado fora daqui:
ESC fecha sem salvar
	Se houve alguma alteração, perguntamos se quer sair sem salvar. Se não tem alteração, fechamos e continuamos a leitura.
Espaço: para de falar ou volta a falar
Control + A:
	Lista os comandos disponíveis.
TAB, shift TAB, control TAB
	Navega entre o texto de referência e as questões.
Control + L
	Lê o texto inserido no controle (somente controle de texto).
Control + E
	exportar exercicios de dentro do exercício.
Control + V:
	Volta para o começo do exercício.

implementados:
Control + setas para cima e para baixo:
	Se em um campo de digitação, volta a ler o próximo texto.
	Se em um campo de alternativa, a mesma coisa.
Enter:
	Se estiver digitando uma resposta, retoma a leitura após a caixa de texto. - NAO PODE PQ NO TEXTAREA FAZ PATE DO TEXTO, FICA INCOSISTENTE
	Se estiver lendo um checkbox, avisa o estado atual.

exerciciopendente não implementado agora:
Control + Setas para a esquerda e direita:
	Se estiver digitando uma resposta, navega para o próximo controle / controle anterior.
Control + R
	Lê a questão inteira, sem parar nas caixas de texto mas incluindo o texto das caixas de texto, com bip para indicar a caixa de texto (tanto no começo quanto no fim da caixa). Com check box: dizendo “alternativa selecionada” ou “alternativa não selecionada” e lendo cada uma das respostas.
*/

	//teclas com control
	if(evt.ctrlKey == true && evt.altKey == false)
	{
		//seta para esquerda, volta ao texto
		if(evt.charCode == 0 && evt.keyCode == 37)
		{
			CSpeak.forceEnd();
			CmdRead.ExerciseBody_COntinueReading(true);
			return true;
		}
		
		//seta para direita, volta ao texto
		if(evt.charCode == 0 && evt.keyCode == 39)
		{
			CSpeak.forceEnd();
			CmdRead.ExerciseBody_COntinueReading(false);
			return true;
		}

		//seta para baixo, volta ao texto
		if(evt.charCode == 0 && evt.keyCode == 40)
		{
			CSpeak.forceEnd();
			CmdRead.ExerciseBody_COntinueReading(false);
			return true;
		}
		
		//seta para cima, volta ao texto
		if(evt.charCode == 0 && evt.keyCode == 38)
		{
			CSpeak.forceEnd();
			CmdRead.ExerciseBody_COntinueReading(true);
			return true;
		}
	}
	
	//nao processamos, deixa rolar
	return false;
}

//o getenciamento de teclado
CDlgExerciseMan_tbext.prototype.key = function(evnt)
{
	//tecla control E exportar exercicios de dentro do exercício
	//nao pasa para o gerenciador de edicao
	if(evnt.ctrlKey == true && evnt.altKey == false)
	{
		if(evnt.charCode == 69 || evnt.charCode == 101)
		{
			return;
		}
	}
	//tecla control V Volta para o começo do exercício.
	//nao pasa para o gerenciador de edicao
	if(evnt.ctrlKey == true && evnt.altKey == false)
	{
		if(evnt.charCode == 86 || evnt.charCode == 118)
		{
			return;
		}
	}
	
	//vamos rodar
	if(this.processartecla(evnt))
	{
		//para cancelar a acao dessa tecla
		evnt.preventDefault();

		evnt.stopPropagation();
//		evnt.preventBubble();
//		evnt.bubbles = false;
//		evnt.cancelBubble = true;
		return;
	}

	//repassamos
	this.DlgMan_tbext.key(evnt);
}

CDlgExerciseMan_tbext.prototype.eventText = function()
{
	//repassamos
	return this.DlgMan_tbext.eventText();
}


/*
=============================================================================
=============================================================================
gerenciador de checkbox e radio
*/

function CDlgExerciseMan_cb(smilref_controle, id, controle, onmsg, offmsg, extramsg)
{
	this.smilref_controle = smilref_controle;
	this.id = id;
	this.controle = controle;
	this.DlgMan_cb = new CDlgMan_cb(id, controle, onmsg, offmsg, extramsg);

	controle.addEventListener('keypress', function(event) { _CDlgExercise_key(this, event); }, false);
	controle.addEventListener('focus', function(event) { _CDlgExercise_fococb(this); }, false);
	controle.addEventListener('blur', _CDlgExercise_blur, false);

}

//o smilref no livro
CDlgExerciseMan_cb.prototype.smilref_controle = "";
//o id
CDlgExerciseMan_cb.prototype.id = "";
//o controle
CDlgExerciseMan_cb.prototype.controle = null;
//o gerenciador em si
CDlgExerciseMan_cb.prototype.DlgMan_cb = null;

//auxiliar do getenciamento de teclado
//retorna TRUE se processo e deve cancelar o resto
CDlgExerciseMan_cb.prototype.processartecla = function(evt)
{
//afazer obedecer todas as teclas

/*
COPIAR DE CIMA, DO CDlgExerciseMan_tbext.prototype.processartecla
ESC fecha sem salvar
Se houve alguma alteração, perguntamos se quer sair sem salvar. Se não tem alteração, fechamos e continuamos a leitura.
Espaço: para de falar ou volta a falar
Control + A:
	Lista os comandos disponíveis.
Control + V:
	Volta para o começo do exercício.
Setas para cima e para baixo:
Navegam para a próxima frase, exatamente igual ao livro, se fora de um campo de digitação. 
Control + setas para cima e para baixo:
Se em um campo de digitação, volta a ler o próximo texto.
Se em um campo de alternativa, a mesma coisa.
Setas para a esquerda e direita:
Navega para o próximo controle / controle anterior; ou seja, o próximo input se fora de um campo de digitação.
Control + Setas para a esquerda e direita:
Se estiver digitando uma resposta, navega para o próximo controle / controle anterior.
Enter:
	Se estiver digitando uma resposta, retoma a leitura após a caixa de texto.
	Se estiver lendo um checkbox, avisa o estado atual.
M e N
	Se estiver lendo um checkbox, marca e desmarca.
TAB, shift TAB, control TAB
	Navega entre o texto de referência e as questões.
Control + R
Lê a questão inteira, sem parar nas caixas de texto mas incluindo o texto das caixas de texto, com bip para indicar a caixa de texto (tanto no começo quanto no fim da caixa). Com check box: dizendo “alternativa selecionada” ou “alternativa não selecionada” e lendo cada uma das respostas.
Control + L
Lê o texto inserido no controle (somente controle de texto).
Control + E
exportar exercicios de dentro do exercício.
*/

	//teclas com control
	if(evt.ctrlKey == true && evt.altKey == false)
	{
		//seta para esquerda, volta ao texto
		if(evt.charCode == 0 && evt.keyCode == 37)
		{
			CSpeak.forceEnd();
			CmdRead.ExerciseBody_COntinueReading(true);
			return true;
		}
		
		//seta para direita, volta ao texto
		if(evt.charCode == 0 && evt.keyCode == 39)
		{
			CSpeak.forceEnd();
			CmdRead.ExerciseBody_COntinueReading(false);
			return true;
		}

		//seta para baixo, volta ao texto
		if(evt.charCode == 0 && evt.keyCode == 40)
		{
			CSpeak.forceEnd();
			CmdRead.ExerciseBody_COntinueReading(false);
			return true;
		}
		
		//seta para cima, volta ao texto
		if(evt.charCode == 0 && evt.keyCode == 38)
		{
			CSpeak.forceEnd();
			CmdRead.ExerciseBody_COntinueReading(true);
			return true;
		}
	}
	
	//nao processamos, deixa rolar
	return false;
}

//o getenciamento de teclado
CDlgExerciseMan_cb.prototype.key = function(evnt)
{
	//vamos rodar
	if(this.processartecla(evnt))
	{
		//para cancelar a acao dessa tecla
		evnt.preventDefault();

		evnt.stopPropagation();
//		evnt.preventBubble();
//		evnt.bubbles = false;
//		evnt.cancelBubble = true;
		return;
	}

	//repassamos
	this.DlgMan_cb.key(evnt);
}

CDlgExerciseMan_cb.prototype.eventText = function()
{
	var ret = "";
	if(this.controle.checked)
		ret += this.DlgMan_cb.onmsg;
	else
		ret += this.DlgMan_cb.offmsg;
	ret += this.DlgMan_cb.extramsg;
	return ret;
}


