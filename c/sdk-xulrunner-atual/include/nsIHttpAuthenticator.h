/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/netwerk/protocol/http/nsIHttpAuthenticator.idl
 */

#ifndef __gen_nsIHttpAuthenticator_h__
#define __gen_nsIHttpAuthenticator_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIHttpAuthenticableChannel; /* forward declaration */


/* starting interface:    nsIHttpAuthenticator */
#define NS_IHTTPAUTHENTICATOR_IID_STR "16784db0-fcb1-4352-b0c9-6a3a67e3cf79"

#define NS_IHTTPAUTHENTICATOR_IID \
  {0x16784db0, 0xfcb1, 0x4352, \
    { 0xb0, 0xc9, 0x6a, 0x3a, 0x67, 0xe3, 0xcf, 0x79 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIHttpAuthenticator : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IHTTPAUTHENTICATOR_IID)

  /* void challengeReceived (in nsIHttpAuthenticableChannel aChannel, in string aChallenge, in boolean aProxyAuth, inout nsISupports aSessionState, inout nsISupports aContinuationState, out boolean aInvalidatesIdentity); */
  NS_SCRIPTABLE NS_IMETHOD ChallengeReceived(nsIHttpAuthenticableChannel *aChannel, const char * aChallenge, PRBool aProxyAuth, nsISupports * *aSessionState NS_INOUTPARAM, nsISupports * *aContinuationState NS_INOUTPARAM, PRBool *aInvalidatesIdentity NS_OUTPARAM) = 0;

  /* string generateCredentials (in nsIHttpAuthenticableChannel aChannel, in string aChallenge, in boolean aProxyAuth, in wstring aDomain, in wstring aUser, in wstring aPassword, inout nsISupports aSessionState, inout nsISupports aContinuationState, out unsigned long aFlags); */
  NS_SCRIPTABLE NS_IMETHOD GenerateCredentials(nsIHttpAuthenticableChannel *aChannel, const char * aChallenge, PRBool aProxyAuth, const PRUnichar * aDomain, const PRUnichar * aUser, const PRUnichar * aPassword, nsISupports * *aSessionState NS_INOUTPARAM, nsISupports * *aContinuationState NS_INOUTPARAM, PRUint32 *aFlags NS_OUTPARAM, char * *_retval NS_OUTPARAM) = 0;

  enum { USING_INTERNAL_IDENTITY = 1U };

  /* readonly attribute unsigned long authFlags; */
  NS_SCRIPTABLE NS_IMETHOD GetAuthFlags(PRUint32 *aAuthFlags) = 0;

  enum { REQUEST_BASED = 1U };

  enum { CONNECTION_BASED = 2U };

  enum { REUSABLE_CREDENTIALS = 4U };

  enum { REUSABLE_CHALLENGE = 8U };

  enum { IDENTITY_IGNORED = 1024U };

  enum { IDENTITY_INCLUDES_DOMAIN = 2048U };

  enum { IDENTITY_ENCRYPTED = 4096U };

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIHttpAuthenticator, NS_IHTTPAUTHENTICATOR_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIHTTPAUTHENTICATOR \
  NS_SCRIPTABLE NS_IMETHOD ChallengeReceived(nsIHttpAuthenticableChannel *aChannel, const char * aChallenge, PRBool aProxyAuth, nsISupports * *aSessionState NS_INOUTPARAM, nsISupports * *aContinuationState NS_INOUTPARAM, PRBool *aInvalidatesIdentity NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GenerateCredentials(nsIHttpAuthenticableChannel *aChannel, const char * aChallenge, PRBool aProxyAuth, const PRUnichar * aDomain, const PRUnichar * aUser, const PRUnichar * aPassword, nsISupports * *aSessionState NS_INOUTPARAM, nsISupports * *aContinuationState NS_INOUTPARAM, PRUint32 *aFlags NS_OUTPARAM, char * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetAuthFlags(PRUint32 *aAuthFlags); \

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIHTTPAUTHENTICATOR(_to) \
  NS_SCRIPTABLE NS_IMETHOD ChallengeReceived(nsIHttpAuthenticableChannel *aChannel, const char * aChallenge, PRBool aProxyAuth, nsISupports * *aSessionState NS_INOUTPARAM, nsISupports * *aContinuationState NS_INOUTPARAM, PRBool *aInvalidatesIdentity NS_OUTPARAM) { return _to ChallengeReceived(aChannel, aChallenge, aProxyAuth, aSessionState, aContinuationState, aInvalidatesIdentity); } \
  NS_SCRIPTABLE NS_IMETHOD GenerateCredentials(nsIHttpAuthenticableChannel *aChannel, const char * aChallenge, PRBool aProxyAuth, const PRUnichar * aDomain, const PRUnichar * aUser, const PRUnichar * aPassword, nsISupports * *aSessionState NS_INOUTPARAM, nsISupports * *aContinuationState NS_INOUTPARAM, PRUint32 *aFlags NS_OUTPARAM, char * *_retval NS_OUTPARAM) { return _to GenerateCredentials(aChannel, aChallenge, aProxyAuth, aDomain, aUser, aPassword, aSessionState, aContinuationState, aFlags, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAuthFlags(PRUint32 *aAuthFlags) { return _to GetAuthFlags(aAuthFlags); } \

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIHTTPAUTHENTICATOR(_to) \
  NS_SCRIPTABLE NS_IMETHOD ChallengeReceived(nsIHttpAuthenticableChannel *aChannel, const char * aChallenge, PRBool aProxyAuth, nsISupports * *aSessionState NS_INOUTPARAM, nsISupports * *aContinuationState NS_INOUTPARAM, PRBool *aInvalidatesIdentity NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ChallengeReceived(aChannel, aChallenge, aProxyAuth, aSessionState, aContinuationState, aInvalidatesIdentity); } \
  NS_SCRIPTABLE NS_IMETHOD GenerateCredentials(nsIHttpAuthenticableChannel *aChannel, const char * aChallenge, PRBool aProxyAuth, const PRUnichar * aDomain, const PRUnichar * aUser, const PRUnichar * aPassword, nsISupports * *aSessionState NS_INOUTPARAM, nsISupports * *aContinuationState NS_INOUTPARAM, PRUint32 *aFlags NS_OUTPARAM, char * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GenerateCredentials(aChannel, aChallenge, aProxyAuth, aDomain, aUser, aPassword, aSessionState, aContinuationState, aFlags, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAuthFlags(PRUint32 *aAuthFlags) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAuthFlags(aAuthFlags); } \

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsHttpAuthenticator : public nsIHttpAuthenticator
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIHTTPAUTHENTICATOR

  nsHttpAuthenticator();

private:
  ~nsHttpAuthenticator();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsHttpAuthenticator, nsIHttpAuthenticator)

nsHttpAuthenticator::nsHttpAuthenticator()
{
  /* member initializers and constructor code */
}

nsHttpAuthenticator::~nsHttpAuthenticator()
{
  /* destructor code */
}

/* void challengeReceived (in nsIHttpAuthenticableChannel aChannel, in string aChallenge, in boolean aProxyAuth, inout nsISupports aSessionState, inout nsISupports aContinuationState, out boolean aInvalidatesIdentity); */
NS_IMETHODIMP nsHttpAuthenticator::ChallengeReceived(nsIHttpAuthenticableChannel *aChannel, const char * aChallenge, PRBool aProxyAuth, nsISupports * *aSessionState NS_INOUTPARAM, nsISupports * *aContinuationState NS_INOUTPARAM, PRBool *aInvalidatesIdentity NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* string generateCredentials (in nsIHttpAuthenticableChannel aChannel, in string aChallenge, in boolean aProxyAuth, in wstring aDomain, in wstring aUser, in wstring aPassword, inout nsISupports aSessionState, inout nsISupports aContinuationState, out unsigned long aFlags); */
NS_IMETHODIMP nsHttpAuthenticator::GenerateCredentials(nsIHttpAuthenticableChannel *aChannel, const char * aChallenge, PRBool aProxyAuth, const PRUnichar * aDomain, const PRUnichar * aUser, const PRUnichar * aPassword, nsISupports * *aSessionState NS_INOUTPARAM, nsISupports * *aContinuationState NS_INOUTPARAM, PRUint32 *aFlags NS_OUTPARAM, char * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long authFlags; */
NS_IMETHODIMP nsHttpAuthenticator::GetAuthFlags(PRUint32 *aAuthFlags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

#define NS_HTTP_AUTHENTICATOR_CONTRACTID_PREFIX \
    "@mozilla.org/network/http-authenticator;1?scheme="

#endif /* __gen_nsIHttpAuthenticator_h__ */
