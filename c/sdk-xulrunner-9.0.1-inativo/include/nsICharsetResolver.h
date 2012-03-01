/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/intl/chardet/public/nsICharsetResolver.idl
 */

#ifndef __gen_nsICharsetResolver_h__
#define __gen_nsICharsetResolver_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIWebNavigation; /* forward declaration */

class nsIChannel; /* forward declaration */


/* starting interface:    nsICharsetResolver */
#define NS_ICHARSETRESOLVER_IID_STR "d143a084-b626-4614-845f-41f3ca43a674"

#define NS_ICHARSETRESOLVER_IID \
  {0xd143a084, 0xb626, 0x4614, \
    { 0x84, 0x5f, 0x41, 0xf3, 0xca, 0x43, 0xa6, 0x74 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsICharsetResolver : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ICHARSETRESOLVER_IID)

  /* ACString requestCharset (in nsIWebNavigation aWebNavigation, in nsIChannel aChannel, out boolean aWantCharset, out nsISupports aClosure); */
  NS_SCRIPTABLE NS_IMETHOD RequestCharset(nsIWebNavigation *aWebNavigation, nsIChannel *aChannel, PRBool *aWantCharset NS_OUTPARAM, nsISupports * *aClosure NS_OUTPARAM, nsACString & _retval NS_OUTPARAM) = 0;

  /* void notifyResolvedCharset (in ACString charset, in nsISupports closure); */
  NS_SCRIPTABLE NS_IMETHOD NotifyResolvedCharset(const nsACString & charset, nsISupports *closure) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsICharsetResolver, NS_ICHARSETRESOLVER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSICHARSETRESOLVER \
  NS_SCRIPTABLE NS_IMETHOD RequestCharset(nsIWebNavigation *aWebNavigation, nsIChannel *aChannel, PRBool *aWantCharset NS_OUTPARAM, nsISupports * *aClosure NS_OUTPARAM, nsACString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD NotifyResolvedCharset(const nsACString & charset, nsISupports *closure); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSICHARSETRESOLVER(_to) \
  NS_SCRIPTABLE NS_IMETHOD RequestCharset(nsIWebNavigation *aWebNavigation, nsIChannel *aChannel, PRBool *aWantCharset NS_OUTPARAM, nsISupports * *aClosure NS_OUTPARAM, nsACString & _retval NS_OUTPARAM) { return _to RequestCharset(aWebNavigation, aChannel, aWantCharset, aClosure, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD NotifyResolvedCharset(const nsACString & charset, nsISupports *closure) { return _to NotifyResolvedCharset(charset, closure); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSICHARSETRESOLVER(_to) \
  NS_SCRIPTABLE NS_IMETHOD RequestCharset(nsIWebNavigation *aWebNavigation, nsIChannel *aChannel, PRBool *aWantCharset NS_OUTPARAM, nsISupports * *aClosure NS_OUTPARAM, nsACString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->RequestCharset(aWebNavigation, aChannel, aWantCharset, aClosure, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD NotifyResolvedCharset(const nsACString & charset, nsISupports *closure) { return !_to ? NS_ERROR_NULL_POINTER : _to->NotifyResolvedCharset(charset, closure); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsCharsetResolver : public nsICharsetResolver
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSICHARSETRESOLVER

  nsCharsetResolver();

private:
  ~nsCharsetResolver();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsCharsetResolver, nsICharsetResolver)

nsCharsetResolver::nsCharsetResolver()
{
  /* member initializers and constructor code */
}

nsCharsetResolver::~nsCharsetResolver()
{
  /* destructor code */
}

/* ACString requestCharset (in nsIWebNavigation aWebNavigation, in nsIChannel aChannel, out boolean aWantCharset, out nsISupports aClosure); */
NS_IMETHODIMP nsCharsetResolver::RequestCharset(nsIWebNavigation *aWebNavigation, nsIChannel *aChannel, PRBool *aWantCharset NS_OUTPARAM, nsISupports * *aClosure NS_OUTPARAM, nsACString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void notifyResolvedCharset (in ACString charset, in nsISupports closure); */
NS_IMETHODIMP nsCharsetResolver::NotifyResolvedCharset(const nsACString & charset, nsISupports *closure)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsICharsetResolver_h__ */
