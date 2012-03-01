/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/svg/nsIDOMSVGGElement.idl
 */

#ifndef __gen_nsIDOMSVGGElement_h__
#define __gen_nsIDOMSVGGElement_h__


#ifndef __gen_nsIDOMSVGElement_h__
#include "nsIDOMSVGElement.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMSVGGElement */
#define NS_IDOMSVGGELEMENT_IID_STR "3bc7b279-d21a-4d04-acb0-d68331924a8c"

#define NS_IDOMSVGGELEMENT_IID \
  {0x3bc7b279, 0xd21a, 0x4d04, \
    { 0xac, 0xb0, 0xd6, 0x83, 0x31, 0x92, 0x4a, 0x8c }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMSVGGElement : public nsIDOMSVGElement {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMSVGGELEMENT_IID)

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMSVGGElement, NS_IDOMSVGGELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMSVGGELEMENT \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMSVGGELEMENT(_to) \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMSVGGELEMENT(_to) \
  /* no methods! */

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMSVGGElement : public nsIDOMSVGGElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMSVGGELEMENT

  nsDOMSVGGElement();

private:
  ~nsDOMSVGGElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMSVGGElement, nsIDOMSVGGElement)

nsDOMSVGGElement::nsDOMSVGGElement()
{
  /* member initializers and constructor code */
}

nsDOMSVGGElement::~nsDOMSVGGElement()
{
  /* destructor code */
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMSVGGElement_h__ */
