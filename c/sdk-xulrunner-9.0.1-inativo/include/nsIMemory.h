/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/xpcom/base/nsIMemory.idl
 */

#ifndef __gen_nsIMemory_h__
#define __gen_nsIMemory_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIMemory */
#define NS_IMEMORY_IID_STR "59e7e77a-38e4-11d4-8cf5-0060b0fc14a3"

#define NS_IMEMORY_IID \
  {0x59e7e77a, 0x38e4, 0x11d4, \
    { 0x8c, 0xf5, 0x00, 0x60, 0xb0, 0xfc, 0x14, 0xa3 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIMemory : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IMEMORY_IID)

  /* [noscript,notxpcom] voidPtr alloc (in size_t size); */
  NS_IMETHOD_(void *) Alloc(size_t size) = 0;

  /* [noscript,notxpcom] voidPtr realloc (in voidPtr ptr, in size_t newSize); */
  NS_IMETHOD_(void *) Realloc(void *ptr, size_t newSize) = 0;

  /* [noscript,notxpcom] void free (in voidPtr ptr); */
  NS_IMETHOD_(void) Free(void *ptr) = 0;

  /* void heapMinimize (in boolean immediate); */
  NS_SCRIPTABLE NS_IMETHOD HeapMinimize(PRBool immediate) = 0;

  /* boolean isLowMemory (); */
  NS_SCRIPTABLE NS_IMETHOD IsLowMemory(PRBool *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIMemory, NS_IMEMORY_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIMEMORY \
  NS_IMETHOD_(void *) Alloc(size_t size); \
  NS_IMETHOD_(void *) Realloc(void *ptr, size_t newSize); \
  NS_IMETHOD_(void) Free(void *ptr); \
  NS_SCRIPTABLE NS_IMETHOD HeapMinimize(PRBool immediate); \
  NS_SCRIPTABLE NS_IMETHOD IsLowMemory(PRBool *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIMEMORY(_to) \
  NS_IMETHOD_(void *) Alloc(size_t size) { return _to Alloc(size); } \
  NS_IMETHOD_(void *) Realloc(void *ptr, size_t newSize) { return _to Realloc(ptr, newSize); } \
  NS_IMETHOD_(void) Free(void *ptr) { return _to Free(ptr); } \
  NS_SCRIPTABLE NS_IMETHOD HeapMinimize(PRBool immediate) { return _to HeapMinimize(immediate); } \
  NS_SCRIPTABLE NS_IMETHOD IsLowMemory(PRBool *_retval NS_OUTPARAM) { return _to IsLowMemory(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIMEMORY(_to) \
  NS_IMETHOD_(void *) Alloc(size_t size) { return !_to ? NS_ERROR_NULL_POINTER : _to->Alloc(size); } \
  NS_IMETHOD_(void *) Realloc(void *ptr, size_t newSize) { return !_to ? NS_ERROR_NULL_POINTER : _to->Realloc(ptr, newSize); } \
  NS_IMETHOD_(void) Free(void *ptr) { return !_to ? NS_ERROR_NULL_POINTER : _to->Free(ptr); } \
  NS_SCRIPTABLE NS_IMETHOD HeapMinimize(PRBool immediate) { return !_to ? NS_ERROR_NULL_POINTER : _to->HeapMinimize(immediate); } \
  NS_SCRIPTABLE NS_IMETHOD IsLowMemory(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsLowMemory(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsMemory : public nsIMemory
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIMEMORY

  nsMemory();

private:
  ~nsMemory();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsMemory, nsIMemory)

nsMemory::nsMemory()
{
  /* member initializers and constructor code */
}

nsMemory::~nsMemory()
{
  /* destructor code */
}

/* [noscript,notxpcom] voidPtr alloc (in size_t size); */
NS_IMETHODIMP_(void *) nsMemory::Alloc(size_t size)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript,notxpcom] voidPtr realloc (in voidPtr ptr, in size_t newSize); */
NS_IMETHODIMP_(void *) nsMemory::Realloc(void *ptr, size_t newSize)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript,notxpcom] void free (in voidPtr ptr); */
NS_IMETHODIMP_(void) nsMemory::Free(void *ptr)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void heapMinimize (in boolean immediate); */
NS_IMETHODIMP nsMemory::HeapMinimize(PRBool immediate)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isLowMemory (); */
NS_IMETHODIMP nsMemory::IsLowMemory(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIMemory_h__ */
