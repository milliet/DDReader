#ifndef _sapi5tts_h
#define _sapi5tts_h

#include <string>

#include <windows.h>        // System includes
#include <atlbase.h>		// ATL
#include <objbase.h>
#include "..\..\sdk-sapi5\Include\sapi.h"           // SAPI includes

//estas aqui é so para poder usar o sphelper.h
#include "..\..\sdk-sapi5\Include\sapiddk.h"
#include "..\..\sdk-sapi5\Include\SPError.h"
#include "..\..\sdk-sapi5\Include\SPDebug.h"
#define SPDebug_h
#include "..\..\sdk-sapi5\Include\sphelper.h"


//para inicializar o COM
#include "..\..\utils\COMinitializer.h"

//para liberar ponteiros
#define SAFE_RELEASE(i) {if (i) i->Release(); i = NULL;}


class sapi5tts
{
public:
	sapi5tts() : 
		m_ISpVoice(NULL), 
		m_paused(false)
	{
		HRESULT hr = m_ISpVoice.CoCreateInstance(CLSID_SpVoice);
		if(hr != S_OK)
			m_ISpVoice = NULL;
	}


	bool IsTTSinstalled()
	{
		return InicializadoOK();
	}


	bool InicializadoOK()
	{
		//verifica se estamos corretamente inicializados
		if(m_ISpVoice == NULL)
			return false;
		return true;
	}


	//retorna TRUE se está OK, false se deu erro
	bool PlayTTS(const wchar_t* texto)
	{
		if(!InicializadoOK())
			return false;


		ULONG pulStreamNumber;
		HRESULT hr = m_ISpVoice->Speak(texto, SPF_ASYNC | SPF_PURGEBEFORESPEAK | SPF_IS_NOT_XML , &pulStreamNumber);
		if(hr != S_OK)
			return false;

		//tiramos a pausa
		//mesmo que não esteja em pausa, nao tem problema dar o resume muitas vezes
		m_paused = false;
		m_ISpVoice->Resume();

		return true;
	}


	bool IsPlaying()
	{
		if(!InicializadoOK())
			return false;

		//está em pausa, dizemos que está falando
		if(m_paused)
			return true;

		SPVOICESTATUS pStatus;
		HRESULT hr = m_ISpVoice->GetStatus(&pStatus, NULL);
		if(hr != S_OK)
			return false;

		//se esta falando
		if(pStatus.dwRunningState == SPRS_IS_SPEAKING)
			return true;

		//se esta esperando para comecar a falar
		if(pStatus.dwRunningState == 0)
			return true;

		return false;
	}


	bool IsPaused()
	{
		if(!InicializadoOK())
			return false;

		//está em pausa, dizemos que está falando
		return m_paused;
	}


	void StopTTS()
	{
		if(!InicializadoOK())
			return;

		// Stop current rendering with a PURGEBEFORESPEAK...
		m_ISpVoice->Speak( NULL, SPF_PURGEBEFORESPEAK, 0);
	}

private:
	//indica se estazmos pausados
	bool m_paused;

public:
	void PauseTTS()
	{
		if(!InicializadoOK())
			return;

		if(m_paused)
			return;
		m_paused = true;
		m_ISpVoice->Pause();
	}


	void ResumeTTS()
	{
		if(!InicializadoOK())
			return;

		if(!m_paused)
			return;
		m_paused = false;
		m_ISpVoice->Resume();
	}


	//volume: 0 sem som, 1 volume maximo
public:
	double GetVolume()
	{
		if(!InicializadoOK())
			return 1;
		USHORT vol;
		HRESULT hr = m_ISpVoice->GetVolume(&vol);
		if(hr != S_OK)
			return 1;

		//Volume levels are specified in percentage values ranging from zero to 100 - values outside this range may be truncated. 
		double ret = (double)vol;
		return ret / 100;
	}


	void SetVolume(double vol)
	{
		vol = vol * 100;

		if(!InicializadoOK())
			return;
		HRESULT hr = m_ISpVoice->SetVolume( (USHORT)vol);
		//ignoramos erros
	}


	//velocidade: 1 normal, 2 dobro, 0 parado
	//Supported values range from -10 to 10 - values outside this range may be truncated.
public:
	double GetSpeed()
	{
		if(!InicializadoOK())
			return 1;
		long vol;
		HRESULT hr = m_ISpVoice->GetRate(&vol);
		if(hr != S_OK)
			return 0;

		//Supported values range from -10 to 10 - values outside this range may be truncated.
		double ret = (double)vol;
		
		return ret;
	}


	void SetSpeed(double vol)
	{
		//Supported values range from -10 to 10 - values outside this range may be truncated.

		if(!InicializadoOK())
			return;

		//vamos ver se alterou a velocidade
		if(GetSpeed() == vol)
			return;

		//alteramos a velocidade
		HRESULT hr = m_ISpVoice->SetRate( (long)vol);
		//ignoramos erros
	}


	/*
	=========================================================
	=========================================================
	=========================================================
	listagem de vozes
	*/
private:
	//loop nas vozes, pega as propriedades todas da voz com GetIndex (ou -1 para nao pegar nada)
	void EnumVoices(std::wstring &name, std::wstring &id, std::wstring &language, 
		int GetIndex, int &TotalVoices, bool setVoice, std::wstring setVoiceID)
	{
		//inicializa as variaveis todas
		name = L"";
		id = L"";
		language = L"";
		TotalVoices = 0;

		HRESULT hr;
		ISpObjectToken * pToken;        // NOTE:  Not a CComPtr!  Be Careful.
		CComPtr<IEnumSpObjectTokens> cpEnum;
		hr = SpEnumTokens(SPCAT_VOICES, NULL, NULL, &cpEnum);
		if (hr != S_OK)
			return;

        while (cpEnum->Next(1, &pToken, NULL) == S_OK)
        {
			//vamos setar essa voz?
			if(InicializadoOK())
			{
				if(setVoice)
				{
					//pegar o ID
					std::wstring thisID;
					WCHAR * pszTokenId;
					hr = pToken->GetId(&pszTokenId);
					if (SUCCEEDED(hr))
					{
						thisID = pszTokenId;
						::CoTaskMemFree(pszTokenId);
					}

					//é o ID?
					if(thisID == setVoiceID)
					{
						m_ISpVoice->SetVoice(pToken);
					}
				}
			}


			//vamos pegar os atributos?
			if(TotalVoices == GetIndex)
			{
				//pegar o nome
				CSpDynamicString dstrDesc;
				hr = SpGetDescription(pToken, &dstrDesc);
				if (SUCCEEDED(hr))
					name = dstrDesc;

				//pegar o ID
				WCHAR * pszTokenId;
				hr = pToken->GetId(&pszTokenId);
				if (SUCCEEDED(hr))
				{
					id = pszTokenId;
					::CoTaskMemFree(pszTokenId);
				}


				//pegar o idioma
				CComPtr<ISpDataKey> cpSubKey;
				hr = pToken->OpenKey(L"attributes", &cpSubKey);
				if (SUCCEEDED(hr))
				{
					WCHAR *pont;
					hr = cpSubKey->GetStringValue(L"Language", &pont);
					language = pont;
					::CoTaskMemFree(pont);
				}

			}

			//nao tenho certeza de que precise....
			pToken->Release();

			//conta a voz
			TotalVoices++;
        }
	}


public:
	//total de vozes
	int VoicesCount()
	{
		int TotalVoices;
		std::wstring name;
		std::wstring id;
		std::wstring language;
		EnumVoices(name, id, language, -1, TotalVoices, false, L"");
		return TotalVoices;
	}


	//nome de uma voz
	std::wstring VoiceLang(int index)
	{
		int TotalVoices;
		std::wstring name;
		std::wstring id;
		std::wstring language;
		EnumVoices(name, id, language, index, TotalVoices, false, L"");
		return language;
	}

	//nome de uma voz
	std::wstring VoiceName(int index)
	{
		int TotalVoices;
		std::wstring name;
		std::wstring id;
		std::wstring language;
		EnumVoices(name, id, language, index, TotalVoices, false, L"");
		return name;
	}

	//ID de uma voz
	std::wstring VoiceID(int index)
	{
		int TotalVoices;
		std::wstring name;
		std::wstring id;
		std::wstring language;
		EnumVoices(name, id, language, index, TotalVoices, false, L"");
		return id;
	}

	//usar uma voz
	void SetVoice(std::wstring idToSet)
	{
		int TotalVoices;
		std::wstring name;
		std::wstring id;
		std::wstring language;
		EnumVoices(name, id, language, -1, TotalVoices, true, idToSet);
	}

	//ID da voz autalmente selecionada
	std::wstring GetVoiceID()
	{
		if(!InicializadoOK())
			return L"";


		//damos o getvoide e depois o getid
		std::wstring ret;
		ISpObjectToken * pToken;        // NOTE:  Not a CComPtr!  Be Careful.
		HRESULT hr;
		hr = m_ISpVoice->GetVoice(&pToken);
		if(SUCCEEDED(hr))
		{
			WCHAR * pszTokenId;
			hr = pToken->GetId(&pszTokenId);
			if (SUCCEEDED(hr))
			{
				ret = pszTokenId;
				::CoTaskMemFree(pszTokenId);
			}
			pToken->Release();
		}

		return ret;
	}



	/*
	=========================================================
	=========================================================
	=========================================================
	privados
	*/

private:
	//para inicializar o COM
	static COMinitializer sapi5tts::_COMinitializer;

	//o nosso objeto
	CComPtr<ISpVoice>	m_ISpVoice;
};


#endif //_sapi5tts_h
