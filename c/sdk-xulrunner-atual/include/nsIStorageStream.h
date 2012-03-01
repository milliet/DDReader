/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/xpcom/io/nsIStorageStream.idl
 */

#ifndef __gen_nsIStorageStream_h__
#define __gen_nsIStorageStream_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsrootidl_h__
#include "nsrootidl.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIMemory; /* forward declaration */

class nsIInputStream; /* forward declaration */

class nsIOutputStream; /* forward declaration */


/* starting interface:    nsIStorageStream */
#define NS_ISTORAGESTREAM_IID_STR "604ad9d0-753e-11d3-90ca-34278643278f"

#define NS_ISTORAGESTREAM_IID \
  {0x604ad9d0, 0x753e, 0x11d3, \
    { 0x90, 0xca, 0x34, 0x27, 0x86, 0x43, 0x27, 0x8f }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIStorageStream : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISTORAGESTREAM_IID)

  /* void init (in PRUint32 segmentSize, in PRUint32 maxSize, in nsIMemory segmentAllocator); */
  NS_SCRIPTABLE NS_IMETHOD Init(PRUint32 segmentSize, PRUint32 maxSize, nsIMemory *segmentAllocator) = 0;

  /* nsIOutputStream getOutputStream (in PRInt32 startPosition); */
  NS_SCRIPTABLE NS_IMETHOD GetOutputStream(PRInt32 startPosition, nsIOutputStream * *_retval NS_OUTPARAM) = 0;

  /* nsIInputStream newInputStream (in PRInt32 startPosition); */
  NS_SCRIPTABLE NS_IMETHOD NewInputStream(PRInt32 startPosition, nsIInputStream * *_retval NS_OUTPARAM) = 0;

  /* attribute PRUint32 length; */
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint32 *aLength) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetLength(PRUint32 aLength) = 0;

  /* readonly attribute boolean writeInProgress; */
  NS_SCRIPTABLE NS_IMETHOD GetWriteInProgress(PRBool *aWriteInProgress) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIStorageStream, NS_ISTORAGESTREAM_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISTORAGESTREAM \
  NS_SCRIPTABLE NS_IMETHOD Init(PRUint32 segmentSize, PRUint32 maxSize, nsIMemory *segmentAllocator); \
  NS_SCRIPTABLE NS_IMETHOD GetOutputStream(PRInt32 startPosition, nsIOutputStream * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD NewInputStream(PRInt32 startPosition, nsIInputStream * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint32 *aLength); \
  NS_SCRIPTABLE NS_IMETHOD SetLength(PRUint32 aLength); \
  NS_SCRIPTABLE NS_IMETHOD GetWriteInProgress(PRBool *aWriteInProgress); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISTORAGESTREAM(_to) \
  NS_SCRIPTABLE NS_IMETHOD Init(PRUint32 segmentSize, PRUint32 maxSize, nsIMemory *segmentAllocator) { return _to Init(segmentSize, maxSize, segmentAllocator); } \
  NS_SCRIPTABLE NS_IMETHOD GetOutputStream(PRInt32 startPosition, nsIOutputStream * *_retval NS_OUTPARAM) { return _to GetOutputStream(startPosition, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD NewInputStream(PRInt32 startPosition, nsIInputStream * *_retval NS_OUTPARAM) { return _to NewInputStream(startPosition, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint32 *aLength) { return _to GetLength(aLength); } \
  NS_SCRIPTABLE NS_IMETHOD SetLength(PRUint32 aLength) { return _to SetLength(aLength); } \
  NS_SCRIPTABLE NS_IMETHOD GetWriteInProgress(PRBool *aWriteInProgress) { return _to GetWriteInProgress(aWriteInProgress); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISTORAGESTREAM(_to) \
  NS_SCRIPTABLE NS_IMETHOD Init(PRUint32 segmentSize, PRUint32 maxSize, nsIMemory *segmentAllocator) { return !_to ? NS_ERROR_NULL_POINTER : _to->Init(segmentSize, maxSize, segmentAllocator); } \
  NS_SCRIPTABLE NS_IMETHOD GetOutputStream(PRInt32 startPosition, nsIOutputStream * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOutputStream(startPosition, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD NewInputStream(PRInt32 startPosition, nsIInputStream * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->NewInputStream(startPosition, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetLength(PRUint32 *aLength) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLength(aLength); } \
  NS_SCRIPTABLE NS_IMETHOD SetLength(PRUint32 aLength) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLength(aLength); } \
  NS_SCRIPTABLE NS_IMETHOD GetWriteInProgress(PRBool *aWriteInProgress) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWriteInProgress(aWriteInProgress); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsStorageStream : public nsIStorageStream
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISTORAGESTREAM

  nsStorageStream();

private:
  ~nsStorageStream();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsStorageStream, nsIStorageStream)

nsStorageStream::nsStorageStream()
{
  /* member initializers and constructor code */
}

nsStorageStream::~nsStorageStream()
{
  /* destructor code */
}

/* void init (in PRUint32 segmentSize, in PRUint32 maxSize, in nsIMemory segmentAllocator); */
NS_IMETHODIMP nsStorageStream::Init(PRUint32 segmentSize, PRUint32 maxSize, nsIMemory *segmentAllocator)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIOutputStream getOutputStream (in PRInt32 startPosition); */
NS_IMETHODIMP nsStorageStream::GetOutputStream(PRInt32 startPosition, nsIOutputStream * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIInputStream newInputStream (in PRInt32 startPosition); */
NS_IMETHODIMP nsStorageStream::NewInputStream(PRInt32 startPosition, nsIInputStream * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute PRUint32 length; */
NS_IMETHODIMP nsStorageStream::GetLength(PRUint32 *aLength)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsStorageStream::SetLength(PRUint32 aLength)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean writeInProgress; */
NS_IMETHODIMP nsStorageStream::GetWriteInProgress(PRBool *aWriteInProgress)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

// Factory method
nsresult
NS_NewStorageStream(PRUint32 segmentSize, PRUint32 maxSize, nsIStorageStream **result);

#endif /* __gen_nsIStorageStream_h__ */
