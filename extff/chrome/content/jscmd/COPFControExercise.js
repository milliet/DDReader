/// <reference path="CUtils.js" />
/// <reference path="CUtils_ff.js" />
/// <reference path="CSMILFile.js" />
/// <reference path="CSMILArray.js" />
/// <reference path="CNCX.js" />
/// <reference path="CTextArray.js" />
/// <reference path="CTextItem.js" />
/// <reference path="COPFFile.js" />

//afazer: resolver todos os exerciciopendente

/*
este arqui é uma modificação do COPFControl para gerenciar os exercícios

é composto por 2 classes: uma que controla somente o texto de referencia
e outra que controla o corpo do exercício e contém a classe do texto de referencia
*/

/*
a rigor, não precisaria desa classe proque podemos suar as mesmas rotinas
e o cmdread sabe qual está ativa (se o corpo ou se a referencia do exercico)
mas fica mais seguro assim, cada classe tem os seu próprios eventos
*/


//classe do texto de referencia
function COPFControExerBody(path, opfprefs_livro_exercicios)
{
	var opffile = new COPFFile(path, this, false, true, true, this, opfprefs_livro_exercicios);
	this.opffile = opffile;
}

//o COPFFile
COPFControExerBody.prototype.opffile = null;

//se ja demos erro de texto
COPFControExerBody.prototype.warnIDerror = false;

//deve implementar NCXChangedItem e NCXPageChangedItem e TextfileChanged e getCurrentTextTTS
COPFControExerBody.prototype.NCXChangedItem = function(ncx, id)
{
	//CmdNcx.NCXChangedItem(ncx, id);
}
COPFControExerBody.prototype.NCXPageChangedItem = function(ncx)
{
	//CmdMain.NCXPageChangedItem(ncx);
}

//eventos do texto
COPFControExerBody.prototype.TextfileChanged = function(textfilearray)
{
	//atualiza o texto
	//CmdRead.TextfileChanged(textfilearray);
	CmdRead.TextfileChange_ExerciseBody(textfilearray);
	
	//atualiza o indicador de que tem marcador
	//CmdMain.checkMarkerIndicator();
	//CmdMain.updateSkipNoteStatus();
}

//retornar o texto para TTS do no de texto atual
COPFControExerBody.prototype.getCurrentTextTTS = function()
{
	//return CmdRead.getCurrentTextTTS();
	return CmdRead.getCurrentTextTTS_ExerciseBody();
}

//eventos do SMIL, processamos
COPFControExerBody.prototype.SMILSkippedItem = function(smilarray, SMILrel_href, id, goingUp, customTest)
{
	//nao fazemos nada
}

/*
eventos do smil de corpo de exercicio
recebe como parametro o control deste xml:
<control id ="exerc_2099_1_txt1" type="text" smilref="speechgen0002.smil#tcp4">
	<labelfor smilref="speechgen0002.smil#tcp3" />
	<labelfor smilref="speechgen0002.smil#tcp4" />
</control>
*/
COPFControExerBody.prototype.SMILExercEvent_HitControl = function(noteitem)
{
	//ativamos o controle na tela
	if(noteitem.attributes)
	if(noteitem.attributes.getNamedItem("id"))
		CmdRead.ExerciseBody_HitControl( noteitem.attributes.getNamedItem("id").value, noteitem.attributes.getNamedItem("type").value );

	
	//exerciciopendente: preparamos o bagulho que devemos falar
}



/*
esta é a classe que controla o corpo do exercicio e tabém faz o controle mestre
*/
function COPFControExercise(exercisesBasePath, exercisesIDexercise, opfprefs_livro_exercicios)
{
	//temos que carregar o corpo e a referencia do exercicio
	var exerciseBodyPath = exercisesBasePath + "/r" + exercisesIDexercise + "/exerc.epf";
	var opffile = new COPFFile(exerciseBodyPath, this, false, true, false, null, opfprefs_livro_exercicios);
	this.opffile = opffile;
	
	//carrega o corpo do exerciocio
	var exerciseReferencePath = exercisesBasePath + "/c" + exercisesIDexercise + "/exerc.epf";
	this.OPFControExerBodyInstance = new COPFControExerBody(exerciseReferencePath, opfprefs_livro_exercicios);
	
	//se deu erro na referenci, transferimos o erro pro corpo
	if(this.OPFControExerBodyInstance.opffile.errorDuringLoad)
		this.opffile.errorDuringLoad = true;
	
	//seta os textos de limite (só se nao deu erro)
	if(!this.opffile.errorDuringLoad)
	{
		var msgStart = new CTextItem();
		msgStart.SetText_string( CMsg.ExerciseRefStart());
		var msgEnd = new CTextItem();
		msgEnd.SetText_string( CMsg.ExerciseRefEnd());

		this.opffile.smils._textLimits.setmsgTop(msgStart);
		this.opffile.smils._textLimits.setmsgBottom(msgEnd);
		
		msgStart = new CTextItem();
		msgStart.SetText_string( CMsg.ExerciseBodyStart());
		msgEnd = new CTextItem();
		msgEnd.SetText_string( CMsg.ExerciseBodyEnd());

		this.OPFControExerBodyInstance.opffile.smils._textLimits.setmsgTop(msgStart);
		this.OPFControExerBodyInstance.opffile.smils._textLimits.setmsgBottom(msgEnd);
	}
	
	//quem chamou vai ver de seu erro
	//if(opffile.errorDuringLoad)
	//	return;
}


//o COPFFile
COPFControExercise.prototype.opffile = null;

//o controle do exto de referencia, OPFControExerRefInstance
COPFControExercise.prototype.OPFControExerBodyInstance = null;

//se ja demos erro de texto
COPFControExercise.prototype.warnIDerror = false;

//deve implementar NCXChangedItem e NCXPageChangedItem e TextfileChanged e getCurrentTextTTS
COPFControExercise.prototype.NCXChangedItem = function(ncx, id)
{
	//CmdNcx.NCXChangedItem(ncx, id);
}
COPFControExercise.prototype.NCXPageChangedItem = function(ncx)
{
	//CmdMain.NCXPageChangedItem(ncx);
}

//eventos do texto
COPFControExercise.prototype.TextfileChanged = function(textfilearray)
{
	//atualiza o texto
	CmdRead.TextfileChanged(textfilearray);
	
	//atualiza o indicador de que tem marcador
	//CmdMain.checkMarkerIndicator();
	//CmdMain.updateSkipNoteStatus();
}

//retornar o texto para TTS do no de texto atual
COPFControExercise.prototype.getCurrentTextTTS = function()
{
	return CmdRead.getCurrentTextTTS();
}

//eventos do SMIL, processamos
COPFControExercise.prototype.SMILSkippedItem = function(smilarray, SMILrel_href, id, goingUp, customTest)
{
	//nao fazemos nada
}

