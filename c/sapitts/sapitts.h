#ifndef _sapitts_h
#define _sapitts_h

/*
esta classe mapeia para o SAPI 4 ou SAPI 5
*/

#include "sapi5tts\sapi5tts.h"
#include "sapi4tts\sapi4tts.h"


class sapitts
{
public:

	//construtor
	sapitts() : m_sapi5voices(-1), 
		//m_sapi4voices(-1), m_sapi5active(true), 
		m_volume(1), m_speed(0)
	{
		//temos que descobrir quem usamos: o sapi4 ou o sapi5
		m_sapi5voices = m_sapi5tts.VoicesCount();
		//m_sapi4voices = m_sapi4tts.VoicesCount();
		//damos preferencia para o sapi5
		/*
		if(m_sapi5voices > 0)
			m_sapi5active = true;
		else
		{
			if(m_sapi4voices > 0)
				m_sapi5active = false;
		}
		*/
	}

	//retorna TRUE se está OK, false se deu erro
	bool PlayTTS(const wchar_t* texto)
	{
//		if(m_sapi5active)
			return m_sapi5tts.PlayTTS(texto);
//		return m_sapi4tts.PlayTTS(texto);
	}


	bool IsTTSinstalled()
	{
		return m_sapi5tts.IsTTSinstalled();
		//em 20110404 retirmos o sapi 4
		/*
		//serve qualquer um dos dois
		bool sap5 = m_sapi5tts.IsTTSinstalled();
		bool sap4 = m_sapi4tts.IsTTSinstalled();
		if(sap5 || sap4)
			return true;

		//nenhum dos dois está instalado
		return false;
		*/
	}

	bool IsPlaying()
	{
//		if(m_sapi5active)
			return m_sapi5tts.IsPlaying();
//		return m_sapi4tts.IsPlaying();
	}

	bool IsPaused()
	{
//		if(m_sapi5active)
			return m_sapi5tts.IsPaused();
//		return m_sapi4tts.IsPaused();
	}

private:
	//guardamos em variavel para aplicar quando mudar a voz
	double m_volume;
public:
	void SetVolume(double vol)
	{
		//validamos a faixa
		if(vol < 0)
			vol = 0;
		if(vol > 1)
			vol = 1;
		m_volume = vol;
//		if(m_sapi5active)
			m_sapi5tts.SetVolume(vol);
//		else
//			m_sapi4tts.SetVolume(vol);
	}

	double GetVolume()
	{
//		if(m_sapi5active)
			return m_sapi5tts.GetVolume();
//		else
//			return m_sapi4tts.GetVolume();
	}

private:
	//guardamos em variavel para aplicar quando mudar a voz
	double m_speed;
public:
	void SetSpeed(double vol)
	{
		//validamos a faixa
		if(vol < -10)
			vol = -10;
		if(vol > 10)
			vol = 10;
		m_speed = vol;
//		if(m_sapi5active)
			m_sapi5tts.SetSpeed(vol);
//		else
//			m_sapi4tts.SetSpeed(vol);
	}

	double GetSpeed()
	{
//		if(m_sapi5active)
			return m_sapi5tts.GetSpeed();
//		else
//			return m_sapi4tts.GetSpeed();
	}

	void StopTTS()
	{
//		if(m_sapi5active)
			m_sapi5tts.StopTTS();
//		else
//			m_sapi4tts.StopTTS();
	}


	void PauseTTS()
	{
//		if(m_sapi5active)
			m_sapi5tts.PauseTTS();
//		else
//			m_sapi4tts.PauseTTS();
	}


	void ResumeTTS()
	{
//		if(m_sapi5active)
			m_sapi5tts.ResumeTTS();
//		else
//			m_sapi4tts.ResumeTTS();
	}



	//variaveis de controle da listagem de vozes
private:
	//quantas vozes temos em cada tipo de tts
	//primeiro estao as de sapi5, depois as de sapi4
	//se algum estiver com -1, ainda nao foi inicializado
	int m_sapi5voices;
	//em 20110404 retirmos o sapi 4
	//int m_sapi4voices;

	//rotinas da lisagem de vozes
public:
	int VoicesCount()
	{
		//somamos o sapi5 e o sapi4
		return m_sapi5voices;	// + m_sapi4voices;
	}

	std::wstring VoiceName(int index)
	{
		//quem vamos chamar?
//		if(index < m_sapi5voices)
			return m_sapi5tts.VoiceName(index);

//em 20110404 retirmos o sapi 4
		//é o sapi4
//		return m_sapi4tts.VoiceName(index - m_sapi5voices);
	}


	std::wstring VoiceLang(int index)
	{
		//quem vamos chamar?
//		if(index < m_sapi5voices)
			return m_sapi5tts.VoiceLang(index);

		//é o sapi4
//		return m_sapi4tts.VoiceLang(index - m_sapi5voices);
	}


	//0 = sapi4, 1 = sapi5
	int VoiceType(int index)
	{
//		if(index < m_sapi5voices)
			return 1;
//		return 0;
	}

	//0 = sapi4, 1 = sapi5
	int GetCurrVoiceType()
	{
//		if(m_sapi5active)
			return 1;
//		return 0;
	}


//IMPORTANTE: os dois devem ter o mesmo tamanho
#define VOICEID_SAPI5_TEXT L"SAPI5-"
#define VOICEID_SAPI5_LEN (6)
//#define VOICEID_SAPI4_TEXT L"SAPI4-"
//#define VOICEID_SAPI4_LEN (6)

	std::wstring VoiceID(int index)
	{
		//quem vamos chamar?
		std::wstring ret;
//		if(index < m_sapi5voices)
		{
			//colocamos SAPI5- na frente
			ret = VOICEID_SAPI5_TEXT;
			ret += m_sapi5tts.VoiceID(index);
		}
/*
		else
		{
			//colocamos SAPI4- na frente
			ret = VOICEID_SAPI4_TEXT;
			ret += m_sapi4tts.VoiceID(index - m_sapi5voices);
		}
*/
		return ret;
	}

	std::wstring GetVoiceID()
	{
//		if(m_sapi5active)
		{
			//colocamos SAPI5- na frente
			std::wstring ret = VOICEID_SAPI5_TEXT;
			ret += m_sapi5tts.GetVoiceID();
			return ret;
		}
/*		else
		{
			//colocamos SAPI4- na frente
			std::wstring ret = VOICEID_SAPI4_TEXT;
			ret += m_sapi4tts.GetVoiceID();
			return ret;
		}
*/	}

	void SetVoice(std::wstring id)
	{
		//tem que ter o prefixo na frente
		if(id.length() <= VOICEID_SAPI5_LEN)
			return;
//		if(id.length() <= VOICEID_SAPI4_LEN)
//			return;

		//tiramos o SAPI5- na frente
		std::wstring tipo = id.substr(0, VOICEID_SAPI5_LEN);
		id = id.substr(VOICEID_SAPI5_LEN, id.length() - VOICEID_SAPI5_LEN);

		//se for um tipo nao reconhecido, nao fazemos nada
		if(tipo == VOICEID_SAPI5_TEXT)
		{
//			m_sapi5active = true;
			m_sapi5tts.SetVoice(id);
			//propagar o volume e velocidade
			SetSpeed(m_speed);
			SetVolume(m_volume);
		}
		
		/*
		if(tipo == VOICEID_SAPI4_TEXT)
		{
			m_sapi5active = false;
			m_sapi4tts.SetVoice(id);
			//propagar o volume e velocidade
			SetSpeed(m_speed);
			SetVolume(m_volume);
		}
		*/

	}


private:
	//para gerenciar o sapi 5
	sapi5tts m_sapi5tts;
	//para gerenciar o sapi 4
//em 20110404 retirmos o sapi 4
//	sapi4tts m_sapi4tts;

	//se estamos usando agora o sapi4 ou o sapi5
	//note que somente podemos ter um ativo por vez
	//bool m_sapi5active;

};


#endif //_sapitts_h
