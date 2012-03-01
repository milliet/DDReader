#ifndef _COMinitializer_h
#define _COMinitializer_h

/*
classe para inicializar o COM
para usar, declare uma variavel estatica deste tipo em qq lugar do codigo
*/

class COMinitializer
{
public:

	//construtor
	COMinitializer()
	{
		CoInitialize(NULL);
	}

	//destrutor
	~COMinitializer()
	{
		CoUninitialize();
	}


};




#endif //_COMinitializer_h