/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/netwerk/base/public/mozIThirdPartyUtil.idl
 */

#ifndef __gen_mozIThirdPartyUtil_h__
#define __gen_mozIThirdPartyUtil_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIURI; /* forward declaration */

class nsIDOMWindow; /* forward declaration */

class nsIChannel; /* forward declaration */


/* starting interface:    mozIThirdPartyUtil */
#define MOZITHIRDPARTYUTIL_IID_STR "55385caa-1b94-4376-a34c-b47c51ef0837"

#define MOZITHIRDPARTYUTIL_IID \
  {0x55385caa, 0x1b94, 0x4376, \
    { 0xa3, 0x4c, 0xb4, 0x7c, 0x51, 0xef, 0x08, 0x37 }}

class NS_NO_VTABLE NS_SCRIPTABLE mozIThirdPartyUtil : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(MOZITHIRDPARTYUTIL_IID)

  /* boolean isThirdPartyURI (in nsIURI aFirstURI, in nsIURI aSecondURI); */
  NS_SCRIPTABLE NS_IMETHOD IsThirdPartyURI(nsIURI *aFirstURI, nsIURI *aSecondURI, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean isThirdPartyWindow (in nsIDOMWindow aWindow, [optional] in nsIURI aURI); */
  NS_SCRIPTABLE NS_IMETHOD IsThirdPartyWindow(nsIDOMWindow *aWindow, nsIURI *aURI, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean isThirdPartyChannel (in nsIChannel aChannel, [optional] in nsIURI aURI); */
  NS_SCRIPTABLE NS_IMETHOD IsThirdPartyChannel(nsIChannel *aChannel, nsIURI *aURI, PRBool *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(mozIThirdPartyUtil, MOZITHIRDPARTYUTIL_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_MOZITHIRDPARTYUTIL \
  NS_SCRIPTABLE NS_IMETHOD IsThirdPartyURI(nsIURI *aFirstURI, nsIURI *aSecondURI, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsThirdPartyWindow(nsIDOMWindow *aWindow, nsIURI *aURI, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsThirdPartyChannel(nsIChannel *aChannel, nsIURI *aURI, PRBool *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_MOZITHIRDPARTYUTIL(_to) \
  NS_SCRIPTABLE NS_IMETHOD IsThirdPartyURI(nsIURI *aFirstURI, nsIURI *aSecondURI, PRBool *_retval NS_OUTPARAM) { return _to IsThirdPartyURI(aFirstURI, aSecondURI, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsThirdPartyWindow(nsIDOMWindow *aWindow, nsIURI *aURI, PRBool *_retval NS_OUTPARAM) { return _to IsThirdPartyWindow(aWindow, aURI, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsThirdPartyChannel(nsIChannel *aChannel, nsIURI *aURI, PRBool *_retval NS_OUTPARAM) { return _to IsThirdPartyChannel(aChannel, aURI, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_MOZITHIRDPARTYUTIL(_to) \
  NS_SCRIPTABLE NS_IMETHOD IsThirdPartyURI(nsIURI *aFirstURI, nsIURI *aSecondURI, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsThirdPartyURI(aFirstURI, aSecondURI, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsThirdPartyWindow(nsIDOMWindow *aWindow, nsIURI *aURI, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsThirdPartyWindow(aWindow, aURI, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsThirdPartyChannel(nsIChannel *aChannel, nsIURI *aURI, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsThirdPartyChannel(aChannel, aURI, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public mozIThirdPartyUtil
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_MOZITHIRDPARTYUTIL

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, mozIThirdPartyUtil)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* boolean isThirdPartyURI (in nsIURI aFirstURI, in nsIURI aSecondURI); */
NS_IMETHODIMP _MYCLASS_::IsThirdPartyURI(nsIURI *aFirstURI, nsIURI *aSecondURI, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isThirdPartyWindow (in nsIDOMWindow aWindow, [optional] in nsIURI aURI); */
NS_IMETHODIMP _MYCLASS_::IsThirdPartyWindow(nsIDOMWindow *aWindow, nsIURI *aURI, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isThirdPartyChannel (in nsIChannel aChannel, [optional] in nsIURI aURI); */
NS_IMETHODIMP _MYCLASS_::IsThirdPartyChannel(nsIChannel *aChannel, nsIURI *aURI, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    mozIThirdPartyUtil_BRANCH */
#define MOZITHIRDPARTYUTIL_BRANCH_IID_STR "bc92a019-c595-439a-9d1c-353d3ff80780"

#define MOZITHIRDPARTYUTIL_BRANCH_IID \
  {0xbc92a019, 0xc595, 0x439a, \
    { 0x9d, 0x1c, 0x35, 0x3d, 0x3f, 0xf8, 0x07, 0x80 }}

class NS_NO_VTABLE NS_SCRIPTABLE mozIThirdPartyUtil_BRANCH : public mozIThirdPartyUtil {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(MOZITHIRDPARTYUTIL_BRANCH_IID)

  /* AUTF8String getBaseDomain (in nsIURI aHostURI); */
  NS_SCRIPTABLE NS_IMETHOD GetBaseDomain(nsIURI *aHostURI, nsACString & _retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(mozIThirdPartyUtil_BRANCH, MOZITHIRDPARTYUTIL_BRANCH_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_MOZITHIRDPARTYUTIL_BRANCH \
  NS_SCRIPTABLE NS_IMETHOD GetBaseDomain(nsIURI *aHostURI, nsACString & _retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_MOZITHIRDPARTYUTIL_BRANCH(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetBaseDomain(nsIURI *aHostURI, nsACString & _retval NS_OUTPARAM) { return _to GetBaseDomain(aHostURI, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_MOZITHIRDPARTYUTIL_BRANCH(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetBaseDomain(nsIURI *aHostURI, nsACString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBaseDomain(aHostURI, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public mozIThirdPartyUtil_BRANCH
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_MOZITHIRDPARTYUTIL_BRANCH

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, mozIThirdPartyUtil_BRANCH)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* AUTF8String getBaseDomain (in nsIURI aHostURI); */
NS_IMETHODIMP _MYCLASS_::GetBaseDomain(nsIURI *aHostURI, nsACString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

/**
 * The mozIThirdPartyUtil implementation is an XPCOM service registered
 * under the ContractID:
 */
#define THIRDPARTYUTIL_CONTRACTID "@mozilla.org/thirdpartyutil;1"

#endif /* __gen_mozIThirdPartyUtil_h__ */
