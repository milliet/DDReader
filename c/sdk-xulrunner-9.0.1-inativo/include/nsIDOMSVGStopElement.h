/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/svg/nsIDOMSVGStopElement.idl
 */

#ifndef __gen_nsIDOMSVGStopElement_h__
#define __gen_nsIDOMSVGStopElement_h__


#ifndef __gen_nsIDOMSVGElement_h__
#include "nsIDOMSVGElement.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMSVGAnimatedNumber; /* forward declaration */


/* starting interface:    nsIDOMSVGStopElement */
#define NS_IDOMSVGSTOPELEMENT_IID_STR "296682ac-e8e6-40c5-a8d0-31b904ec1b13"

#define NS_IDOMSVGSTOPELEMENT_IID \
  {0x296682ac, 0xe8e6, 0x40c5, \
    { 0xa8, 0xd0, 0x31, 0xb9, 0x04, 0xec, 0x1b, 0x13 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMSVGStopElement : public nsIDOMSVGElement {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMSVGSTOPELEMENT_IID)

  /* readonly attribute nsIDOMSVGAnimatedNumber offset; */
  NS_SCRIPTABLE NS_IMETHOD GetOffset(nsIDOMSVGAnimatedNumber * *aOffset) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMSVGStopElement, NS_IDOMSVGSTOPELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMSVGSTOPELEMENT \
  NS_SCRIPTABLE NS_IMETHOD GetOffset(nsIDOMSVGAnimatedNumber * *aOffset); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMSVGSTOPELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetOffset(nsIDOMSVGAnimatedNumber * *aOffset) { return _to GetOffset(aOffset); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMSVGSTOPELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetOffset(nsIDOMSVGAnimatedNumber * *aOffset) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOffset(aOffset); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMSVGStopElement : public nsIDOMSVGStopElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMSVGSTOPELEMENT

  nsDOMSVGStopElement();

private:
  ~nsDOMSVGStopElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMSVGStopElement, nsIDOMSVGStopElement)

nsDOMSVGStopElement::nsDOMSVGStopElement()
{
  /* member initializers and constructor code */
}

nsDOMSVGStopElement::~nsDOMSVGStopElement()
{
  /* destructor code */
}

/* readonly attribute nsIDOMSVGAnimatedNumber offset; */
NS_IMETHODIMP nsDOMSVGStopElement::GetOffset(nsIDOMSVGAnimatedNumber * *aOffset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMSVGStopElement_h__ */
