/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/netwerk/mime/nsIMIMEInfo.idl
 */

#ifndef __gen_nsIMIMEInfo_h__
#define __gen_nsIMIMEInfo_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIURI; /* forward declaration */

class nsIFile; /* forward declaration */

class nsIUTF8StringEnumerator; /* forward declaration */

class nsIHandlerApp; /* forward declaration */

class nsIArray; /* forward declaration */

class nsIMutableArray; /* forward declaration */

class nsIInterfaceRequestor; /* forward declaration */

typedef PRInt32  nsHandlerInfoAction;


/* starting interface:    nsIHandlerInfo */
#define NS_IHANDLERINFO_IID_STR "325e56a7-3762-4312-aec7-f1fcf84b4145"

#define NS_IHANDLERINFO_IID \
  {0x325e56a7, 0x3762, 0x4312, \
    { 0xae, 0xc7, 0xf1, 0xfc, 0xf8, 0x4b, 0x41, 0x45 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIHandlerInfo : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IHANDLERINFO_IID)

  /* readonly attribute ACString type; */
  NS_SCRIPTABLE NS_IMETHOD GetType(nsACString & aType) = 0;

  /* attribute AString description; */
  NS_SCRIPTABLE NS_IMETHOD GetDescription(nsAString & aDescription) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetDescription(const nsAString & aDescription) = 0;

  /* attribute nsIHandlerApp preferredApplicationHandler; */
  NS_SCRIPTABLE NS_IMETHOD GetPreferredApplicationHandler(nsIHandlerApp * *aPreferredApplicationHandler) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetPreferredApplicationHandler(nsIHandlerApp *aPreferredApplicationHandler) = 0;

  /* readonly attribute nsIMutableArray possibleApplicationHandlers; */
  NS_SCRIPTABLE NS_IMETHOD GetPossibleApplicationHandlers(nsIMutableArray * *aPossibleApplicationHandlers) = 0;

  /* readonly attribute boolean hasDefaultHandler; */
  NS_SCRIPTABLE NS_IMETHOD GetHasDefaultHandler(PRBool *aHasDefaultHandler) = 0;

  /* readonly attribute AString defaultDescription; */
  NS_SCRIPTABLE NS_IMETHOD GetDefaultDescription(nsAString & aDefaultDescription) = 0;

  /* void launchWithURI (in nsIURI aURI, [optional] in nsIInterfaceRequestor aWindowContext); */
  NS_SCRIPTABLE NS_IMETHOD LaunchWithURI(nsIURI *aURI, nsIInterfaceRequestor *aWindowContext) = 0;

  /* attribute nsHandlerInfoAction preferredAction; */
  NS_SCRIPTABLE NS_IMETHOD GetPreferredAction(nsHandlerInfoAction *aPreferredAction) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetPreferredAction(nsHandlerInfoAction aPreferredAction) = 0;

  enum { saveToDisk = 0 };

  enum { alwaysAsk = 1 };

  enum { useHelperApp = 2 };

  enum { handleInternally = 3 };

  enum { useSystemDefault = 4 };

  /* attribute boolean alwaysAskBeforeHandling; */
  NS_SCRIPTABLE NS_IMETHOD GetAlwaysAskBeforeHandling(PRBool *aAlwaysAskBeforeHandling) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetAlwaysAskBeforeHandling(PRBool aAlwaysAskBeforeHandling) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIHandlerInfo, NS_IHANDLERINFO_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIHANDLERINFO \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsACString & aType); \
  NS_SCRIPTABLE NS_IMETHOD GetDescription(nsAString & aDescription); \
  NS_SCRIPTABLE NS_IMETHOD SetDescription(const nsAString & aDescription); \
  NS_SCRIPTABLE NS_IMETHOD GetPreferredApplicationHandler(nsIHandlerApp * *aPreferredApplicationHandler); \
  NS_SCRIPTABLE NS_IMETHOD SetPreferredApplicationHandler(nsIHandlerApp *aPreferredApplicationHandler); \
  NS_SCRIPTABLE NS_IMETHOD GetPossibleApplicationHandlers(nsIMutableArray * *aPossibleApplicationHandlers); \
  NS_SCRIPTABLE NS_IMETHOD GetHasDefaultHandler(PRBool *aHasDefaultHandler); \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultDescription(nsAString & aDefaultDescription); \
  NS_SCRIPTABLE NS_IMETHOD LaunchWithURI(nsIURI *aURI, nsIInterfaceRequestor *aWindowContext); \
  NS_SCRIPTABLE NS_IMETHOD GetPreferredAction(nsHandlerInfoAction *aPreferredAction); \
  NS_SCRIPTABLE NS_IMETHOD SetPreferredAction(nsHandlerInfoAction aPreferredAction); \
  NS_SCRIPTABLE NS_IMETHOD GetAlwaysAskBeforeHandling(PRBool *aAlwaysAskBeforeHandling); \
  NS_SCRIPTABLE NS_IMETHOD SetAlwaysAskBeforeHandling(PRBool aAlwaysAskBeforeHandling); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIHANDLERINFO(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsACString & aType) { return _to GetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD GetDescription(nsAString & aDescription) { return _to GetDescription(aDescription); } \
  NS_SCRIPTABLE NS_IMETHOD SetDescription(const nsAString & aDescription) { return _to SetDescription(aDescription); } \
  NS_SCRIPTABLE NS_IMETHOD GetPreferredApplicationHandler(nsIHandlerApp * *aPreferredApplicationHandler) { return _to GetPreferredApplicationHandler(aPreferredApplicationHandler); } \
  NS_SCRIPTABLE NS_IMETHOD SetPreferredApplicationHandler(nsIHandlerApp *aPreferredApplicationHandler) { return _to SetPreferredApplicationHandler(aPreferredApplicationHandler); } \
  NS_SCRIPTABLE NS_IMETHOD GetPossibleApplicationHandlers(nsIMutableArray * *aPossibleApplicationHandlers) { return _to GetPossibleApplicationHandlers(aPossibleApplicationHandlers); } \
  NS_SCRIPTABLE NS_IMETHOD GetHasDefaultHandler(PRBool *aHasDefaultHandler) { return _to GetHasDefaultHandler(aHasDefaultHandler); } \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultDescription(nsAString & aDefaultDescription) { return _to GetDefaultDescription(aDefaultDescription); } \
  NS_SCRIPTABLE NS_IMETHOD LaunchWithURI(nsIURI *aURI, nsIInterfaceRequestor *aWindowContext) { return _to LaunchWithURI(aURI, aWindowContext); } \
  NS_SCRIPTABLE NS_IMETHOD GetPreferredAction(nsHandlerInfoAction *aPreferredAction) { return _to GetPreferredAction(aPreferredAction); } \
  NS_SCRIPTABLE NS_IMETHOD SetPreferredAction(nsHandlerInfoAction aPreferredAction) { return _to SetPreferredAction(aPreferredAction); } \
  NS_SCRIPTABLE NS_IMETHOD GetAlwaysAskBeforeHandling(PRBool *aAlwaysAskBeforeHandling) { return _to GetAlwaysAskBeforeHandling(aAlwaysAskBeforeHandling); } \
  NS_SCRIPTABLE NS_IMETHOD SetAlwaysAskBeforeHandling(PRBool aAlwaysAskBeforeHandling) { return _to SetAlwaysAskBeforeHandling(aAlwaysAskBeforeHandling); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIHANDLERINFO(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsACString & aType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD GetDescription(nsAString & aDescription) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDescription(aDescription); } \
  NS_SCRIPTABLE NS_IMETHOD SetDescription(const nsAString & aDescription) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDescription(aDescription); } \
  NS_SCRIPTABLE NS_IMETHOD GetPreferredApplicationHandler(nsIHandlerApp * *aPreferredApplicationHandler) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPreferredApplicationHandler(aPreferredApplicationHandler); } \
  NS_SCRIPTABLE NS_IMETHOD SetPreferredApplicationHandler(nsIHandlerApp *aPreferredApplicationHandler) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPreferredApplicationHandler(aPreferredApplicationHandler); } \
  NS_SCRIPTABLE NS_IMETHOD GetPossibleApplicationHandlers(nsIMutableArray * *aPossibleApplicationHandlers) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPossibleApplicationHandlers(aPossibleApplicationHandlers); } \
  NS_SCRIPTABLE NS_IMETHOD GetHasDefaultHandler(PRBool *aHasDefaultHandler) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHasDefaultHandler(aHasDefaultHandler); } \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultDescription(nsAString & aDefaultDescription) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDefaultDescription(aDefaultDescription); } \
  NS_SCRIPTABLE NS_IMETHOD LaunchWithURI(nsIURI *aURI, nsIInterfaceRequestor *aWindowContext) { return !_to ? NS_ERROR_NULL_POINTER : _to->LaunchWithURI(aURI, aWindowContext); } \
  NS_SCRIPTABLE NS_IMETHOD GetPreferredAction(nsHandlerInfoAction *aPreferredAction) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPreferredAction(aPreferredAction); } \
  NS_SCRIPTABLE NS_IMETHOD SetPreferredAction(nsHandlerInfoAction aPreferredAction) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPreferredAction(aPreferredAction); } \
  NS_SCRIPTABLE NS_IMETHOD GetAlwaysAskBeforeHandling(PRBool *aAlwaysAskBeforeHandling) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAlwaysAskBeforeHandling(aAlwaysAskBeforeHandling); } \
  NS_SCRIPTABLE NS_IMETHOD SetAlwaysAskBeforeHandling(PRBool aAlwaysAskBeforeHandling) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAlwaysAskBeforeHandling(aAlwaysAskBeforeHandling); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsHandlerInfo : public nsIHandlerInfo
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIHANDLERINFO

  nsHandlerInfo();

private:
  ~nsHandlerInfo();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsHandlerInfo, nsIHandlerInfo)

nsHandlerInfo::nsHandlerInfo()
{
  /* member initializers and constructor code */
}

nsHandlerInfo::~nsHandlerInfo()
{
  /* destructor code */
}

/* readonly attribute ACString type; */
NS_IMETHODIMP nsHandlerInfo::GetType(nsACString & aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute AString description; */
NS_IMETHODIMP nsHandlerInfo::GetDescription(nsAString & aDescription)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsHandlerInfo::SetDescription(const nsAString & aDescription)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIHandlerApp preferredApplicationHandler; */
NS_IMETHODIMP nsHandlerInfo::GetPreferredApplicationHandler(nsIHandlerApp * *aPreferredApplicationHandler)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsHandlerInfo::SetPreferredApplicationHandler(nsIHandlerApp *aPreferredApplicationHandler)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIMutableArray possibleApplicationHandlers; */
NS_IMETHODIMP nsHandlerInfo::GetPossibleApplicationHandlers(nsIMutableArray * *aPossibleApplicationHandlers)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean hasDefaultHandler; */
NS_IMETHODIMP nsHandlerInfo::GetHasDefaultHandler(PRBool *aHasDefaultHandler)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString defaultDescription; */
NS_IMETHODIMP nsHandlerInfo::GetDefaultDescription(nsAString & aDefaultDescription)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void launchWithURI (in nsIURI aURI, [optional] in nsIInterfaceRequestor aWindowContext); */
NS_IMETHODIMP nsHandlerInfo::LaunchWithURI(nsIURI *aURI, nsIInterfaceRequestor *aWindowContext)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsHandlerInfoAction preferredAction; */
NS_IMETHODIMP nsHandlerInfo::GetPreferredAction(nsHandlerInfoAction *aPreferredAction)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsHandlerInfo::SetPreferredAction(nsHandlerInfoAction aPreferredAction)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean alwaysAskBeforeHandling; */
NS_IMETHODIMP nsHandlerInfo::GetAlwaysAskBeforeHandling(PRBool *aAlwaysAskBeforeHandling)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsHandlerInfo::SetAlwaysAskBeforeHandling(PRBool aAlwaysAskBeforeHandling)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIMIMEInfo */
#define NS_IMIMEINFO_IID_STR "1c21acef-c7a1-40c6-9d40-a20480ee53a1"

#define NS_IMIMEINFO_IID \
  {0x1c21acef, 0xc7a1, 0x40c6, \
    { 0x9d, 0x40, 0xa2, 0x04, 0x80, 0xee, 0x53, 0xa1 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIMIMEInfo : public nsIHandlerInfo {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IMIMEINFO_IID)

  /* nsIUTF8StringEnumerator getFileExtensions (); */
  NS_SCRIPTABLE NS_IMETHOD GetFileExtensions(nsIUTF8StringEnumerator * *_retval NS_OUTPARAM) = 0;

  /* void setFileExtensions (in AUTF8String aExtensions); */
  NS_SCRIPTABLE NS_IMETHOD SetFileExtensions(const nsACString & aExtensions) = 0;

  /* boolean extensionExists (in AUTF8String aExtension); */
  NS_SCRIPTABLE NS_IMETHOD ExtensionExists(const nsACString & aExtension, PRBool *_retval NS_OUTPARAM) = 0;

  /* void appendExtension (in AUTF8String aExtension); */
  NS_SCRIPTABLE NS_IMETHOD AppendExtension(const nsACString & aExtension) = 0;

  /* attribute AUTF8String primaryExtension; */
  NS_SCRIPTABLE NS_IMETHOD GetPrimaryExtension(nsACString & aPrimaryExtension) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetPrimaryExtension(const nsACString & aPrimaryExtension) = 0;

  /* readonly attribute ACString MIMEType; */
  NS_SCRIPTABLE NS_IMETHOD GetMIMEType(nsACString & aMIMEType) = 0;

  /* boolean equals (in nsIMIMEInfo aMIMEInfo); */
  NS_SCRIPTABLE NS_IMETHOD Equals(nsIMIMEInfo *aMIMEInfo, PRBool *_retval NS_OUTPARAM) = 0;

  /* readonly attribute nsIArray possibleLocalHandlers; */
  NS_SCRIPTABLE NS_IMETHOD GetPossibleLocalHandlers(nsIArray * *aPossibleLocalHandlers) = 0;

  /* void launchWithFile (in nsIFile aFile); */
  NS_SCRIPTABLE NS_IMETHOD LaunchWithFile(nsIFile *aFile) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIMIMEInfo, NS_IMIMEINFO_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIMIMEINFO \
  NS_SCRIPTABLE NS_IMETHOD GetFileExtensions(nsIUTF8StringEnumerator * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetFileExtensions(const nsACString & aExtensions); \
  NS_SCRIPTABLE NS_IMETHOD ExtensionExists(const nsACString & aExtension, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD AppendExtension(const nsACString & aExtension); \
  NS_SCRIPTABLE NS_IMETHOD GetPrimaryExtension(nsACString & aPrimaryExtension); \
  NS_SCRIPTABLE NS_IMETHOD SetPrimaryExtension(const nsACString & aPrimaryExtension); \
  NS_SCRIPTABLE NS_IMETHOD GetMIMEType(nsACString & aMIMEType); \
  NS_SCRIPTABLE NS_IMETHOD Equals(nsIMIMEInfo *aMIMEInfo, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetPossibleLocalHandlers(nsIArray * *aPossibleLocalHandlers); \
  NS_SCRIPTABLE NS_IMETHOD LaunchWithFile(nsIFile *aFile); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIMIMEINFO(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetFileExtensions(nsIUTF8StringEnumerator * *_retval NS_OUTPARAM) { return _to GetFileExtensions(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetFileExtensions(const nsACString & aExtensions) { return _to SetFileExtensions(aExtensions); } \
  NS_SCRIPTABLE NS_IMETHOD ExtensionExists(const nsACString & aExtension, PRBool *_retval NS_OUTPARAM) { return _to ExtensionExists(aExtension, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AppendExtension(const nsACString & aExtension) { return _to AppendExtension(aExtension); } \
  NS_SCRIPTABLE NS_IMETHOD GetPrimaryExtension(nsACString & aPrimaryExtension) { return _to GetPrimaryExtension(aPrimaryExtension); } \
  NS_SCRIPTABLE NS_IMETHOD SetPrimaryExtension(const nsACString & aPrimaryExtension) { return _to SetPrimaryExtension(aPrimaryExtension); } \
  NS_SCRIPTABLE NS_IMETHOD GetMIMEType(nsACString & aMIMEType) { return _to GetMIMEType(aMIMEType); } \
  NS_SCRIPTABLE NS_IMETHOD Equals(nsIMIMEInfo *aMIMEInfo, PRBool *_retval NS_OUTPARAM) { return _to Equals(aMIMEInfo, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetPossibleLocalHandlers(nsIArray * *aPossibleLocalHandlers) { return _to GetPossibleLocalHandlers(aPossibleLocalHandlers); } \
  NS_SCRIPTABLE NS_IMETHOD LaunchWithFile(nsIFile *aFile) { return _to LaunchWithFile(aFile); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIMIMEINFO(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetFileExtensions(nsIUTF8StringEnumerator * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFileExtensions(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetFileExtensions(const nsACString & aExtensions) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFileExtensions(aExtensions); } \
  NS_SCRIPTABLE NS_IMETHOD ExtensionExists(const nsACString & aExtension, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ExtensionExists(aExtension, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AppendExtension(const nsACString & aExtension) { return !_to ? NS_ERROR_NULL_POINTER : _to->AppendExtension(aExtension); } \
  NS_SCRIPTABLE NS_IMETHOD GetPrimaryExtension(nsACString & aPrimaryExtension) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPrimaryExtension(aPrimaryExtension); } \
  NS_SCRIPTABLE NS_IMETHOD SetPrimaryExtension(const nsACString & aPrimaryExtension) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPrimaryExtension(aPrimaryExtension); } \
  NS_SCRIPTABLE NS_IMETHOD GetMIMEType(nsACString & aMIMEType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMIMEType(aMIMEType); } \
  NS_SCRIPTABLE NS_IMETHOD Equals(nsIMIMEInfo *aMIMEInfo, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Equals(aMIMEInfo, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetPossibleLocalHandlers(nsIArray * *aPossibleLocalHandlers) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPossibleLocalHandlers(aPossibleLocalHandlers); } \
  NS_SCRIPTABLE NS_IMETHOD LaunchWithFile(nsIFile *aFile) { return !_to ? NS_ERROR_NULL_POINTER : _to->LaunchWithFile(aFile); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsMIMEInfo : public nsIMIMEInfo
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIMIMEINFO

  nsMIMEInfo();

private:
  ~nsMIMEInfo();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsMIMEInfo, nsIMIMEInfo)

nsMIMEInfo::nsMIMEInfo()
{
  /* member initializers and constructor code */
}

nsMIMEInfo::~nsMIMEInfo()
{
  /* destructor code */
}

/* nsIUTF8StringEnumerator getFileExtensions (); */
NS_IMETHODIMP nsMIMEInfo::GetFileExtensions(nsIUTF8StringEnumerator * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setFileExtensions (in AUTF8String aExtensions); */
NS_IMETHODIMP nsMIMEInfo::SetFileExtensions(const nsACString & aExtensions)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean extensionExists (in AUTF8String aExtension); */
NS_IMETHODIMP nsMIMEInfo::ExtensionExists(const nsACString & aExtension, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void appendExtension (in AUTF8String aExtension); */
NS_IMETHODIMP nsMIMEInfo::AppendExtension(const nsACString & aExtension)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute AUTF8String primaryExtension; */
NS_IMETHODIMP nsMIMEInfo::GetPrimaryExtension(nsACString & aPrimaryExtension)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsMIMEInfo::SetPrimaryExtension(const nsACString & aPrimaryExtension)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute ACString MIMEType; */
NS_IMETHODIMP nsMIMEInfo::GetMIMEType(nsACString & aMIMEType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean equals (in nsIMIMEInfo aMIMEInfo); */
NS_IMETHODIMP nsMIMEInfo::Equals(nsIMIMEInfo *aMIMEInfo, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIArray possibleLocalHandlers; */
NS_IMETHODIMP nsMIMEInfo::GetPossibleLocalHandlers(nsIArray * *aPossibleLocalHandlers)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void launchWithFile (in nsIFile aFile); */
NS_IMETHODIMP nsMIMEInfo::LaunchWithFile(nsIFile *aFile)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIHandlerApp */
#define NS_IHANDLERAPP_IID_STR "8bdf20a4-9170-4548-af52-78311a44f920"

#define NS_IHANDLERAPP_IID \
  {0x8bdf20a4, 0x9170, 0x4548, \
    { 0xaf, 0x52, 0x78, 0x31, 0x1a, 0x44, 0xf9, 0x20 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIHandlerApp : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IHANDLERAPP_IID)

  /* attribute AString name; */
  NS_SCRIPTABLE NS_IMETHOD GetName(nsAString & aName) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetName(const nsAString & aName) = 0;

  /* attribute AString detailedDescription; */
  NS_SCRIPTABLE NS_IMETHOD GetDetailedDescription(nsAString & aDetailedDescription) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetDetailedDescription(const nsAString & aDetailedDescription) = 0;

  /* boolean equals (in nsIHandlerApp aHandlerApp); */
  NS_SCRIPTABLE NS_IMETHOD Equals(nsIHandlerApp *aHandlerApp, PRBool *_retval NS_OUTPARAM) = 0;

  /* void launchWithURI (in nsIURI aURI, [optional] in nsIInterfaceRequestor aWindowContext); */
  NS_SCRIPTABLE NS_IMETHOD LaunchWithURI(nsIURI *aURI, nsIInterfaceRequestor *aWindowContext) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIHandlerApp, NS_IHANDLERAPP_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIHANDLERAPP \
  NS_SCRIPTABLE NS_IMETHOD GetName(nsAString & aName); \
  NS_SCRIPTABLE NS_IMETHOD SetName(const nsAString & aName); \
  NS_SCRIPTABLE NS_IMETHOD GetDetailedDescription(nsAString & aDetailedDescription); \
  NS_SCRIPTABLE NS_IMETHOD SetDetailedDescription(const nsAString & aDetailedDescription); \
  NS_SCRIPTABLE NS_IMETHOD Equals(nsIHandlerApp *aHandlerApp, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD LaunchWithURI(nsIURI *aURI, nsIInterfaceRequestor *aWindowContext); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIHANDLERAPP(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetName(nsAString & aName) { return _to GetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD SetName(const nsAString & aName) { return _to SetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD GetDetailedDescription(nsAString & aDetailedDescription) { return _to GetDetailedDescription(aDetailedDescription); } \
  NS_SCRIPTABLE NS_IMETHOD SetDetailedDescription(const nsAString & aDetailedDescription) { return _to SetDetailedDescription(aDetailedDescription); } \
  NS_SCRIPTABLE NS_IMETHOD Equals(nsIHandlerApp *aHandlerApp, PRBool *_retval NS_OUTPARAM) { return _to Equals(aHandlerApp, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD LaunchWithURI(nsIURI *aURI, nsIInterfaceRequestor *aWindowContext) { return _to LaunchWithURI(aURI, aWindowContext); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIHANDLERAPP(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetName(nsAString & aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD SetName(const nsAString & aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD GetDetailedDescription(nsAString & aDetailedDescription) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDetailedDescription(aDetailedDescription); } \
  NS_SCRIPTABLE NS_IMETHOD SetDetailedDescription(const nsAString & aDetailedDescription) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDetailedDescription(aDetailedDescription); } \
  NS_SCRIPTABLE NS_IMETHOD Equals(nsIHandlerApp *aHandlerApp, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Equals(aHandlerApp, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD LaunchWithURI(nsIURI *aURI, nsIInterfaceRequestor *aWindowContext) { return !_to ? NS_ERROR_NULL_POINTER : _to->LaunchWithURI(aURI, aWindowContext); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsHandlerApp : public nsIHandlerApp
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIHANDLERAPP

  nsHandlerApp();

private:
  ~nsHandlerApp();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsHandlerApp, nsIHandlerApp)

nsHandlerApp::nsHandlerApp()
{
  /* member initializers and constructor code */
}

nsHandlerApp::~nsHandlerApp()
{
  /* destructor code */
}

/* attribute AString name; */
NS_IMETHODIMP nsHandlerApp::GetName(nsAString & aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsHandlerApp::SetName(const nsAString & aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute AString detailedDescription; */
NS_IMETHODIMP nsHandlerApp::GetDetailedDescription(nsAString & aDetailedDescription)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsHandlerApp::SetDetailedDescription(const nsAString & aDetailedDescription)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean equals (in nsIHandlerApp aHandlerApp); */
NS_IMETHODIMP nsHandlerApp::Equals(nsIHandlerApp *aHandlerApp, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void launchWithURI (in nsIURI aURI, [optional] in nsIInterfaceRequestor aWindowContext); */
NS_IMETHODIMP nsHandlerApp::LaunchWithURI(nsIURI *aURI, nsIInterfaceRequestor *aWindowContext)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsILocalHandlerApp */
#define NS_ILOCALHANDLERAPP_IID_STR "d36b6329-52ae-4f45-80f4-b2536ae5f8b2"

#define NS_ILOCALHANDLERAPP_IID \
  {0xd36b6329, 0x52ae, 0x4f45, \
    { 0x80, 0xf4, 0xb2, 0x53, 0x6a, 0xe5, 0xf8, 0xb2 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsILocalHandlerApp : public nsIHandlerApp {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ILOCALHANDLERAPP_IID)

  /* attribute nsIFile executable; */
  NS_SCRIPTABLE NS_IMETHOD GetExecutable(nsIFile * *aExecutable) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetExecutable(nsIFile *aExecutable) = 0;

  /* readonly attribute unsigned long parameterCount; */
  NS_SCRIPTABLE NS_IMETHOD GetParameterCount(PRUint32 *aParameterCount) = 0;

  /* void clearParameters (); */
  NS_SCRIPTABLE NS_IMETHOD ClearParameters(void) = 0;

  /* void appendParameter (in AString param); */
  NS_SCRIPTABLE NS_IMETHOD AppendParameter(const nsAString & param) = 0;

  /* AString getParameter (in unsigned long parameterIndex); */
  NS_SCRIPTABLE NS_IMETHOD GetParameter(PRUint32 parameterIndex, nsAString & _retval NS_OUTPARAM) = 0;

  /* boolean parameterExists (in AString param); */
  NS_SCRIPTABLE NS_IMETHOD ParameterExists(const nsAString & param, PRBool *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsILocalHandlerApp, NS_ILOCALHANDLERAPP_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSILOCALHANDLERAPP \
  NS_SCRIPTABLE NS_IMETHOD GetExecutable(nsIFile * *aExecutable); \
  NS_SCRIPTABLE NS_IMETHOD SetExecutable(nsIFile *aExecutable); \
  NS_SCRIPTABLE NS_IMETHOD GetParameterCount(PRUint32 *aParameterCount); \
  NS_SCRIPTABLE NS_IMETHOD ClearParameters(void); \
  NS_SCRIPTABLE NS_IMETHOD AppendParameter(const nsAString & param); \
  NS_SCRIPTABLE NS_IMETHOD GetParameter(PRUint32 parameterIndex, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ParameterExists(const nsAString & param, PRBool *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSILOCALHANDLERAPP(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetExecutable(nsIFile * *aExecutable) { return _to GetExecutable(aExecutable); } \
  NS_SCRIPTABLE NS_IMETHOD SetExecutable(nsIFile *aExecutable) { return _to SetExecutable(aExecutable); } \
  NS_SCRIPTABLE NS_IMETHOD GetParameterCount(PRUint32 *aParameterCount) { return _to GetParameterCount(aParameterCount); } \
  NS_SCRIPTABLE NS_IMETHOD ClearParameters(void) { return _to ClearParameters(); } \
  NS_SCRIPTABLE NS_IMETHOD AppendParameter(const nsAString & param) { return _to AppendParameter(param); } \
  NS_SCRIPTABLE NS_IMETHOD GetParameter(PRUint32 parameterIndex, nsAString & _retval NS_OUTPARAM) { return _to GetParameter(parameterIndex, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ParameterExists(const nsAString & param, PRBool *_retval NS_OUTPARAM) { return _to ParameterExists(param, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSILOCALHANDLERAPP(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetExecutable(nsIFile * *aExecutable) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetExecutable(aExecutable); } \
  NS_SCRIPTABLE NS_IMETHOD SetExecutable(nsIFile *aExecutable) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetExecutable(aExecutable); } \
  NS_SCRIPTABLE NS_IMETHOD GetParameterCount(PRUint32 *aParameterCount) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetParameterCount(aParameterCount); } \
  NS_SCRIPTABLE NS_IMETHOD ClearParameters(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->ClearParameters(); } \
  NS_SCRIPTABLE NS_IMETHOD AppendParameter(const nsAString & param) { return !_to ? NS_ERROR_NULL_POINTER : _to->AppendParameter(param); } \
  NS_SCRIPTABLE NS_IMETHOD GetParameter(PRUint32 parameterIndex, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetParameter(parameterIndex, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ParameterExists(const nsAString & param, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ParameterExists(param, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsLocalHandlerApp : public nsILocalHandlerApp
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSILOCALHANDLERAPP

  nsLocalHandlerApp();

private:
  ~nsLocalHandlerApp();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsLocalHandlerApp, nsILocalHandlerApp)

nsLocalHandlerApp::nsLocalHandlerApp()
{
  /* member initializers and constructor code */
}

nsLocalHandlerApp::~nsLocalHandlerApp()
{
  /* destructor code */
}

/* attribute nsIFile executable; */
NS_IMETHODIMP nsLocalHandlerApp::GetExecutable(nsIFile * *aExecutable)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsLocalHandlerApp::SetExecutable(nsIFile *aExecutable)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long parameterCount; */
NS_IMETHODIMP nsLocalHandlerApp::GetParameterCount(PRUint32 *aParameterCount)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void clearParameters (); */
NS_IMETHODIMP nsLocalHandlerApp::ClearParameters()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void appendParameter (in AString param); */
NS_IMETHODIMP nsLocalHandlerApp::AppendParameter(const nsAString & param)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString getParameter (in unsigned long parameterIndex); */
NS_IMETHODIMP nsLocalHandlerApp::GetParameter(PRUint32 parameterIndex, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean parameterExists (in AString param); */
NS_IMETHODIMP nsLocalHandlerApp::ParameterExists(const nsAString & param, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIWebHandlerApp */
#define NS_IWEBHANDLERAPP_IID_STR "7521a093-c498-45ce-b462-df7ba0d882f6"

#define NS_IWEBHANDLERAPP_IID \
  {0x7521a093, 0xc498, 0x45ce, \
    { 0xb4, 0x62, 0xdf, 0x7b, 0xa0, 0xd8, 0x82, 0xf6 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIWebHandlerApp : public nsIHandlerApp {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IWEBHANDLERAPP_IID)

  /* attribute AUTF8String uriTemplate; */
  NS_SCRIPTABLE NS_IMETHOD GetUriTemplate(nsACString & aUriTemplate) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetUriTemplate(const nsACString & aUriTemplate) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIWebHandlerApp, NS_IWEBHANDLERAPP_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIWEBHANDLERAPP \
  NS_SCRIPTABLE NS_IMETHOD GetUriTemplate(nsACString & aUriTemplate); \
  NS_SCRIPTABLE NS_IMETHOD SetUriTemplate(const nsACString & aUriTemplate); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIWEBHANDLERAPP(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetUriTemplate(nsACString & aUriTemplate) { return _to GetUriTemplate(aUriTemplate); } \
  NS_SCRIPTABLE NS_IMETHOD SetUriTemplate(const nsACString & aUriTemplate) { return _to SetUriTemplate(aUriTemplate); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIWEBHANDLERAPP(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetUriTemplate(nsACString & aUriTemplate) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUriTemplate(aUriTemplate); } \
  NS_SCRIPTABLE NS_IMETHOD SetUriTemplate(const nsACString & aUriTemplate) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetUriTemplate(aUriTemplate); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsWebHandlerApp : public nsIWebHandlerApp
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIWEBHANDLERAPP

  nsWebHandlerApp();

private:
  ~nsWebHandlerApp();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsWebHandlerApp, nsIWebHandlerApp)

nsWebHandlerApp::nsWebHandlerApp()
{
  /* member initializers and constructor code */
}

nsWebHandlerApp::~nsWebHandlerApp()
{
  /* destructor code */
}

/* attribute AUTF8String uriTemplate; */
NS_IMETHODIMP nsWebHandlerApp::GetUriTemplate(nsACString & aUriTemplate)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsWebHandlerApp::SetUriTemplate(const nsACString & aUriTemplate)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDBusHandlerApp */
#define NS_IDBUSHANDLERAPP_IID_STR "1ffc274b-4cbf-4bb5-a635-05ad2cbb6534"

#define NS_IDBUSHANDLERAPP_IID \
  {0x1ffc274b, 0x4cbf, 0x4bb5, \
    { 0xa6, 0x35, 0x05, 0xad, 0x2c, 0xbb, 0x65, 0x34 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDBusHandlerApp : public nsIHandlerApp {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDBUSHANDLERAPP_IID)

  /* attribute AUTF8String service; */
  NS_SCRIPTABLE NS_IMETHOD GetService(nsACString & aService) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetService(const nsACString & aService) = 0;

  /* attribute AUTF8String objectPath; */
  NS_SCRIPTABLE NS_IMETHOD GetObjectPath(nsACString & aObjectPath) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetObjectPath(const nsACString & aObjectPath) = 0;

  /* attribute AUTF8String dBusInterface; */
  NS_SCRIPTABLE NS_IMETHOD GetDBusInterface(nsACString & aDBusInterface) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetDBusInterface(const nsACString & aDBusInterface) = 0;

  /* attribute AUTF8String method; */
  NS_SCRIPTABLE NS_IMETHOD GetMethod(nsACString & aMethod) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMethod(const nsACString & aMethod) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDBusHandlerApp, NS_IDBUSHANDLERAPP_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDBUSHANDLERAPP \
  NS_SCRIPTABLE NS_IMETHOD GetService(nsACString & aService); \
  NS_SCRIPTABLE NS_IMETHOD SetService(const nsACString & aService); \
  NS_SCRIPTABLE NS_IMETHOD GetObjectPath(nsACString & aObjectPath); \
  NS_SCRIPTABLE NS_IMETHOD SetObjectPath(const nsACString & aObjectPath); \
  NS_SCRIPTABLE NS_IMETHOD GetDBusInterface(nsACString & aDBusInterface); \
  NS_SCRIPTABLE NS_IMETHOD SetDBusInterface(const nsACString & aDBusInterface); \
  NS_SCRIPTABLE NS_IMETHOD GetMethod(nsACString & aMethod); \
  NS_SCRIPTABLE NS_IMETHOD SetMethod(const nsACString & aMethod); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDBUSHANDLERAPP(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetService(nsACString & aService) { return _to GetService(aService); } \
  NS_SCRIPTABLE NS_IMETHOD SetService(const nsACString & aService) { return _to SetService(aService); } \
  NS_SCRIPTABLE NS_IMETHOD GetObjectPath(nsACString & aObjectPath) { return _to GetObjectPath(aObjectPath); } \
  NS_SCRIPTABLE NS_IMETHOD SetObjectPath(const nsACString & aObjectPath) { return _to SetObjectPath(aObjectPath); } \
  NS_SCRIPTABLE NS_IMETHOD GetDBusInterface(nsACString & aDBusInterface) { return _to GetDBusInterface(aDBusInterface); } \
  NS_SCRIPTABLE NS_IMETHOD SetDBusInterface(const nsACString & aDBusInterface) { return _to SetDBusInterface(aDBusInterface); } \
  NS_SCRIPTABLE NS_IMETHOD GetMethod(nsACString & aMethod) { return _to GetMethod(aMethod); } \
  NS_SCRIPTABLE NS_IMETHOD SetMethod(const nsACString & aMethod) { return _to SetMethod(aMethod); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDBUSHANDLERAPP(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetService(nsACString & aService) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetService(aService); } \
  NS_SCRIPTABLE NS_IMETHOD SetService(const nsACString & aService) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetService(aService); } \
  NS_SCRIPTABLE NS_IMETHOD GetObjectPath(nsACString & aObjectPath) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetObjectPath(aObjectPath); } \
  NS_SCRIPTABLE NS_IMETHOD SetObjectPath(const nsACString & aObjectPath) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetObjectPath(aObjectPath); } \
  NS_SCRIPTABLE NS_IMETHOD GetDBusInterface(nsACString & aDBusInterface) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDBusInterface(aDBusInterface); } \
  NS_SCRIPTABLE NS_IMETHOD SetDBusInterface(const nsACString & aDBusInterface) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDBusInterface(aDBusInterface); } \
  NS_SCRIPTABLE NS_IMETHOD GetMethod(nsACString & aMethod) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMethod(aMethod); } \
  NS_SCRIPTABLE NS_IMETHOD SetMethod(const nsACString & aMethod) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMethod(aMethod); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDBusHandlerApp : public nsIDBusHandlerApp
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDBUSHANDLERAPP

  nsDBusHandlerApp();

private:
  ~nsDBusHandlerApp();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDBusHandlerApp, nsIDBusHandlerApp)

nsDBusHandlerApp::nsDBusHandlerApp()
{
  /* member initializers and constructor code */
}

nsDBusHandlerApp::~nsDBusHandlerApp()
{
  /* destructor code */
}

/* attribute AUTF8String service; */
NS_IMETHODIMP nsDBusHandlerApp::GetService(nsACString & aService)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDBusHandlerApp::SetService(const nsACString & aService)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute AUTF8String objectPath; */
NS_IMETHODIMP nsDBusHandlerApp::GetObjectPath(nsACString & aObjectPath)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDBusHandlerApp::SetObjectPath(const nsACString & aObjectPath)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute AUTF8String dBusInterface; */
NS_IMETHODIMP nsDBusHandlerApp::GetDBusInterface(nsACString & aDBusInterface)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDBusHandlerApp::SetDBusInterface(const nsACString & aDBusInterface)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute AUTF8String method; */
NS_IMETHODIMP nsDBusHandlerApp::GetMethod(nsACString & aMethod)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDBusHandlerApp::SetMethod(const nsACString & aMethod)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIMIMEInfo_h__ */
