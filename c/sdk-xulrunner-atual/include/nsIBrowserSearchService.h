/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/netwerk/base/public/nsIBrowserSearchService.idl
 */

#ifndef __gen_nsIBrowserSearchService_h__
#define __gen_nsIBrowserSearchService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIURI; /* forward declaration */

class nsIInputStream; /* forward declaration */


/* starting interface:    nsISearchSubmission */
#define NS_ISEARCHSUBMISSION_IID_STR "58e4f602-a7c8-4cd1-9dca-716705e826ef"

#define NS_ISEARCHSUBMISSION_IID \
  {0x58e4f602, 0xa7c8, 0x4cd1, \
    { 0x9d, 0xca, 0x71, 0x67, 0x05, 0xe8, 0x26, 0xef }}

class NS_NO_VTABLE NS_SCRIPTABLE nsISearchSubmission : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISEARCHSUBMISSION_IID)

  /* readonly attribute nsIInputStream postData; */
  NS_SCRIPTABLE NS_IMETHOD GetPostData(nsIInputStream * *aPostData) = 0;

  /* readonly attribute nsIURI uri; */
  NS_SCRIPTABLE NS_IMETHOD GetUri(nsIURI * *aUri) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsISearchSubmission, NS_ISEARCHSUBMISSION_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISEARCHSUBMISSION \
  NS_SCRIPTABLE NS_IMETHOD GetPostData(nsIInputStream * *aPostData); \
  NS_SCRIPTABLE NS_IMETHOD GetUri(nsIURI * *aUri); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISEARCHSUBMISSION(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetPostData(nsIInputStream * *aPostData) { return _to GetPostData(aPostData); } \
  NS_SCRIPTABLE NS_IMETHOD GetUri(nsIURI * *aUri) { return _to GetUri(aUri); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISEARCHSUBMISSION(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetPostData(nsIInputStream * *aPostData) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPostData(aPostData); } \
  NS_SCRIPTABLE NS_IMETHOD GetUri(nsIURI * *aUri) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUri(aUri); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsSearchSubmission : public nsISearchSubmission
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISEARCHSUBMISSION

  nsSearchSubmission();

private:
  ~nsSearchSubmission();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsSearchSubmission, nsISearchSubmission)

nsSearchSubmission::nsSearchSubmission()
{
  /* member initializers and constructor code */
}

nsSearchSubmission::~nsSearchSubmission()
{
  /* destructor code */
}

/* readonly attribute nsIInputStream postData; */
NS_IMETHODIMP nsSearchSubmission::GetPostData(nsIInputStream * *aPostData)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIURI uri; */
NS_IMETHODIMP nsSearchSubmission::GetUri(nsIURI * *aUri)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsISearchEngine */
#define NS_ISEARCHENGINE_IID_STR "803e510b-4b27-4ba2-a16d-bb5fa953c166"

#define NS_ISEARCHENGINE_IID \
  {0x803e510b, 0x4b27, 0x4ba2, \
    { 0xa1, 0x6d, 0xbb, 0x5f, 0xa9, 0x53, 0xc1, 0x66 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsISearchEngine : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISEARCHENGINE_IID)

  /* nsISearchSubmission getSubmission (in AString data, [optional] in AString responseType); */
  NS_SCRIPTABLE NS_IMETHOD GetSubmission(const nsAString & data, const nsAString & responseType, nsISearchSubmission * *_retval NS_OUTPARAM) = 0;

  /* void addParam (in AString name, in AString value, in AString responseType); */
  NS_SCRIPTABLE NS_IMETHOD AddParam(const nsAString & name, const nsAString & value, const nsAString & responseType) = 0;

  /* boolean supportsResponseType (in AString responseType); */
  NS_SCRIPTABLE NS_IMETHOD SupportsResponseType(const nsAString & responseType, PRBool *_retval NS_OUTPARAM) = 0;

  enum { TYPE_MOZSEARCH = 1U };

  enum { TYPE_SHERLOCK = 2U };

  enum { TYPE_OPENSEARCH = 3U };

  enum { DATA_XML = 1U };

  enum { DATA_TEXT = 2U };

  /* attribute AString alias; */
  NS_SCRIPTABLE NS_IMETHOD GetAlias(nsAString & aAlias) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetAlias(const nsAString & aAlias) = 0;

  /* readonly attribute AString description; */
  NS_SCRIPTABLE NS_IMETHOD GetDescription(nsAString & aDescription) = 0;

  /* attribute boolean hidden; */
  NS_SCRIPTABLE NS_IMETHOD GetHidden(PRBool *aHidden) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetHidden(PRBool aHidden) = 0;

  /* readonly attribute nsIURI iconURI; */
  NS_SCRIPTABLE NS_IMETHOD GetIconURI(nsIURI * *aIconURI) = 0;

  /* readonly attribute AString name; */
  NS_SCRIPTABLE NS_IMETHOD GetName(nsAString & aName) = 0;

  /* readonly attribute AString searchForm; */
  NS_SCRIPTABLE NS_IMETHOD GetSearchForm(nsAString & aSearchForm) = 0;

  /* readonly attribute long type; */
  NS_SCRIPTABLE NS_IMETHOD GetType(PRInt32 *aType) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsISearchEngine, NS_ISEARCHENGINE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISEARCHENGINE \
  NS_SCRIPTABLE NS_IMETHOD GetSubmission(const nsAString & data, const nsAString & responseType, nsISearchSubmission * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD AddParam(const nsAString & name, const nsAString & value, const nsAString & responseType); \
  NS_SCRIPTABLE NS_IMETHOD SupportsResponseType(const nsAString & responseType, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetAlias(nsAString & aAlias); \
  NS_SCRIPTABLE NS_IMETHOD SetAlias(const nsAString & aAlias); \
  NS_SCRIPTABLE NS_IMETHOD GetDescription(nsAString & aDescription); \
  NS_SCRIPTABLE NS_IMETHOD GetHidden(PRBool *aHidden); \
  NS_SCRIPTABLE NS_IMETHOD SetHidden(PRBool aHidden); \
  NS_SCRIPTABLE NS_IMETHOD GetIconURI(nsIURI * *aIconURI); \
  NS_SCRIPTABLE NS_IMETHOD GetName(nsAString & aName); \
  NS_SCRIPTABLE NS_IMETHOD GetSearchForm(nsAString & aSearchForm); \
  NS_SCRIPTABLE NS_IMETHOD GetType(PRInt32 *aType); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISEARCHENGINE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetSubmission(const nsAString & data, const nsAString & responseType, nsISearchSubmission * *_retval NS_OUTPARAM) { return _to GetSubmission(data, responseType, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AddParam(const nsAString & name, const nsAString & value, const nsAString & responseType) { return _to AddParam(name, value, responseType); } \
  NS_SCRIPTABLE NS_IMETHOD SupportsResponseType(const nsAString & responseType, PRBool *_retval NS_OUTPARAM) { return _to SupportsResponseType(responseType, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAlias(nsAString & aAlias) { return _to GetAlias(aAlias); } \
  NS_SCRIPTABLE NS_IMETHOD SetAlias(const nsAString & aAlias) { return _to SetAlias(aAlias); } \
  NS_SCRIPTABLE NS_IMETHOD GetDescription(nsAString & aDescription) { return _to GetDescription(aDescription); } \
  NS_SCRIPTABLE NS_IMETHOD GetHidden(PRBool *aHidden) { return _to GetHidden(aHidden); } \
  NS_SCRIPTABLE NS_IMETHOD SetHidden(PRBool aHidden) { return _to SetHidden(aHidden); } \
  NS_SCRIPTABLE NS_IMETHOD GetIconURI(nsIURI * *aIconURI) { return _to GetIconURI(aIconURI); } \
  NS_SCRIPTABLE NS_IMETHOD GetName(nsAString & aName) { return _to GetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD GetSearchForm(nsAString & aSearchForm) { return _to GetSearchForm(aSearchForm); } \
  NS_SCRIPTABLE NS_IMETHOD GetType(PRInt32 *aType) { return _to GetType(aType); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISEARCHENGINE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetSubmission(const nsAString & data, const nsAString & responseType, nsISearchSubmission * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSubmission(data, responseType, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AddParam(const nsAString & name, const nsAString & value, const nsAString & responseType) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddParam(name, value, responseType); } \
  NS_SCRIPTABLE NS_IMETHOD SupportsResponseType(const nsAString & responseType, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SupportsResponseType(responseType, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAlias(nsAString & aAlias) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAlias(aAlias); } \
  NS_SCRIPTABLE NS_IMETHOD SetAlias(const nsAString & aAlias) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAlias(aAlias); } \
  NS_SCRIPTABLE NS_IMETHOD GetDescription(nsAString & aDescription) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDescription(aDescription); } \
  NS_SCRIPTABLE NS_IMETHOD GetHidden(PRBool *aHidden) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHidden(aHidden); } \
  NS_SCRIPTABLE NS_IMETHOD SetHidden(PRBool aHidden) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetHidden(aHidden); } \
  NS_SCRIPTABLE NS_IMETHOD GetIconURI(nsIURI * *aIconURI) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIconURI(aIconURI); } \
  NS_SCRIPTABLE NS_IMETHOD GetName(nsAString & aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD GetSearchForm(nsAString & aSearchForm) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSearchForm(aSearchForm); } \
  NS_SCRIPTABLE NS_IMETHOD GetType(PRInt32 *aType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(aType); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsSearchEngine : public nsISearchEngine
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISEARCHENGINE

  nsSearchEngine();

private:
  ~nsSearchEngine();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsSearchEngine, nsISearchEngine)

nsSearchEngine::nsSearchEngine()
{
  /* member initializers and constructor code */
}

nsSearchEngine::~nsSearchEngine()
{
  /* destructor code */
}

/* nsISearchSubmission getSubmission (in AString data, [optional] in AString responseType); */
NS_IMETHODIMP nsSearchEngine::GetSubmission(const nsAString & data, const nsAString & responseType, nsISearchSubmission * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addParam (in AString name, in AString value, in AString responseType); */
NS_IMETHODIMP nsSearchEngine::AddParam(const nsAString & name, const nsAString & value, const nsAString & responseType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean supportsResponseType (in AString responseType); */
NS_IMETHODIMP nsSearchEngine::SupportsResponseType(const nsAString & responseType, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute AString alias; */
NS_IMETHODIMP nsSearchEngine::GetAlias(nsAString & aAlias)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSearchEngine::SetAlias(const nsAString & aAlias)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString description; */
NS_IMETHODIMP nsSearchEngine::GetDescription(nsAString & aDescription)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean hidden; */
NS_IMETHODIMP nsSearchEngine::GetHidden(PRBool *aHidden)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSearchEngine::SetHidden(PRBool aHidden)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIURI iconURI; */
NS_IMETHODIMP nsSearchEngine::GetIconURI(nsIURI * *aIconURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString name; */
NS_IMETHODIMP nsSearchEngine::GetName(nsAString & aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString searchForm; */
NS_IMETHODIMP nsSearchEngine::GetSearchForm(nsAString & aSearchForm)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long type; */
NS_IMETHODIMP nsSearchEngine::GetType(PRInt32 *aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIBrowserSearchService */
#define NS_IBROWSERSEARCHSERVICE_IID_STR "8307b8f2-08ea-45b8-96bf-b1dc7688fe3b"

#define NS_IBROWSERSEARCHSERVICE_IID \
  {0x8307b8f2, 0x08ea, 0x45b8, \
    { 0x96, 0xbf, 0xb1, 0xdc, 0x76, 0x88, 0xfe, 0x3b }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIBrowserSearchService : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IBROWSERSEARCHSERVICE_IID)

  /* void addEngine (in AString engineURL, in long dataType, in AString iconURL, in boolean confirm); */
  NS_SCRIPTABLE NS_IMETHOD AddEngine(const nsAString & engineURL, PRInt32 dataType, const nsAString & iconURL, PRBool confirm) = 0;

  /* void addEngineWithDetails (in AString name, in AString iconURL, in AString alias, in AString description, in AString method, in AString url); */
  NS_SCRIPTABLE NS_IMETHOD AddEngineWithDetails(const nsAString & name, const nsAString & iconURL, const nsAString & alias, const nsAString & description, const nsAString & method, const nsAString & url) = 0;

  /* void restoreDefaultEngines (); */
  NS_SCRIPTABLE NS_IMETHOD RestoreDefaultEngines(void) = 0;

  /* nsISearchEngine getEngineByAlias (in AString alias); */
  NS_SCRIPTABLE NS_IMETHOD GetEngineByAlias(const nsAString & alias, nsISearchEngine * *_retval NS_OUTPARAM) = 0;

  /* nsISearchEngine getEngineByName (in AString aEngineName); */
  NS_SCRIPTABLE NS_IMETHOD GetEngineByName(const nsAString & aEngineName, nsISearchEngine * *_retval NS_OUTPARAM) = 0;

  /* void getEngines ([optional] out unsigned long engineCount, [array, size_is (engineCount), retval] out nsISearchEngine engines); */
  NS_SCRIPTABLE NS_IMETHOD GetEngines(PRUint32 *engineCount NS_OUTPARAM, nsISearchEngine * **engines NS_OUTPARAM) = 0;

  /* void getVisibleEngines ([optional] out unsigned long engineCount, [array, size_is (engineCount), retval] out nsISearchEngine engines); */
  NS_SCRIPTABLE NS_IMETHOD GetVisibleEngines(PRUint32 *engineCount NS_OUTPARAM, nsISearchEngine * **engines NS_OUTPARAM) = 0;

  /* void getDefaultEngines ([optional] out unsigned long engineCount, [array, size_is (engineCount), retval] out nsISearchEngine engines); */
  NS_SCRIPTABLE NS_IMETHOD GetDefaultEngines(PRUint32 *engineCount NS_OUTPARAM, nsISearchEngine * **engines NS_OUTPARAM) = 0;

  /* void moveEngine (in nsISearchEngine engine, in long newIndex); */
  NS_SCRIPTABLE NS_IMETHOD MoveEngine(nsISearchEngine *engine, PRInt32 newIndex) = 0;

  /* void removeEngine (in nsISearchEngine engine); */
  NS_SCRIPTABLE NS_IMETHOD RemoveEngine(nsISearchEngine *engine) = 0;

  /* readonly attribute nsISearchEngine defaultEngine; */
  NS_SCRIPTABLE NS_IMETHOD GetDefaultEngine(nsISearchEngine * *aDefaultEngine) = 0;

  /* attribute nsISearchEngine currentEngine; */
  NS_SCRIPTABLE NS_IMETHOD GetCurrentEngine(nsISearchEngine * *aCurrentEngine) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetCurrentEngine(nsISearchEngine *aCurrentEngine) = 0;

  /* readonly attribute nsISearchEngine originalDefaultEngine; */
  NS_SCRIPTABLE NS_IMETHOD GetOriginalDefaultEngine(nsISearchEngine * *aOriginalDefaultEngine) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIBrowserSearchService, NS_IBROWSERSEARCHSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIBROWSERSEARCHSERVICE \
  NS_SCRIPTABLE NS_IMETHOD AddEngine(const nsAString & engineURL, PRInt32 dataType, const nsAString & iconURL, PRBool confirm); \
  NS_SCRIPTABLE NS_IMETHOD AddEngineWithDetails(const nsAString & name, const nsAString & iconURL, const nsAString & alias, const nsAString & description, const nsAString & method, const nsAString & url); \
  NS_SCRIPTABLE NS_IMETHOD RestoreDefaultEngines(void); \
  NS_SCRIPTABLE NS_IMETHOD GetEngineByAlias(const nsAString & alias, nsISearchEngine * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetEngineByName(const nsAString & aEngineName, nsISearchEngine * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetEngines(PRUint32 *engineCount NS_OUTPARAM, nsISearchEngine * **engines NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetVisibleEngines(PRUint32 *engineCount NS_OUTPARAM, nsISearchEngine * **engines NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultEngines(PRUint32 *engineCount NS_OUTPARAM, nsISearchEngine * **engines NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD MoveEngine(nsISearchEngine *engine, PRInt32 newIndex); \
  NS_SCRIPTABLE NS_IMETHOD RemoveEngine(nsISearchEngine *engine); \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultEngine(nsISearchEngine * *aDefaultEngine); \
  NS_SCRIPTABLE NS_IMETHOD GetCurrentEngine(nsISearchEngine * *aCurrentEngine); \
  NS_SCRIPTABLE NS_IMETHOD SetCurrentEngine(nsISearchEngine *aCurrentEngine); \
  NS_SCRIPTABLE NS_IMETHOD GetOriginalDefaultEngine(nsISearchEngine * *aOriginalDefaultEngine); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIBROWSERSEARCHSERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD AddEngine(const nsAString & engineURL, PRInt32 dataType, const nsAString & iconURL, PRBool confirm) { return _to AddEngine(engineURL, dataType, iconURL, confirm); } \
  NS_SCRIPTABLE NS_IMETHOD AddEngineWithDetails(const nsAString & name, const nsAString & iconURL, const nsAString & alias, const nsAString & description, const nsAString & method, const nsAString & url) { return _to AddEngineWithDetails(name, iconURL, alias, description, method, url); } \
  NS_SCRIPTABLE NS_IMETHOD RestoreDefaultEngines(void) { return _to RestoreDefaultEngines(); } \
  NS_SCRIPTABLE NS_IMETHOD GetEngineByAlias(const nsAString & alias, nsISearchEngine * *_retval NS_OUTPARAM) { return _to GetEngineByAlias(alias, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetEngineByName(const nsAString & aEngineName, nsISearchEngine * *_retval NS_OUTPARAM) { return _to GetEngineByName(aEngineName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetEngines(PRUint32 *engineCount NS_OUTPARAM, nsISearchEngine * **engines NS_OUTPARAM) { return _to GetEngines(engineCount, engines); } \
  NS_SCRIPTABLE NS_IMETHOD GetVisibleEngines(PRUint32 *engineCount NS_OUTPARAM, nsISearchEngine * **engines NS_OUTPARAM) { return _to GetVisibleEngines(engineCount, engines); } \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultEngines(PRUint32 *engineCount NS_OUTPARAM, nsISearchEngine * **engines NS_OUTPARAM) { return _to GetDefaultEngines(engineCount, engines); } \
  NS_SCRIPTABLE NS_IMETHOD MoveEngine(nsISearchEngine *engine, PRInt32 newIndex) { return _to MoveEngine(engine, newIndex); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveEngine(nsISearchEngine *engine) { return _to RemoveEngine(engine); } \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultEngine(nsISearchEngine * *aDefaultEngine) { return _to GetDefaultEngine(aDefaultEngine); } \
  NS_SCRIPTABLE NS_IMETHOD GetCurrentEngine(nsISearchEngine * *aCurrentEngine) { return _to GetCurrentEngine(aCurrentEngine); } \
  NS_SCRIPTABLE NS_IMETHOD SetCurrentEngine(nsISearchEngine *aCurrentEngine) { return _to SetCurrentEngine(aCurrentEngine); } \
  NS_SCRIPTABLE NS_IMETHOD GetOriginalDefaultEngine(nsISearchEngine * *aOriginalDefaultEngine) { return _to GetOriginalDefaultEngine(aOriginalDefaultEngine); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIBROWSERSEARCHSERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD AddEngine(const nsAString & engineURL, PRInt32 dataType, const nsAString & iconURL, PRBool confirm) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddEngine(engineURL, dataType, iconURL, confirm); } \
  NS_SCRIPTABLE NS_IMETHOD AddEngineWithDetails(const nsAString & name, const nsAString & iconURL, const nsAString & alias, const nsAString & description, const nsAString & method, const nsAString & url) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddEngineWithDetails(name, iconURL, alias, description, method, url); } \
  NS_SCRIPTABLE NS_IMETHOD RestoreDefaultEngines(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->RestoreDefaultEngines(); } \
  NS_SCRIPTABLE NS_IMETHOD GetEngineByAlias(const nsAString & alias, nsISearchEngine * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEngineByAlias(alias, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetEngineByName(const nsAString & aEngineName, nsISearchEngine * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEngineByName(aEngineName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetEngines(PRUint32 *engineCount NS_OUTPARAM, nsISearchEngine * **engines NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEngines(engineCount, engines); } \
  NS_SCRIPTABLE NS_IMETHOD GetVisibleEngines(PRUint32 *engineCount NS_OUTPARAM, nsISearchEngine * **engines NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVisibleEngines(engineCount, engines); } \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultEngines(PRUint32 *engineCount NS_OUTPARAM, nsISearchEngine * **engines NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDefaultEngines(engineCount, engines); } \
  NS_SCRIPTABLE NS_IMETHOD MoveEngine(nsISearchEngine *engine, PRInt32 newIndex) { return !_to ? NS_ERROR_NULL_POINTER : _to->MoveEngine(engine, newIndex); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveEngine(nsISearchEngine *engine) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveEngine(engine); } \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultEngine(nsISearchEngine * *aDefaultEngine) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDefaultEngine(aDefaultEngine); } \
  NS_SCRIPTABLE NS_IMETHOD GetCurrentEngine(nsISearchEngine * *aCurrentEngine) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCurrentEngine(aCurrentEngine); } \
  NS_SCRIPTABLE NS_IMETHOD SetCurrentEngine(nsISearchEngine *aCurrentEngine) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCurrentEngine(aCurrentEngine); } \
  NS_SCRIPTABLE NS_IMETHOD GetOriginalDefaultEngine(nsISearchEngine * *aOriginalDefaultEngine) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOriginalDefaultEngine(aOriginalDefaultEngine); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsBrowserSearchService : public nsIBrowserSearchService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIBROWSERSEARCHSERVICE

  nsBrowserSearchService();

private:
  ~nsBrowserSearchService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsBrowserSearchService, nsIBrowserSearchService)

nsBrowserSearchService::nsBrowserSearchService()
{
  /* member initializers and constructor code */
}

nsBrowserSearchService::~nsBrowserSearchService()
{
  /* destructor code */
}

/* void addEngine (in AString engineURL, in long dataType, in AString iconURL, in boolean confirm); */
NS_IMETHODIMP nsBrowserSearchService::AddEngine(const nsAString & engineURL, PRInt32 dataType, const nsAString & iconURL, PRBool confirm)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addEngineWithDetails (in AString name, in AString iconURL, in AString alias, in AString description, in AString method, in AString url); */
NS_IMETHODIMP nsBrowserSearchService::AddEngineWithDetails(const nsAString & name, const nsAString & iconURL, const nsAString & alias, const nsAString & description, const nsAString & method, const nsAString & url)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void restoreDefaultEngines (); */
NS_IMETHODIMP nsBrowserSearchService::RestoreDefaultEngines()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsISearchEngine getEngineByAlias (in AString alias); */
NS_IMETHODIMP nsBrowserSearchService::GetEngineByAlias(const nsAString & alias, nsISearchEngine * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsISearchEngine getEngineByName (in AString aEngineName); */
NS_IMETHODIMP nsBrowserSearchService::GetEngineByName(const nsAString & aEngineName, nsISearchEngine * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getEngines ([optional] out unsigned long engineCount, [array, size_is (engineCount), retval] out nsISearchEngine engines); */
NS_IMETHODIMP nsBrowserSearchService::GetEngines(PRUint32 *engineCount NS_OUTPARAM, nsISearchEngine * **engines NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getVisibleEngines ([optional] out unsigned long engineCount, [array, size_is (engineCount), retval] out nsISearchEngine engines); */
NS_IMETHODIMP nsBrowserSearchService::GetVisibleEngines(PRUint32 *engineCount NS_OUTPARAM, nsISearchEngine * **engines NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getDefaultEngines ([optional] out unsigned long engineCount, [array, size_is (engineCount), retval] out nsISearchEngine engines); */
NS_IMETHODIMP nsBrowserSearchService::GetDefaultEngines(PRUint32 *engineCount NS_OUTPARAM, nsISearchEngine * **engines NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void moveEngine (in nsISearchEngine engine, in long newIndex); */
NS_IMETHODIMP nsBrowserSearchService::MoveEngine(nsISearchEngine *engine, PRInt32 newIndex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeEngine (in nsISearchEngine engine); */
NS_IMETHODIMP nsBrowserSearchService::RemoveEngine(nsISearchEngine *engine)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsISearchEngine defaultEngine; */
NS_IMETHODIMP nsBrowserSearchService::GetDefaultEngine(nsISearchEngine * *aDefaultEngine)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsISearchEngine currentEngine; */
NS_IMETHODIMP nsBrowserSearchService::GetCurrentEngine(nsISearchEngine * *aCurrentEngine)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsBrowserSearchService::SetCurrentEngine(nsISearchEngine *aCurrentEngine)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsISearchEngine originalDefaultEngine; */
NS_IMETHODIMP nsBrowserSearchService::GetOriginalDefaultEngine(nsISearchEngine * *aOriginalDefaultEngine)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

/**
 * The observer topic to listen to for actions performed on installed
 * search engines.
 */
#define SEARCH_ENGINE_TOPIC "browser-search-engine-modified"
/**
 * Sent when an engine is removed from the data store.
 */
#define SEARCH_ENGINE_REMOVED      "engine-removed"
/**
 * Sent when an engine is changed. This includes when the engine's "hidden"
 * property is changed.
 */
#define SEARCH_ENGINE_CHANGED      "engine-changed"
/**
 * Sent when an engine is added to the list of available engines.
 */
#define SEARCH_ENGINE_ADDED        "engine-added"
/**
 * Sent when a search engine being installed from a remote plugin description
 * file is completely loaded. This is used internally by the search service as
 * an indication of when the engine can be added to the internal store, and
 * therefore should not be used to detect engine availability. It is always
 * followed by an "added" notification.
 */
#define SEARCH_ENGINE_LOADED       "engine-loaded"
/**
 * Sent when the "current" engine is changed.
 */
#define SEARCH_ENGINE_CURRENT      "engine-current";

#endif /* __gen_nsIBrowserSearchService_h__ */
