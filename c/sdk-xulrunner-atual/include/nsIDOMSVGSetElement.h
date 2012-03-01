/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/svg/nsIDOMSVGSetElement.idl
 */

#ifndef __gen_nsIDOMSVGSetElement_h__
#define __gen_nsIDOMSVGSetElement_h__


#ifndef __gen_nsIDOMSVGAnimationElement_h__
#include "nsIDOMSVGAnimationElement.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMSVGSetElement */
#define NS_IDOMSVGSETELEMENT_IID_STR "5d6ccb41-3bac-4842-96a1-8150091acb05"

#define NS_IDOMSVGSETELEMENT_IID \
  {0x5d6ccb41, 0x3bac, 0x4842, \
    { 0x96, 0xa1, 0x81, 0x50, 0x09, 0x1a, 0xcb, 0x05 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMSVGSetElement : public nsIDOMSVGAnimationElement {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMSVGSETELEMENT_IID)

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMSVGSetElement, NS_IDOMSVGSETELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMSVGSETELEMENT \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMSVGSETELEMENT(_to) \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMSVGSETELEMENT(_to) \
  /* no methods! */

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMSVGSetElement : public nsIDOMSVGSetElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMSVGSETELEMENT

  nsDOMSVGSetElement();

private:
  ~nsDOMSVGSetElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMSVGSetElement, nsIDOMSVGSetElement)

nsDOMSVGSetElement::nsDOMSVGSetElement()
{
  /* member initializers and constructor code */
}

nsDOMSVGSetElement::~nsDOMSVGSetElement()
{
  /* destructor code */
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMSVGSetElement_h__ */
