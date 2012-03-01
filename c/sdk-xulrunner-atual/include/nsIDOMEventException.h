/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/events/nsIDOMEventException.idl
 */

#ifndef __gen_nsIDOMEventException_h__
#define __gen_nsIDOMEventException_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMEventException */
#define NS_IDOMEVENTEXCEPTION_IID_STR "825f3aad-501a-4ecd-959e-cf8f0f8a984a"

#define NS_IDOMEVENTEXCEPTION_IID \
  {0x825f3aad, 0x501a, 0x4ecd, \
    { 0x95, 0x9e, 0xcf, 0x8f, 0x0f, 0x8a, 0x98, 0x4a }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMEventException : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMEVENTEXCEPTION_IID)

  enum { UNSPECIFIED_EVENT_TYPE_ERR = 0U };

  /* readonly attribute unsigned short code; */
  NS_SCRIPTABLE NS_IMETHOD GetCode(PRUint16 *aCode) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMEventException, NS_IDOMEVENTEXCEPTION_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMEVENTEXCEPTION \
  NS_SCRIPTABLE NS_IMETHOD GetCode(PRUint16 *aCode); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMEVENTEXCEPTION(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetCode(PRUint16 *aCode) { return _to GetCode(aCode); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMEVENTEXCEPTION(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetCode(PRUint16 *aCode) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCode(aCode); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMEventException : public nsIDOMEventException
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMEVENTEXCEPTION

  nsDOMEventException();

private:
  ~nsDOMEventException();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMEventException, nsIDOMEventException)

nsDOMEventException::nsDOMEventException()
{
  /* member initializers and constructor code */
}

nsDOMEventException::~nsDOMEventException()
{
  /* destructor code */
}

/* readonly attribute unsigned short code; */
NS_IMETHODIMP nsDOMEventException::GetCode(PRUint16 *aCode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMEventException_h__ */
