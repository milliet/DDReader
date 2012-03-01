//NOTA: este arquivo tb vai para o instalador, quando mudar alguma coisa, tem que testar no instalador tambem

//tratamento das excecoes nao gerenciadas
window.onerror = CExceptUnhandled;
function CExceptUnhandled(message, url, code)
{
	//o firefox coloca "uncaught exception: " na frente
	var remover = "uncaught exception: ";
	var msg = message;
	if(msg.toString().substring(0, remover.length) == remover)
		msg = msg.toString().substring(remover.length, msg.toString().length);

	//se der erro aqui, ignora
	try
	{
		if(CPref.debugLocalization())
			msg += " " + url + " " + code;
	}
	catch(e)
	{
	}

	CDialogs.WarnEscToContinue(msg, null);
	return true;
}


//uma excecao, recebe a excecao original, a mensagem e o nome do arquivo
function CExcept(msg, e, path)
{
	this.msg = msg;
	this.e = e;
	this.path = path;
	
	//("Criada uma nova exceção: " + msg + path + e);
}

CExcept.prototype.toString = function()
{
	//versao para colocar na tela
	var msg = this.msg;

	//se der excecao, ignoramos
	try
	{
		if(this.path != null)
			if(this.path != "")
				msg += "\n\n" + CMsg.file() + this.path;
	} catch(e) { }
			
	//se der excecao, ignoramos
	try
	{
		if(this.e != null)
			msg += "\n\n" + CMsg.origException() + this.e.toString();
	} catch(e) { }

	return msg;
}

