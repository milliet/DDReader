/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/netwerk/base/public/nsIUploadChannel.idl
 */

#ifndef __gen_nsIUploadChannel_h__
#define __gen_nsIUploadChannel_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIInputStream; /* forward declaration */


/* starting interface:    nsIUploadChannel */
#define NS_IUPLOADCHANNEL_IID_STR "ddf633d8-e9a4-439d-ad88-de636fd9bb75"

#define NS_IUPLOADCHANNEL_IID \
  {0xddf633d8, 0xe9a4, 0x439d, \
    { 0xad, 0x88, 0xde, 0x63, 0x6f, 0xd9, 0xbb, 0x75 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIUploadChannel : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IUPLOADCHANNEL_IID)

  /* void setUploadStream (in nsIInputStream aStream, in ACString aContentType, in long aContentLength); */
  NS_SCRIPTABLE NS_IMETHOD SetUploadStream(nsIInputStream *aStream, const nsACString & aContentType, PRInt32 aContentLength) = 0;

  /* readonly attribute nsIInputStream uploadStream; */
  NS_SCRIPTABLE NS_IMETHOD GetUploadStream(nsIInputStream * *aUploadStream) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIUploadChannel, NS_IUPLOADCHANNEL_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIUPLOADCHANNEL \
  NS_SCRIPTABLE NS_IMETHOD SetUploadStream(nsIInputStream *aStream, const nsACString & aContentType, PRInt32 aContentLength); \
  NS_SCRIPTABLE NS_IMETHOD GetUploadStream(nsIInputStream * *aUploadStream); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIUPLOADCHANNEL(_to) \
  NS_SCRIPTABLE NS_IMETHOD SetUploadStream(nsIInputStream *aStream, const nsACString & aContentType, PRInt32 aContentLength) { return _to SetUploadStream(aStream, aContentType, aContentLength); } \
  NS_SCRIPTABLE NS_IMETHOD GetUploadStream(nsIInputStream * *aUploadStream) { return _to GetUploadStream(aUploadStream); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIUPLOADCHANNEL(_to) \
  NS_SCRIPTABLE NS_IMETHOD SetUploadStream(nsIInputStream *aStream, const nsACString & aContentType, PRInt32 aContentLength) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetUploadStream(aStream, aContentType, aContentLength); } \
  NS_SCRIPTABLE NS_IMETHOD GetUploadStream(nsIInputStream * *aUploadStream) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUploadStream(aUploadStream); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsUploadChannel : public nsIUploadChannel
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIUPLOADCHANNEL

  nsUploadChannel();

private:
  ~nsUploadChannel();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsUploadChannel, nsIUploadChannel)

nsUploadChannel::nsUploadChannel()
{
  /* member initializers and constructor code */
}

nsUploadChannel::~nsUploadChannel()
{
  /* destructor code */
}

/* void setUploadStream (in nsIInputStream aStream, in ACString aContentType, in long aContentLength); */
NS_IMETHODIMP nsUploadChannel::SetUploadStream(nsIInputStream *aStream, const nsACString & aContentType, PRInt32 aContentLength)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIInputStream uploadStream; */
NS_IMETHODIMP nsUploadChannel::GetUploadStream(nsIInputStream * *aUploadStream)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIUploadChannel_h__ */
