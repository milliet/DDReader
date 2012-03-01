/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/html/nsIDOMHTMLCommandElement.idl
 */

#ifndef __gen_nsIDOMHTMLCommandElement_h__
#define __gen_nsIDOMHTMLCommandElement_h__


#ifndef __gen_nsIDOMHTMLElement_h__
#include "nsIDOMHTMLElement.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDOMHTMLCommandElement */
#define NS_IDOMHTMLCOMMANDELEMENT_IID_STR "c09f7b23-199c-4e5e-a8c1-48640725b8a2"

#define NS_IDOMHTMLCOMMANDELEMENT_IID \
  {0xc09f7b23, 0x199c, 0x4e5e, \
    { 0xa8, 0xc1, 0x48, 0x64, 0x07, 0x25, 0xb8, 0xa2 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMHTMLCommandElement : public nsIDOMHTMLElement {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMHTMLCOMMANDELEMENT_IID)

  /* attribute DOMString type; */
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetType(const nsAString & aType) = 0;

  /* attribute DOMString label; */
  NS_SCRIPTABLE NS_IMETHOD GetLabel(nsAString & aLabel) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetLabel(const nsAString & aLabel) = 0;

  /* attribute DOMString icon; */
  NS_SCRIPTABLE NS_IMETHOD GetIcon(nsAString & aIcon) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetIcon(const nsAString & aIcon) = 0;

  /* attribute boolean disabled; */
  NS_SCRIPTABLE NS_IMETHOD GetDisabled(PRBool *aDisabled) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetDisabled(PRBool aDisabled) = 0;

  /* attribute boolean defaultChecked; */
  NS_SCRIPTABLE NS_IMETHOD GetDefaultChecked(PRBool *aDefaultChecked) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetDefaultChecked(PRBool aDefaultChecked) = 0;

  /* attribute boolean checked; */
  NS_SCRIPTABLE NS_IMETHOD GetChecked(PRBool *aChecked) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetChecked(PRBool aChecked) = 0;

  /* attribute DOMString radiogroup; */
  NS_SCRIPTABLE NS_IMETHOD GetRadiogroup(nsAString & aRadiogroup) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetRadiogroup(const nsAString & aRadiogroup) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMHTMLCommandElement, NS_IDOMHTMLCOMMANDELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMHTMLCOMMANDELEMENT \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType); \
  NS_SCRIPTABLE NS_IMETHOD SetType(const nsAString & aType); \
  NS_SCRIPTABLE NS_IMETHOD GetLabel(nsAString & aLabel); \
  NS_SCRIPTABLE NS_IMETHOD SetLabel(const nsAString & aLabel); \
  NS_SCRIPTABLE NS_IMETHOD GetIcon(nsAString & aIcon); \
  NS_SCRIPTABLE NS_IMETHOD SetIcon(const nsAString & aIcon); \
  NS_SCRIPTABLE NS_IMETHOD GetDisabled(PRBool *aDisabled); \
  NS_SCRIPTABLE NS_IMETHOD SetDisabled(PRBool aDisabled); \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultChecked(PRBool *aDefaultChecked); \
  NS_SCRIPTABLE NS_IMETHOD SetDefaultChecked(PRBool aDefaultChecked); \
  NS_SCRIPTABLE NS_IMETHOD GetChecked(PRBool *aChecked); \
  NS_SCRIPTABLE NS_IMETHOD SetChecked(PRBool aChecked); \
  NS_SCRIPTABLE NS_IMETHOD GetRadiogroup(nsAString & aRadiogroup); \
  NS_SCRIPTABLE NS_IMETHOD SetRadiogroup(const nsAString & aRadiogroup); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMHTMLCOMMANDELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType) { return _to GetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD SetType(const nsAString & aType) { return _to SetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD GetLabel(nsAString & aLabel) { return _to GetLabel(aLabel); } \
  NS_SCRIPTABLE NS_IMETHOD SetLabel(const nsAString & aLabel) { return _to SetLabel(aLabel); } \
  NS_SCRIPTABLE NS_IMETHOD GetIcon(nsAString & aIcon) { return _to GetIcon(aIcon); } \
  NS_SCRIPTABLE NS_IMETHOD SetIcon(const nsAString & aIcon) { return _to SetIcon(aIcon); } \
  NS_SCRIPTABLE NS_IMETHOD GetDisabled(PRBool *aDisabled) { return _to GetDisabled(aDisabled); } \
  NS_SCRIPTABLE NS_IMETHOD SetDisabled(PRBool aDisabled) { return _to SetDisabled(aDisabled); } \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultChecked(PRBool *aDefaultChecked) { return _to GetDefaultChecked(aDefaultChecked); } \
  NS_SCRIPTABLE NS_IMETHOD SetDefaultChecked(PRBool aDefaultChecked) { return _to SetDefaultChecked(aDefaultChecked); } \
  NS_SCRIPTABLE NS_IMETHOD GetChecked(PRBool *aChecked) { return _to GetChecked(aChecked); } \
  NS_SCRIPTABLE NS_IMETHOD SetChecked(PRBool aChecked) { return _to SetChecked(aChecked); } \
  NS_SCRIPTABLE NS_IMETHOD GetRadiogroup(nsAString & aRadiogroup) { return _to GetRadiogroup(aRadiogroup); } \
  NS_SCRIPTABLE NS_IMETHOD SetRadiogroup(const nsAString & aRadiogroup) { return _to SetRadiogroup(aRadiogroup); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMHTMLCOMMANDELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD SetType(const nsAString & aType) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD GetLabel(nsAString & aLabel) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLabel(aLabel); } \
  NS_SCRIPTABLE NS_IMETHOD SetLabel(const nsAString & aLabel) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLabel(aLabel); } \
  NS_SCRIPTABLE NS_IMETHOD GetIcon(nsAString & aIcon) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIcon(aIcon); } \
  NS_SCRIPTABLE NS_IMETHOD SetIcon(const nsAString & aIcon) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetIcon(aIcon); } \
  NS_SCRIPTABLE NS_IMETHOD GetDisabled(PRBool *aDisabled) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDisabled(aDisabled); } \
  NS_SCRIPTABLE NS_IMETHOD SetDisabled(PRBool aDisabled) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDisabled(aDisabled); } \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultChecked(PRBool *aDefaultChecked) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDefaultChecked(aDefaultChecked); } \
  NS_SCRIPTABLE NS_IMETHOD SetDefaultChecked(PRBool aDefaultChecked) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDefaultChecked(aDefaultChecked); } \
  NS_SCRIPTABLE NS_IMETHOD GetChecked(PRBool *aChecked) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetChecked(aChecked); } \
  NS_SCRIPTABLE NS_IMETHOD SetChecked(PRBool aChecked) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetChecked(aChecked); } \
  NS_SCRIPTABLE NS_IMETHOD GetRadiogroup(nsAString & aRadiogroup) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRadiogroup(aRadiogroup); } \
  NS_SCRIPTABLE NS_IMETHOD SetRadiogroup(const nsAString & aRadiogroup) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetRadiogroup(aRadiogroup); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMHTMLCommandElement : public nsIDOMHTMLCommandElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMHTMLCOMMANDELEMENT

  nsDOMHTMLCommandElement();

private:
  ~nsDOMHTMLCommandElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMHTMLCommandElement, nsIDOMHTMLCommandElement)

nsDOMHTMLCommandElement::nsDOMHTMLCommandElement()
{
  /* member initializers and constructor code */
}

nsDOMHTMLCommandElement::~nsDOMHTMLCommandElement()
{
  /* destructor code */
}

/* attribute DOMString type; */
NS_IMETHODIMP nsDOMHTMLCommandElement::GetType(nsAString & aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLCommandElement::SetType(const nsAString & aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString label; */
NS_IMETHODIMP nsDOMHTMLCommandElement::GetLabel(nsAString & aLabel)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLCommandElement::SetLabel(const nsAString & aLabel)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString icon; */
NS_IMETHODIMP nsDOMHTMLCommandElement::GetIcon(nsAString & aIcon)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLCommandElement::SetIcon(const nsAString & aIcon)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean disabled; */
NS_IMETHODIMP nsDOMHTMLCommandElement::GetDisabled(PRBool *aDisabled)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLCommandElement::SetDisabled(PRBool aDisabled)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean defaultChecked; */
NS_IMETHODIMP nsDOMHTMLCommandElement::GetDefaultChecked(PRBool *aDefaultChecked)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLCommandElement::SetDefaultChecked(PRBool aDefaultChecked)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean checked; */
NS_IMETHODIMP nsDOMHTMLCommandElement::GetChecked(PRBool *aChecked)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLCommandElement::SetChecked(PRBool aChecked)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute DOMString radiogroup; */
NS_IMETHODIMP nsDOMHTMLCommandElement::GetRadiogroup(nsAString & aRadiogroup)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsDOMHTMLCommandElement::SetRadiogroup(const nsAString & aRadiogroup)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMHTMLCommandElement_h__ */
