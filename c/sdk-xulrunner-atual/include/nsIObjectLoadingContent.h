/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/content/base/public/nsIObjectLoadingContent.idl
 */

#ifndef __gen_nsIObjectLoadingContent_h__
#define __gen_nsIObjectLoadingContent_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIFrame; /* forward declaration */

class nsIObjectFrame; /* forward declaration */

class nsIPluginTag; /* forward declaration */

class nsIDOMElement; /* forward declaration */

class nsIDOMClientRect; /* forward declaration */

#include "nsNPAPIPluginInstance.h"

/* starting interface:    nsIObjectLoadingContent */
#define NS_IOBJECTLOADINGCONTENT_IID_STR "107e8048-d00f-4711-bd21-97184ccae0b1"

#define NS_IOBJECTLOADINGCONTENT_IID \
  {0x107e8048, 0xd00f, 0x4711, \
    { 0xbd, 0x21, 0x97, 0x18, 0x4c, 0xca, 0xe0, 0xb1 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIObjectLoadingContent : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IOBJECTLOADINGCONTENT_IID)

  enum { TYPE_LOADING = 0U };

  enum { TYPE_IMAGE = 1U };

  enum { TYPE_PLUGIN = 2U };

  enum { TYPE_DOCUMENT = 3U };

  enum { TYPE_NULL = 4U };

  /* readonly attribute ACString actualType; */
  NS_SCRIPTABLE NS_IMETHOD GetActualType(nsACString & aActualType) = 0;

  /* readonly attribute unsigned long displayedType; */
  NS_SCRIPTABLE NS_IMETHOD GetDisplayedType(PRUint32 *aDisplayedType) = 0;

  /* unsigned long getContentTypeForMIMEType (in AUTF8String aMimeType); */
  NS_SCRIPTABLE NS_IMETHOD GetContentTypeForMIMEType(const nsACString & aMimeType, PRUint32 *_retval NS_OUTPARAM) = 0;

  /* [noscript] readonly attribute nsNPAPIPluginInstancePtr pluginInstance; */
  NS_IMETHOD GetPluginInstance(nsNPAPIPluginInstance **aPluginInstance) = 0;

  /* [noscript] nsNPAPIPluginInstancePtr ensureInstantiation (); */
  NS_IMETHOD EnsureInstantiation(nsNPAPIPluginInstance **_retval NS_OUTPARAM) = 0;

  /* [noscript] void hasNewFrame (in nsIObjectFrame aFrame); */
  NS_IMETHOD HasNewFrame(nsIObjectFrame *aFrame) = 0;

  /* [noscript] nsIFrame getPrintFrame (); */
  NS_IMETHOD GetPrintFrame(nsIFrame * *_retval NS_OUTPARAM) = 0;

  /* [noscript] void pluginCrashed (in nsIPluginTag pluginTag, in AString pluginDumpID, in AString browserDumpID, in boolean submittedCrashReport); */
  NS_IMETHOD PluginCrashed(nsIPluginTag *pluginTag, const nsAString & pluginDumpID, const nsAString & browserDumpID, PRBool submittedCrashReport) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIObjectLoadingContent, NS_IOBJECTLOADINGCONTENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIOBJECTLOADINGCONTENT \
  NS_SCRIPTABLE NS_IMETHOD GetActualType(nsACString & aActualType); \
  NS_SCRIPTABLE NS_IMETHOD GetDisplayedType(PRUint32 *aDisplayedType); \
  NS_SCRIPTABLE NS_IMETHOD GetContentTypeForMIMEType(const nsACString & aMimeType, PRUint32 *_retval NS_OUTPARAM); \
  NS_IMETHOD GetPluginInstance(nsNPAPIPluginInstance **aPluginInstance); \
  NS_IMETHOD EnsureInstantiation(nsNPAPIPluginInstance **_retval NS_OUTPARAM); \
  NS_IMETHOD HasNewFrame(nsIObjectFrame *aFrame); \
  NS_IMETHOD GetPrintFrame(nsIFrame * *_retval NS_OUTPARAM); \
  NS_IMETHOD PluginCrashed(nsIPluginTag *pluginTag, const nsAString & pluginDumpID, const nsAString & browserDumpID, PRBool submittedCrashReport); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIOBJECTLOADINGCONTENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetActualType(nsACString & aActualType) { return _to GetActualType(aActualType); } \
  NS_SCRIPTABLE NS_IMETHOD GetDisplayedType(PRUint32 *aDisplayedType) { return _to GetDisplayedType(aDisplayedType); } \
  NS_SCRIPTABLE NS_IMETHOD GetContentTypeForMIMEType(const nsACString & aMimeType, PRUint32 *_retval NS_OUTPARAM) { return _to GetContentTypeForMIMEType(aMimeType, _retval); } \
  NS_IMETHOD GetPluginInstance(nsNPAPIPluginInstance **aPluginInstance) { return _to GetPluginInstance(aPluginInstance); } \
  NS_IMETHOD EnsureInstantiation(nsNPAPIPluginInstance **_retval NS_OUTPARAM) { return _to EnsureInstantiation(_retval); } \
  NS_IMETHOD HasNewFrame(nsIObjectFrame *aFrame) { return _to HasNewFrame(aFrame); } \
  NS_IMETHOD GetPrintFrame(nsIFrame * *_retval NS_OUTPARAM) { return _to GetPrintFrame(_retval); } \
  NS_IMETHOD PluginCrashed(nsIPluginTag *pluginTag, const nsAString & pluginDumpID, const nsAString & browserDumpID, PRBool submittedCrashReport) { return _to PluginCrashed(pluginTag, pluginDumpID, browserDumpID, submittedCrashReport); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIOBJECTLOADINGCONTENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetActualType(nsACString & aActualType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetActualType(aActualType); } \
  NS_SCRIPTABLE NS_IMETHOD GetDisplayedType(PRUint32 *aDisplayedType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDisplayedType(aDisplayedType); } \
  NS_SCRIPTABLE NS_IMETHOD GetContentTypeForMIMEType(const nsACString & aMimeType, PRUint32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContentTypeForMIMEType(aMimeType, _retval); } \
  NS_IMETHOD GetPluginInstance(nsNPAPIPluginInstance **aPluginInstance) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPluginInstance(aPluginInstance); } \
  NS_IMETHOD EnsureInstantiation(nsNPAPIPluginInstance **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->EnsureInstantiation(_retval); } \
  NS_IMETHOD HasNewFrame(nsIObjectFrame *aFrame) { return !_to ? NS_ERROR_NULL_POINTER : _to->HasNewFrame(aFrame); } \
  NS_IMETHOD GetPrintFrame(nsIFrame * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPrintFrame(_retval); } \
  NS_IMETHOD PluginCrashed(nsIPluginTag *pluginTag, const nsAString & pluginDumpID, const nsAString & browserDumpID, PRBool submittedCrashReport) { return !_to ? NS_ERROR_NULL_POINTER : _to->PluginCrashed(pluginTag, pluginDumpID, browserDumpID, submittedCrashReport); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsObjectLoadingContent : public nsIObjectLoadingContent
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIOBJECTLOADINGCONTENT

  nsObjectLoadingContent();

private:
  ~nsObjectLoadingContent();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsObjectLoadingContent, nsIObjectLoadingContent)

nsObjectLoadingContent::nsObjectLoadingContent()
{
  /* member initializers and constructor code */
}

nsObjectLoadingContent::~nsObjectLoadingContent()
{
  /* destructor code */
}

/* readonly attribute ACString actualType; */
NS_IMETHODIMP nsObjectLoadingContent::GetActualType(nsACString & aActualType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long displayedType; */
NS_IMETHODIMP nsObjectLoadingContent::GetDisplayedType(PRUint32 *aDisplayedType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* unsigned long getContentTypeForMIMEType (in AUTF8String aMimeType); */
NS_IMETHODIMP nsObjectLoadingContent::GetContentTypeForMIMEType(const nsACString & aMimeType, PRUint32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] readonly attribute nsNPAPIPluginInstancePtr pluginInstance; */
NS_IMETHODIMP nsObjectLoadingContent::GetPluginInstance(nsNPAPIPluginInstance **aPluginInstance)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] nsNPAPIPluginInstancePtr ensureInstantiation (); */
NS_IMETHODIMP nsObjectLoadingContent::EnsureInstantiation(nsNPAPIPluginInstance **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void hasNewFrame (in nsIObjectFrame aFrame); */
NS_IMETHODIMP nsObjectLoadingContent::HasNewFrame(nsIObjectFrame *aFrame)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] nsIFrame getPrintFrame (); */
NS_IMETHODIMP nsObjectLoadingContent::GetPrintFrame(nsIFrame * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void pluginCrashed (in nsIPluginTag pluginTag, in AString pluginDumpID, in AString browserDumpID, in boolean submittedCrashReport); */
NS_IMETHODIMP nsObjectLoadingContent::PluginCrashed(nsIPluginTag *pluginTag, const nsAString & pluginDumpID, const nsAString & browserDumpID, PRBool submittedCrashReport)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIObjectLoadingContent_h__ */
