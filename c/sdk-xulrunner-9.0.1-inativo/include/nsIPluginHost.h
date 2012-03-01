/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/plugins/base/nsIPluginHost.idl
 */

#ifndef __gen_nsIPluginHost_h__
#define __gen_nsIPluginHost_h__


#ifndef __gen_nspluginroot_h__
#include "nspluginroot.h"
#endif

#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIPluginTag_h__
#include "nsIPluginTag.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
#define MOZ_PLUGIN_HOST_CONTRACTID \
  "@mozilla.org/plugin/host;1"

/* starting interface:    nsIPluginHost */
#define NS_IPLUGINHOST_IID_STR "28f1f9e1-cd23-4fe2-bcc8-bbb0b2d49a4a"

#define NS_IPLUGINHOST_IID \
  {0x28f1f9e1, 0xcd23, 0x4fe2, \
    { 0xbc, 0xc8, 0xbb, 0xb0, 0xb2, 0xd4, 0x9a, 0x4a }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIPluginHost : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IPLUGINHOST_IID)

  /* void reloadPlugins (in boolean reloadPages); */
  NS_SCRIPTABLE NS_IMETHOD ReloadPlugins(PRBool reloadPages) = 0;

  /* void getPluginTags ([optional] out unsigned long aPluginCount, [array, size_is (aPluginCount), retval] out nsIPluginTag aResults); */
  NS_SCRIPTABLE NS_IMETHOD GetPluginTags(PRUint32 *aPluginCount NS_OUTPARAM, nsIPluginTag * **aResults NS_OUTPARAM) = 0;

  enum { FLAG_CLEAR_ALL = 0U };

  enum { FLAG_CLEAR_CACHE = 1U };

  /* void clearSiteData (in nsIPluginTag plugin, in AUTF8String domain, in PRUint64 flags, in PRInt64 maxAge); */
  NS_SCRIPTABLE NS_IMETHOD ClearSiteData(nsIPluginTag *plugin, const nsACString & domain, PRUint64 flags, PRInt64 maxAge) = 0;

  /* boolean siteHasData (in nsIPluginTag plugin, in AUTF8String domain); */
  NS_SCRIPTABLE NS_IMETHOD SiteHasData(nsIPluginTag *plugin, const nsACString & domain, PRBool *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIPluginHost, NS_IPLUGINHOST_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIPLUGINHOST \
  NS_SCRIPTABLE NS_IMETHOD ReloadPlugins(PRBool reloadPages); \
  NS_SCRIPTABLE NS_IMETHOD GetPluginTags(PRUint32 *aPluginCount NS_OUTPARAM, nsIPluginTag * **aResults NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ClearSiteData(nsIPluginTag *plugin, const nsACString & domain, PRUint64 flags, PRInt64 maxAge); \
  NS_SCRIPTABLE NS_IMETHOD SiteHasData(nsIPluginTag *plugin, const nsACString & domain, PRBool *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIPLUGINHOST(_to) \
  NS_SCRIPTABLE NS_IMETHOD ReloadPlugins(PRBool reloadPages) { return _to ReloadPlugins(reloadPages); } \
  NS_SCRIPTABLE NS_IMETHOD GetPluginTags(PRUint32 *aPluginCount NS_OUTPARAM, nsIPluginTag * **aResults NS_OUTPARAM) { return _to GetPluginTags(aPluginCount, aResults); } \
  NS_SCRIPTABLE NS_IMETHOD ClearSiteData(nsIPluginTag *plugin, const nsACString & domain, PRUint64 flags, PRInt64 maxAge) { return _to ClearSiteData(plugin, domain, flags, maxAge); } \
  NS_SCRIPTABLE NS_IMETHOD SiteHasData(nsIPluginTag *plugin, const nsACString & domain, PRBool *_retval NS_OUTPARAM) { return _to SiteHasData(plugin, domain, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIPLUGINHOST(_to) \
  NS_SCRIPTABLE NS_IMETHOD ReloadPlugins(PRBool reloadPages) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReloadPlugins(reloadPages); } \
  NS_SCRIPTABLE NS_IMETHOD GetPluginTags(PRUint32 *aPluginCount NS_OUTPARAM, nsIPluginTag * **aResults NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPluginTags(aPluginCount, aResults); } \
  NS_SCRIPTABLE NS_IMETHOD ClearSiteData(nsIPluginTag *plugin, const nsACString & domain, PRUint64 flags, PRInt64 maxAge) { return !_to ? NS_ERROR_NULL_POINTER : _to->ClearSiteData(plugin, domain, flags, maxAge); } \
  NS_SCRIPTABLE NS_IMETHOD SiteHasData(nsIPluginTag *plugin, const nsACString & domain, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SiteHasData(plugin, domain, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsPluginHost : public nsIPluginHost
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIPLUGINHOST

  nsPluginHost();

private:
  ~nsPluginHost();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsPluginHost, nsIPluginHost)

nsPluginHost::nsPluginHost()
{
  /* member initializers and constructor code */
}

nsPluginHost::~nsPluginHost()
{
  /* destructor code */
}

/* void reloadPlugins (in boolean reloadPages); */
NS_IMETHODIMP nsPluginHost::ReloadPlugins(PRBool reloadPages)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getPluginTags ([optional] out unsigned long aPluginCount, [array, size_is (aPluginCount), retval] out nsIPluginTag aResults); */
NS_IMETHODIMP nsPluginHost::GetPluginTags(PRUint32 *aPluginCount NS_OUTPARAM, nsIPluginTag * **aResults NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void clearSiteData (in nsIPluginTag plugin, in AUTF8String domain, in PRUint64 flags, in PRInt64 maxAge); */
NS_IMETHODIMP nsPluginHost::ClearSiteData(nsIPluginTag *plugin, const nsACString & domain, PRUint64 flags, PRInt64 maxAge)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean siteHasData (in nsIPluginTag plugin, in AUTF8String domain); */
NS_IMETHODIMP nsPluginHost::SiteHasData(nsIPluginTag *plugin, const nsACString & domain, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIPluginHost_h__ */
