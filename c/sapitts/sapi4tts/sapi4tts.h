//em 20110404 retirmos o sapi 4
#if 0 

#ifndef _sapi4tts_h
#define _sapi4tts_h

//temos que definir UNICODE para ter as versoes widechar das funcoes do sapi4
#define UNICODE
#include "..\..\sdk-sapi4\Include\speech.h"           // SAPI includes


#include <string>
#include "..\..\utils\StringConvertion.h"
#include "..\..\sdk-sapi4\wrapper\sapi4_CTTSMode_mod.h"



//para inicializar o COM
#include "..\..\utils\COMinitializer.h"


class sapi4tts
{
public:
	sapi4tts() : m_paused(false)
	{
		//valores razoaveis, se é que isso existe....
		m_SpeedMin = 100;
		m_SpeedMax = 200;
		m_SpeedCur = 120;

		if(VoicesCount() <= 0)
			return;

		//incializamos com a primeira voz disponivel
		//o sistema que chama determina o idioma da voz
		SetVoiceIndex(0);
	}


	//retorna TRUE se está OK, false se deu erro
	bool PlayTTS(const wchar_t* texto)
	{
		if(!InicializadoOK())
			return false;


		HRESULT hr = tts.Speak(texto);
		if(hr != S_OK)
			return false;

		//tiramos a pausa
		m_paused = false;

		return true;
	}


	bool IsTTSinstalled()
	{
		return InicializadoOK();
	}


	bool InicializadoOK()
	{
		return tts.InicializadoOK();
	}


	bool IsPaused()
	{
		if(!InicializadoOK())
			return false;

		//está em pausa, dizemos que está falando
		return m_paused;
	}


	bool IsPlaying()
	{
		if(!InicializadoOK())
			return false;

		//está em pausa, dizemos que está falando
		if(m_paused)
			return true;

		return tts.IsSpeaking();
	}


	void StopTTS()
	{
		if(!InicializadoOK())
			return;

		tts.AudioReset();
	}


	void PauseTTS()
	{
		if(!InicializadoOK())
			return;

		if(m_paused)
			return;
		m_paused = true;
		tts.AudioPause();
	}


	void ResumeTTS()
	{
		if(!InicializadoOK())
			return;

		if(!m_paused)
			return;
		m_paused = false;
		tts.AudioResume();
	}



	//volume: 0 sem som, 1 volume maximo
public:
	double GetVolume()
	{
		if(!InicializadoOK())
			return 1;

		//The volume level is a linear range from 0x0000 for absolute silence to 0xFFFF for the maximum volume for the mode. 
		//The level for the left channel is in the low-order word, and the level for the right channel is in the high-order word.
		DWORD vol;
		if(tts.VolumeGet(&vol) != S_OK)
			return 1;

		double ret = (vol & 0xffff);
		return ret / 0xffff;
	}


	void SetVolume(double vol)
	{
		if(!InicializadoOK())
			return;

		vol = vol * 0xffff;
		DWORD volset = ( (WORD)vol << 16) | (WORD)vol;

		//vamos ver se alteramos o volume
		DWORD anterior;
		if(tts.VolumeGet(&anterior) != S_OK)
			return;
		if(anterior == volset)
			return;

		//mudamos o volumer
		tts.VolumeSet(volset);
		//e ignoramos erros
	}


private:
	//variaveis de controle da velocidade
	DWORD m_SpeedMin;
	DWORD m_SpeedMax;
	DWORD m_SpeedCur;


public:
	//velocidade: 
	//Supported values range from -10 to 10 - values outside this range may be truncated.
	double GetSpeed()
	{
		if(!InicializadoOK())
			return 1;

		DWORD vol;
		if(tts.SpeedGet(&vol) != S_OK)
			return 0;

		//temos dois intervalos: abaixo do normal e acima do normal
		if(vol < m_SpeedCur)
		{
			//de -10 a 0, mapeado para m_SpeedMin - m_SpeedCur

			//deve ser negativo
			double ret = m_SpeedCur - m_SpeedMin;
			ret = ret * -1;
			if(ret >= 0)
				return 0;
			ret = 10 * (m_SpeedCur - vol) / ret;
			return ret;
		}

		//normal?
		if(vol == m_SpeedCur)
			return 0;

		//esta acima do normal
		{
			//de 0 a 10, mapeado para m_SpeedMax - m_SpeedCur

			double ret = m_SpeedMax - m_SpeedCur;
			if(ret <= 0)
				return 0;
			ret = 10 * (vol - m_SpeedCur) / ret;
			return ret;
		}
	}


	void SetSpeed(double vol)
	{
		//Supported values range from -10 to 10 - values outside this range may be truncated.

		if(!InicializadoOK())
			return;

		DWORD newSpeed = m_SpeedCur;

		//normal?
		if(vol == 0)
		{
			newSpeed = m_SpeedCur;
		}
		else
		{

			//abaixo do normal?
			if(vol < 0)
			{
				DWORD ret = m_SpeedCur - m_SpeedMin;
				if(ret <= 0)
				{
					newSpeed = m_SpeedCur;
				}
				else
				{
					//mapeamos o -10 a 0 para um numero
					//ficou negativo
					ret = vol * ret / 10;
					ret = m_SpeedCur + ret;
					newSpeed = ret;
				}
			}
			else
			{
				//acima do normal?
				DWORD ret = m_SpeedMax - m_SpeedCur;
				if(ret <= 0)
				{
					newSpeed = m_SpeedCur;
				}
				else
				{
					//mapeamos o 0 a 10 para um numero
					//ficou negativo
					ret = vol * ret / 10;
					ret = m_SpeedCur + ret;
					newSpeed = ret;
				}
			}
		}



		//vamos ver se alteramos a velocidade
		DWORD anterior;
		if(tts.SpeedGet(&anterior) != S_OK)
		{
			tts.SpeedSet(newSpeed);
			return;
		}
		if(anterior == newSpeed)
			return;

		//mudamos a velocidade
		tts.SpeedSet(newSpeed);
		//e ignoramos erros
	}


	/*
	=========================================================
	=========================================================
	=========================================================
	listagem de vozes
	*/
private:
	//alterar a voz ativa
	//este cara tambem calcula a faixa de limites da velocidade
	void SetNewVoice(GUID *pgVoice)
	{
		if(tts.TTSModeSet(pgVoice) != S_OK)
			return;

		//valores razoaveis, se é que isso existe....
		m_SpeedMin = 100;
		m_SpeedMax = 200;
		m_SpeedCur = 120;

		//tem que ler a faixa possivel POR VOZ na inicializacao
		tts.SpeedGet(&m_SpeedCur);
		tts.SpeedSet(TTSATTR_MINSPEED);
		tts.SpeedGet(&m_SpeedMin);
		tts.SpeedSet(TTSATTR_MAXSPEED);
		tts.SpeedGet(&m_SpeedMax);

		//volta para o padrao
		tts.SpeedSet(m_SpeedCur);
	}

	//loop nas vozes, pega as propriedades todas da voz com GetIndex (ou -1 para nao pegar nada)
	void EnumVoices(std::wstring &name, std::wstring &id, std::wstring &language, 
		int GetIndex, int &TotalVoices, bool setVoice, std::wstring setVoiceID, int setIndex = -1)
	{
		//inicializa as variaveis todas
		name = L"";
		id = L"";
		language = L"";
		TotalVoices = 0;

		PITTSENUM   pITTSEnum = NULL;
		if(CoCreateInstance(CLSID_TTSEnumerator, NULL, CLSCTX_ALL, IID_ITTSEnum, (void**)&pITTSEnum) != S_OK)
			return;

		TTSMODEINFO inf;
		DWORD dwTimes;
		while(!pITTSEnum->Next(1, &inf, &dwTimes))
		{
			//vamos setar essa voz?
			if(setVoice)
			{
				if(setIndex >= 0)
				{
					if(setIndex == TotalVoices)
						SetNewVoice(&inf.gModeID);
				}
				else
				{
					//setar por id

					//pegar o ID
					std::wstring thisID = StringConvertion::GUIDToWide(inf.gModeID);

					//é o ID?
					if(thisID == setVoiceID)
						SetNewVoice(&inf.gModeID);
				}
			}


			//vamos pegar os atributos?
			if(TotalVoices == GetIndex)
			{
				name = inf.szModeName;
				id = StringConvertion::GUIDToWide(inf.gModeID);

				WCHAR buf[100 + 10];
				wsprintfW(buf, L"%x", inf.language.LanguageID);
				language = buf;
			}

			//conta a voz
			TotalVoices++;
		}

		pITTSEnum->Release();
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
	std::wstring VoiceName(int index)
	{
		int TotalVoices;
		std::wstring name;
		std::wstring id;
		std::wstring language;
		EnumVoices(name, id, language, index, TotalVoices, false, L"");
		return name;
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

	//usar uma voz
	void SetVoiceIndex(int index)
	{
		int TotalVoices;
		std::wstring name;
		std::wstring id;
		std::wstring language;
		EnumVoices(name, id, language, -1, TotalVoices, true, L"", index);
	}

	//ID da voz autalmente selecionada
	std::wstring GetVoiceID()
	{
		if(!InicializadoOK())
			return L"";


		GUID ativa;
		if(tts.TTSModeGet(&ativa) != S_OK)
			return L"";

		return StringConvertion::GUIDToWide(ativa);
	}



	/*
	=========================================================
	=========================================================
	=========================================================
	privados
	*/

private:
	//para inicializar o COM
	static COMinitializer sapi4tts::_COMinitializer;
	sapi4_CTTSMode tts;

	//indica se estazmos pausados
	bool m_paused;
};


#endif //_sapi4tts_h

#endif

