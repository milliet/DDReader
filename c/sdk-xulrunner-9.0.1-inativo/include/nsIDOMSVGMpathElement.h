/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/svg/nsIDOMSVGMpathElement.idl
 */

#ifndef __gen_nsIDOMSVGMpathElement_h__
#define __gen_nsIDOMSVGMpathElement_h__


#ifndef __gen_nsIDOMSVGElement_h__
#include "nsIDOMSVGElement.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMSVGMpathElement */
#define NS_IDOMSVGMPATHELEMENT_IID_STR "4e082ca3-3b06-4996-9e91-dca422f98473"

#define NS_IDOMSVGMPATHELEMENT_IID \
  {0x4e082ca3, 0x3b06, 0x4996, \
    { 0x9e, 0x91, 0xdc, 0xa4, 0x22, 0xf9, 0x84, 0x73 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMSVGMpathElement : public nsIDOMSVGElement {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMSVGMPATHELEMENT_IID)

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMSVGMpathElement, NS_IDOMSVGMPATHELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMSVGMPATHELEMENT \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMSVGMPATHELEMENT(_to) \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMSVGMPATHELEMENT(_to) \
  /* no methods! */

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMSVGMpathElement : public nsIDOMSVGMpathElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMSVGMPATHELEMENT

  nsDOMSVGMpathElement();

private:
  ~nsDOMSVGMpathElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMSVGMpathElement, nsIDOMSVGMpathElement)

nsDOMSVGMpathElement::nsDOMSVGMpathElement()
{
  /* member initializers and constructor code */
}

nsDOMSVGMpathElement::~nsDOMSVGMpathElement()
{
  /* destructor code */
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMSVGMpathElement_h__ */
