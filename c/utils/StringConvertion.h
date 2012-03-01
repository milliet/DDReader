#ifndef _StringConvertion_h
#define _StringConvertion_h

/*
classe para converter strings
chupamos da ATL, mas nao usamos ela diretamente para nao precisar de mais bibliotecas
*/

class StringConvertion
{
public:

#define CHARS_IN_GUID     39

	//de GUID para wide
	static std::wstring GUIDToWide(GUID &uid)
	{
		//look in MSDN for StringFromIID(), StringFromGUID2() and StringFromCLSID
		OLECHAR achTemp[CHARS_IN_GUID];   
		HRESULT hr;    
		std::wstring ret;
		hr = StringFromGUID2( uid, achTemp, CHARS_IN_GUID ); 
		if( !SUCCEEDED(hr) ) 
			return ret;
		ret = achTemp;
		return ret;
	}


};

//classe para transformar de ASCII para Wide
class String_A2Wide
{
private:
	LPWSTR _lpw;
	void Deinit()
	{
		if(_lpw != NULL)
			free( (void*)_lpw);
		_lpw = NULL;
	}

	//no copy constructor
	String_A2Wide(const String_A2Wide&) {}

public:
	String_A2Wide() : _lpw(NULL)
	{
	}


	~String_A2Wide()
	{
		Deinit();
	}

	//carrega uma string
	void Load(LPCSTR _lpa, unsigned int cp)
	{
		Deinit();
		int len_a = (lstrlenA(_lpa)+1);
		_lpw = (LPWSTR)malloc(len_a*2);
		_lpw[0] = '\0';
		MultiByteToWideChar(cp, 0, _lpa, -1, _lpw, len_a);
	}

	LPCWSTR GetBuffer()
	{
		return _lpw;
	}

};


//classe para transformar de  Wide para ASCII
class String_Wide2A
{
private:
	LPSTR _lpa;
	void Deinit()
	{
		if(_lpa != NULL)
			free( (void*)_lpa);
		_lpa = NULL;
	}

	//no copy constructor
	String_Wide2A(const String_A2Wide&) {}

public:
	String_Wide2A() : _lpa(NULL)
	{
	}


	~String_Wide2A()
	{
		Deinit();
	}

	//carrega uma string
	void Load(LPCWSTR _lpw, unsigned int cp)
	{
		Deinit();
		int len_w = (lstrlenW(_lpw)+1)*2;
		_lpa = (LPSTR)malloc(len_w);
		_lpa[0] = '\0';
		WideCharToMultiByte(cp, 0, _lpw, -1, _lpa, len_w, NULL, NULL);
	}

	LPCSTR GetBuffer()
	{
		return _lpa;
	}

};


#endif //_StringConvertion_h