/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/toolkit/mozapps/extensions/amIInstallTrigger.idl
 */

#ifndef __gen_amIInstallTrigger_h__
#define __gen_amIInstallTrigger_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIVariant; /* forward declaration */


/* starting interface:    amIInstallCallback */
#define AMIINSTALLCALLBACK_IID_STR "bb22f5c0-3ca1-48f6-873c-54e87987700f"

#define AMIINSTALLCALLBACK_IID \
  {0xbb22f5c0, 0x3ca1, 0x48f6, \
    { 0x87, 0x3c, 0x54, 0xe8, 0x79, 0x87, 0x70, 0x0f }}

class NS_NO_VTABLE NS_SCRIPTABLE amIInstallCallback : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(AMIINSTALLCALLBACK_IID)

  /* void onInstallEnded (in AString aUrl, in PRInt32 aStatus); */
  NS_SCRIPTABLE NS_IMETHOD OnInstallEnded(const nsAString & aUrl, PRInt32 aStatus) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(amIInstallCallback, AMIINSTALLCALLBACK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_AMIINSTALLCALLBACK \
  NS_SCRIPTABLE NS_IMETHOD OnInstallEnded(const nsAString & aUrl, PRInt32 aStatus); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_AMIINSTALLCALLBACK(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnInstallEnded(const nsAString & aUrl, PRInt32 aStatus) { return _to OnInstallEnded(aUrl, aStatus); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_AMIINSTALLCALLBACK(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnInstallEnded(const nsAString & aUrl, PRInt32 aStatus) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnInstallEnded(aUrl, aStatus); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class amInstallCallback : public amIInstallCallback
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_AMIINSTALLCALLBACK

  amInstallCallback();

private:
  ~amInstallCallback();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(amInstallCallback, amIInstallCallback)

amInstallCallback::amInstallCallback()
{
  /* member initializers and constructor code */
}

amInstallCallback::~amInstallCallback()
{
  /* destructor code */
}

/* void onInstallEnded (in AString aUrl, in PRInt32 aStatus); */
NS_IMETHODIMP amInstallCallback::OnInstallEnded(const nsAString & aUrl, PRInt32 aStatus)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    amIInstallTrigger */
#define AMIINSTALLTRIGGER_IID_STR "14b4e84d-001c-4403-a608-52a67ffaab40"

#define AMIINSTALLTRIGGER_IID \
  {0x14b4e84d, 0x001c, 0x4403, \
    { 0xa6, 0x08, 0x52, 0xa6, 0x7f, 0xfa, 0xab, 0x40 }}

class NS_NO_VTABLE NS_SCRIPTABLE amIInstallTrigger : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(AMIINSTALLTRIGGER_IID)

  enum { SKIN = 1U };

  enum { LOCALE = 2U };

  enum { CONTENT = 4U };

  enum { PACKAGE = 7U };

  /* [deprecated] boolean updateEnabled (); */
  NS_SCRIPTABLE NS_IMETHOD UpdateEnabled(PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean enabled (); */
  NS_SCRIPTABLE NS_IMETHOD Enabled(PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean install (in nsIVariant aArgs, [optional] in amIInstallCallback aCallback); */
  NS_SCRIPTABLE NS_IMETHOD Install(nsIVariant *aArgs, amIInstallCallback *aCallback, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean installChrome (in PRUint32 aType, in AString aUrl, in AString aSkin); */
  NS_SCRIPTABLE NS_IMETHOD InstallChrome(PRUint32 aType, const nsAString & aUrl, const nsAString & aSkin, PRBool *_retval NS_OUTPARAM) = 0;

  /* [deprecated] boolean startSoftwareUpdate (in AString aUrl, [optional] in PRInt32 aFlags); */
  NS_SCRIPTABLE NS_IMETHOD StartSoftwareUpdate(const nsAString & aUrl, PRInt32 aFlags, PRBool *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(amIInstallTrigger, AMIINSTALLTRIGGER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_AMIINSTALLTRIGGER \
  NS_SCRIPTABLE NS_IMETHOD UpdateEnabled(PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Enabled(PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Install(nsIVariant *aArgs, amIInstallCallback *aCallback, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD InstallChrome(PRUint32 aType, const nsAString & aUrl, const nsAString & aSkin, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD StartSoftwareUpdate(const nsAString & aUrl, PRInt32 aFlags, PRBool *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_AMIINSTALLTRIGGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD UpdateEnabled(PRBool *_retval NS_OUTPARAM) { return _to UpdateEnabled(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Enabled(PRBool *_retval NS_OUTPARAM) { return _to Enabled(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Install(nsIVariant *aArgs, amIInstallCallback *aCallback, PRBool *_retval NS_OUTPARAM) { return _to Install(aArgs, aCallback, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD InstallChrome(PRUint32 aType, const nsAString & aUrl, const nsAString & aSkin, PRBool *_retval NS_OUTPARAM) { return _to InstallChrome(aType, aUrl, aSkin, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD StartSoftwareUpdate(const nsAString & aUrl, PRInt32 aFlags, PRBool *_retval NS_OUTPARAM) { return _to StartSoftwareUpdate(aUrl, aFlags, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_AMIINSTALLTRIGGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD UpdateEnabled(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->UpdateEnabled(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Enabled(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Enabled(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Install(nsIVariant *aArgs, amIInstallCallback *aCallback, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Install(aArgs, aCallback, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD InstallChrome(PRUint32 aType, const nsAString & aUrl, const nsAString & aSkin, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->InstallChrome(aType, aUrl, aSkin, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD StartSoftwareUpdate(const nsAString & aUrl, PRInt32 aFlags, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->StartSoftwareUpdate(aUrl, aFlags, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class amInstallTrigger : public amIInstallTrigger
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_AMIINSTALLTRIGGER

  amInstallTrigger();

private:
  ~amInstallTrigger();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(amInstallTrigger, amIInstallTrigger)

amInstallTrigger::amInstallTrigger()
{
  /* member initializers and constructor code */
}

amInstallTrigger::~amInstallTrigger()
{
  /* destructor code */
}

/* [deprecated] boolean updateEnabled (); */
NS_IMETHODIMP amInstallTrigger::UpdateEnabled(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean enabled (); */
NS_IMETHODIMP amInstallTrigger::Enabled(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean install (in nsIVariant aArgs, [optional] in amIInstallCallback aCallback); */
NS_IMETHODIMP amInstallTrigger::Install(nsIVariant *aArgs, amIInstallCallback *aCallback, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean installChrome (in PRUint32 aType, in AString aUrl, in AString aSkin); */
NS_IMETHODIMP amInstallTrigger::InstallChrome(PRUint32 aType, const nsAString & aUrl, const nsAString & aSkin, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [deprecated] boolean startSoftwareUpdate (in AString aUrl, [optional] in PRInt32 aFlags); */
NS_IMETHODIMP amInstallTrigger::StartSoftwareUpdate(const nsAString & aUrl, PRInt32 aFlags, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_amIInstallTrigger_h__ */
