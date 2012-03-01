/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/toolkit/components/url-classifier/nsIUrlListManager.idl
 */

#ifndef __gen_nsIUrlListManager_h__
#define __gen_nsIUrlListManager_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIUrlListManagerCallback */
#define NS_IURLLISTMANAGERCALLBACK_IID_STR "fa4caf12-d057-4e7e-81e9-ce066ceee90b"

#define NS_IURLLISTMANAGERCALLBACK_IID \
  {0xfa4caf12, 0xd057, 0x4e7e, \
    { 0x81, 0xe9, 0xce, 0x06, 0x6c, 0xee, 0xe9, 0x0b }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIUrlListManagerCallback : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IURLLISTMANAGERCALLBACK_IID)

  /* void handleEvent (in ACString value); */
  NS_SCRIPTABLE NS_IMETHOD HandleEvent(const nsACString & value) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIUrlListManagerCallback, NS_IURLLISTMANAGERCALLBACK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIURLLISTMANAGERCALLBACK \
  NS_SCRIPTABLE NS_IMETHOD HandleEvent(const nsACString & value); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIURLLISTMANAGERCALLBACK(_to) \
  NS_SCRIPTABLE NS_IMETHOD HandleEvent(const nsACString & value) { return _to HandleEvent(value); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIURLLISTMANAGERCALLBACK(_to) \
  NS_SCRIPTABLE NS_IMETHOD HandleEvent(const nsACString & value) { return !_to ? NS_ERROR_NULL_POINTER : _to->HandleEvent(value); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsUrlListManagerCallback : public nsIUrlListManagerCallback
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIURLLISTMANAGERCALLBACK

  nsUrlListManagerCallback();

private:
  ~nsUrlListManagerCallback();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsUrlListManagerCallback, nsIUrlListManagerCallback)

nsUrlListManagerCallback::nsUrlListManagerCallback()
{
  /* member initializers and constructor code */
}

nsUrlListManagerCallback::~nsUrlListManagerCallback()
{
  /* destructor code */
}

/* void handleEvent (in ACString value); */
NS_IMETHODIMP nsUrlListManagerCallback::HandleEvent(const nsACString & value)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIUrlListManager */
#define NS_IURLLISTMANAGER_IID_STR "9c5598ec-9986-40cf-af40-b5e0d817a3a0"

#define NS_IURLLISTMANAGER_IID \
  {0x9c5598ec, 0x9986, 0x40cf, \
    { 0xaf, 0x40, 0xb5, 0xe0, 0xd8, 0x17, 0xa3, 0xa0 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIUrlListManager : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IURLLISTMANAGER_IID)

  /* void setUpdateUrl (in ACString url); */
  NS_SCRIPTABLE NS_IMETHOD SetUpdateUrl(const nsACString & url) = 0;

  /* void setKeyUrl (in ACString url); */
  NS_SCRIPTABLE NS_IMETHOD SetKeyUrl(const nsACString & url) = 0;

  /* void setGethashUrl (in ACString url); */
  NS_SCRIPTABLE NS_IMETHOD SetGethashUrl(const nsACString & url) = 0;

  /* boolean registerTable (in ACString tableName, in boolean requireMac); */
  NS_SCRIPTABLE NS_IMETHOD RegisterTable(const nsACString & tableName, PRBool requireMac, PRBool *_retval NS_OUTPARAM) = 0;

  /* void enableUpdate (in ACString tableName); */
  NS_SCRIPTABLE NS_IMETHOD EnableUpdate(const nsACString & tableName) = 0;

  /* void disableUpdate (in ACString tableName); */
  NS_SCRIPTABLE NS_IMETHOD DisableUpdate(const nsACString & tableName) = 0;

  /* void safeLookup (in ACString key, in nsIUrlListManagerCallback cb); */
  NS_SCRIPTABLE NS_IMETHOD SafeLookup(const nsACString & key, nsIUrlListManagerCallback *cb) = 0;

  /* void checkForUpdates (); */
  NS_SCRIPTABLE NS_IMETHOD CheckForUpdates(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIUrlListManager, NS_IURLLISTMANAGER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIURLLISTMANAGER \
  NS_SCRIPTABLE NS_IMETHOD SetUpdateUrl(const nsACString & url); \
  NS_SCRIPTABLE NS_IMETHOD SetKeyUrl(const nsACString & url); \
  NS_SCRIPTABLE NS_IMETHOD SetGethashUrl(const nsACString & url); \
  NS_SCRIPTABLE NS_IMETHOD RegisterTable(const nsACString & tableName, PRBool requireMac, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD EnableUpdate(const nsACString & tableName); \
  NS_SCRIPTABLE NS_IMETHOD DisableUpdate(const nsACString & tableName); \
  NS_SCRIPTABLE NS_IMETHOD SafeLookup(const nsACString & key, nsIUrlListManagerCallback *cb); \
  NS_SCRIPTABLE NS_IMETHOD CheckForUpdates(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIURLLISTMANAGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD SetUpdateUrl(const nsACString & url) { return _to SetUpdateUrl(url); } \
  NS_SCRIPTABLE NS_IMETHOD SetKeyUrl(const nsACString & url) { return _to SetKeyUrl(url); } \
  NS_SCRIPTABLE NS_IMETHOD SetGethashUrl(const nsACString & url) { return _to SetGethashUrl(url); } \
  NS_SCRIPTABLE NS_IMETHOD RegisterTable(const nsACString & tableName, PRBool requireMac, PRBool *_retval NS_OUTPARAM) { return _to RegisterTable(tableName, requireMac, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD EnableUpdate(const nsACString & tableName) { return _to EnableUpdate(tableName); } \
  NS_SCRIPTABLE NS_IMETHOD DisableUpdate(const nsACString & tableName) { return _to DisableUpdate(tableName); } \
  NS_SCRIPTABLE NS_IMETHOD SafeLookup(const nsACString & key, nsIUrlListManagerCallback *cb) { return _to SafeLookup(key, cb); } \
  NS_SCRIPTABLE NS_IMETHOD CheckForUpdates(void) { return _to CheckForUpdates(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIURLLISTMANAGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD SetUpdateUrl(const nsACString & url) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetUpdateUrl(url); } \
  NS_SCRIPTABLE NS_IMETHOD SetKeyUrl(const nsACString & url) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetKeyUrl(url); } \
  NS_SCRIPTABLE NS_IMETHOD SetGethashUrl(const nsACString & url) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetGethashUrl(url); } \
  NS_SCRIPTABLE NS_IMETHOD RegisterTable(const nsACString & tableName, PRBool requireMac, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->RegisterTable(tableName, requireMac, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD EnableUpdate(const nsACString & tableName) { return !_to ? NS_ERROR_NULL_POINTER : _to->EnableUpdate(tableName); } \
  NS_SCRIPTABLE NS_IMETHOD DisableUpdate(const nsACString & tableName) { return !_to ? NS_ERROR_NULL_POINTER : _to->DisableUpdate(tableName); } \
  NS_SCRIPTABLE NS_IMETHOD SafeLookup(const nsACString & key, nsIUrlListManagerCallback *cb) { return !_to ? NS_ERROR_NULL_POINTER : _to->SafeLookup(key, cb); } \
  NS_SCRIPTABLE NS_IMETHOD CheckForUpdates(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->CheckForUpdates(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsUrlListManager : public nsIUrlListManager
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIURLLISTMANAGER

  nsUrlListManager();

private:
  ~nsUrlListManager();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsUrlListManager, nsIUrlListManager)

nsUrlListManager::nsUrlListManager()
{
  /* member initializers and constructor code */
}

nsUrlListManager::~nsUrlListManager()
{
  /* destructor code */
}

/* void setUpdateUrl (in ACString url); */
NS_IMETHODIMP nsUrlListManager::SetUpdateUrl(const nsACString & url)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setKeyUrl (in ACString url); */
NS_IMETHODIMP nsUrlListManager::SetKeyUrl(const nsACString & url)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setGethashUrl (in ACString url); */
NS_IMETHODIMP nsUrlListManager::SetGethashUrl(const nsACString & url)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean registerTable (in ACString tableName, in boolean requireMac); */
NS_IMETHODIMP nsUrlListManager::RegisterTable(const nsACString & tableName, PRBool requireMac, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void enableUpdate (in ACString tableName); */
NS_IMETHODIMP nsUrlListManager::EnableUpdate(const nsACString & tableName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void disableUpdate (in ACString tableName); */
NS_IMETHODIMP nsUrlListManager::DisableUpdate(const nsACString & tableName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void safeLookup (in ACString key, in nsIUrlListManagerCallback cb); */
NS_IMETHODIMP nsUrlListManager::SafeLookup(const nsACString & key, nsIUrlListManagerCallback *cb)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void checkForUpdates (); */
NS_IMETHODIMP nsUrlListManager::CheckForUpdates()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIUrlListManager_h__ */
