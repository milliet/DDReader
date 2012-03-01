/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/svg/nsIDOMSVGTextElement.idl
 */

#ifndef __gen_nsIDOMSVGTextElement_h__
#define __gen_nsIDOMSVGTextElement_h__


#ifndef __gen_nsIDOMSVGTextPositionElem_h__
#include "nsIDOMSVGTextPositionElem.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMSVGTextElement */
#define NS_IDOMSVGTEXTELEMENT_IID_STR "96a1df7f-856e-4671-97cf-7264c60f0271"

#define NS_IDOMSVGTEXTELEMENT_IID \
  {0x96a1df7f, 0x856e, 0x4671, \
    { 0x97, 0xcf, 0x72, 0x64, 0xc6, 0x0f, 0x02, 0x71 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMSVGTextElement : public nsIDOMSVGTextPositioningElement {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMSVGTEXTELEMENT_IID)

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMSVGTextElement, NS_IDOMSVGTEXTELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMSVGTEXTELEMENT \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMSVGTEXTELEMENT(_to) \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMSVGTEXTELEMENT(_to) \
  /* no methods! */

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMSVGTextElement : public nsIDOMSVGTextElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMSVGTEXTELEMENT

  nsDOMSVGTextElement();

private:
  ~nsDOMSVGTextElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMSVGTextElement, nsIDOMSVGTextElement)

nsDOMSVGTextElement::nsDOMSVGTextElement()
{
  /* member initializers and constructor code */
}

nsDOMSVGTextElement::~nsDOMSVGTextElement()
{
  /* destructor code */
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMSVGTextElement_h__ */
