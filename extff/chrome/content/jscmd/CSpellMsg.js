//somente funcoes estaticas
function _CSpellMsg()
{
	this.nossolocale = new CLocale("spellmsg.properties");
}

//para acessar as funcoes estaticas
var CSpellMsg = new _CSpellMsg();

//tansformar um evento em texto da tecla
_CSpellMsg.prototype.KeyText = function(evt)
{
	var tecla = "";
	if(evt.charCode != 0)
		tecla = String.fromCharCode(evt.charCode);

	if(tecla == "")
	{
		//nao tem char code, vamos pegar do evtcode
		switch(evt.keyCode)
		{
			case 27:
				tecla = this.nossolocale.PegarTexto( "spl01" /* "escape" */);
				break;
			case 13:
				tecla = this.nossolocale.PegarTexto( "spl02" /* "enter" */ );
				break;
			case 45:
				tecla = this.nossolocale.PegarTexto( "spl03" /* "ins" */ );
				break;
			case 46:
				tecla = this.nossolocale.PegarTexto( "spl04" /* "del" */ );
				break;
			case 35:
				tecla = this.nossolocale.PegarTexto( "spl05" /* "end" */ );
				break;
			case 40:
				tecla = this.nossolocale.PegarTexto( "spl06" /* "seta para baixo" */ );
				break;
			case 37:
				tecla = this.nossolocale.PegarTexto( "spl07" /* "seta para esquerda" */ );
				break;
			case 12:
				tecla = this.nossolocale.PegarTexto( "spl08" /* "cinco do teclado numérico" */ );
				break;
			case 39:
				tecla = this.nossolocale.PegarTexto( "spl09" /* "seta para direita" */ );
				break;
			case 36:
				tecla = this.nossolocale.PegarTexto( "spl10" /* "home" */ );
				break;
			case 38:
				tecla = this.nossolocale.PegarTexto( "spl11" /* "seta para cima" */ );
				break;
			case 33:
				tecla = this.nossolocale.PegarTexto( "spl12" /* "page up" */ );
				break;
			case 34:
				tecla = this.nossolocale.PegarTexto( "spl13" /* "page down" */ );
				break;
			case 19:
				tecla = this.nossolocale.PegarTexto( "spl14" /* "break" */ );
				break;
			case 93:
				tecla = this.nossolocale.PegarTexto( "spl15" /* "menu" */ );
				break;
			case 91:
				tecla = this.nossolocale.PegarTexto( "spl16" /* "windows" */ );
				break;
		}
	}
	
	//as teclas de funcao
	if(tecla == "")
	if(evt.keyCode >= 112 && evt.keyCode <= 123)
		tecla = this.nossolocale.PegarTexto( "spl17" /* "efe " */ ) + (evt.keyCode - 112 + 1);

	if(tecla == "" && evt.keyCode == 9)
		tecla = this.nossolocale.PegarTexto( "spl18" /* "tab" */ );

	//se nao achamos....
	if(tecla == "")
		tecla = CMsgIface.KeyUnknown();

	//combinacoes control e shift
	if(evt.altKey == true)
		tecla = CMsgIface.KeyAlt() + " " + tecla;
	if(evt.ctrlKey == true)
		tecla = CMsgIface.KeyControl() + " " + tecla;
	

	return tecla;
}

//tansformar um texto em texto soletrado
_CSpellMsg.prototype.SpellText = function(txt)
{
	var ret = "";
	for(var i = 0; i < txt.length; i++)
	{
		var letra = txt.charAt(i);
		var converte = "";
		
		
		//converte simbolos um a um
		switch(letra)
		{
			case " ":
				converte = this.nossolocale.PegarTexto( "spl19" /* "espaço" */ );
				break;
			case "!":
				converte = this.nossolocale.PegarTexto( "spl20" /* "ponto de exclamação" */ );
				break;
			case "@":
				converte = this.nossolocale.PegarTexto( "spl21" /* "arroba" */ );
				break;
			case "#":
				converte = this.nossolocale.PegarTexto( "spl22" /* "sustenido" */ );
				break;
			case "$":
				converte = this.nossolocale.PegarTexto( "spl23" /* "cifrão" */ );
				break;
			case "%":
				converte = this.nossolocale.PegarTexto( "spl24" /* "porcentagem" */ );
				break;
			case "&":
				converte = this.nossolocale.PegarTexto( "spl25" /* "E comercial" */ );
				break;
			case "*":
				converte = this.nossolocale.PegarTexto( "spl26" /* "vezes" */ );
				break;
			case "(":
				converte = this.nossolocale.PegarTexto( "spl27" /* "abre parêntesis" */ );
				break;
			case ")":
				converte = this.nossolocale.PegarTexto( "spl28" /* "fecha parêntesis" */ );
				break;
			case "-":
				converte = this.nossolocale.PegarTexto( "spl29" /* "hífen" */ );
				break;
			case "+":
				converte = this.nossolocale.PegarTexto( "spl30" /* "mais" */ );
				break;
			case "=":
				converte = this.nossolocale.PegarTexto( "spl31" /* "igual" */ );
				break;
			case "{":
				converte = this.nossolocale.PegarTexto( "spl32" /* "abre chaves" */ );
				break;
			case "}":
				converte = this.nossolocale.PegarTexto( "spl33" /* "fecha chaves" */ );
				break;
			case "[":
				converte = this.nossolocale.PegarTexto( "spl34" /* "abre colchetes" */ );
				break;
			case "]":
				converte = this.nossolocale.PegarTexto( "spl35" /* "fecha colchetes" */ );
				break;
			case ",":
				converte = this.nossolocale.PegarTexto( "spl36" /* "vírgula" */ );
				break;
			case ".":
				converte = this.nossolocale.PegarTexto( "spl37" /* "ponto" */ );
				break;
			case ";":
				converte = this.nossolocale.PegarTexto( "spl38" /* "ponto e vírgula" */ );
				break;
			case "/":
				converte = this.nossolocale.PegarTexto( "spl39" /* "dividido" */ );
				break;
			case "\\":
				converte = this.nossolocale.PegarTexto( "spl40" /* "barra invertida" */ );
				break;
			case "<":
				converte = this.nossolocale.PegarTexto( "spl41" /* "menor" */ );
				break;
			case ">":
				converte = this.nossolocale.PegarTexto( "spl42" /* "maior" */ );
				break;
			case ":":
				converte = this.nossolocale.PegarTexto( "spl43" /* "dois pontos" */ );
				break;
			case "?":
				converte = this.nossolocale.PegarTexto( "spl44" /* "ponto de interrogação" */ );
				break;
			case "§":
				converte = this.nossolocale.PegarTexto( "spl45" /* "paráfrago" */ );
				break;
			case "©":
				converte = this.nossolocale.PegarTexto( "spl46" /* "símbolo de copirráite" */ );
				break;
			case "®":
				converte = this.nossolocale.PegarTexto( "spl47" /* "símbolo de marca registrada" */ );
				break;
			case "™":
				converte = this.nossolocale.PegarTexto( "spl48" /* "símbolo de marca comercial" */ );
				break;
			case "ª":
				converte = this.nossolocale.PegarTexto( "spl49" /* "primeira" */ );
				break;
			case "º":
				converte = this.nossolocale.PegarTexto( "spl50" /* "primeiro" */ );
				break;
			case "°":
				converte = this.nossolocale.PegarTexto( "spl51" /* "grau" */ );
				break;
			case "€":
				converte = this.nossolocale.PegarTexto( "spl52" /* "euro" */ );
				break;
			case "'":
				converte = this.nossolocale.PegarTexto( "spl53" /* "apóstrofe" */ );
				break;
			case '"':
				converte = this.nossolocale.PegarTexto( "spl54" /* "aspas" */ );
				break;
			case "¨":
				converte = this.nossolocale.PegarTexto( "spl55" /* "trema" */ );
				break;
			case "^":
				converte = this.nossolocale.PegarTexto( "spl56" /* "circunflexo" */ );
				break;
			case "~":
				converte = this.nossolocale.PegarTexto( "spl57" /* "til" */ );
				break;
			case "`":
				converte = this.nossolocale.PegarTexto( "spl58" /* "crase" */ );
				break;
			case "´":
				converte = this.nossolocale.PegarTexto( "spl59" /* "acento agudo" */ );
				break;
		}
		
		//acentuados
		if(converte == "")
		switch(letra.toLowerCase())
		{
			case "ç":
				converte = this.nossolocale.PegarTexto( "spl60" /* "cê. cedilha" */ );
				break;
			case "à":
				converte = this.nossolocale.PegarTexto( "spl61" /* "a. com crase" */ );
				break;
			case "á":
				converte = this.nossolocale.PegarTexto( "spl62" /* "a. agudo" */ );
				break;
			case "â":
				converte = this.nossolocale.PegarTexto( "spl63" /* "a. circunflexo" */ );
				break;
			case "ã":
				converte = this.nossolocale.PegarTexto( "spl64" /* "a. com til" */ );
				break;
			case "é":
				converte = this.nossolocale.PegarTexto( "spl65" /* "e. agudo" */ );
				break;
			case "ê":
				converte = this.nossolocale.PegarTexto( "spl66" /* "e. circunflexo" */ );
				break;
			case "í":
				converte = this.nossolocale.PegarTexto( "spl67" /* "i. agudo" */ );
				break;
			case "ô":
				converte = this.nossolocale.PegarTexto( "spl68" /* "o. circunflexo" */ );
				break;
			case "ó":
				converte = this.nossolocale.PegarTexto( "spl69" /* "o. agudo" */ );
				break;
			case "õ":
				converte = this.nossolocale.PegarTexto( "spl70" /* "o. com til" */ );
				break;
			case "ú":
				converte = this.nossolocale.PegarTexto( "spl71" /* "u. agudo" */ );
				break;
			case "ü":
				converte = this.nossolocale.PegarTexto( "spl72" /* "u. com trema" */ );
				break;
		}

		
		//se nao converteu, usa o simbolo diretamente
		//inclui numeros e letras
		if(converte == "")
			converte = letra;
			
		//coloca um ponto no fim
		if(converte.charAt(converte.length - 1) != "." && converte.charAt(converte.length - 1) != " " )
			converte += ".";
			
		converte += " ";
		ret += converte;
	}
	
	return ret;
}

