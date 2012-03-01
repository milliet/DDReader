/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/html/nsIDOMHTMLProgressElement.idl
 */

#ifndef __gen_nsIDOMHTMLProgressElement_h__
#define __gen_nsIDOMHTMLProgressElement_h__


#ifndef __gen_nsIDOMHTMLElement_h__
#include "nsIDOMHTMLElement.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMHTMLProgressElement */
#define NS_IDOMHTMLPROGRESSELEMENT_IID_STR "80f0f2f7-d1f0-457f-b80f-f6d78c8efafc"

#define NS_IDOMHTMLPROGRESSELEMENT_IID \
  {0x80f0f2f7, 0xd1f0, 0x457f, \
    { 0xb8, 0x0f, 0xf6, 0xd7, 0x8c, 0x8e, 0xfa, 0xfc }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMHTMLProgressElement : public nsIDOMHTMLElement {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMHTMLPROGRESSELEMENT_IID)

  /* attribute double value; */
  NS_SCRIPTABLE NS_IMETHOD GetValue(double *aValue) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetValue(double aValue) = 0;

  /* attribute double max; */
  NS_SCRIPTABLE NS_IMETHOD GetMax(double *aMax) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMax(double aMax) = 0;

  /* readonly attribute double position; */
  NS_SCRIPTABLE NS_IMETHOD GetPosition(double *aPosition) = 0;

  /* readonly attribute nsIDOMHTMLFormElement form; */
  NS_SCRIPTABLE NS_IMETHOD GetForm(nsIDOMHTMLFormElement * *aForm) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMHTMLProgressElement, NS_IDOMHTMLPROGRESSELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMHTMLPROGRESSELEMENT \
  NS_SCRIPTABLE NS_IMETHOD GetValue(double *aValue); \
  NS_SCRIPTABLE NS_IMETHOD SetValue(double aValue); \
  NS_SCRIPTABLE NS_IMETHOD GetMax(double *aMax); \
  NS_SCRIPTABLE NS_IMETHOD SetMax(double aMax); \
  NS_SCRIPTABLE NS_IMETHOD GetPosition(double *aPosition); \
  NS_SCRIPTABLE NS_IMETHOD GetForm(nsIDOMHTMLFormElement * *aForm); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMHTMLPROGRESSELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetValue(double *aValue) { return _to GetValue(aValue); } \
  NS_SCRIPTABLE NS_IMETHOD SetValue(double aValue) { return _to SetValue(aValue); } \
  NS_SCRIPTABLE NS_IMETHOD GetMax(double *aMax) { return _to GetMax(aMax); } \
  NS_SCRIPTABLE NS_IMETHOD SetMax(double aMax) { return _to SetMax(aMax); } \
  NS_SCRIPTABLE NS_IMETHOD GetPosition(double *aPosition) { return _to GetPosition(aPosition); } \
  NS_SCRIPTABLE NS_IMETHOD GetForm(nsIDOMHTMLFormElement * *aForm) { return _to GetForm(aForm); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMHTMLPROGRESSELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetValue(double *aValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetValue(aValue); } \
  NS_SCRIPTABLE NS_IMETHOD SetValue(double aValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetValue(aValue); } \
  NS_SCRIPTABLE NS_IMETHOD GetMax(double *aMax) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMax(aMax); } \
  NS_SCRIPTABLE NS_IMETHOD SetMax(double aMax) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMax(aMax); } \
  NS_SCRIPTABLE NS_IMETHOD GetPosition(double *aPosition) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPosition(aPosition); } \
  NS_SCRIPTABLE NS_IMETHOD GetForm(nsIDOMHTMLFormElement * *aForm) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetForm(aForm); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMHTMLProgressElement : public nsIDOMHTMLProgressElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMHTMLPROGRESSELEMENT

  nsDOMHTMLProgressElement();

private:
  ~nsDOMHTMLProgressElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMHTMLProgressElement, nsIDOMHTMLProgressElement)

nsDOMHTMLProgressElement::nsDOMHTMLProgressElement()
{
  /* member initializers and constructor code */
}

nsDOMHTMLProgressElement::~nsDOMHTMLProgressElement()
{
  /* destructor code */
}

/* attribute double value; */
NS_IMETHODIMP nsDOMHTMLProgressElement::GetValue(double *aValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLProgressElement::SetValue(double aValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute double max; */
NS_IMETHODIMP nsDOMHTMLProgressElement::GetMax(double *aMax)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLProgressElement::SetMax(double aMax)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute double position; */
NS_IMETHODIMP nsDOMHTMLProgressElement::GetPosition(double *aPosition)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMHTMLFormElement form; */
NS_IMETHODIMP nsDOMHTMLProgressElement::GetForm(nsIDOMHTMLFormElement * *aForm)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMHTMLProgressElement_h__ */
