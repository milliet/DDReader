/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/toolkit/components/url-classifier/nsIUrlClassifierDBService.idl
 */

#ifndef __gen_nsIUrlClassifierDBService_h__
#define __gen_nsIUrlClassifierDBService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
#include "nsTArray.h"
class nsUrlClassifierLookupResult;
class nsIUrlClassifierHashCompleter; /* forward declaration */


/* starting interface:    nsIUrlClassifierCallback */
#define NS_IURLCLASSIFIERCALLBACK_IID_STR "4ca27b6b-a674-4b3d-ab30-d21e2da2dffb"

#define NS_IURLCLASSIFIERCALLBACK_IID \
  {0x4ca27b6b, 0xa674, 0x4b3d, \
    { 0xab, 0x30, 0xd2, 0x1e, 0x2d, 0xa2, 0xdf, 0xfb }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIUrlClassifierCallback : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IURLCLASSIFIERCALLBACK_IID)

  /* void handleEvent (in ACString value); */
  NS_SCRIPTABLE NS_IMETHOD HandleEvent(const nsACString & value) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIUrlClassifierCallback, NS_IURLCLASSIFIERCALLBACK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIURLCLASSIFIERCALLBACK \
  NS_SCRIPTABLE NS_IMETHOD HandleEvent(const nsACString & value); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIURLCLASSIFIERCALLBACK(_to) \
  NS_SCRIPTABLE NS_IMETHOD HandleEvent(const nsACString & value) { return _to HandleEvent(value); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIURLCLASSIFIERCALLBACK(_to) \
  NS_SCRIPTABLE NS_IMETHOD HandleEvent(const nsACString & value) { return !_to ? NS_ERROR_NULL_POINTER : _to->HandleEvent(value); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsUrlClassifierCallback : public nsIUrlClassifierCallback
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIURLCLASSIFIERCALLBACK

  nsUrlClassifierCallback();

private:
  ~nsUrlClassifierCallback();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsUrlClassifierCallback, nsIUrlClassifierCallback)

nsUrlClassifierCallback::nsUrlClassifierCallback()
{
  /* member initializers and constructor code */
}

nsUrlClassifierCallback::~nsUrlClassifierCallback()
{
  /* destructor code */
}

/* void handleEvent (in ACString value); */
NS_IMETHODIMP nsUrlClassifierCallback::HandleEvent(const nsACString & value)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIUrlClassifierUpdateObserver */
#define NS_IURLCLASSIFIERUPDATEOBSERVER_IID_STR "bbb33c65-e783-476c-8db0-6ddb91826c07"

#define NS_IURLCLASSIFIERUPDATEOBSERVER_IID \
  {0xbbb33c65, 0xe783, 0x476c, \
    { 0x8d, 0xb0, 0x6d, 0xdb, 0x91, 0x82, 0x6c, 0x07 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIUrlClassifierUpdateObserver : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IURLCLASSIFIERUPDATEOBSERVER_IID)

  /* void updateUrlRequested (in ACString url, in ACString table, in ACString serverMAC); */
  NS_SCRIPTABLE NS_IMETHOD UpdateUrlRequested(const nsACString & url, const nsACString & table, const nsACString & serverMAC) = 0;

  /* void rekeyRequested (); */
  NS_SCRIPTABLE NS_IMETHOD RekeyRequested(void) = 0;

  /* void streamFinished (in nsresult status, in unsigned long delay); */
  NS_SCRIPTABLE NS_IMETHOD StreamFinished(nsresult status, PRUint32 delay) = 0;

  /* void updateError (in nsresult error); */
  NS_SCRIPTABLE NS_IMETHOD UpdateError(nsresult error) = 0;

  /* void updateSuccess (in unsigned long requestedTimeout); */
  NS_SCRIPTABLE NS_IMETHOD UpdateSuccess(PRUint32 requestedTimeout) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIUrlClassifierUpdateObserver, NS_IURLCLASSIFIERUPDATEOBSERVER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIURLCLASSIFIERUPDATEOBSERVER \
  NS_SCRIPTABLE NS_IMETHOD UpdateUrlRequested(const nsACString & url, const nsACString & table, const nsACString & serverMAC); \
  NS_SCRIPTABLE NS_IMETHOD RekeyRequested(void); \
  NS_SCRIPTABLE NS_IMETHOD StreamFinished(nsresult status, PRUint32 delay); \
  NS_SCRIPTABLE NS_IMETHOD UpdateError(nsresult error); \
  NS_SCRIPTABLE NS_IMETHOD UpdateSuccess(PRUint32 requestedTimeout); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIURLCLASSIFIERUPDATEOBSERVER(_to) \
  NS_SCRIPTABLE NS_IMETHOD UpdateUrlRequested(const nsACString & url, const nsACString & table, const nsACString & serverMAC) { return _to UpdateUrlRequested(url, table, serverMAC); } \
  NS_SCRIPTABLE NS_IMETHOD RekeyRequested(void) { return _to RekeyRequested(); } \
  NS_SCRIPTABLE NS_IMETHOD StreamFinished(nsresult status, PRUint32 delay) { return _to StreamFinished(status, delay); } \
  NS_SCRIPTABLE NS_IMETHOD UpdateError(nsresult error) { return _to UpdateError(error); } \
  NS_SCRIPTABLE NS_IMETHOD UpdateSuccess(PRUint32 requestedTimeout) { return _to UpdateSuccess(requestedTimeout); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIURLCLASSIFIERUPDATEOBSERVER(_to) \
  NS_SCRIPTABLE NS_IMETHOD UpdateUrlRequested(const nsACString & url, const nsACString & table, const nsACString & serverMAC) { return !_to ? NS_ERROR_NULL_POINTER : _to->UpdateUrlRequested(url, table, serverMAC); } \
  NS_SCRIPTABLE NS_IMETHOD RekeyRequested(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->RekeyRequested(); } \
  NS_SCRIPTABLE NS_IMETHOD StreamFinished(nsresult status, PRUint32 delay) { return !_to ? NS_ERROR_NULL_POINTER : _to->StreamFinished(status, delay); } \
  NS_SCRIPTABLE NS_IMETHOD UpdateError(nsresult error) { return !_to ? NS_ERROR_NULL_POINTER : _to->UpdateError(error); } \
  NS_SCRIPTABLE NS_IMETHOD UpdateSuccess(PRUint32 requestedTimeout) { return !_to ? NS_ERROR_NULL_POINTER : _to->UpdateSuccess(requestedTimeout); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsUrlClassifierUpdateObserver : public nsIUrlClassifierUpdateObserver
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIURLCLASSIFIERUPDATEOBSERVER

  nsUrlClassifierUpdateObserver();

private:
  ~nsUrlClassifierUpdateObserver();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsUrlClassifierUpdateObserver, nsIUrlClassifierUpdateObserver)

nsUrlClassifierUpdateObserver::nsUrlClassifierUpdateObserver()
{
  /* member initializers and constructor code */
}

nsUrlClassifierUpdateObserver::~nsUrlClassifierUpdateObserver()
{
  /* destructor code */
}

/* void updateUrlRequested (in ACString url, in ACString table, in ACString serverMAC); */
NS_IMETHODIMP nsUrlClassifierUpdateObserver::UpdateUrlRequested(const nsACString & url, const nsACString & table, const nsACString & serverMAC)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void rekeyRequested (); */
NS_IMETHODIMP nsUrlClassifierUpdateObserver::RekeyRequested()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void streamFinished (in nsresult status, in unsigned long delay); */
NS_IMETHODIMP nsUrlClassifierUpdateObserver::StreamFinished(nsresult status, PRUint32 delay)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void updateError (in nsresult error); */
NS_IMETHODIMP nsUrlClassifierUpdateObserver::UpdateError(nsresult error)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void updateSuccess (in unsigned long requestedTimeout); */
NS_IMETHODIMP nsUrlClassifierUpdateObserver::UpdateSuccess(PRUint32 requestedTimeout)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIUrlClassifierDBService */
#define NS_IURLCLASSIFIERDBSERVICE_IID_STR "7aae3f3a-527d-488b-a448-45dca6db0e80"

#define NS_IURLCLASSIFIERDBSERVICE_IID \
  {0x7aae3f3a, 0x527d, 0x488b, \
    { 0xa4, 0x48, 0x45, 0xdc, 0xa6, 0xdb, 0x0e, 0x80 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIUrlClassifierDBService : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IURLCLASSIFIERDBSERVICE_IID)

  /* void lookup (in ACString spec, in nsIUrlClassifierCallback c); */
  NS_SCRIPTABLE NS_IMETHOD Lookup(const nsACString & spec, nsIUrlClassifierCallback *c) = 0;

  /* void getTables (in nsIUrlClassifierCallback c); */
  NS_SCRIPTABLE NS_IMETHOD GetTables(nsIUrlClassifierCallback *c) = 0;

  /* void setHashCompleter (in ACString tableName, in nsIUrlClassifierHashCompleter completer); */
  NS_SCRIPTABLE NS_IMETHOD SetHashCompleter(const nsACString & tableName, nsIUrlClassifierHashCompleter *completer) = 0;

  /* void beginUpdate (in nsIUrlClassifierUpdateObserver updater, in ACString tables, in ACString clientKey); */
  NS_SCRIPTABLE NS_IMETHOD BeginUpdate(nsIUrlClassifierUpdateObserver *updater, const nsACString & tables, const nsACString & clientKey) = 0;

  /* void beginStream (in ACString table, in ACString serverMAC); */
  NS_SCRIPTABLE NS_IMETHOD BeginStream(const nsACString & table, const nsACString & serverMAC) = 0;

  /* void updateStream (in ACString updateChunk); */
  NS_SCRIPTABLE NS_IMETHOD UpdateStream(const nsACString & updateChunk) = 0;

  /* void finishStream (); */
  NS_SCRIPTABLE NS_IMETHOD FinishStream(void) = 0;

  /* void finishUpdate (); */
  NS_SCRIPTABLE NS_IMETHOD FinishUpdate(void) = 0;

  /* void cancelUpdate (); */
  NS_SCRIPTABLE NS_IMETHOD CancelUpdate(void) = 0;

  /* void resetDatabase (); */
  NS_SCRIPTABLE NS_IMETHOD ResetDatabase(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIUrlClassifierDBService, NS_IURLCLASSIFIERDBSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIURLCLASSIFIERDBSERVICE \
  NS_SCRIPTABLE NS_IMETHOD Lookup(const nsACString & spec, nsIUrlClassifierCallback *c); \
  NS_SCRIPTABLE NS_IMETHOD GetTables(nsIUrlClassifierCallback *c); \
  NS_SCRIPTABLE NS_IMETHOD SetHashCompleter(const nsACString & tableName, nsIUrlClassifierHashCompleter *completer); \
  NS_SCRIPTABLE NS_IMETHOD BeginUpdate(nsIUrlClassifierUpdateObserver *updater, const nsACString & tables, const nsACString & clientKey); \
  NS_SCRIPTABLE NS_IMETHOD BeginStream(const nsACString & table, const nsACString & serverMAC); \
  NS_SCRIPTABLE NS_IMETHOD UpdateStream(const nsACString & updateChunk); \
  NS_SCRIPTABLE NS_IMETHOD FinishStream(void); \
  NS_SCRIPTABLE NS_IMETHOD FinishUpdate(void); \
  NS_SCRIPTABLE NS_IMETHOD CancelUpdate(void); \
  NS_SCRIPTABLE NS_IMETHOD ResetDatabase(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIURLCLASSIFIERDBSERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD Lookup(const nsACString & spec, nsIUrlClassifierCallback *c) { return _to Lookup(spec, c); } \
  NS_SCRIPTABLE NS_IMETHOD GetTables(nsIUrlClassifierCallback *c) { return _to GetTables(c); } \
  NS_SCRIPTABLE NS_IMETHOD SetHashCompleter(const nsACString & tableName, nsIUrlClassifierHashCompleter *completer) { return _to SetHashCompleter(tableName, completer); } \
  NS_SCRIPTABLE NS_IMETHOD BeginUpdate(nsIUrlClassifierUpdateObserver *updater, const nsACString & tables, const nsACString & clientKey) { return _to BeginUpdate(updater, tables, clientKey); } \
  NS_SCRIPTABLE NS_IMETHOD BeginStream(const nsACString & table, const nsACString & serverMAC) { return _to BeginStream(table, serverMAC); } \
  NS_SCRIPTABLE NS_IMETHOD UpdateStream(const nsACString & updateChunk) { return _to UpdateStream(updateChunk); } \
  NS_SCRIPTABLE NS_IMETHOD FinishStream(void) { return _to FinishStream(); } \
  NS_SCRIPTABLE NS_IMETHOD FinishUpdate(void) { return _to FinishUpdate(); } \
  NS_SCRIPTABLE NS_IMETHOD CancelUpdate(void) { return _to CancelUpdate(); } \
  NS_SCRIPTABLE NS_IMETHOD ResetDatabase(void) { return _to ResetDatabase(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIURLCLASSIFIERDBSERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD Lookup(const nsACString & spec, nsIUrlClassifierCallback *c) { return !_to ? NS_ERROR_NULL_POINTER : _to->Lookup(spec, c); } \
  NS_SCRIPTABLE NS_IMETHOD GetTables(nsIUrlClassifierCallback *c) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTables(c); } \
  NS_SCRIPTABLE NS_IMETHOD SetHashCompleter(const nsACString & tableName, nsIUrlClassifierHashCompleter *completer) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetHashCompleter(tableName, completer); } \
  NS_SCRIPTABLE NS_IMETHOD BeginUpdate(nsIUrlClassifierUpdateObserver *updater, const nsACString & tables, const nsACString & clientKey) { return !_to ? NS_ERROR_NULL_POINTER : _to->BeginUpdate(updater, tables, clientKey); } \
  NS_SCRIPTABLE NS_IMETHOD BeginStream(const nsACString & table, const nsACString & serverMAC) { return !_to ? NS_ERROR_NULL_POINTER : _to->BeginStream(table, serverMAC); } \
  NS_SCRIPTABLE NS_IMETHOD UpdateStream(const nsACString & updateChunk) { return !_to ? NS_ERROR_NULL_POINTER : _to->UpdateStream(updateChunk); } \
  NS_SCRIPTABLE NS_IMETHOD FinishStream(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->FinishStream(); } \
  NS_SCRIPTABLE NS_IMETHOD FinishUpdate(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->FinishUpdate(); } \
  NS_SCRIPTABLE NS_IMETHOD CancelUpdate(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->CancelUpdate(); } \
  NS_SCRIPTABLE NS_IMETHOD ResetDatabase(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->ResetDatabase(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsUrlClassifierDBService : public nsIUrlClassifierDBService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIURLCLASSIFIERDBSERVICE

  nsUrlClassifierDBService();

private:
  ~nsUrlClassifierDBService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsUrlClassifierDBService, nsIUrlClassifierDBService)

nsUrlClassifierDBService::nsUrlClassifierDBService()
{
  /* member initializers and constructor code */
}

nsUrlClassifierDBService::~nsUrlClassifierDBService()
{
  /* destructor code */
}

/* void lookup (in ACString spec, in nsIUrlClassifierCallback c); */
NS_IMETHODIMP nsUrlClassifierDBService::Lookup(const nsACString & spec, nsIUrlClassifierCallback *c)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getTables (in nsIUrlClassifierCallback c); */
NS_IMETHODIMP nsUrlClassifierDBService::GetTables(nsIUrlClassifierCallback *c)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setHashCompleter (in ACString tableName, in nsIUrlClassifierHashCompleter completer); */
NS_IMETHODIMP nsUrlClassifierDBService::SetHashCompleter(const nsACString & tableName, nsIUrlClassifierHashCompleter *completer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void beginUpdate (in nsIUrlClassifierUpdateObserver updater, in ACString tables, in ACString clientKey); */
NS_IMETHODIMP nsUrlClassifierDBService::BeginUpdate(nsIUrlClassifierUpdateObserver *updater, const nsACString & tables, const nsACString & clientKey)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void beginStream (in ACString table, in ACString serverMAC); */
NS_IMETHODIMP nsUrlClassifierDBService::BeginStream(const nsACString & table, const nsACString & serverMAC)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void updateStream (in ACString updateChunk); */
NS_IMETHODIMP nsUrlClassifierDBService::UpdateStream(const nsACString & updateChunk)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void finishStream (); */
NS_IMETHODIMP nsUrlClassifierDBService::FinishStream()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void finishUpdate (); */
NS_IMETHODIMP nsUrlClassifierDBService::FinishUpdate()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void cancelUpdate (); */
NS_IMETHODIMP nsUrlClassifierDBService::CancelUpdate()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void resetDatabase (); */
NS_IMETHODIMP nsUrlClassifierDBService::ResetDatabase()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIUrlClassifierDBServiceWorker */
#define NS_IURLCLASSIFIERDBSERVICEWORKER_IID_STR "2af84c09-269e-4fc2-b28f-af56717db118"

#define NS_IURLCLASSIFIERDBSERVICEWORKER_IID \
  {0x2af84c09, 0x269e, 0x4fc2, \
    { 0xb2, 0x8f, 0xaf, 0x56, 0x71, 0x7d, 0xb1, 0x18 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIUrlClassifierDBServiceWorker : public nsIUrlClassifierDBService {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IURLCLASSIFIERDBSERVICEWORKER_IID)

  /* void closeDb (); */
  NS_SCRIPTABLE NS_IMETHOD CloseDb(void) = 0;

  /* [noscript] void cacheCompletions (in ResultArray entries); */
  NS_IMETHOD CacheCompletions(nsTArray<nsUrlClassifierLookupResult> *entries) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIUrlClassifierDBServiceWorker, NS_IURLCLASSIFIERDBSERVICEWORKER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIURLCLASSIFIERDBSERVICEWORKER \
  NS_SCRIPTABLE NS_IMETHOD CloseDb(void); \
  NS_IMETHOD CacheCompletions(nsTArray<nsUrlClassifierLookupResult> *entries); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIURLCLASSIFIERDBSERVICEWORKER(_to) \
  NS_SCRIPTABLE NS_IMETHOD CloseDb(void) { return _to CloseDb(); } \
  NS_IMETHOD CacheCompletions(nsTArray<nsUrlClassifierLookupResult> *entries) { return _to CacheCompletions(entries); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIURLCLASSIFIERDBSERVICEWORKER(_to) \
  NS_SCRIPTABLE NS_IMETHOD CloseDb(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->CloseDb(); } \
  NS_IMETHOD CacheCompletions(nsTArray<nsUrlClassifierLookupResult> *entries) { return !_to ? NS_ERROR_NULL_POINTER : _to->CacheCompletions(entries); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsUrlClassifierDBServiceWorker : public nsIUrlClassifierDBServiceWorker
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIURLCLASSIFIERDBSERVICEWORKER

  nsUrlClassifierDBServiceWorker();

private:
  ~nsUrlClassifierDBServiceWorker();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsUrlClassifierDBServiceWorker, nsIUrlClassifierDBServiceWorker)

nsUrlClassifierDBServiceWorker::nsUrlClassifierDBServiceWorker()
{
  /* member initializers and constructor code */
}

nsUrlClassifierDBServiceWorker::~nsUrlClassifierDBServiceWorker()
{
  /* destructor code */
}

/* void closeDb (); */
NS_IMETHODIMP nsUrlClassifierDBServiceWorker::CloseDb()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void cacheCompletions (in ResultArray entries); */
NS_IMETHODIMP nsUrlClassifierDBServiceWorker::CacheCompletions(nsTArray<nsUrlClassifierLookupResult> *entries)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIUrlClassifierLookupCallback */
#define NS_IURLCLASSIFIERLOOKUPCALLBACK_IID_STR "f1dc83c6-ad43-4f0f-a809-fd43de7de8a4"

#define NS_IURLCLASSIFIERLOOKUPCALLBACK_IID \
  {0xf1dc83c6, 0xad43, 0x4f0f, \
    { 0xa8, 0x09, 0xfd, 0x43, 0xde, 0x7d, 0xe8, 0xa4 }}

class NS_NO_VTABLE nsIUrlClassifierLookupCallback : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IURLCLASSIFIERLOOKUPCALLBACK_IID)

  /* void lookupComplete (in ResultArray results); */
  NS_IMETHOD LookupComplete(nsTArray<nsUrlClassifierLookupResult> *results) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIUrlClassifierLookupCallback, NS_IURLCLASSIFIERLOOKUPCALLBACK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIURLCLASSIFIERLOOKUPCALLBACK \
  NS_IMETHOD LookupComplete(nsTArray<nsUrlClassifierLookupResult> *results); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIURLCLASSIFIERLOOKUPCALLBACK(_to) \
  NS_IMETHOD LookupComplete(nsTArray<nsUrlClassifierLookupResult> *results) { return _to LookupComplete(results); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIURLCLASSIFIERLOOKUPCALLBACK(_to) \
  NS_IMETHOD LookupComplete(nsTArray<nsUrlClassifierLookupResult> *results) { return !_to ? NS_ERROR_NULL_POINTER : _to->LookupComplete(results); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsUrlClassifierLookupCallback : public nsIUrlClassifierLookupCallback
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIURLCLASSIFIERLOOKUPCALLBACK

  nsUrlClassifierLookupCallback();

private:
  ~nsUrlClassifierLookupCallback();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsUrlClassifierLookupCallback, nsIUrlClassifierLookupCallback)

nsUrlClassifierLookupCallback::nsUrlClassifierLookupCallback()
{
  /* member initializers and constructor code */
}

nsUrlClassifierLookupCallback::~nsUrlClassifierLookupCallback()
{
  /* destructor code */
}

/* void lookupComplete (in ResultArray results); */
NS_IMETHODIMP nsUrlClassifierLookupCallback::LookupComplete(nsTArray<nsUrlClassifierLookupResult> *results)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIUrlClassifierDBService_h__ */
