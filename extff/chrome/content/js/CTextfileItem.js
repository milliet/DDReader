/// <reference path="CUtils.js" />
/// <reference path="CUtils_ff.js" />

/*
gerenciamento de um CTextfileItem
*/

function CTextfileItem(absHref, relHref, passwordBinHex)
{
	this.TXTabs_href = absHref;
	this.TXTrel_href = relHref;
	
	//se o texto nao existir....
	if(absHref == null)
	{
		this.TextFileraw = CMsgIface.TextNotAvailable();
		return;
	}
	
	//carrega ele

	//NOTA: na primeira versao, a gente carregava o XML diretamente
	//e, na hora de transferir para a tela, a gente transferia a árvore diretamente
	//o problema é que a tag IMG nao fucniona corretamente, ele sempre mostra o ALT da imagem,
	//e nao a imagem em si
	
	//para resolver isso, a gente passou a carregar o arquivo como texto e transferir ele como o innerhtml 
	//do elemento de tela
	
	//this.TextFilexml = CUtils.LoadXML(this.TXTabs_href);

	this.TextFileraw = CUtils.LoadFileRaw(this.TXTabs_href);
	
	//se tem criptografia, descriptografa
	if(passwordBinHex != "")
		this.TextFileraw = CCripto.DecryptText(this.TextFileraw, passwordBinHex);
		

    //verificacao de segurança: nao permitimos scripts
    //NOTA: caso seja implementado como IFRAME, os scripts ficam automaticamente desabilitados
    //desde que a gente transfira a arvore toda para o html
    //como está feito no TesteCOPFFile.html
//    if(CUtils.HasScript(this.TextFilexml))
//		throw new CExcept(CMsg.InvalidTextScripts(), null, this.href);
}

CTextfileItem.prototype.TXTabs_href = "";	//href deste cara, absoluto
CTextfileItem.prototype.TXTrel_href = "";	//href deste cara, relativo (como está no OPF)

//nao usamos mais o TextFilexml, veja comentarios no cosntrutor
//CTextfileItem.prototype.TextFilexml = null;	//o xml dele

CTextfileItem.prototype.TextFileraw = "";	//o texto dele

