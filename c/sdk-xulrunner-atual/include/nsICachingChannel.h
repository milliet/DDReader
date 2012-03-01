/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/netwerk/base/public/nsICachingChannel.idl
 */

#ifndef __gen_nsICachingChannel_h__
#define __gen_nsICachingChannel_h__


#ifndef __gen_nsICacheInfoChannel_h__
#include "nsICacheInfoChannel.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIFile; /* forward declaration */


/* starting interface:    nsICachingChannel */
#define NS_ICACHINGCHANNEL_IID_STR "830d4bcb-3e46-4011-9bda-51a5d1af891f"

#define NS_ICACHINGCHANNEL_IID \
  {0x830d4bcb, 0x3e46, 0x4011, \
    { 0x9b, 0xda, 0x51, 0xa5, 0xd1, 0xaf, 0x89, 0x1f }}

class NS_NO_VTABLE NS_SCRIPTABLE nsICachingChannel : public nsICacheInfoChannel {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ICACHINGCHANNEL_IID)

  /* attribute nsISupports cacheToken; */
  NS_SCRIPTABLE NS_IMETHOD GetCacheToken(nsISupports * *aCacheToken) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetCacheToken(nsISupports *aCacheToken) = 0;

  /* attribute nsISupports offlineCacheToken; */
  NS_SCRIPTABLE NS_IMETHOD GetOfflineCacheToken(nsISupports * *aOfflineCacheToken) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOfflineCacheToken(nsISupports *aOfflineCacheToken) = 0;

  /* attribute nsISupports cacheKey; */
  NS_SCRIPTABLE NS_IMETHOD GetCacheKey(nsISupports * *aCacheKey) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetCacheKey(nsISupports *aCacheKey) = 0;

  /* attribute boolean cacheAsFile; */
  NS_SCRIPTABLE NS_IMETHOD GetCacheAsFile(PRBool *aCacheAsFile) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetCacheAsFile(PRBool aCacheAsFile) = 0;

  /* attribute boolean cacheForOfflineUse; */
  NS_SCRIPTABLE NS_IMETHOD GetCacheForOfflineUse(PRBool *aCacheForOfflineUse) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetCacheForOfflineUse(PRBool aCacheForOfflineUse) = 0;

  /* attribute ACString offlineCacheClientID; */
  NS_SCRIPTABLE NS_IMETHOD GetOfflineCacheClientID(nsACString & aOfflineCacheClientID) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOfflineCacheClientID(const nsACString & aOfflineCacheClientID) = 0;

  /* readonly attribute nsIFile cacheFile; */
  NS_SCRIPTABLE NS_IMETHOD GetCacheFile(nsIFile * *aCacheFile) = 0;

  enum { LOAD_NO_NETWORK_IO = 67108864U };

  enum { LOAD_CHECK_OFFLINE_CACHE = 134217728U };

  enum { LOAD_BYPASS_LOCAL_CACHE = 268435456U };

  enum { LOAD_BYPASS_LOCAL_CACHE_IF_BUSY = 536870912U };

  enum { LOAD_ONLY_FROM_CACHE = 1073741824U };

  enum { LOAD_ONLY_IF_MODIFIED = 2147483648U };

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsICachingChannel, NS_ICACHINGCHANNEL_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSICACHINGCHANNEL \
  NS_SCRIPTABLE NS_IMETHOD GetCacheToken(nsISupports * *aCacheToken); \
  NS_SCRIPTABLE NS_IMETHOD SetCacheToken(nsISupports *aCacheToken); \
  NS_SCRIPTABLE NS_IMETHOD GetOfflineCacheToken(nsISupports * *aOfflineCacheToken); \
  NS_SCRIPTABLE NS_IMETHOD SetOfflineCacheToken(nsISupports *aOfflineCacheToken); \
  NS_SCRIPTABLE NS_IMETHOD GetCacheKey(nsISupports * *aCacheKey); \
  NS_SCRIPTABLE NS_IMETHOD SetCacheKey(nsISupports *aCacheKey); \
  NS_SCRIPTABLE NS_IMETHOD GetCacheAsFile(PRBool *aCacheAsFile); \
  NS_SCRIPTABLE NS_IMETHOD SetCacheAsFile(PRBool aCacheAsFile); \
  NS_SCRIPTABLE NS_IMETHOD GetCacheForOfflineUse(PRBool *aCacheForOfflineUse); \
  NS_SCRIPTABLE NS_IMETHOD SetCacheForOfflineUse(PRBool aCacheForOfflineUse); \
  NS_SCRIPTABLE NS_IMETHOD GetOfflineCacheClientID(nsACString & aOfflineCacheClientID); \
  NS_SCRIPTABLE NS_IMETHOD SetOfflineCacheClientID(const nsACString & aOfflineCacheClientID); \
  NS_SCRIPTABLE NS_IMETHOD GetCacheFile(nsIFile * *aCacheFile); \

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSICACHINGCHANNEL(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetCacheToken(nsISupports * *aCacheToken) { return _to GetCacheToken(aCacheToken); } \
  NS_SCRIPTABLE NS_IMETHOD SetCacheToken(nsISupports *aCacheToken) { return _to SetCacheToken(aCacheToken); } \
  NS_SCRIPTABLE NS_IMETHOD GetOfflineCacheToken(nsISupports * *aOfflineCacheToken) { return _to GetOfflineCacheToken(aOfflineCacheToken); } \
  NS_SCRIPTABLE NS_IMETHOD SetOfflineCacheToken(nsISupports *aOfflineCacheToken) { return _to SetOfflineCacheToken(aOfflineCacheToken); } \
  NS_SCRIPTABLE NS_IMETHOD GetCacheKey(nsISupports * *aCacheKey) { return _to GetCacheKey(aCacheKey); } \
  NS_SCRIPTABLE NS_IMETHOD SetCacheKey(nsISupports *aCacheKey) { return _to SetCacheKey(aCacheKey); } \
  NS_SCRIPTABLE NS_IMETHOD GetCacheAsFile(PRBool *aCacheAsFile) { return _to GetCacheAsFile(aCacheAsFile); } \
  NS_SCRIPTABLE NS_IMETHOD SetCacheAsFile(PRBool aCacheAsFile) { return _to SetCacheAsFile(aCacheAsFile); } \
  NS_SCRIPTABLE NS_IMETHOD GetCacheForOfflineUse(PRBool *aCacheForOfflineUse) { return _to GetCacheForOfflineUse(aCacheForOfflineUse); } \
  NS_SCRIPTABLE NS_IMETHOD SetCacheForOfflineUse(PRBool aCacheForOfflineUse) { return _to SetCacheForOfflineUse(aCacheForOfflineUse); } \
  NS_SCRIPTABLE NS_IMETHOD GetOfflineCacheClientID(nsACString & aOfflineCacheClientID) { return _to GetOfflineCacheClientID(aOfflineCacheClientID); } \
  NS_SCRIPTABLE NS_IMETHOD SetOfflineCacheClientID(const nsACString & aOfflineCacheClientID) { return _to SetOfflineCacheClientID(aOfflineCacheClientID); } \
  NS_SCRIPTABLE NS_IMETHOD GetCacheFile(nsIFile * *aCacheFile) { return _to GetCacheFile(aCacheFile); } \

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSICACHINGCHANNEL(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetCacheToken(nsISupports * *aCacheToken) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCacheToken(aCacheToken); } \
  NS_SCRIPTABLE NS_IMETHOD SetCacheToken(nsISupports *aCacheToken) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCacheToken(aCacheToken); } \
  NS_SCRIPTABLE NS_IMETHOD GetOfflineCacheToken(nsISupports * *aOfflineCacheToken) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOfflineCacheToken(aOfflineCacheToken); } \
  NS_SCRIPTABLE NS_IMETHOD SetOfflineCacheToken(nsISupports *aOfflineCacheToken) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOfflineCacheToken(aOfflineCacheToken); } \
  NS_SCRIPTABLE NS_IMETHOD GetCacheKey(nsISupports * *aCacheKey) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCacheKey(aCacheKey); } \
  NS_SCRIPTABLE NS_IMETHOD SetCacheKey(nsISupports *aCacheKey) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCacheKey(aCacheKey); } \
  NS_SCRIPTABLE NS_IMETHOD GetCacheAsFile(PRBool *aCacheAsFile) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCacheAsFile(aCacheAsFile); } \
  NS_SCRIPTABLE NS_IMETHOD SetCacheAsFile(PRBool aCacheAsFile) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCacheAsFile(aCacheAsFile); } \
  NS_SCRIPTABLE NS_IMETHOD GetCacheForOfflineUse(PRBool *aCacheForOfflineUse) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCacheForOfflineUse(aCacheForOfflineUse); } \
  NS_SCRIPTABLE NS_IMETHOD SetCacheForOfflineUse(PRBool aCacheForOfflineUse) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCacheForOfflineUse(aCacheForOfflineUse); } \
  NS_SCRIPTABLE NS_IMETHOD GetOfflineCacheClientID(nsACString & aOfflineCacheClientID) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOfflineCacheClientID(aOfflineCacheClientID); } \
  NS_SCRIPTABLE NS_IMETHOD SetOfflineCacheClientID(const nsACString & aOfflineCacheClientID) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOfflineCacheClientID(aOfflineCacheClientID); } \
  NS_SCRIPTABLE NS_IMETHOD GetCacheFile(nsIFile * *aCacheFile) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCacheFile(aCacheFile); } \

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsCachingChannel : public nsICachingChannel
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSICACHINGCHANNEL

  nsCachingChannel();

private:
  ~nsCachingChannel();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsCachingChannel, nsICachingChannel)

nsCachingChannel::nsCachingChannel()
{
  /* member initializers and constructor code */
}

nsCachingChannel::~nsCachingChannel()
{
  /* destructor code */
}

/* attribute nsISupports cacheToken; */
NS_IMETHODIMP nsCachingChannel::GetCacheToken(nsISupports * *aCacheToken)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsCachingChannel::SetCacheToken(nsISupports *aCacheToken)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsISupports offlineCacheToken; */
NS_IMETHODIMP nsCachingChannel::GetOfflineCacheToken(nsISupports * *aOfflineCacheToken)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsCachingChannel::SetOfflineCacheToken(nsISupports *aOfflineCacheToken)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsISupports cacheKey; */
NS_IMETHODIMP nsCachingChannel::GetCacheKey(nsISupports * *aCacheKey)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsCachingChannel::SetCacheKey(nsISupports *aCacheKey)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean cacheAsFile; */
NS_IMETHODIMP nsCachingChannel::GetCacheAsFile(PRBool *aCacheAsFile)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsCachingChannel::SetCacheAsFile(PRBool aCacheAsFile)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean cacheForOfflineUse; */
NS_IMETHODIMP nsCachingChannel::GetCacheForOfflineUse(PRBool *aCacheForOfflineUse)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsCachingChannel::SetCacheForOfflineUse(PRBool aCacheForOfflineUse)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute ACString offlineCacheClientID; */
NS_IMETHODIMP nsCachingChannel::GetOfflineCacheClientID(nsACString & aOfflineCacheClientID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsCachingChannel::SetOfflineCacheClientID(const nsACString & aOfflineCacheClientID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIFile cacheFile; */
NS_IMETHODIMP nsCachingChannel::GetCacheFile(nsIFile * *aCacheFile)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsICachingChannel_h__ */
