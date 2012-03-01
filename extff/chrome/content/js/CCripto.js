/*
coisas da criptografia
somente funcoes estaticas
*/

function _CCripto()
{
}

//para acessar as funcoes estaticas
var CCripto = new _CCripto();

//descriptografa um texto
//se der erro, lanca excecao
_CCripto.prototype.DecryptText = function(text, passwordBinHex)
{
	//usamos diretamente o compnente do CSpeak, só para nao instaciar outro
	var saida = __CSpeakControl._componente.descriptografar(text, passwordBinHex);
	
	//fazemos o tratamento de erro
	var remover = "ERROR";
	if(saida.toString().substring(0, remover.length) == remover)
	{
		var msg = saida.toString().substring(remover.length, saida.toString().length);
		throw new CExcept( CMsg.DecryptError() + " " + msg, null, null);
	}

	return saida;
}

// return the two-digit hexadecimal code for a byte
_CCripto.prototype.Binary2BinhexDigit = function(charCode)
{
	return ("0" + charCode.toString(16)).slice(-2);
}

//converte para binhex
_CCripto.prototype.Binary2Binhex = function(binaryInput)
{
	var saida = "";
	var i;
	for (i = 0; i < binaryInput.length; ++i)
		saida += this.Binary2BinhexDigit(binaryInput.charCodeAt(i));
	return saida;
}

_CCripto.prototype.Binhex2Binary = function(binaryInput)
{
	binaryInput = binaryInput.toUpperCase();
	var hexchars = '0123456789ABCDEF';
	var saida = "";
	for (var i = 0; i < binaryInput.length; i += 2)
		saida += String.fromCharCode( hexchars.indexOf( binaryInput.charAt(i) ) * 16 + hexchars.indexOf( binaryInput.charAt(i+1) ) );
	return saida;
}


//retorna o md5 de um texto
_CCripto.prototype.CalcMD5Text = function(text)
{
	// data is an array of bytes
	var ch = Components.classes["@mozilla.org/security/hash;1"]
					   .createInstance(Components.interfaces.nsICryptoHash);
	ch.init(ch.MD5);
	
//	ch.update(text.split(""), text.length);
	var binaryInput = new Array();
	for (var i = 0; i < text.length; i++)
		binaryInput.push(text.charCodeAt(i));
	ch.update(binaryInput, text.length);

	// convert the binary hash data to a hex string.
	return this.Binary2Binhex(ch.finish(false));
}

//criptografa
_CCripto.prototype.CriptografarRC4 = function(chave, textocripto)
{
	var servico_KeyObjectFactory = Components.classes["@mozilla.org/security/keyobjectfactory;1"].getService(Components.interfaces.nsIKeyObjectFactory);
	//keyfromstring: sí hmac e rc4 
	//const   short  AES_CBC = 2
	//const   short  HMAC = 257
	//const short 	RC4 = 1
	var chave_object = servico_KeyObjectFactory.keyFromString(1, chave);
	var stream_cripto = Components.classes["@mozilla.org/security/streamcipher;1"].createInstance(Components.interfaces.nsIStreamCipher);

	stream_cripto.init(chave_object);
	//initWithIV nao faz nenhuma diferenca, parece que nao usa o IV
	//ss.initWithIV(key, chavecripto2.split(""), chavecripto2.length);

	stream_cripto.updateFromString(textocripto);
	return stream_cripto.finish(false /* no base64 */);
}

//descriptografa
_CCripto.prototype.DesriptografarRC4 = function(chave, textocripto)
{
	//descriptografar = recriptografar
	return this.CriptografarRC4(chave, textocripto);
}


//diz se tem alguma senha
_CCripto.prototype.hasPasswords = function()
{
	if(CPref.passNumber() > 0)
		return true;
	return false;
}

//salva um novo pin com uma nova senha
_CCripto.prototype.SavePINWithPassword = function(pin, newPassToSave)
{
	//so trabalhamos com maiusculas
	pin = pin.toUpperCase();
	newPassToSave = newPassToSave.toUpperCase();
	
	//salvamos a senha
	var BasePassNumber = CPref.passNumber();
	var senhaMD5 = this.CalcMD5Text(newPassToSave);
	var EncryptedPIN = this.Binary2Binhex(this.CriptografarRC4(newPassToSave, pin));

	//nova senha
	CPref.passCRC_set(BasePassNumber, senhaMD5);
	CPref.passPIN_set(BasePassNumber, EncryptedPIN);
	CPref.passNumber_set(BasePassNumber + 1);
}

//pega a chave a partir de uma senha
//qualquer erro, retorna vazio
_CCripto.prototype.GetKeyFromPassword = function(senha, pin_file)
{
	//so trabalhamos com maiusculas
	senha = senha.toUpperCase();
	var senhaMD5 = this.CalcMD5Text(senha).toUpperCase();

	//vamos ver se existe
	for(var i = 0; i < CPref.passNumber(); i++)
	{
		if(CPref.passCRC(i).toUpperCase() == senhaMD5)
		{
			//achamos
			var pin = this.DesriptografarRC4(senha, this.Binhex2Binary(CPref.passPIN(i)) );
			return this.GetKeyFromPIN(pin, pin_file);
		}
	}
	
	//nao achamos nada
	return "";
}

//pega a chave a partir do PIN
//qualquer erro, retorna vazio
_CCripto.prototype.GetKeyFromPIN = function(pin, pin_file)
{
	//so trabalhamos com maiusculas
	pin = pin.toUpperCase();
	var senhaMD5 = this.CalcMD5Text(pin).toUpperCase();
	
	//abrimos o arquivo
	var textoPinDat = CUtils.LoadFileRaw(pin_file);

    //salvaos o arquivo
    //formato: <?xml version="1.0" encoding="utf-8" ?><d> (42 bytes)
    //em offset 0, string pinv1.47 (8 bytes)
    //em offset 08, 8 bytes com 8 digitos ASCII decimal do núero de pins no arquivo
    //offset 10, o md5 do primeiro pin, em binhex, 32 bytes
    //offset 30, o rc4 (a senha do arquivo criptografada peo esse pin, em binhex, 32 bytes
    //e assim por diante
    //finalmente </d> (4 bytes)
    //tudo em maiusculas
	if(textoPinDat.substr(42, 8) != "pinv1.47")
		throw new CExcept("pin.dat formato inválido", null, pin_file);
	var nroItensPinDat = parseInt(textoPinDat.substr(42 + 8, 8), 10);
	//agora vamos procurar esse MD5
	for(var i = 0; i < nroItensPinDat; i++)
	{
		if(textoPinDat.substr(42 + i*64 + 16, 32) == senhaMD5)
		{
			//achamos
			var senha_em_rc4 = textoPinDat.substr(42 + i*64 + 16 + 32, 32);
			senha_em_rc4 = this.Binary2Binhex(this.DesriptografarRC4(pin, this.Binhex2Binary(senha_em_rc4)));
			return senha_em_rc4;
		}
	}
	
	//nao achamos
	return "";
}

