/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/modules/libpref/public/nsIPrefService.idl
 */

#ifndef __gen_nsIPrefService_h__
#define __gen_nsIPrefService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIPrefBranch_h__
#include "nsIPrefBranch.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
struct PrefTuple;
template<class E, class A> class nsTArray;
struct nsTArrayInfallibleAllocator;
class nsIFile; /* forward declaration */

class nsILocalFile; /* forward declaration */


/* starting interface:    nsIPrefService */
#define NS_IPREFSERVICE_IID_STR "decb9cc7-c08f-4ea5-be91-a8fc637ce2d2"

#define NS_IPREFSERVICE_IID \
  {0xdecb9cc7, 0xc08f, 0x4ea5, \
    { 0xbe, 0x91, 0xa8, 0xfc, 0x63, 0x7c, 0xe2, 0xd2 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIPrefService : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPREFSERVICE_IID)

  /* void readUserPrefs (in nsIFile aFile); */
  NS_SCRIPTABLE NS_IMETHOD ReadUserPrefs(nsIFile *aFile) = 0;

  /* void resetPrefs (); */
  NS_SCRIPTABLE NS_IMETHOD ResetPrefs(void) = 0;

  /* void resetUserPrefs (); */
  NS_SCRIPTABLE NS_IMETHOD ResetUserPrefs(void) = 0;

  /* void savePrefFile (in nsIFile aFile); */
  NS_SCRIPTABLE NS_IMETHOD SavePrefFile(nsIFile *aFile) = 0;

  /* nsIPrefBranch getBranch (in string aPrefRoot); */
  NS_SCRIPTABLE NS_IMETHOD GetBranch(const char * aPrefRoot, nsIPrefBranch * *_retval NS_OUTPARAM) = 0;

  /* nsIPrefBranch getDefaultBranch (in string aPrefRoot); */
  NS_SCRIPTABLE NS_IMETHOD GetDefaultBranch(const char * aPrefRoot, nsIPrefBranch * *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPrefService, NS_IPREFSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPREFSERVICE \
  NS_SCRIPTABLE NS_IMETHOD ReadUserPrefs(nsIFile *aFile); \
  NS_SCRIPTABLE NS_IMETHOD ResetPrefs(void); \
  NS_SCRIPTABLE NS_IMETHOD ResetUserPrefs(void); \
  NS_SCRIPTABLE NS_IMETHOD SavePrefFile(nsIFile *aFile); \
  NS_SCRIPTABLE NS_IMETHOD GetBranch(const char * aPrefRoot, nsIPrefBranch * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultBranch(const char * aPrefRoot, nsIPrefBranch * *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPREFSERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD ReadUserPrefs(nsIFile *aFile) { return _to ReadUserPrefs(aFile); } \
  NS_SCRIPTABLE NS_IMETHOD ResetPrefs(void) { return _to ResetPrefs(); } \
  NS_SCRIPTABLE NS_IMETHOD ResetUserPrefs(void) { return _to ResetUserPrefs(); } \
  NS_SCRIPTABLE NS_IMETHOD SavePrefFile(nsIFile *aFile) { return _to SavePrefFile(aFile); } \
  NS_SCRIPTABLE NS_IMETHOD GetBranch(const char * aPrefRoot, nsIPrefBranch * *_retval NS_OUTPARAM) { return _to GetBranch(aPrefRoot, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultBranch(const char * aPrefRoot, nsIPrefBranch * *_retval NS_OUTPARAM) { return _to GetDefaultBranch(aPrefRoot, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPREFSERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD ReadUserPrefs(nsIFile *aFile) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReadUserPrefs(aFile); } \
  NS_SCRIPTABLE NS_IMETHOD ResetPrefs(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->ResetPrefs(); } \
  NS_SCRIPTABLE NS_IMETHOD ResetUserPrefs(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->ResetUserPrefs(); } \
  NS_SCRIPTABLE NS_IMETHOD SavePrefFile(nsIFile *aFile) { return !_to ? NS_ERROR_NULL_POINTER : _to->SavePrefFile(aFile); } \
  NS_SCRIPTABLE NS_IMETHOD GetBranch(const char * aPrefRoot, nsIPrefBranch * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBranch(aPrefRoot, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultBranch(const char * aPrefRoot, nsIPrefBranch * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDefaultBranch(aPrefRoot, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPrefService : public nsIPrefService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPREFSERVICE

  nsPrefService();

private:
  ~nsPrefService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsPrefService, nsIPrefService)

nsPrefService::nsPrefService()
{
  /* member initializers and constructor code */
}

nsPrefService::~nsPrefService()
{
  /* destructor code */
}

/* void readUserPrefs (in nsIFile aFile); */
NS_IMETHODIMP nsPrefService::ReadUserPrefs(nsIFile *aFile)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void resetPrefs (); */
NS_IMETHODIMP nsPrefService::ResetPrefs()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void resetUserPrefs (); */
NS_IMETHODIMP nsPrefService::ResetUserPrefs()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void savePrefFile (in nsIFile aFile); */
NS_IMETHODIMP nsPrefService::SavePrefFile(nsIFile *aFile)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIPrefBranch getBranch (in string aPrefRoot); */
NS_IMETHODIMP nsPrefService::GetBranch(const char * aPrefRoot, nsIPrefBranch * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIPrefBranch getDefaultBranch (in string aPrefRoot); */
NS_IMETHODIMP nsPrefService::GetDefaultBranch(const char * aPrefRoot, nsIPrefBranch * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIPrefServiceInternal */
#define NS_IPREFSERVICEINTERNAL_IID_STR "08c8cd2f-8345-45ee-938d-37ee6d3661b2"

#define NS_IPREFSERVICEINTERNAL_IID \
  {0x08c8cd2f, 0x8345, 0x45ee, \
    { 0x93, 0x8d, 0x37, 0xee, 0x6d, 0x36, 0x61, 0xb2 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIPrefServiceInternal : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPREFSERVICEINTERNAL_IID)

  /* void readExtensionPrefs (in nsILocalFile aFile); */
  NS_SCRIPTABLE NS_IMETHOD ReadExtensionPrefs(nsILocalFile *aFile) = 0;

  /* [noscript] void mirrorPreferences (in nsPreferencesArrayPtr aArray); */
  NS_IMETHOD MirrorPreferences(nsTArray<PrefTuple, nsTArrayInfallibleAllocator> *aArray) = 0;

  /* [noscript] void mirrorPreference (in ACString aPrefName, in nsPreferencePtr aPref); */
  NS_IMETHOD MirrorPreference(const nsACString & aPrefName, PrefTuple *aPref) = 0;

  /* [noscript] boolean prefHasUserValue (in ACString aPrefName); */
  NS_IMETHOD PrefHasUserValue(const nsACString & aPrefName, PRBool *_retval NS_OUTPARAM) = 0;

  /* [noscript] void setPreference (in nsPreferencePtrConst aPref); */
  NS_IMETHOD SetPreference(const PrefTuple *aPref) = 0;

  /* [noscript] void clearContentPref (in ACString aPrefName); */
  NS_IMETHOD ClearContentPref(const nsACString & aPrefName) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPrefServiceInternal, NS_IPREFSERVICEINTERNAL_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPREFSERVICEINTERNAL \
  NS_SCRIPTABLE NS_IMETHOD ReadExtensionPrefs(nsILocalFile *aFile); \
  NS_IMETHOD MirrorPreferences(nsTArray<PrefTuple, nsTArrayInfallibleAllocator> *aArray); \
  NS_IMETHOD MirrorPreference(const nsACString & aPrefName, PrefTuple *aPref); \
  NS_IMETHOD PrefHasUserValue(const nsACString & aPrefName, PRBool *_retval NS_OUTPARAM); \
  NS_IMETHOD SetPreference(const PrefTuple *aPref); \
  NS_IMETHOD ClearContentPref(const nsACString & aPrefName); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPREFSERVICEINTERNAL(_to) \
  NS_SCRIPTABLE NS_IMETHOD ReadExtensionPrefs(nsILocalFile *aFile) { return _to ReadExtensionPrefs(aFile); } \
  NS_IMETHOD MirrorPreferences(nsTArray<PrefTuple, nsTArrayInfallibleAllocator> *aArray) { return _to MirrorPreferences(aArray); } \
  NS_IMETHOD MirrorPreference(const nsACString & aPrefName, PrefTuple *aPref) { return _to MirrorPreference(aPrefName, aPref); } \
  NS_IMETHOD PrefHasUserValue(const nsACString & aPrefName, PRBool *_retval NS_OUTPARAM) { return _to PrefHasUserValue(aPrefName, _retval); } \
  NS_IMETHOD SetPreference(const PrefTuple *aPref) { return _to SetPreference(aPref); } \
  NS_IMETHOD ClearContentPref(const nsACString & aPrefName) { return _to ClearContentPref(aPrefName); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPREFSERVICEINTERNAL(_to) \
  NS_SCRIPTABLE NS_IMETHOD ReadExtensionPrefs(nsILocalFile *aFile) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReadExtensionPrefs(aFile); } \
  NS_IMETHOD MirrorPreferences(nsTArray<PrefTuple, nsTArrayInfallibleAllocator> *aArray) { return !_to ? NS_ERROR_NULL_POINTER : _to->MirrorPreferences(aArray); } \
  NS_IMETHOD MirrorPreference(const nsACString & aPrefName, PrefTuple *aPref) { return !_to ? NS_ERROR_NULL_POINTER : _to->MirrorPreference(aPrefName, aPref); } \
  NS_IMETHOD PrefHasUserValue(const nsACString & aPrefName, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->PrefHasUserValue(aPrefName, _retval); } \
  NS_IMETHOD SetPreference(const PrefTuple *aPref) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPreference(aPref); } \
  NS_IMETHOD ClearContentPref(const nsACString & aPrefName) { return !_to ? NS_ERROR_NULL_POINTER : _to->ClearContentPref(aPrefName); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPrefServiceInternal : public nsIPrefServiceInternal
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPREFSERVICEINTERNAL

  nsPrefServiceInternal();

private:
  ~nsPrefServiceInternal();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsPrefServiceInternal, nsIPrefServiceInternal)

nsPrefServiceInternal::nsPrefServiceInternal()
{
  /* member initializers and constructor code */
}

nsPrefServiceInternal::~nsPrefServiceInternal()
{
  /* destructor code */
}

/* void readExtensionPrefs (in nsILocalFile aFile); */
NS_IMETHODIMP nsPrefServiceInternal::ReadExtensionPrefs(nsILocalFile *aFile)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void mirrorPreferences (in nsPreferencesArrayPtr aArray); */
NS_IMETHODIMP nsPrefServiceInternal::MirrorPreferences(nsTArray<PrefTuple, nsTArrayInfallibleAllocator> *aArray)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void mirrorPreference (in ACString aPrefName, in nsPreferencePtr aPref); */
NS_IMETHODIMP nsPrefServiceInternal::MirrorPreference(const nsACString & aPrefName, PrefTuple *aPref)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] boolean prefHasUserValue (in ACString aPrefName); */
NS_IMETHODIMP nsPrefServiceInternal::PrefHasUserValue(const nsACString & aPrefName, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void setPreference (in nsPreferencePtrConst aPref); */
NS_IMETHODIMP nsPrefServiceInternal::SetPreference(const PrefTuple *aPref)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void clearContentPref (in ACString aPrefName); */
NS_IMETHODIMP nsPrefServiceInternal::ClearContentPref(const nsACString & aPrefName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#define NS_PREFSERVICE_CID                             \
  { /* {1cd91b88-1dd2-11b2-92e1-ed22ed298000} */       \
    0x91ca2441,                                        \
    0x050f,                                            \
    0x4f7c,                                            \
    { 0x9d, 0xf8, 0x75, 0xb4, 0x0e, 0xa4, 0x01, 0x56 } \
  }
#define NS_PREFSERVICE_CONTRACTID "@mozilla.org/preferences-service;1"
#define NS_PREFSERVICE_CLASSNAME "Preferences Server"
/**
 * Notification sent before reading the default user preferences files.
 */
#define NS_PREFSERVICE_READ_TOPIC_ID "prefservice:before-read-userprefs"
/**
 * Notification sent when resetPrefs has been called, but before the actual
 * reset process occurs.
 */
#define NS_PREFSERVICE_RESET_TOPIC_ID "prefservice:before-reset"
/**
 * Notification sent when after reading app-provided default
 * preferences, but before user profile override defaults or extension
 * defaults are loaded.
 */
#define NS_PREFSERVICE_APPDEFAULTS_TOPIC_ID "prefservice:after-app-defaults"

#endif /* __gen_nsIPrefService_h__ */
