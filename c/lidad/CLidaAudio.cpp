#include "stdafx_xmlsec.h"
#include "CLidaAudio.h"
#include "..\directshow\directshow.h"
#include "..\criptografia\cripto.h"

#include <string>

#include "..\..\utils\StringConvertion.h"


/*
usando:
xpcomglue_s_nomozalloc.lib nss3.lib nspr4.lib xpcom.lib kernel32.lib ole32.lib user32.lib 


lista original de libs:
debug: nspr4.lib xpcom.lib xpcomglue_s.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib 
release: nspr4.lib xpcom.lib xpcomglue_s.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib 

usando
debug: nspr4.lib xpcom.lib xpcomglue_s.lib kernel32.lib ole32.lib user32.lib 

*/


NS_IMPL_ISUPPORTS1(CLidaAudio, ILidaAudio)

CLidaAudio::CLidaAudio()
{
}

CLidaAudio::~CLidaAudio()
{
}


NS_IMETHODIMP CLidaAudio::GetVersion(nsAString &retorno)
{
	directshow teste;

	/*
	em 20090511 colocamos funcoes de criptografia, versao foi para 1.1.5
	em 20110404 tiramos suporte ao sapi 4 pqnao funciona compilado com o visual studio 2008, versao foi para 1.1.6
	*/
	const wchar_t *msg = L"Lida-D versão 3.0, lidad.ddl versão 1.1.6";
	retorno.Assign(msg);
	return NS_OK;
}


/*
toca um mp3 ou outro arquivo de audio
os tempos estao em milisegundos

valores retornados:
0 = OK
1 = arquivo nao encontrado
2 = falta codec
3 = outros erros
*/
/* long playAudio (in AString arquivo, in long inicio, in long fim); */
NS_IMETHODIMP CLidaAudio::PlayAudio(const nsAString & arquivo, PRInt32 inicio, PRInt32 fim, PRInt32 *_retval)
{
	//marcamos erro se der problema no meio
	*_retval = 3;

	//tiramos uma copia da string
	//ela nao é nulo-terminated
	std::wstring arquivo_str;
	arquivo_str.assign(arquivo.BeginReading(), arquivo.EndReading());

	directshow::PlayAudioStatus status = m_directshow.PlayAudio(arquivo_str.c_str(), inicio, fim);
	switch(status)
	{
	case directshow::PlayAudioStatus_ok:
		*_retval = 0;
		break;

	case directshow::PlayAudioStatus_erro:
		*_retval = 3;
		break;

	case directshow::PlayAudioStatus_semcodec:
		*_retval = 2;
		break;

	case directshow::PlayAudioStatus_semarquivo:
	case directshow::PlayAudioStatus_arquivodanificado:
		*_retval = 1;
		break;

	default:
		*_retval = 3;
		break;
	}
	return NS_OK;
}


/* attribute long positionAudio; */
NS_IMETHODIMP CLidaAudio::GetPositionAudio(PRInt32 *aPositionAudio)
{
	*aPositionAudio = m_directshow.GetPositionAudio();
	return NS_OK;
}

NS_IMETHODIMP CLidaAudio::SetPositionAudio(PRInt32 aPositionAudio)
{
	if(!m_directshow.SetPositionAudio(aPositionAudio))
		return NS_ERROR_FAILURE;

	return NS_OK;
}


/* long getStatusAudio (); */
	/*
	status de audio e tts
	0 = parado
	1 = tocando
	2 = pausado
	3 = erro
	10 = indeterminado, volte a tentar de novo mais tarde
	*/
NS_IMETHODIMP CLidaAudio::GetStatusAudio(PRInt32 *_retval)
{
	*_retval = 11;
	enum directshow::status status = m_directshow.GetStatus();
	switch(status)
	{
	case directshow::status::parado:
		*_retval = 0;
		break;

	case directshow::status::tocando:
		*_retval = 1;
		break;

	case directshow::status::pausado:
		*_retval = 2;
		break;

	case directshow::status::erro:
		*_retval = 3;
		break;

	case directshow::status::indeterminado:
		*_retval = 11;
		break;
	}

	return NS_OK;
}


/* void playTTS (in AString texto); */
/*
retorna TRUE se está OK, false se deu erro
*/
NS_IMETHODIMP CLidaAudio::PlayTTS(const nsAString & texto, PRBool *_retval)
{
	//tiramos uma copia da string
	//ela nao é nulo-terminated
	std::wstring texto_str;
	texto_str.assign(texto.BeginReading(), texto.EndReading());

	*_retval = m_sapitts.PlayTTS(texto_str.c_str());
	return NS_OK;
}


/* long getStatusTTS (); */
	/*
	status de audio e tts
	0 = parado
	1 = tocando
	2 = pausado
	3 = erro
	10 = indeterminado, volte a tentar de novo mais tarde
	*/
NS_IMETHODIMP CLidaAudio::GetStatusTTS(PRInt32 *_retval)
{
	*_retval = 3;

	//se estaq pausado....
	if(m_sapitts.IsPaused())
	{
		*_retval = 2;
		return NS_OK;
	}

	//agora ve se esta tocando
	if(m_sapitts.IsPlaying())
		*_retval = 1;
	else
		*_retval = 0;

	return NS_OK;
}


/* void stopTTS (); */
NS_IMETHODIMP CLidaAudio::StopTTS(void)
{
	m_sapitts.StopTTS();
	return NS_OK;
}


/* void stopAudio (); */
NS_IMETHODIMP CLidaAudio::StopAudio(void)
{
	m_directshow.stopAudio();
	return NS_OK;
}


/* attribute double volAudio; */
NS_IMETHODIMP CLidaAudio::GetVolAudio(double *aVolAudio)
{
	*aVolAudio = m_directshow.getVolume();
	return NS_OK;
}

NS_IMETHODIMP CLidaAudio::SetVolAudio(double aVolAudio)
{
	m_directshow.setVolume(aVolAudio);
	return NS_OK;
}


/* void pauseTTS (); */
NS_IMETHODIMP CLidaAudio::PauseTTS(void)
{
	m_sapitts.PauseTTS();
	return NS_OK;
}


/* void pauseAudio (); */
NS_IMETHODIMP CLidaAudio::PauseAudio(void)
{
	m_directshow.PauseAudio();
	return NS_OK;
}


/* void resumeTTS (); */
NS_IMETHODIMP CLidaAudio::ResumeTTS(void)
{
	m_sapitts.ResumeTTS();
	return NS_OK;
}


/* void resumeAudio (); */
NS_IMETHODIMP CLidaAudio::ResumeAudio(void)
{
	m_directshow.ResumeAudio();
	return NS_OK;
}



  
/* attribute double speedAudio; */
NS_IMETHODIMP CLidaAudio::GetSpeedAudio(double *aSpeedAudio)
{
	*aSpeedAudio = m_directshow.getSpeed();
	return NS_OK;
}

NS_IMETHODIMP CLidaAudio::SetSpeedAudio(double aSpeedAudio)
{
	m_directshow.setSpeed(aSpeedAudio);
	return NS_OK;
}


/* attribute double speedTTS; */
NS_IMETHODIMP CLidaAudio::GetSpeedTTS(double *aSpeedTTS)
{
	*aSpeedTTS = m_sapitts.GetSpeed();
	return NS_OK;
}

NS_IMETHODIMP CLidaAudio::SetSpeedTTS(double aSpeedTTS)
{
	m_sapitts.SetSpeed(aSpeedTTS);
	return NS_OK;
}



/* attribute double volTTS; */
NS_IMETHODIMP CLidaAudio::GetVolTTS(double *aVolTTS)
{
	*aVolTTS = m_sapitts.GetVolume();
	return NS_OK;
}

NS_IMETHODIMP CLidaAudio::SetVolTTS(double aVolTTS)
{
	m_sapitts.SetVolume(aVolTTS);
	return NS_OK;
}



/* boolean isTTSinstalled (); */
NS_IMETHODIMP CLidaAudio::IsTTSinstalled(PRBool *_retval)
{
	*_retval = m_sapitts.IsTTSinstalled();
	return NS_OK;
}

  /* boolean isAudioInstalled (); */
NS_IMETHODIMP CLidaAudio::IsAudioInstalled(PRBool *_retval)
{
	*_retval = m_directshow.IsAudioInstalled();
	return NS_OK;
}


/* long voicesCount (); */
NS_IMETHODIMP CLidaAudio::VoicesCount(PRInt32 *_retval)
{
	*_retval = m_sapitts.VoicesCount();
	return NS_OK;
}

/* AString voiceID (in long index); */
NS_IMETHODIMP CLidaAudio::VoiceID(PRInt32 index, nsAString & _retval)
{
	_retval.Assign( m_sapitts.VoiceID(index).c_str());
	return NS_OK;
}


/* AString voiceLang (in long index); */
NS_IMETHODIMP CLidaAudio::VoiceLang(PRInt32 index, nsAString & _retval)
{
	_retval.Assign( m_sapitts.VoiceLang(index).c_str());
	return NS_OK;
}


/* long voiceType (in long index); */
NS_IMETHODIMP CLidaAudio::VoiceType(PRInt32 index, PRInt32 *_retval)
{
	*_retval = m_sapitts.VoiceType(index);
	return NS_OK;
}


/* long getCurrVoiceType (); */
NS_IMETHODIMP CLidaAudio::GetCurrVoiceType(PRInt32 *_retval)
{
	*_retval = m_sapitts.GetCurrVoiceType();
	return NS_OK;
}


/* AString voiceName (in long index); */
NS_IMETHODIMP CLidaAudio::VoiceName(PRInt32 index, nsAString & _retval)
{
	_retval.Assign( m_sapitts.VoiceName(index).c_str());
	return NS_OK;
}


/* AString getVoiceID (); */
NS_IMETHODIMP CLidaAudio::GetVoiceID(nsAString & _retval)
{
	_retval.Assign( m_sapitts.GetVoiceID().c_str());
	return NS_OK;
}


/* void setVoice (in AString id); */
NS_IMETHODIMP CLidaAudio::SetVoice(const nsAString & id)
{
	//tiramos uma copia da string
	//ela nao é nulo-terminated
	std::wstring texto_str;
	texto_str.assign(id.BeginReading(), id.EndReading());

	m_sapitts.SetVoice(texto_str);
	return NS_OK;
}


//se der erro, o retorno comeca com ERROR
NS_IMETHODIMP CLidaAudio::Descriptografar(const nsAString & texto, const nsAString & senha_binhex, nsAString & _retval)
{
	//para fazer: tentar pegar o texto sem copiar
	//usar NS_StringGetData
	std::wstring w_texto;
	w_texto.assign(texto.BeginReading(), texto.EndReading());
	String_Wide2A a_texto;
	a_texto.Load(w_texto.c_str(), /* CP_ACP */ CP_UTF8 );
	


	std::wstring w_senha_binhex;
	w_senha_binhex.assign(senha_binhex.BeginReading(), senha_binhex.EndReading());

	//a senha usamos as conversoes padrao
	USES_CONVERSION;

	std::string a_saida;
	std::string a_erros;

	int status = cripto::descriptografar(a_texto.GetBuffer(), a_saida, W2T(w_senha_binhex.c_str()), a_erros);
	if(status != 0)
	{
		a_saida = "ERROR";
		a_saida += a_erros;
	}

	String_A2Wide w_saida;
	w_saida.Load(a_saida.c_str(), /* CP_ACP */ CP_UTF8 );

	_retval.Assign(w_saida.GetBuffer());
	return NS_OK;
}

