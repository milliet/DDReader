/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM comp.idl
 */

#ifndef __gen_comp_h__
#define __gen_comp_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    ILidaAudio */
#define ILIDAAUDIO_IID_STR "23cc309f-0629-44a0-bb5b-bc766ab8bb6a"

#define ILIDAAUDIO_IID \
  {0x23cc309f, 0x0629, 0x44a0, \
    { 0xbb, 0x5b, 0xbc, 0x76, 0x6a, 0xb8, 0xbb, 0x6a }}

class NS_NO_VTABLE NS_SCRIPTABLE ILidaAudio : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(ILIDAAUDIO_IID)

  /* AString getVersion (); */
  NS_SCRIPTABLE NS_IMETHOD GetVersion(nsAString & _retval NS_OUTPARAM) = 0;

  /* attribute double speedAudio; */
  NS_SCRIPTABLE NS_IMETHOD GetSpeedAudio(double *aSpeedAudio) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetSpeedAudio(double aSpeedAudio) = 0;

  /* attribute double speedTTS; */
  NS_SCRIPTABLE NS_IMETHOD GetSpeedTTS(double *aSpeedTTS) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetSpeedTTS(double aSpeedTTS) = 0;

  /* attribute double volAudio; */
  NS_SCRIPTABLE NS_IMETHOD GetVolAudio(double *aVolAudio) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVolAudio(double aVolAudio) = 0;

  /* attribute double volTTS; */
  NS_SCRIPTABLE NS_IMETHOD GetVolTTS(double *aVolTTS) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVolTTS(double aVolTTS) = 0;

  /* attribute long positionAudio; */
  NS_SCRIPTABLE NS_IMETHOD GetPositionAudio(PRInt32 *aPositionAudio) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetPositionAudio(PRInt32 aPositionAudio) = 0;

  /* boolean isTTSinstalled (); */
  NS_SCRIPTABLE NS_IMETHOD IsTTSinstalled(PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean isAudioInstalled (); */
  NS_SCRIPTABLE NS_IMETHOD IsAudioInstalled(PRBool *_retval NS_OUTPARAM) = 0;

  /* long getStatusAudio (); */
  NS_SCRIPTABLE NS_IMETHOD GetStatusAudio(PRInt32 *_retval NS_OUTPARAM) = 0;

  /* long getStatusTTS (); */
  NS_SCRIPTABLE NS_IMETHOD GetStatusTTS(PRInt32 *_retval NS_OUTPARAM) = 0;

  /* boolean playTTS (in AString texto); */
  NS_SCRIPTABLE NS_IMETHOD PlayTTS(const nsAString & texto, PRBool *_retval NS_OUTPARAM) = 0;

  /* long playAudio (in AString arquivo, in long inicio, in long fim); */
  NS_SCRIPTABLE NS_IMETHOD PlayAudio(const nsAString & arquivo, PRInt32 inicio, PRInt32 fim, PRInt32 *_retval NS_OUTPARAM) = 0;

  /* void stopTTS (); */
  NS_SCRIPTABLE NS_IMETHOD StopTTS(void) = 0;

  /* void stopAudio (); */
  NS_SCRIPTABLE NS_IMETHOD StopAudio(void) = 0;

  /* void pauseTTS (); */
  NS_SCRIPTABLE NS_IMETHOD PauseTTS(void) = 0;

  /* void pauseAudio (); */
  NS_SCRIPTABLE NS_IMETHOD PauseAudio(void) = 0;

  /* void resumeTTS (); */
  NS_SCRIPTABLE NS_IMETHOD ResumeTTS(void) = 0;

  /* void resumeAudio (); */
  NS_SCRIPTABLE NS_IMETHOD ResumeAudio(void) = 0;

  /* long voicesCount (); */
  NS_SCRIPTABLE NS_IMETHOD VoicesCount(PRInt32 *_retval NS_OUTPARAM) = 0;

  /* AString voiceID (in long index); */
  NS_SCRIPTABLE NS_IMETHOD VoiceID(PRInt32 index, nsAString & _retval NS_OUTPARAM) = 0;

  /* AString voiceName (in long index); */
  NS_SCRIPTABLE NS_IMETHOD VoiceName(PRInt32 index, nsAString & _retval NS_OUTPARAM) = 0;

  /* AString voiceLang (in long index); */
  NS_SCRIPTABLE NS_IMETHOD VoiceLang(PRInt32 index, nsAString & _retval NS_OUTPARAM) = 0;

  /* long voiceType (in long index); */
  NS_SCRIPTABLE NS_IMETHOD VoiceType(PRInt32 index, PRInt32 *_retval NS_OUTPARAM) = 0;

  /* AString getVoiceID (); */
  NS_SCRIPTABLE NS_IMETHOD GetVoiceID(nsAString & _retval NS_OUTPARAM) = 0;

  /* void setVoice (in AString id); */
  NS_SCRIPTABLE NS_IMETHOD SetVoice(const nsAString & id) = 0;

  /* long getCurrVoiceType (); */
  NS_SCRIPTABLE NS_IMETHOD GetCurrVoiceType(PRInt32 *_retval NS_OUTPARAM) = 0;

  /* AString descriptografar (in AString texto, in AString senha_binhex); */
  NS_SCRIPTABLE NS_IMETHOD Descriptografar(const nsAString & texto, const nsAString & senha_binhex, nsAString & _retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(ILidaAudio, ILIDAAUDIO_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_ILIDAAUDIO \
  NS_SCRIPTABLE NS_IMETHOD GetVersion(nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetSpeedAudio(double *aSpeedAudio); \
  NS_SCRIPTABLE NS_IMETHOD SetSpeedAudio(double aSpeedAudio); \
  NS_SCRIPTABLE NS_IMETHOD GetSpeedTTS(double *aSpeedTTS); \
  NS_SCRIPTABLE NS_IMETHOD SetSpeedTTS(double aSpeedTTS); \
  NS_SCRIPTABLE NS_IMETHOD GetVolAudio(double *aVolAudio); \
  NS_SCRIPTABLE NS_IMETHOD SetVolAudio(double aVolAudio); \
  NS_SCRIPTABLE NS_IMETHOD GetVolTTS(double *aVolTTS); \
  NS_SCRIPTABLE NS_IMETHOD SetVolTTS(double aVolTTS); \
  NS_SCRIPTABLE NS_IMETHOD GetPositionAudio(PRInt32 *aPositionAudio); \
  NS_SCRIPTABLE NS_IMETHOD SetPositionAudio(PRInt32 aPositionAudio); \
  NS_SCRIPTABLE NS_IMETHOD IsTTSinstalled(PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsAudioInstalled(PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetStatusAudio(PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetStatusTTS(PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD PlayTTS(const nsAString & texto, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD PlayAudio(const nsAString & arquivo, PRInt32 inicio, PRInt32 fim, PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD StopTTS(void); \
  NS_SCRIPTABLE NS_IMETHOD StopAudio(void); \
  NS_SCRIPTABLE NS_IMETHOD PauseTTS(void); \
  NS_SCRIPTABLE NS_IMETHOD PauseAudio(void); \
  NS_SCRIPTABLE NS_IMETHOD ResumeTTS(void); \
  NS_SCRIPTABLE NS_IMETHOD ResumeAudio(void); \
  NS_SCRIPTABLE NS_IMETHOD VoicesCount(PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD VoiceID(PRInt32 index, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD VoiceName(PRInt32 index, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD VoiceLang(PRInt32 index, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD VoiceType(PRInt32 index, PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetVoiceID(nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetVoice(const nsAString & id); \
  NS_SCRIPTABLE NS_IMETHOD GetCurrVoiceType(PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Descriptografar(const nsAString & texto, const nsAString & senha_binhex, nsAString & _retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_ILIDAAUDIO(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetVersion(nsAString & _retval NS_OUTPARAM) { return _to GetVersion(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetSpeedAudio(double *aSpeedAudio) { return _to GetSpeedAudio(aSpeedAudio); } \
  NS_SCRIPTABLE NS_IMETHOD SetSpeedAudio(double aSpeedAudio) { return _to SetSpeedAudio(aSpeedAudio); } \
  NS_SCRIPTABLE NS_IMETHOD GetSpeedTTS(double *aSpeedTTS) { return _to GetSpeedTTS(aSpeedTTS); } \
  NS_SCRIPTABLE NS_IMETHOD SetSpeedTTS(double aSpeedTTS) { return _to SetSpeedTTS(aSpeedTTS); } \
  NS_SCRIPTABLE NS_IMETHOD GetVolAudio(double *aVolAudio) { return _to GetVolAudio(aVolAudio); } \
  NS_SCRIPTABLE NS_IMETHOD SetVolAudio(double aVolAudio) { return _to SetVolAudio(aVolAudio); } \
  NS_SCRIPTABLE NS_IMETHOD GetVolTTS(double *aVolTTS) { return _to GetVolTTS(aVolTTS); } \
  NS_SCRIPTABLE NS_IMETHOD SetVolTTS(double aVolTTS) { return _to SetVolTTS(aVolTTS); } \
  NS_SCRIPTABLE NS_IMETHOD GetPositionAudio(PRInt32 *aPositionAudio) { return _to GetPositionAudio(aPositionAudio); } \
  NS_SCRIPTABLE NS_IMETHOD SetPositionAudio(PRInt32 aPositionAudio) { return _to SetPositionAudio(aPositionAudio); } \
  NS_SCRIPTABLE NS_IMETHOD IsTTSinstalled(PRBool *_retval NS_OUTPARAM) { return _to IsTTSinstalled(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsAudioInstalled(PRBool *_retval NS_OUTPARAM) { return _to IsAudioInstalled(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetStatusAudio(PRInt32 *_retval NS_OUTPARAM) { return _to GetStatusAudio(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetStatusTTS(PRInt32 *_retval NS_OUTPARAM) { return _to GetStatusTTS(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD PlayTTS(const nsAString & texto, PRBool *_retval NS_OUTPARAM) { return _to PlayTTS(texto, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD PlayAudio(const nsAString & arquivo, PRInt32 inicio, PRInt32 fim, PRInt32 *_retval NS_OUTPARAM) { return _to PlayAudio(arquivo, inicio, fim, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD StopTTS(void) { return _to StopTTS(); } \
  NS_SCRIPTABLE NS_IMETHOD StopAudio(void) { return _to StopAudio(); } \
  NS_SCRIPTABLE NS_IMETHOD PauseTTS(void) { return _to PauseTTS(); } \
  NS_SCRIPTABLE NS_IMETHOD PauseAudio(void) { return _to PauseAudio(); } \
  NS_SCRIPTABLE NS_IMETHOD ResumeTTS(void) { return _to ResumeTTS(); } \
  NS_SCRIPTABLE NS_IMETHOD ResumeAudio(void) { return _to ResumeAudio(); } \
  NS_SCRIPTABLE NS_IMETHOD VoicesCount(PRInt32 *_retval NS_OUTPARAM) { return _to VoicesCount(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD VoiceID(PRInt32 index, nsAString & _retval NS_OUTPARAM) { return _to VoiceID(index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD VoiceName(PRInt32 index, nsAString & _retval NS_OUTPARAM) { return _to VoiceName(index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD VoiceLang(PRInt32 index, nsAString & _retval NS_OUTPARAM) { return _to VoiceLang(index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD VoiceType(PRInt32 index, PRInt32 *_retval NS_OUTPARAM) { return _to VoiceType(index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetVoiceID(nsAString & _retval NS_OUTPARAM) { return _to GetVoiceID(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetVoice(const nsAString & id) { return _to SetVoice(id); } \
  NS_SCRIPTABLE NS_IMETHOD GetCurrVoiceType(PRInt32 *_retval NS_OUTPARAM) { return _to GetCurrVoiceType(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Descriptografar(const nsAString & texto, const nsAString & senha_binhex, nsAString & _retval NS_OUTPARAM) { return _to Descriptografar(texto, senha_binhex, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_ILIDAAUDIO(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetVersion(nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVersion(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetSpeedAudio(double *aSpeedAudio) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSpeedAudio(aSpeedAudio); } \
  NS_SCRIPTABLE NS_IMETHOD SetSpeedAudio(double aSpeedAudio) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSpeedAudio(aSpeedAudio); } \
  NS_SCRIPTABLE NS_IMETHOD GetSpeedTTS(double *aSpeedTTS) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSpeedTTS(aSpeedTTS); } \
  NS_SCRIPTABLE NS_IMETHOD SetSpeedTTS(double aSpeedTTS) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSpeedTTS(aSpeedTTS); } \
  NS_SCRIPTABLE NS_IMETHOD GetVolAudio(double *aVolAudio) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVolAudio(aVolAudio); } \
  NS_SCRIPTABLE NS_IMETHOD SetVolAudio(double aVolAudio) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVolAudio(aVolAudio); } \
  NS_SCRIPTABLE NS_IMETHOD GetVolTTS(double *aVolTTS) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVolTTS(aVolTTS); } \
  NS_SCRIPTABLE NS_IMETHOD SetVolTTS(double aVolTTS) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVolTTS(aVolTTS); } \
  NS_SCRIPTABLE NS_IMETHOD GetPositionAudio(PRInt32 *aPositionAudio) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPositionAudio(aPositionAudio); } \
  NS_SCRIPTABLE NS_IMETHOD SetPositionAudio(PRInt32 aPositionAudio) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPositionAudio(aPositionAudio); } \
  NS_SCRIPTABLE NS_IMETHOD IsTTSinstalled(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsTTSinstalled(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsAudioInstalled(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsAudioInstalled(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetStatusAudio(PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStatusAudio(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetStatusTTS(PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStatusTTS(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD PlayTTS(const nsAString & texto, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->PlayTTS(texto, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD PlayAudio(const nsAString & arquivo, PRInt32 inicio, PRInt32 fim, PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->PlayAudio(arquivo, inicio, fim, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD StopTTS(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->StopTTS(); } \
  NS_SCRIPTABLE NS_IMETHOD StopAudio(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->StopAudio(); } \
  NS_SCRIPTABLE NS_IMETHOD PauseTTS(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->PauseTTS(); } \
  NS_SCRIPTABLE NS_IMETHOD PauseAudio(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->PauseAudio(); } \
  NS_SCRIPTABLE NS_IMETHOD ResumeTTS(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->ResumeTTS(); } \
  NS_SCRIPTABLE NS_IMETHOD ResumeAudio(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->ResumeAudio(); } \
  NS_SCRIPTABLE NS_IMETHOD VoicesCount(PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->VoicesCount(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD VoiceID(PRInt32 index, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->VoiceID(index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD VoiceName(PRInt32 index, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->VoiceName(index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD VoiceLang(PRInt32 index, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->VoiceLang(index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD VoiceType(PRInt32 index, PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->VoiceType(index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetVoiceID(nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVoiceID(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetVoice(const nsAString & id) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVoice(id); } \
  NS_SCRIPTABLE NS_IMETHOD GetCurrVoiceType(PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCurrVoiceType(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Descriptografar(const nsAString & texto, const nsAString & senha_binhex, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Descriptografar(texto, senha_binhex, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public ILidaAudio
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_ILIDAAUDIO

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, ILidaAudio)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* AString getVersion (); */
NS_IMETHODIMP _MYCLASS_::GetVersion(nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute double speedAudio; */
NS_IMETHODIMP _MYCLASS_::GetSpeedAudio(double *aSpeedAudio)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetSpeedAudio(double aSpeedAudio)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute double speedTTS; */
NS_IMETHODIMP _MYCLASS_::GetSpeedTTS(double *aSpeedTTS)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetSpeedTTS(double aSpeedTTS)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute double volAudio; */
NS_IMETHODIMP _MYCLASS_::GetVolAudio(double *aVolAudio)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVolAudio(double aVolAudio)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute double volTTS; */
NS_IMETHODIMP _MYCLASS_::GetVolTTS(double *aVolTTS)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVolTTS(double aVolTTS)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long positionAudio; */
NS_IMETHODIMP _MYCLASS_::GetPositionAudio(PRInt32 *aPositionAudio)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetPositionAudio(PRInt32 aPositionAudio)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isTTSinstalled (); */
NS_IMETHODIMP _MYCLASS_::IsTTSinstalled(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isAudioInstalled (); */
NS_IMETHODIMP _MYCLASS_::IsAudioInstalled(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long getStatusAudio (); */
NS_IMETHODIMP _MYCLASS_::GetStatusAudio(PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long getStatusTTS (); */
NS_IMETHODIMP _MYCLASS_::GetStatusTTS(PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean playTTS (in AString texto); */
NS_IMETHODIMP _MYCLASS_::PlayTTS(const nsAString & texto, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long playAudio (in AString arquivo, in long inicio, in long fim); */
NS_IMETHODIMP _MYCLASS_::PlayAudio(const nsAString & arquivo, PRInt32 inicio, PRInt32 fim, PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void stopTTS (); */
NS_IMETHODIMP _MYCLASS_::StopTTS()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void stopAudio (); */
NS_IMETHODIMP _MYCLASS_::StopAudio()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void pauseTTS (); */
NS_IMETHODIMP _MYCLASS_::PauseTTS()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void pauseAudio (); */
NS_IMETHODIMP _MYCLASS_::PauseAudio()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void resumeTTS (); */
NS_IMETHODIMP _MYCLASS_::ResumeTTS()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void resumeAudio (); */
NS_IMETHODIMP _MYCLASS_::ResumeAudio()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long voicesCount (); */
NS_IMETHODIMP _MYCLASS_::VoicesCount(PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString voiceID (in long index); */
NS_IMETHODIMP _MYCLASS_::VoiceID(PRInt32 index, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString voiceName (in long index); */
NS_IMETHODIMP _MYCLASS_::VoiceName(PRInt32 index, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString voiceLang (in long index); */
NS_IMETHODIMP _MYCLASS_::VoiceLang(PRInt32 index, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long voiceType (in long index); */
NS_IMETHODIMP _MYCLASS_::VoiceType(PRInt32 index, PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString getVoiceID (); */
NS_IMETHODIMP _MYCLASS_::GetVoiceID(nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setVoice (in AString id); */
NS_IMETHODIMP _MYCLASS_::SetVoice(const nsAString & id)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long getCurrVoiceType (); */
NS_IMETHODIMP _MYCLASS_::GetCurrVoiceType(PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString descriptografar (in AString texto, in AString senha_binhex); */
NS_IMETHODIMP _MYCLASS_::Descriptografar(const nsAString & texto, const nsAString & senha_binhex, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_comp_h__ */
