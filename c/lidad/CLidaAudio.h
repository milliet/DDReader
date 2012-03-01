#ifndef __clidaaudio_H__
#define __clidaaudio_H__

#include "comp.h"
#include "nsStringAPI.h"

#include "..\directshow\directshow.h"
#include "..\sapitts\sapitts.h"


#define LIDAAUDIO_CONTRACTID "@lidad.dll/lidaaudio;1"
#define LIDAAUDIO_CLASSNAME "LidaAudio"
#define LIDAAUDIO_CID { 0x23cc309f, 0x0629, 0x44a0, { 0xbb, 0x5b, 0xbc, 0x76, 0x6a, 0xb8, 0xbb, 0x6a } }

/*
a imnplementacao da interface
NOTA IMPORTANTE: o firefox construi duas instacias do objeto. os destrutores aparentemente sao feitos
por garbage collector, sao cahamdos bem depois de mudar a página
e pior: nem sempre chama... temos que ser BEM conservadores...
*/

class CLidaAudio : public ILidaAudio
{
public:
	NS_DECL_ISUPPORTS
	NS_DECL_ILIDAAUDIO

	CLidaAudio();


#ifdef NAO_COMPILAR
	//colocamos todos os metodos aqui só para poder ver na lista de classes do visual studio
	//note que isto nao é compilado

  /* AString voiceLang (in long index); */
  NS_IMETHOD VoiceLang(PRInt32 index, nsAString & _retval) = 0;

  /* long voiceType (in long index); */
  NS_IMETHOD VoiceType(PRInt32 index, PRInt32 *_retval) = 0;

  /* long getCurrVoiceType (); */
  NS_IMETHOD GetCurrVoiceType(PRInt32 *_retval) = 0;

  /* AString getVersion (); */
  NS_IMETHOD GetVersion(nsAString & _retval) = 0;

  /* attribute double speedAudio; */
  NS_IMETHOD GetSpeedAudio(double *aSpeedAudio) = 0;
  NS_IMETHOD SetSpeedAudio(double aSpeedAudio) = 0;

  /* attribute double speedTTS; */
  NS_IMETHOD GetSpeedTTS(double *aSpeedTTS) = 0;
  NS_IMETHOD SetSpeedTTS(double aSpeedTTS) = 0;

  /* attribute double volAudio; */
  NS_IMETHOD GetVolAudio(double *aVolAudio) = 0;
  NS_IMETHOD SetVolAudio(double aVolAudio) = 0;

  /* attribute double volTTS; */
  NS_IMETHOD GetVolTTS(double *aVolTTS) = 0;
  NS_IMETHOD SetVolTTS(double aVolTTS) = 0;

  /* attribute long positionAudio; */
  NS_IMETHOD GetPositionAudio(PRInt32 *aPositionAudio) = 0;
  NS_IMETHOD SetPositionAudio(PRInt32 aPositionAudio) = 0;

  /* boolean isTTSinstalled (); */
  NS_IMETHOD IsTTSinstalled(PRBool *_retval) = 0;

  /* boolean isAudioInstalled (); */
  NS_IMETHOD IsAudioInstalled(PRBool *_retval) = 0;

  /* long getStatusAudio (); */
  NS_IMETHOD GetStatusAudio(PRInt32 *_retval) = 0;

  /* long getStatusTTS (); */
  NS_IMETHOD GetStatusTTS(PRInt32 *_retval) = 0;

  /* boolean playTTS (in AString texto); */
  NS_IMETHOD PlayTTS(const nsAString & texto, PRBool *_retval) = 0;

  /* long playAudio (in AString arquivo, in long inicio, in long fim); */
  NS_IMETHOD PlayAudio(const nsAString & arquivo, PRInt32 inicio, PRInt32 fim, PRInt32 *_retval) = 0;

  /* void stopTTS (); */
  NS_IMETHOD StopTTS(void) = 0;

  /* void stopAudio (); */
  NS_IMETHOD StopAudio(void) = 0;

  /* void pauseTTS (); */
  NS_IMETHOD PauseTTS(void) = 0;

  /* void pauseAudio (); */
  NS_IMETHOD PauseAudio(void) = 0;

  /* void resumeTTS (); */
  NS_IMETHOD ResumeTTS(void) = 0;

  /* void resumeAudio (); */
  NS_IMETHOD ResumeAudio(void) = 0;

  /* long voicesCount (); */
  NS_IMETHOD VoicesCount(PRInt32 *_retval) = 0;

  /* AString voiceID (in long index); */
  NS_IMETHOD VoiceID(PRInt32 index, nsAString & _retval) = 0;

  /* AString voiceName (in long index); */
  NS_IMETHOD VoiceName(PRInt32 index, nsAString & _retval) = 0;

  /* AString getVoiceID (); */
  NS_IMETHOD GetVoiceID(nsAString & _retval) = 0;

  /* void setVoice (in AString id); */
  NS_IMETHOD SetVoice(const nsAString & id) = 0;

#endif


private:
	~CLidaAudio();

	//o nosso gerenciador de audio
	directshow m_directshow;

	//o nosso gerenciador de TTS
	sapitts m_sapitts;

};

#endif