/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/embedding/components/webbrowserpersist/public/nsIWebBrowserPersist.idl
 */

#ifndef __gen_nsIWebBrowserPersist_h__
#define __gen_nsIWebBrowserPersist_h__


#ifndef __gen_nsICancelable_h__
#include "nsICancelable.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIURI; /* forward declaration */

class nsIInputStream; /* forward declaration */

class nsIDOMDocument; /* forward declaration */

class nsIWebProgressListener; /* forward declaration */

class nsILocalFile; /* forward declaration */

class nsIChannel; /* forward declaration */


/* starting interface:    nsIWebBrowserPersist */
#define NS_IWEBBROWSERPERSIST_IID_STR "dd4e0a6a-210f-419a-ad85-40e8543b9465"

#define NS_IWEBBROWSERPERSIST_IID \
  {0xdd4e0a6a, 0x210f, 0x419a, \
    { 0xad, 0x85, 0x40, 0xe8, 0x54, 0x3b, 0x94, 0x65 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIWebBrowserPersist : public nsICancelable {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IWEBBROWSERPERSIST_IID)

  enum { PERSIST_FLAGS_NONE = 0U };

  enum { PERSIST_FLAGS_FROM_CACHE = 1U };

  enum { PERSIST_FLAGS_BYPASS_CACHE = 2U };

  enum { PERSIST_FLAGS_IGNORE_REDIRECTED_DATA = 4U };

  enum { PERSIST_FLAGS_IGNORE_IFRAMES = 8U };

  enum { PERSIST_FLAGS_NO_CONVERSION = 16U };

  enum { PERSIST_FLAGS_REPLACE_EXISTING_FILES = 32U };

  enum { PERSIST_FLAGS_NO_BASE_TAG_MODIFICATIONS = 64U };

  enum { PERSIST_FLAGS_FIXUP_ORIGINAL_DOM = 128U };

  enum { PERSIST_FLAGS_FIXUP_LINKS_TO_DESTINATION = 256U };

  enum { PERSIST_FLAGS_DONT_FIXUP_LINKS = 512U };

  enum { PERSIST_FLAGS_SERIALIZE_OUTPUT = 1024U };

  enum { PERSIST_FLAGS_DONT_CHANGE_FILENAMES = 2048U };

  enum { PERSIST_FLAGS_FAIL_ON_BROKEN_LINKS = 4096U };

  enum { PERSIST_FLAGS_CLEANUP_ON_FAILURE = 8192U };

  enum { PERSIST_FLAGS_AUTODETECT_APPLY_CONVERSION = 16384U };

  enum { PERSIST_FLAGS_APPEND_TO_FILE = 32768U };

  enum { PERSIST_FLAGS_FORCE_ALLOW_COOKIES = 65536U };

  /* attribute unsigned long persistFlags; */
  NS_SCRIPTABLE NS_IMETHOD GetPersistFlags(PRUint32 *aPersistFlags) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetPersistFlags(PRUint32 aPersistFlags) = 0;

  enum { PERSIST_STATE_READY = 1U };

  enum { PERSIST_STATE_SAVING = 2U };

  enum { PERSIST_STATE_FINISHED = 3U };

  /* readonly attribute unsigned long currentState; */
  NS_SCRIPTABLE NS_IMETHOD GetCurrentState(PRUint32 *aCurrentState) = 0;

  /* readonly attribute unsigned long result; */
  NS_SCRIPTABLE NS_IMETHOD GetResult(PRUint32 *aResult) = 0;

  /* attribute nsIWebProgressListener progressListener; */
  NS_SCRIPTABLE NS_IMETHOD GetProgressListener(nsIWebProgressListener * *aProgressListener) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetProgressListener(nsIWebProgressListener *aProgressListener) = 0;

  /* void saveURI (in nsIURI aURI, in nsISupports aCacheKey, in nsIURI aReferrer, in nsIInputStream aPostData, in string aExtraHeaders, in nsISupports aFile); */
  NS_SCRIPTABLE NS_IMETHOD SaveURI(nsIURI *aURI, nsISupports *aCacheKey, nsIURI *aReferrer, nsIInputStream *aPostData, const char * aExtraHeaders, nsISupports *aFile) = 0;

  /* void saveChannel (in nsIChannel aChannel, in nsISupports aFile); */
  NS_SCRIPTABLE NS_IMETHOD SaveChannel(nsIChannel *aChannel, nsISupports *aFile) = 0;

  enum { ENCODE_FLAGS_SELECTION_ONLY = 1U };

  enum { ENCODE_FLAGS_FORMATTED = 2U };

  enum { ENCODE_FLAGS_RAW = 4U };

  enum { ENCODE_FLAGS_BODY_ONLY = 8U };

  enum { ENCODE_FLAGS_PREFORMATTED = 16U };

  enum { ENCODE_FLAGS_WRAP = 32U };

  enum { ENCODE_FLAGS_FORMAT_FLOWED = 64U };

  enum { ENCODE_FLAGS_ABSOLUTE_LINKS = 128U };

  enum { ENCODE_FLAGS_ENCODE_W3C_ENTITIES = 256U };

  enum { ENCODE_FLAGS_CR_LINEBREAKS = 512U };

  enum { ENCODE_FLAGS_LF_LINEBREAKS = 1024U };

  enum { ENCODE_FLAGS_NOSCRIPT_CONTENT = 2048U };

  enum { ENCODE_FLAGS_NOFRAMES_CONTENT = 4096U };

  enum { ENCODE_FLAGS_ENCODE_BASIC_ENTITIES = 8192U };

  enum { ENCODE_FLAGS_ENCODE_LATIN1_ENTITIES = 16384U };

  enum { ENCODE_FLAGS_ENCODE_HTML_ENTITIES = 32768U };

  /* void saveDocument (in nsIDOMDocument aDocument, in nsISupports aFile, in nsISupports aDataPath, in string aOutputContentType, in unsigned long aEncodingFlags, in unsigned long aWrapColumn); */
  NS_SCRIPTABLE NS_IMETHOD SaveDocument(nsIDOMDocument *aDocument, nsISupports *aFile, nsISupports *aDataPath, const char * aOutputContentType, PRUint32 aEncodingFlags, PRUint32 aWrapColumn) = 0;

  /* void cancelSave (); */
  NS_SCRIPTABLE NS_IMETHOD CancelSave(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIWebBrowserPersist, NS_IWEBBROWSERPERSIST_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIWEBBROWSERPERSIST \
  NS_SCRIPTABLE NS_IMETHOD GetPersistFlags(PRUint32 *aPersistFlags); \
  NS_SCRIPTABLE NS_IMETHOD SetPersistFlags(PRUint32 aPersistFlags); \
  NS_SCRIPTABLE NS_IMETHOD GetCurrentState(PRUint32 *aCurrentState); \
  NS_SCRIPTABLE NS_IMETHOD GetResult(PRUint32 *aResult); \
  NS_SCRIPTABLE NS_IMETHOD GetProgressListener(nsIWebProgressListener * *aProgressListener); \
  NS_SCRIPTABLE NS_IMETHOD SetProgressListener(nsIWebProgressListener *aProgressListener); \
  NS_SCRIPTABLE NS_IMETHOD SaveURI(nsIURI *aURI, nsISupports *aCacheKey, nsIURI *aReferrer, nsIInputStream *aPostData, const char * aExtraHeaders, nsISupports *aFile); \
  NS_SCRIPTABLE NS_IMETHOD SaveChannel(nsIChannel *aChannel, nsISupports *aFile); \
  NS_SCRIPTABLE NS_IMETHOD SaveDocument(nsIDOMDocument *aDocument, nsISupports *aFile, nsISupports *aDataPath, const char * aOutputContentType, PRUint32 aEncodingFlags, PRUint32 aWrapColumn); \
  NS_SCRIPTABLE NS_IMETHOD CancelSave(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIWEBBROWSERPERSIST(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetPersistFlags(PRUint32 *aPersistFlags) { return _to GetPersistFlags(aPersistFlags); } \
  NS_SCRIPTABLE NS_IMETHOD SetPersistFlags(PRUint32 aPersistFlags) { return _to SetPersistFlags(aPersistFlags); } \
  NS_SCRIPTABLE NS_IMETHOD GetCurrentState(PRUint32 *aCurrentState) { return _to GetCurrentState(aCurrentState); } \
  NS_SCRIPTABLE NS_IMETHOD GetResult(PRUint32 *aResult) { return _to GetResult(aResult); } \
  NS_SCRIPTABLE NS_IMETHOD GetProgressListener(nsIWebProgressListener * *aProgressListener) { return _to GetProgressListener(aProgressListener); } \
  NS_SCRIPTABLE NS_IMETHOD SetProgressListener(nsIWebProgressListener *aProgressListener) { return _to SetProgressListener(aProgressListener); } \
  NS_SCRIPTABLE NS_IMETHOD SaveURI(nsIURI *aURI, nsISupports *aCacheKey, nsIURI *aReferrer, nsIInputStream *aPostData, const char * aExtraHeaders, nsISupports *aFile) { return _to SaveURI(aURI, aCacheKey, aReferrer, aPostData, aExtraHeaders, aFile); } \
  NS_SCRIPTABLE NS_IMETHOD SaveChannel(nsIChannel *aChannel, nsISupports *aFile) { return _to SaveChannel(aChannel, aFile); } \
  NS_SCRIPTABLE NS_IMETHOD SaveDocument(nsIDOMDocument *aDocument, nsISupports *aFile, nsISupports *aDataPath, const char * aOutputContentType, PRUint32 aEncodingFlags, PRUint32 aWrapColumn) { return _to SaveDocument(aDocument, aFile, aDataPath, aOutputContentType, aEncodingFlags, aWrapColumn); } \
  NS_SCRIPTABLE NS_IMETHOD CancelSave(void) { return _to CancelSave(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIWEBBROWSERPERSIST(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetPersistFlags(PRUint32 *aPersistFlags) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPersistFlags(aPersistFlags); } \
  NS_SCRIPTABLE NS_IMETHOD SetPersistFlags(PRUint32 aPersistFlags) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPersistFlags(aPersistFlags); } \
  NS_SCRIPTABLE NS_IMETHOD GetCurrentState(PRUint32 *aCurrentState) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCurrentState(aCurrentState); } \
  NS_SCRIPTABLE NS_IMETHOD GetResult(PRUint32 *aResult) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResult(aResult); } \
  NS_SCRIPTABLE NS_IMETHOD GetProgressListener(nsIWebProgressListener * *aProgressListener) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetProgressListener(aProgressListener); } \
  NS_SCRIPTABLE NS_IMETHOD SetProgressListener(nsIWebProgressListener *aProgressListener) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetProgressListener(aProgressListener); } \
  NS_SCRIPTABLE NS_IMETHOD SaveURI(nsIURI *aURI, nsISupports *aCacheKey, nsIURI *aReferrer, nsIInputStream *aPostData, const char * aExtraHeaders, nsISupports *aFile) { return !_to ? NS_ERROR_NULL_POINTER : _to->SaveURI(aURI, aCacheKey, aReferrer, aPostData, aExtraHeaders, aFile); } \
  NS_SCRIPTABLE NS_IMETHOD SaveChannel(nsIChannel *aChannel, nsISupports *aFile) { return !_to ? NS_ERROR_NULL_POINTER : _to->SaveChannel(aChannel, aFile); } \
  NS_SCRIPTABLE NS_IMETHOD SaveDocument(nsIDOMDocument *aDocument, nsISupports *aFile, nsISupports *aDataPath, const char * aOutputContentType, PRUint32 aEncodingFlags, PRUint32 aWrapColumn) { return !_to ? NS_ERROR_NULL_POINTER : _to->SaveDocument(aDocument, aFile, aDataPath, aOutputContentType, aEncodingFlags, aWrapColumn); } \
  NS_SCRIPTABLE NS_IMETHOD CancelSave(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->CancelSave(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsWebBrowserPersist : public nsIWebBrowserPersist
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIWEBBROWSERPERSIST

  nsWebBrowserPersist();

private:
  ~nsWebBrowserPersist();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsWebBrowserPersist, nsIWebBrowserPersist)

nsWebBrowserPersist::nsWebBrowserPersist()
{
  /* member initializers and constructor code */
}

nsWebBrowserPersist::~nsWebBrowserPersist()
{
  /* destructor code */
}

/* attribute unsigned long persistFlags; */
NS_IMETHODIMP nsWebBrowserPersist::GetPersistFlags(PRUint32 *aPersistFlags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsWebBrowserPersist::SetPersistFlags(PRUint32 aPersistFlags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long currentState; */
NS_IMETHODIMP nsWebBrowserPersist::GetCurrentState(PRUint32 *aCurrentState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long result; */
NS_IMETHODIMP nsWebBrowserPersist::GetResult(PRUint32 *aResult)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIWebProgressListener progressListener; */
NS_IMETHODIMP nsWebBrowserPersist::GetProgressListener(nsIWebProgressListener * *aProgressListener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsWebBrowserPersist::SetProgressListener(nsIWebProgressListener *aProgressListener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void saveURI (in nsIURI aURI, in nsISupports aCacheKey, in nsIURI aReferrer, in nsIInputStream aPostData, in string aExtraHeaders, in nsISupports aFile); */
NS_IMETHODIMP nsWebBrowserPersist::SaveURI(nsIURI *aURI, nsISupports *aCacheKey, nsIURI *aReferrer, nsIInputStream *aPostData, const char * aExtraHeaders, nsISupports *aFile)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void saveChannel (in nsIChannel aChannel, in nsISupports aFile); */
NS_IMETHODIMP nsWebBrowserPersist::SaveChannel(nsIChannel *aChannel, nsISupports *aFile)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void saveDocument (in nsIDOMDocument aDocument, in nsISupports aFile, in nsISupports aDataPath, in string aOutputContentType, in unsigned long aEncodingFlags, in unsigned long aWrapColumn); */
NS_IMETHODIMP nsWebBrowserPersist::SaveDocument(nsIDOMDocument *aDocument, nsISupports *aFile, nsISupports *aDataPath, const char * aOutputContentType, PRUint32 aEncodingFlags, PRUint32 aWrapColumn)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void cancelSave (); */
NS_IMETHODIMP nsWebBrowserPersist::CancelSave()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIWebBrowserPersist_h__ */
