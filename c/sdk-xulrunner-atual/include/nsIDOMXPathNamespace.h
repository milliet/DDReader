/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/xpath/nsIDOMXPathNamespace.idl
 */

#ifndef __gen_nsIDOMXPathNamespace_h__
#define __gen_nsIDOMXPathNamespace_h__


#ifndef __gen_nsIDOMNode_h__
#include "nsIDOMNode.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMXPathNamespace */
#define NS_IDOMXPATHNAMESPACE_IID_STR "47836446-3c3d-440f-99f6-984d8a2f2e04"

#define NS_IDOMXPATHNAMESPACE_IID \
  {0x47836446, 0x3c3d, 0x440f, \
    { 0x99, 0xf6, 0x98, 0x4d, 0x8a, 0x2f, 0x2e, 0x04 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMXPathNamespace : public nsIDOMNode {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMXPATHNAMESPACE_IID)

  enum { XPATH_NAMESPACE_NODE = 13U };

  /* readonly attribute nsIDOMElement ownerElement; */
  NS_SCRIPTABLE NS_IMETHOD GetOwnerElement(nsIDOMElement * *aOwnerElement) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMXPathNamespace, NS_IDOMXPATHNAMESPACE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMXPATHNAMESPACE \
  NS_SCRIPTABLE NS_IMETHOD GetOwnerElement(nsIDOMElement * *aOwnerElement); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMXPATHNAMESPACE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetOwnerElement(nsIDOMElement * *aOwnerElement) { return _to GetOwnerElement(aOwnerElement); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMXPATHNAMESPACE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetOwnerElement(nsIDOMElement * *aOwnerElement) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOwnerElement(aOwnerElement); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMXPathNamespace : public nsIDOMXPathNamespace
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMXPATHNAMESPACE

  nsDOMXPathNamespace();

private:
  ~nsDOMXPathNamespace();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMXPathNamespace, nsIDOMXPathNamespace)

nsDOMXPathNamespace::nsDOMXPathNamespace()
{
  /* member initializers and constructor code */
}

nsDOMXPathNamespace::~nsDOMXPathNamespace()
{
  /* destructor code */
}

/* readonly attribute nsIDOMElement ownerElement; */
NS_IMETHODIMP nsDOMXPathNamespace::GetOwnerElement(nsIDOMElement * *aOwnerElement)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMXPathNamespace_h__ */
