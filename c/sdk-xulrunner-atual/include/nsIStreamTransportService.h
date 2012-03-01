/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/netwerk/base/public/nsIStreamTransportService.idl
 */

#ifndef __gen_nsIStreamTransportService_h__
#define __gen_nsIStreamTransportService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsITransport; /* forward declaration */

class nsIInputStream; /* forward declaration */

class nsIOutputStream; /* forward declaration */


/* starting interface:    nsIStreamTransportService */
#define NS_ISTREAMTRANSPORTSERVICE_IID_STR "8268d474-efbf-494f-a152-e8a8616f4e52"

#define NS_ISTREAMTRANSPORTSERVICE_IID \
  {0x8268d474, 0xefbf, 0x494f, \
    { 0xa1, 0x52, 0xe8, 0xa8, 0x61, 0x6f, 0x4e, 0x52 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIStreamTransportService : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISTREAMTRANSPORTSERVICE_IID)

  /* nsITransport createInputTransport (in nsIInputStream aStream, in long long aStartOffset, in long long aReadLimit, in boolean aCloseWhenDone); */
  NS_SCRIPTABLE NS_IMETHOD CreateInputTransport(nsIInputStream *aStream, PRInt64 aStartOffset, PRInt64 aReadLimit, PRBool aCloseWhenDone, nsITransport * *_retval NS_OUTPARAM) = 0;

  /* nsITransport createOutputTransport (in nsIOutputStream aStream, in long long aStartOffset, in long long aWriteLimit, in boolean aCloseWhenDone); */
  NS_SCRIPTABLE NS_IMETHOD CreateOutputTransport(nsIOutputStream *aStream, PRInt64 aStartOffset, PRInt64 aWriteLimit, PRBool aCloseWhenDone, nsITransport * *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIStreamTransportService, NS_ISTREAMTRANSPORTSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISTREAMTRANSPORTSERVICE \
  NS_SCRIPTABLE NS_IMETHOD CreateInputTransport(nsIInputStream *aStream, PRInt64 aStartOffset, PRInt64 aReadLimit, PRBool aCloseWhenDone, nsITransport * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CreateOutputTransport(nsIOutputStream *aStream, PRInt64 aStartOffset, PRInt64 aWriteLimit, PRBool aCloseWhenDone, nsITransport * *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISTREAMTRANSPORTSERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD CreateInputTransport(nsIInputStream *aStream, PRInt64 aStartOffset, PRInt64 aReadLimit, PRBool aCloseWhenDone, nsITransport * *_retval NS_OUTPARAM) { return _to CreateInputTransport(aStream, aStartOffset, aReadLimit, aCloseWhenDone, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CreateOutputTransport(nsIOutputStream *aStream, PRInt64 aStartOffset, PRInt64 aWriteLimit, PRBool aCloseWhenDone, nsITransport * *_retval NS_OUTPARAM) { return _to CreateOutputTransport(aStream, aStartOffset, aWriteLimit, aCloseWhenDone, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISTREAMTRANSPORTSERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD CreateInputTransport(nsIInputStream *aStream, PRInt64 aStartOffset, PRInt64 aReadLimit, PRBool aCloseWhenDone, nsITransport * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateInputTransport(aStream, aStartOffset, aReadLimit, aCloseWhenDone, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CreateOutputTransport(nsIOutputStream *aStream, PRInt64 aStartOffset, PRInt64 aWriteLimit, PRBool aCloseWhenDone, nsITransport * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateOutputTransport(aStream, aStartOffset, aWriteLimit, aCloseWhenDone, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsStreamTransportService : public nsIStreamTransportService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISTREAMTRANSPORTSERVICE

  nsStreamTransportService();

private:
  ~nsStreamTransportService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsStreamTransportService, nsIStreamTransportService)

nsStreamTransportService::nsStreamTransportService()
{
  /* member initializers and constructor code */
}

nsStreamTransportService::~nsStreamTransportService()
{
  /* destructor code */
}

/* nsITransport createInputTransport (in nsIInputStream aStream, in long long aStartOffset, in long long aReadLimit, in boolean aCloseWhenDone); */
NS_IMETHODIMP nsStreamTransportService::CreateInputTransport(nsIInputStream *aStream, PRInt64 aStartOffset, PRInt64 aReadLimit, PRBool aCloseWhenDone, nsITransport * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsITransport createOutputTransport (in nsIOutputStream aStream, in long long aStartOffset, in long long aWriteLimit, in boolean aCloseWhenDone); */
NS_IMETHODIMP nsStreamTransportService::CreateOutputTransport(nsIOutputStream *aStream, PRInt64 aStartOffset, PRInt64 aWriteLimit, PRBool aCloseWhenDone, nsITransport * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIStreamTransportService_h__ */
