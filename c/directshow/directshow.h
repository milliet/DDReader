#ifndef _directshow_h
#define _directshow_h

#include <dshow.h>
#include "..\utils\COMinitializer.h"
#include <string>

//para converter de milissegndos para 100 nanossegunds
#define MULTIPLICADOR_DE_MILISEG_PARA_REFERENCETIME 10000

//para liberar ponteiros
#define SAFE_RELEASE(i) {if (i) i->Release(); i = NULL;}


class directshow
{
public:
	directshow() : 
		m_GraphBuilder(NULL), 
		m_MediaControl(NULL), 
		m_MediaEvent(NULL), 
		m_MediaSeeking(NULL), 
		m_BasicAudio(NULL),
		m_volume(1),
		m_speed(1)
	{
		//nao precisamos inicializar no construtor, 
		//quando tocar algum arquivo inicializar
		//InitInterfaces();
	}


	bool InicializadoOK()
	{
		//verifica se estamos corretamente inicializados
		if(m_BasicAudio == NULL)
			return false;
		if(m_MediaControl == NULL)
			return false;
		if(m_MediaEvent == NULL)
			return false;
		if(m_MediaSeeking == NULL)
			return false;
		if(m_GraphBuilder == NULL)
			return false;
		return true;
	}


	bool IsAudioInstalled()
	{
		//se inicializou, beleza...
		if(InicializadoOK())
			return true;

		//se ainda nao inicalizou
		//reinicializa as interfaces
		FreeInterfaces();
		InitInterfaces();
		if(InicializadoOK())
			return true;

		//nao inicializou nao....
		return false;
	}


	//para tocar audio
	//os status possiveis de retorno
	enum PlayAudioStatus 
	{
		PlayAudioStatus_ok, PlayAudioStatus_erro, PlayAudioStatus_semcodec,
		PlayAudioStatus_semarquivo, PlayAudioStatus_arquivodanificado

	};


private:
	//o nome do arquivo sendo tocado
	std::wstring m_CurrentFile;

public:
	enum PlayAudioStatus PlayAudio(const std::wstring& arquivo, long inicio, long fim)
	{
		//se mandarem tocar o mesmo arquivo, utilizar o que ja está carregado
		//tambem reinicializamos se as interfaces nao estiverem prontas
		//também reincializamos se nao derem um tempo especifico (porque nao achi como limpar o tempo já configurado para o som)
		if(arquivo != m_CurrentFile || !InicializadoOK() || inicio == -1 || fim == -1)
		{
			m_CurrentFile = arquivo;

			//reinicializa as interfaces
			FreeInterfaces();
			InitInterfaces();

			if(!InicializadoOK())
				return PlayAudioStatus_erro;

			//tentamos carregar o arquivo
			HRESULT hr = m_GraphBuilder->RenderFile(m_CurrentFile.c_str(), NULL);
			/*
				Value Description 
				S_OK Success. 
				VFW_S_AUDIO_NOT_RENDERED Partial success; the audio was not rendered. 
				VFW_S_DUPLICATE_NAME Success; the Filter Graph Manager modified the filter name to avoid duplication. 
				VFW_S_PARTIAL_RENDER Some of the streams in this movie are in an unsupported format. 
				VFW_S_VIDEO_NOT_RENDERED Partial success; some of the streams in this movie are in an unsupported format. 
				E_ABORT Operation aborted. 
				E_FAIL Failure. 
				E_INVALIDARG Argument is invalid. 
				E_OUTOFMEMORY Insufficient memory. 
				E_POINTER NULL pointer argument. 
				VFW_E_CANNOT_CONNECT No combination of intermediate filters could be found to make the connection. 
				VFW_E_CANNOT_LOAD_SOURCE_FILTER The source filter for this file could not be loaded. 
				VFW_E_CANNOT_RENDER No combination of filters could be found to render the stream. 
				VFW_E_INVALID_FILE_FORMAT The file format is invalid. 
				VFW_E_NOT_FOUND An object or name was not found. 
				VFW_E_UNKNOWN_FILE_TYPE The media type of this file is not recognized. 
				VFW_E_UNSUPPORTED_STREAM Cannot play back the file: the format is not supported. 
			*/
			//aceitamos S_OK VFW_S_DUPLICATE_NAME VFW_S_VIDEO_NOT_RENDERED VFW_S_PARTIAL_RENDER
			if(hr != S_OK && hr != VFW_S_DUPLICATE_NAME && hr != VFW_S_VIDEO_NOT_RENDERED && hr != VFW_S_PARTIAL_RENDER)
			{
				//marcvamos que nao estamos tocando o arquivo, para forcar a recarregar
				m_CurrentFile = L"";

				//temos que tratar o erro
				switch(hr)
				{
				case VFW_S_AUDIO_NOT_RENDERED:
				case VFW_E_CANNOT_CONNECT:
				case VFW_E_CANNOT_LOAD_SOURCE_FILTER:
				case VFW_E_CANNOT_RENDER:
				case VFW_E_UNKNOWN_FILE_TYPE:
				case VFW_E_UNSUPPORTED_STREAM:
					return PlayAudioStatus_semcodec;
					
				case VFW_E_INVALID_FILE_FORMAT:
					return PlayAudioStatus_arquivodanificado;

				case VFW_E_NOT_FOUND:
					return PlayAudioStatus_semarquivo;

				default:
					return PlayAudioStatus_erro;
				}
			}



			//seta o volume para o anterior
			setVolume(m_volume);

			//a velocidade
			m_MediaSeeking->SetRate(m_speed);
		}


		//aceitar -1 como inicio e fim
		if(inicio != -1 && fim != -1)
		{
			//vamos trabalhar com o formato de mida
			GUID time_format_atual;
			if(m_MediaSeeking->GetTimeFormat(&time_format_atual) != S_OK)
				return PlayAudioStatus_erro;
			//verifica se esta no formato certo
			if(memcmp( (void *) (&time_format_atual), (void *) (&TIME_FORMAT_MEDIA_TIME), sizeof(time_format_atual)) != 0)
			{
				//nao esta nesse formato, vamos para ele
				if(m_MediaSeeking->SetTimeFormat(&TIME_FORMAT_MEDIA_TIME) != S_OK)
				{
					//marcvamos que nao estamos tocando o arquivo, para forcar a recarregar
					m_CurrentFile = L"";

					return PlayAudioStatus_semcodec;
				}
			}

			//verifica se o fim e maior que o inicio, se nao vai dar erro
			if(inicio > fim)
			{
				//marcvamos que nao estamos tocando o arquivo, para forcar a recarregar
				m_CurrentFile = L"";

				return PlayAudioStatus_arquivodanificado;
			}

			//vamos marcar a posicao inicial e final
			LONGLONG current = ((LONGLONG)inicio) * MULTIPLICADOR_DE_MILISEG_PARA_REFERENCETIME;
			LONGLONG stop = ((LONGLONG)fim) * MULTIPLICADOR_DE_MILISEG_PARA_REFERENCETIME;
			if(m_MediaSeeking->SetPositions(&current, AM_SEEKING_AbsolutePositioning, 
				&stop, AM_SEEKING_AbsolutePositioning) != S_OK)
			{
				//marcvamos que nao estamos tocando o arquivo, para forcar a recarregar
				m_CurrentFile = L"";

				return PlayAudioStatus_erro;
			}
		}


		//rodamos o arquivo
		m_MediaControl->Run();
		return PlayAudioStatus_ok;
	}

	//pausar
	void PauseAudio()
	{
		if(!InicializadoOK())
			return;
		m_MediaControl->Pause();
	}

	//continuar
	void ResumeAudio()
	{
		if(!InicializadoOK())
			return;
		m_MediaControl->Run();
	}


	//retorna -1 se houver qq erro
	long GetPositionAudio()
	{
		if(!InicializadoOK())
			return -1;

		LONGLONG current = 0;
		if( m_MediaSeeking->GetCurrentPosition(&current) != S_OK)
			return -1;

		long ret = (long) (current / MULTIPLICADOR_DE_MILISEG_PARA_REFERENCETIME);
		return ret;
	}


	bool SetPositionAudio(long inicio)
	{
		if(!InicializadoOK())
			return false;

		//vamos marcar a posicao inicial
		LONGLONG current = ((LONGLONG)inicio) * MULTIPLICADOR_DE_MILISEG_PARA_REFERENCETIME;
		LONGLONG stop = 0;
		if(m_MediaSeeking->SetPositions(&current, AM_SEEKING_AbsolutePositioning, 
			&stop, AM_SEEKING_NoPositioning) != S_OK)
		{
			return false;
		}

		return true;
	}

	void stopAudio()
	{
		if(!InicializadoOK())
			return;

		m_MediaControl->StopWhenReady();
	}

	enum status 
	{
		parado, 
		tocando,
		pausado,
		erro,
		indeterminado
	};

	status GetStatus()
	{
		if(!InicializadoOK())
			return erro;


		//vamos processar o evento de comcluido, se tiver na lista
		ProcessarEventos();


		//vamos pegar o estado
		OAFilterState state;
		HRESULT hr = m_MediaControl->GetState(10, &state);

		//algumas coisas sao direto do retorno
		if(hr == E_FAIL)
			return erro;
		if(hr == VFW_S_CANT_CUE)
			return pausado;
		if(hr == VFW_S_STATE_INTERMEDIATE)
			return indeterminado;

		//segundo a documentacao, so sobrou o S_OK
		//agora podemos ver o estado
		if(state == State_Stopped)
			return parado;
		if(state == State_Paused)
			return pausado;
		if(state == State_Running)
			return tocando;

		//acho que deu erro....
		return parado;
	}



	//volume: 0 sem som, 1 volume maximo
private:
	double m_volume;
public:
	double getVolume()
	{
		if(!InicializadoOK())
			return m_volume;

		long vol;
		HRESULT hr = m_BasicAudio->get_Volume( &vol);
		//se deu erro, retornamos o volume que guardamos
		if(hr != S_OK)
			return m_volume;

		//transformacao do volume
		//veja o setVolume
		double ret = vol;
		ret = ret / 10000;
		ret = ret + 1;
		return ret;
	}

	void setVolume(double vol)
	{
		//normaliza, se passarem fora da faixa
		if(vol < 0)
			vol = 0;
		if(vol > 1)
			vol = 1;

		m_volume = vol;

		if(!InicializadoOK())
			return;

		//transformacao do volume
		 //Specifies the volume, as a number from -10,000 to 0, inclusive.  Full volume is 0, and -10,000 is silence. Multiply the desired decibel level by 100. For example, -10,000 = -100 dB.
		//NOTA: o volume é db, e nao linear
		//mas usamos um controle linear... bom, usamos assim mesmo...
		vol = vol - 1;
		vol = vol * 10000;
		//ignoramos erros que possa voltar
		m_BasicAudio->put_Volume( (long)vol);
	}



	//velocidade: 1 normal, 2 dobro, 0 parado
private:
	double m_speed;
public:
	double getSpeed()
	{
		if(!InicializadoOK())
			return m_speed;

		double vol;
		HRESULT hr = m_MediaSeeking->GetRate( &vol);
		//se deu erro, retornamos o volume que guardamos
		if(hr != S_OK)
			return m_speed;

		return vol;
	}

	void setSpeed(double vol)
	{
		//normaliza, se passarem fora da faixa
		if(vol < 0.0001)
			vol = 0.0001;
		if(vol > 10)
			vol = 10;

		m_speed = vol;

		if(!InicializadoOK())
			return;

		//ignoramos erros que possa voltar
		m_MediaSeeking->SetRate( m_speed);
	}



	//destrutor
	~directshow()
	{
		stopAudio();
		FreeInterfaces();
	}


private:
	//nossas estruturas de acesso ao directshow
	IGraphBuilder	*m_GraphBuilder;
	IMediaControl	*m_MediaControl;
	IMediaEvent		*m_MediaEvent;
	IMediaSeeking	*m_MediaSeeking;
	IBasicAudio		*m_BasicAudio;

	//constroi todas as interfaces
	void InitInterfaces()
	{
		//inicializa o negocio
		HRESULT hr = 0;
		hr = ::CoCreateInstance(CLSID_FilterGraph, NULL, 
			CLSCTX_INPROC_SERVER, IID_IGraphBuilder, 
			(void**)&m_GraphBuilder);
		if(FAILED(hr))
		{
			m_GraphBuilder = NULL;
			return;
		}

		//pega as outras interfaces
		hr = m_GraphBuilder->QueryInterface(IID_IMediaControl, (void **)&m_MediaControl);
		if(hr != S_OK)
			m_MediaControl = NULL;

		hr = m_GraphBuilder->QueryInterface(IID_IMediaEvent, (void **)&m_MediaEvent);
		if(hr != S_OK)
			m_MediaEvent = NULL;

		hr = m_GraphBuilder->QueryInterface(IID_IMediaSeeking, (void **)&m_MediaSeeking);
		if(hr != S_OK)
			m_MediaSeeking = NULL;

		hr = m_GraphBuilder->QueryInterface(IID_IBasicAudio, (void **)&m_BasicAudio);
		if(hr != S_OK)
			m_BasicAudio = NULL;
	}


	//libera todas as interfaces
	void FreeInterfaces()
	{
		SAFE_RELEASE(m_BasicAudio);
		SAFE_RELEASE(m_MediaControl);
		SAFE_RELEASE(m_MediaEvent);
		SAFE_RELEASE(m_MediaSeeking);
		SAFE_RELEASE(m_GraphBuilder);
	}

	//processa todos os eventos pendentes na lista
	void ProcessarEventos()
	{
		if(!InicializadoOK())
			return;

		long lEventCode;
		long lParam1;
		long lParam2;
		while(m_MediaEvent->GetEvent(&lEventCode, &lParam1, &lParam2, 0) == S_OK)
		{
			//vamos processar o evento
			if(lEventCode == EC_COMPLETE)
			{
				m_MediaControl->StopWhenReady();
			}

			//liberamos o evento
			m_MediaEvent->FreeEventParams(lEventCode, lParam1, lParam2);
		}

		//acabaram os eventos
	}



	//para inicializar o COM
	static COMinitializer directshow::_COMinitializer;


};


#endif //_directshow_h
