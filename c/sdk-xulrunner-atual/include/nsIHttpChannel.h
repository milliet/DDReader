/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/netwerk/protocol/http/nsIHttpChannel.idl
 */

#ifndef __gen_nsIHttpChannel_h__
#define __gen_nsIHttpChannel_h__


#ifndef __gen_nsIChannel_h__
#include "nsIChannel.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIHttpHeaderVisitor; /* forward declaration */


/* starting interface:    nsIHttpChannel */
#define NS_IHTTPCHANNEL_IID_STR "9277fe09-f0cc-4cd9-bbce-581dd94b0260"

#define NS_IHTTPCHANNEL_IID \
  {0x9277fe09, 0xf0cc, 0x4cd9, \
    { 0xbb, 0xce, 0x58, 0x1d, 0xd9, 0x4b, 0x02, 0x60 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIHttpChannel : public nsIChannel {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IHTTPCHANNEL_IID)

  /* attribute ACString requestMethod; */
  NS_SCRIPTABLE NS_IMETHOD GetRequestMethod(nsACString & aRequestMethod) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetRequestMethod(const nsACString & aRequestMethod) = 0;

  /* attribute nsIURI referrer; */
  NS_SCRIPTABLE NS_IMETHOD GetReferrer(nsIURI * *aReferrer) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetReferrer(nsIURI *aReferrer) = 0;

  /* ACString getRequestHeader (in ACString aHeader); */
  NS_SCRIPTABLE NS_IMETHOD GetRequestHeader(const nsACString & aHeader, nsACString & _retval NS_OUTPARAM) = 0;

  /* void setRequestHeader (in ACString aHeader, in ACString aValue, in boolean aMerge); */
  NS_SCRIPTABLE NS_IMETHOD SetRequestHeader(const nsACString & aHeader, const nsACString & aValue, PRBool aMerge) = 0;

  /* void visitRequestHeaders (in nsIHttpHeaderVisitor aVisitor); */
  NS_SCRIPTABLE NS_IMETHOD VisitRequestHeaders(nsIHttpHeaderVisitor *aVisitor) = 0;

  /* attribute boolean allowPipelining; */
  NS_SCRIPTABLE NS_IMETHOD GetAllowPipelining(PRBool *aAllowPipelining) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetAllowPipelining(PRBool aAllowPipelining) = 0;

  /* attribute unsigned long redirectionLimit; */
  NS_SCRIPTABLE NS_IMETHOD GetRedirectionLimit(PRUint32 *aRedirectionLimit) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetRedirectionLimit(PRUint32 aRedirectionLimit) = 0;

  /* readonly attribute unsigned long responseStatus; */
  NS_SCRIPTABLE NS_IMETHOD GetResponseStatus(PRUint32 *aResponseStatus) = 0;

  /* readonly attribute ACString responseStatusText; */
  NS_SCRIPTABLE NS_IMETHOD GetResponseStatusText(nsACString & aResponseStatusText) = 0;

  /* readonly attribute boolean requestSucceeded; */
  NS_SCRIPTABLE NS_IMETHOD GetRequestSucceeded(PRBool *aRequestSucceeded) = 0;

  /* ACString getResponseHeader (in ACString header); */
  NS_SCRIPTABLE NS_IMETHOD GetResponseHeader(const nsACString & header, nsACString & _retval NS_OUTPARAM) = 0;

  /* void setResponseHeader (in ACString header, in ACString value, in boolean merge); */
  NS_SCRIPTABLE NS_IMETHOD SetResponseHeader(const nsACString & header, const nsACString & value, PRBool merge) = 0;

  /* void visitResponseHeaders (in nsIHttpHeaderVisitor aVisitor); */
  NS_SCRIPTABLE NS_IMETHOD VisitResponseHeaders(nsIHttpHeaderVisitor *aVisitor) = 0;

  /* boolean isNoStoreResponse (); */
  NS_SCRIPTABLE NS_IMETHOD IsNoStoreResponse(PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean isNoCacheResponse (); */
  NS_SCRIPTABLE NS_IMETHOD IsNoCacheResponse(PRBool *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIHttpChannel, NS_IHTTPCHANNEL_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIHTTPCHANNEL \
  NS_SCRIPTABLE NS_IMETHOD GetRequestMethod(nsACString & aRequestMethod); \
  NS_SCRIPTABLE NS_IMETHOD SetRequestMethod(const nsACString & aRequestMethod); \
  NS_SCRIPTABLE NS_IMETHOD GetReferrer(nsIURI * *aReferrer); \
  NS_SCRIPTABLE NS_IMETHOD SetReferrer(nsIURI *aReferrer); \
  NS_SCRIPTABLE NS_IMETHOD GetRequestHeader(const nsACString & aHeader, nsACString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetRequestHeader(const nsACString & aHeader, const nsACString & aValue, PRBool aMerge); \
  NS_SCRIPTABLE NS_IMETHOD VisitRequestHeaders(nsIHttpHeaderVisitor *aVisitor); \
  NS_SCRIPTABLE NS_IMETHOD GetAllowPipelining(PRBool *aAllowPipelining); \
  NS_SCRIPTABLE NS_IMETHOD SetAllowPipelining(PRBool aAllowPipelining); \
  NS_SCRIPTABLE NS_IMETHOD GetRedirectionLimit(PRUint32 *aRedirectionLimit); \
  NS_SCRIPTABLE NS_IMETHOD SetRedirectionLimit(PRUint32 aRedirectionLimit); \
  NS_SCRIPTABLE NS_IMETHOD GetResponseStatus(PRUint32 *aResponseStatus); \
  NS_SCRIPTABLE NS_IMETHOD GetResponseStatusText(nsACString & aResponseStatusText); \
  NS_SCRIPTABLE NS_IMETHOD GetRequestSucceeded(PRBool *aRequestSucceeded); \
  NS_SCRIPTABLE NS_IMETHOD GetResponseHeader(const nsACString & header, nsACString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetResponseHeader(const nsACString & header, const nsACString & value, PRBool merge); \
  NS_SCRIPTABLE NS_IMETHOD VisitResponseHeaders(nsIHttpHeaderVisitor *aVisitor); \
  NS_SCRIPTABLE NS_IMETHOD IsNoStoreResponse(PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsNoCacheResponse(PRBool *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIHTTPCHANNEL(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetRequestMethod(nsACString & aRequestMethod) { return _to GetRequestMethod(aRequestMethod); } \
  NS_SCRIPTABLE NS_IMETHOD SetRequestMethod(const nsACString & aRequestMethod) { return _to SetRequestMethod(aRequestMethod); } \
  NS_SCRIPTABLE NS_IMETHOD GetReferrer(nsIURI * *aReferrer) { return _to GetReferrer(aReferrer); } \
  NS_SCRIPTABLE NS_IMETHOD SetReferrer(nsIURI *aReferrer) { return _to SetReferrer(aReferrer); } \
  NS_SCRIPTABLE NS_IMETHOD GetRequestHeader(const nsACString & aHeader, nsACString & _retval NS_OUTPARAM) { return _to GetRequestHeader(aHeader, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetRequestHeader(const nsACString & aHeader, const nsACString & aValue, PRBool aMerge) { return _to SetRequestHeader(aHeader, aValue, aMerge); } \
  NS_SCRIPTABLE NS_IMETHOD VisitRequestHeaders(nsIHttpHeaderVisitor *aVisitor) { return _to VisitRequestHeaders(aVisitor); } \
  NS_SCRIPTABLE NS_IMETHOD GetAllowPipelining(PRBool *aAllowPipelining) { return _to GetAllowPipelining(aAllowPipelining); } \
  NS_SCRIPTABLE NS_IMETHOD SetAllowPipelining(PRBool aAllowPipelining) { return _to SetAllowPipelining(aAllowPipelining); } \
  NS_SCRIPTABLE NS_IMETHOD GetRedirectionLimit(PRUint32 *aRedirectionLimit) { return _to GetRedirectionLimit(aRedirectionLimit); } \
  NS_SCRIPTABLE NS_IMETHOD SetRedirectionLimit(PRUint32 aRedirectionLimit) { return _to SetRedirectionLimit(aRedirectionLimit); } \
  NS_SCRIPTABLE NS_IMETHOD GetResponseStatus(PRUint32 *aResponseStatus) { return _to GetResponseStatus(aResponseStatus); } \
  NS_SCRIPTABLE NS_IMETHOD GetResponseStatusText(nsACString & aResponseStatusText) { return _to GetResponseStatusText(aResponseStatusText); } \
  NS_SCRIPTABLE NS_IMETHOD GetRequestSucceeded(PRBool *aRequestSucceeded) { return _to GetRequestSucceeded(aRequestSucceeded); } \
  NS_SCRIPTABLE NS_IMETHOD GetResponseHeader(const nsACString & header, nsACString & _retval NS_OUTPARAM) { return _to GetResponseHeader(header, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetResponseHeader(const nsACString & header, const nsACString & value, PRBool merge) { return _to SetResponseHeader(header, value, merge); } \
  NS_SCRIPTABLE NS_IMETHOD VisitResponseHeaders(nsIHttpHeaderVisitor *aVisitor) { return _to VisitResponseHeaders(aVisitor); } \
  NS_SCRIPTABLE NS_IMETHOD IsNoStoreResponse(PRBool *_retval NS_OUTPARAM) { return _to IsNoStoreResponse(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsNoCacheResponse(PRBool *_retval NS_OUTPARAM) { return _to IsNoCacheResponse(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIHTTPCHANNEL(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetRequestMethod(nsACString & aRequestMethod) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRequestMethod(aRequestMethod); } \
  NS_SCRIPTABLE NS_IMETHOD SetRequestMethod(const nsACString & aRequestMethod) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetRequestMethod(aRequestMethod); } \
  NS_SCRIPTABLE NS_IMETHOD GetReferrer(nsIURI * *aReferrer) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReferrer(aReferrer); } \
  NS_SCRIPTABLE NS_IMETHOD SetReferrer(nsIURI *aReferrer) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetReferrer(aReferrer); } \
  NS_SCRIPTABLE NS_IMETHOD GetRequestHeader(const nsACString & aHeader, nsACString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRequestHeader(aHeader, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetRequestHeader(const nsACString & aHeader, const nsACString & aValue, PRBool aMerge) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetRequestHeader(aHeader, aValue, aMerge); } \
  NS_SCRIPTABLE NS_IMETHOD VisitRequestHeaders(nsIHttpHeaderVisitor *aVisitor) { return !_to ? NS_ERROR_NULL_POINTER : _to->VisitRequestHeaders(aVisitor); } \
  NS_SCRIPTABLE NS_IMETHOD GetAllowPipelining(PRBool *aAllowPipelining) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAllowPipelining(aAllowPipelining); } \
  NS_SCRIPTABLE NS_IMETHOD SetAllowPipelining(PRBool aAllowPipelining) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetAllowPipelining(aAllowPipelining); } \
  NS_SCRIPTABLE NS_IMETHOD GetRedirectionLimit(PRUint32 *aRedirectionLimit) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRedirectionLimit(aRedirectionLimit); } \
  NS_SCRIPTABLE NS_IMETHOD SetRedirectionLimit(PRUint32 aRedirectionLimit) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetRedirectionLimit(aRedirectionLimit); } \
  NS_SCRIPTABLE NS_IMETHOD GetResponseStatus(PRUint32 *aResponseStatus) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResponseStatus(aResponseStatus); } \
  NS_SCRIPTABLE NS_IMETHOD GetResponseStatusText(nsACString & aResponseStatusText) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResponseStatusText(aResponseStatusText); } \
  NS_SCRIPTABLE NS_IMETHOD GetRequestSucceeded(PRBool *aRequestSucceeded) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRequestSucceeded(aRequestSucceeded); } \
  NS_SCRIPTABLE NS_IMETHOD GetResponseHeader(const nsACString & header, nsACString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResponseHeader(header, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetResponseHeader(const nsACString & header, const nsACString & value, PRBool merge) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetResponseHeader(header, value, merge); } \
  NS_SCRIPTABLE NS_IMETHOD VisitResponseHeaders(nsIHttpHeaderVisitor *aVisitor) { return !_to ? NS_ERROR_NULL_POINTER : _to->VisitResponseHeaders(aVisitor); } \
  NS_SCRIPTABLE NS_IMETHOD IsNoStoreResponse(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsNoStoreResponse(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsNoCacheResponse(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsNoCacheResponse(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsHttpChannel : public nsIHttpChannel
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIHTTPCHANNEL

  nsHttpChannel();

private:
  ~nsHttpChannel();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsHttpChannel, nsIHttpChannel)

nsHttpChannel::nsHttpChannel()
{
  /* member initializers and constructor code */
}

nsHttpChannel::~nsHttpChannel()
{
  /* destructor code */
}

/* attribute ACString requestMethod; */
NS_IMETHODIMP nsHttpChannel::GetRequestMethod(nsACString & aRequestMethod)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsHttpChannel::SetRequestMethod(const nsACString & aRequestMethod)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIURI referrer; */
NS_IMETHODIMP nsHttpChannel::GetReferrer(nsIURI * *aReferrer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsHttpChannel::SetReferrer(nsIURI *aReferrer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* ACString getRequestHeader (in ACString aHeader); */
NS_IMETHODIMP nsHttpChannel::GetRequestHeader(const nsACString & aHeader, nsACString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setRequestHeader (in ACString aHeader, in ACString aValue, in boolean aMerge); */
NS_IMETHODIMP nsHttpChannel::SetRequestHeader(const nsACString & aHeader, const nsACString & aValue, PRBool aMerge)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void visitRequestHeaders (in nsIHttpHeaderVisitor aVisitor); */
NS_IMETHODIMP nsHttpChannel::VisitRequestHeaders(nsIHttpHeaderVisitor *aVisitor)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean allowPipelining; */
NS_IMETHODIMP nsHttpChannel::GetAllowPipelining(PRBool *aAllowPipelining)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsHttpChannel::SetAllowPipelining(PRBool aAllowPipelining)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long redirectionLimit; */
NS_IMETHODIMP nsHttpChannel::GetRedirectionLimit(PRUint32 *aRedirectionLimit)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsHttpChannel::SetRedirectionLimit(PRUint32 aRedirectionLimit)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long responseStatus; */
NS_IMETHODIMP nsHttpChannel::GetResponseStatus(PRUint32 *aResponseStatus)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute ACString responseStatusText; */
NS_IMETHODIMP nsHttpChannel::GetResponseStatusText(nsACString & aResponseStatusText)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean requestSucceeded; */
NS_IMETHODIMP nsHttpChannel::GetRequestSucceeded(PRBool *aRequestSucceeded)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* ACString getResponseHeader (in ACString header); */
NS_IMETHODIMP nsHttpChannel::GetResponseHeader(const nsACString & header, nsACString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setResponseHeader (in ACString header, in ACString value, in boolean merge); */
NS_IMETHODIMP nsHttpChannel::SetResponseHeader(const nsACString & header, const nsACString & value, PRBool merge)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void visitResponseHeaders (in nsIHttpHeaderVisitor aVisitor); */
NS_IMETHODIMP nsHttpChannel::VisitResponseHeaders(nsIHttpHeaderVisitor *aVisitor)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isNoStoreResponse (); */
NS_IMETHODIMP nsHttpChannel::IsNoStoreResponse(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isNoCacheResponse (); */
NS_IMETHODIMP nsHttpChannel::IsNoCacheResponse(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIHttpChannel_h__ */
