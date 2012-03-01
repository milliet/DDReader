/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/netwerk/cache/nsICache.idl
 */

#ifndef __gen_nsICache_h__
#define __gen_nsICache_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
typedef PRInt32  nsCacheStoragePolicy;

typedef PRInt32  nsCacheAccessMode;


/* starting interface:    nsICache */
#define NS_ICACHE_IID_STR "ec1c0063-197d-44bb-84ba-7525d50fc937"

#define NS_ICACHE_IID \
  {0xec1c0063, 0x197d, 0x44bb, \
    { 0x84, 0xba, 0x75, 0x25, 0xd5, 0x0f, 0xc9, 0x37 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsICache {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ICACHE_IID)

  enum { ACCESS_NONE = 0 };

  enum { ACCESS_READ = 1 };

  enum { ACCESS_WRITE = 2 };

  enum { ACCESS_READ_WRITE = 3 };

  enum { STORE_ANYWHERE = 0 };

  enum { STORE_IN_MEMORY = 1 };

  enum { STORE_ON_DISK = 2 };

  enum { STORE_ON_DISK_AS_FILE = 3 };

  enum { STORE_OFFLINE = 4 };

  enum { NOT_STREAM_BASED = 0 };

  enum { STREAM_BASED = 1 };

  enum { NON_BLOCKING = 0 };

  enum { BLOCKING = 1 };

  enum { NO_EXPIRATION_TIME = 4294967295U };

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsICache, NS_ICACHE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSICACHE \

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSICACHE(_to) \

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSICACHE(_to) \

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsCache : public nsICache
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSICACHE

  nsCache();

private:
  ~nsCache();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsCache, nsICache)

nsCache::nsCache()
{
  /* member initializers and constructor code */
}

nsCache::~nsCache()
{
  /* destructor code */
}

/* End of implementation class template. */
#endif

#include "nsNetError.h"

#endif /* __gen_nsICache_h__ */
