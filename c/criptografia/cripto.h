#ifndef _cripto_h
#define _cripto_h

/*
classe para manipular a criptografia
*/

#include <string>

//a rotina que chamamos
int xmlsec_descriptografar(const char *texto_entrada, std::string &texto_saida, const char *senha_binhex_aeskey, std::string &erros);

class cripto
{
public:
	//a nossa rotina, simplesmente chama a outra
	static int descriptografar(const char *texto_entrada, std::string &texto_saida, const char *senha_binhex_aeskey, std::string &erros)
	{
		return ::xmlsec_descriptografar(texto_entrada, texto_saida, senha_binhex_aeskey, erros);
	}




};


#endif //#ifndef _cripto_h

