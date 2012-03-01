/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/toolkit/components/passwordmgr/nsILoginManagerCrypto.idl
 */

#ifndef __gen_nsILoginManagerCrypto_h__
#define __gen_nsILoginManagerCrypto_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsILoginManagerCrypto */
#define NS_ILOGINMANAGERCRYPTO_IID_STR "73f85239-421d-4d34-8d9c-79cf820ea1e6"

#define NS_ILOGINMANAGERCRYPTO_IID \
  {0x73f85239, 0x421d, 0x4d34, \
    { 0x8d, 0x9c, 0x79, 0xcf, 0x82, 0x0e, 0xa1, 0xe6 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsILoginManagerCrypto : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ILOGINMANAGERCRYPTO_IID)

  /* AString encrypt (in AString plainText); */
  NS_SCRIPTABLE NS_IMETHOD Encrypt(const nsAString & plainText, nsAString & _retval NS_OUTPARAM) = 0;

  /* AString decrypt (in AString cipherText); */
  NS_SCRIPTABLE NS_IMETHOD Decrypt(const nsAString & cipherText, nsAString & _retval NS_OUTPARAM) = 0;

  /* readonly attribute boolean uiBusy; */
  NS_SCRIPTABLE NS_IMETHOD GetUiBusy(PRBool *aUiBusy) = 0;

  /* readonly attribute boolean isLoggedIn; */
  NS_SCRIPTABLE NS_IMETHOD GetIsLoggedIn(PRBool *aIsLoggedIn) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsILoginManagerCrypto, NS_ILOGINMANAGERCRYPTO_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSILOGINMANAGERCRYPTO \
  NS_SCRIPTABLE NS_IMETHOD Encrypt(const nsAString & plainText, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Decrypt(const nsAString & cipherText, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetUiBusy(PRBool *aUiBusy); \
  NS_SCRIPTABLE NS_IMETHOD GetIsLoggedIn(PRBool *aIsLoggedIn); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSILOGINMANAGERCRYPTO(_to) \
  NS_SCRIPTABLE NS_IMETHOD Encrypt(const nsAString & plainText, nsAString & _retval NS_OUTPARAM) { return _to Encrypt(plainText, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Decrypt(const nsAString & cipherText, nsAString & _retval NS_OUTPARAM) { return _to Decrypt(cipherText, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetUiBusy(PRBool *aUiBusy) { return _to GetUiBusy(aUiBusy); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsLoggedIn(PRBool *aIsLoggedIn) { return _to GetIsLoggedIn(aIsLoggedIn); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSILOGINMANAGERCRYPTO(_to) \
  NS_SCRIPTABLE NS_IMETHOD Encrypt(const nsAString & plainText, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Encrypt(plainText, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Decrypt(const nsAString & cipherText, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Decrypt(cipherText, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetUiBusy(PRBool *aUiBusy) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUiBusy(aUiBusy); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsLoggedIn(PRBool *aIsLoggedIn) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsLoggedIn(aIsLoggedIn); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsLoginManagerCrypto : public nsILoginManagerCrypto
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSILOGINMANAGERCRYPTO

  nsLoginManagerCrypto();

private:
  ~nsLoginManagerCrypto();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsLoginManagerCrypto, nsILoginManagerCrypto)

nsLoginManagerCrypto::nsLoginManagerCrypto()
{
  /* member initializers and constructor code */
}

nsLoginManagerCrypto::~nsLoginManagerCrypto()
{
  /* destructor code */
}

/* AString encrypt (in AString plainText); */
NS_IMETHODIMP nsLoginManagerCrypto::Encrypt(const nsAString & plainText, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString decrypt (in AString cipherText); */
NS_IMETHODIMP nsLoginManagerCrypto::Decrypt(const nsAString & cipherText, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean uiBusy; */
NS_IMETHODIMP nsLoginManagerCrypto::GetUiBusy(PRBool *aUiBusy)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean isLoggedIn; */
NS_IMETHODIMP nsLoginManagerCrypto::GetIsLoggedIn(PRBool *aIsLoggedIn)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsILoginManagerCrypto_h__ */
