/// <reference path="CUtils.js" />
/// <reference path="CUtils_ff.js" />

/*
gerenciamento de um CSMILFile
*/

function CSMILFile(absHref, relHref, parentArray)
{
	this.SMILabs_href = absHref;
	this.SMILrel_href = relHref;
	this._parentArray = parentArray;
}

CSMILFile.prototype.SMILabs_href = "";	//href deste cara, absoluto
CSMILFile.prototype.SMILrel_href = "";	//href deste cara, relativo (como está no OPF)
CSMILFile.prototype.loaded = false;	//se ele foi carregado
CSMILFile.prototype.SMILFilexml = null;	//o xml dele
CSMILFile.prototype.SMILFilePars = null;	//a lista de "par" do xml dele
CSMILFile.prototype.SMILFileCurrentPar = null;	//o "par" ativo no momento
CSMILFile.prototype.SMILFileCurrentIndex = 0;	//o indice do "par" ativo no momento
CSMILFile.prototype._parentArray = null;	//o array, o pai deste cara

//rotina atuiliar estatica
CSMILFile_getCustomTest = function(node)
{
	var customTest = "";
	
	//pode estar no cara
	if(node.attributes)
	if(node.attributes.getNamedItem)
	if(node.attributes.getNamedItem("customTest"))
		customTest = node.attributes.getNamedItem("customTest").value;
		
	//pode estar no seq pai dele
	if(customTest == "")
	{
		//a rigor, deveriamos varrer toda a hierarquia....
		var pai = node.parentNode;
		if(pai)
		if(pai.attributes)
		if(pai.attributes.getNamedItem)
		if(pai.attributes.getNamedItem("customTest"))
			customTest = pai.attributes.getNamedItem("customTest").value;
	}
	
	return customTest;
}

//carrega um arquivo
CSMILFile.prototype.load = function()
{
	//carrega o arquivo
    this.SMILFilexml = CUtils.LoadXML(this.SMILabs_href);

	//guardamos todos os PAR
	this.SMILFilePars = this.SMILFilexml.getElementsByTagName("par");

	//tem que ter algum PAR
	if(this.SMILFilePars.length == 0)
		throw new CExcept(CMsg.InvalidSMIL_nopar(), null, this.SMILabs_href);

	//posicionamos no comeco
	this.gotoStart();
	
	//marca que carregamos
	this.loaded = true;
}

//retorna o no atual
CSMILFile.prototype.getCurrentNode = function()
{
	return this.SMILFileCurrentPar;
}

//vamos para o anterior do arquivo, retorna false se não achar
CSMILFile.prototype.gotoUp = function(newindex)
{
	while(true)
	{
		if(newindex < 0)
			return false;
		
		//se nao for para pular, é para usar
		if(!this._skipPar(newindex, true))
		{
			this.SMILFileCurrentPar = this.SMILFilePars.item(newindex);
			this.SMILFileCurrentIndex = newindex;
			return true;
		}

		newindex--;
	}
	
	//nao achamos nada...
	return false;
}

//vamos para o proximo do arquivo, retorna false se não achar
CSMILFile.prototype.gotoDown = function(newindex)
{
	while(true)
	{
		if(newindex >= this.SMILFilePars.length)
			return false;
		
		//se nao for para pular, é para usar
		if(!this._skipPar(newindex, false))
		{
			this.SMILFileCurrentPar = this.SMILFilePars.item(newindex);
			this.SMILFileCurrentIndex = newindex;
			return true;
		}

		newindex++;
	}
	
	//nao achamos nada...
	return false;
}

//vamos para o comeco do arquivo
CSMILFile.prototype.gotoStart = function()
{
	return this.gotoDown(0);
}

//vamos para o fim do arquivo
CSMILFile.prototype.gotoEnd = function()
{
	return this.gotoUp(this.SMILFilePars.length - 1);
}

//vamos para o anterior do arquivo, retorna false se não achar
CSMILFile.prototype.gotoPrevious = function()
{
	return this.gotoUp(this.SMILFileCurrentIndex - 1);
}

//vamos para o proximo do arquivo, retorna false se não achar
CSMILFile.prototype.gotoNext = function()
{
	return this.gotoDown(this.SMILFileCurrentIndex + 1);
}

//vai para um ponto no arquivo, retorna false se não achar
CSMILFile.prototype.gotoAnchor = function(anchor)
{
	for(var i=0; i<this.SMILFilePars.length; i++)
	{
		var item = this.SMILFilePars.item(i);
		
		//vemos se tem atributos
		if(!item.attributes)
			continue;
		if(!item.attributes.getNamedItem)
			continue;
		if(item.attributes.getNamedItem("id") == null)
			continue;

		//é o id certo?
		if(item.attributes.getNamedItem("id").value == anchor)
		{
			//guardamos esse cara
			this.SMILFileCurrentPar = item;
			this.SMILFileCurrentIndex = i;
			return true;
		}
	}
	
	//nao achamos
	return false;
}

//para pegar o ID da posicao atual (para marcadores e outras funcoes)
CSMILFile.prototype.GetCurrentURIMark = function()
{
	return this.GetSpecificURIMark(this.SMILFileCurrentIndex);
}

CSMILFile.prototype.GetSpecificURIMark = function(index)
{
	//o nome do arquivo faz parte, para ficar compativel com o exemplo do daisy
	var ret = this.SMILrel_href;

	//o separador
	ret += "#";
		
	//a raiz da navegacao
	var node = this.SMILFilePars.item(index);
	var achouID = false;
	
	//pegamos o ID
	if(node.attributes)
	if(node.attributes.getNamedItem)
	if(node.attributes.getNamedItem("id"))
	{
		ret += node.attributes.getNamedItem("id").value;
		achouID = true;
	}
	
	//se nao achou o ID, damos erro
	if(!achouID)
	{
		throw new CExcept(CMsg.NoSMILID(), null, this.SMILabs_href);
	}

	return ret;
}


//detrmina se um par deve ser pulado
CSMILFile.prototype._skipPar = function(index, goingUp)
{
	//validamos
	if(index < 0)
		return true;
	if(index >= this.SMILFilePars.length)
		return true;


	//somente nos exercícios, pulamos tudo que for label de algum controle
	if(RunningInsideExercises)
	if(this._parentArray.thisIsExerciseBody)
	if(this._parentArray.SmilExerciseBody != null)
	{
		//pegamos o smilref do destino
		var destino = this.GetSpecificURIMark(index);
		if(this._parentArray.SmilExerciseBody.skipSmilref(destino))
		{
			//vamos pular

			//deveriamos gerar o evento SMILSkippedItem, mas não temos todos os parametros, e na verdade não precisa não...

			return true;
		}
	}

	
	//nao tem nada a ver com os exerícios
	//continuamos com o teste normal

		
	//se nao estamos pulando nada...
	var skiparray = this._parentArray.GetSkipIDs();
	if(skiparray.length == 0)
		return false;

	//se der erro, nao pulamos
	try
	{
		//acessamos o elemento para ver se tem customtest
		var node = this.SMILFilePars.item(index);
		var customTest = CSMILFile_getCustomTest(node);
		if(customTest != "")
		{
			for(var i = 0; i < skiparray.length; i++)
			{
				//se for o ID...
				if(skiparray[i] == customTest && skiparray[i] != "")
				{
					//lancamos o evento de que pulou
					if(this._parentArray._SMILeventListener)
					{
						if(node.attributes.getNamedItem("id") != null)
						{
							//temos que pegar o ID do cara
							var idskip = node.attributes.getNamedItem("id").value;
	
							//manda o evento
							this._parentArray._SMILeventListener.SMILSkippedItem(this._parentArray, this.SMILrel_href, idskip, goingUp, customTest);
						}
					}
					
					//pulamos
					return true;
				}
			}
		}
	}
	catch(e)
	{
		//ignoramos erros
	}
	
	//nao pulamos nao...
	return false;
}


