/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/html/nsIDOMDOMStringMap.idl
 */

#ifndef __gen_nsIDOMDOMStringMap_h__
#define __gen_nsIDOMDOMStringMap_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIAtom; /* forward declaration */


/* starting interface:    nsIDOMDOMStringMap */
#define NS_IDOMDOMSTRINGMAP_IID_STR "47c9ab4f-1ca3-4551-95d1-c02a93a0e74f"

#define NS_IDOMDOMSTRINGMAP_IID \
  {0x47c9ab4f, 0x1ca3, 0x4551, \
    { 0x95, 0xd1, 0xc0, 0x2a, 0x93, 0xa0, 0xe7, 0x4f }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMDOMStringMap : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMDOMSTRINGMAP_IID)

  /* [notxpcom] boolean hasDataAttr (in DOMString prop); */
  NS_IMETHOD_(PRBool) HasDataAttr(const nsAString & prop) = 0;

  /* [noscript] DOMString getDataAttr (in DOMString prop); */
  NS_IMETHOD GetDataAttr(const nsAString & prop, nsAString & _retval NS_OUTPARAM) = 0;

  /* [noscript] void setDataAttr (in DOMString prop, in DOMString value); */
  NS_IMETHOD SetDataAttr(const nsAString & prop, const nsAString & value) = 0;

  /* [notxpcom] void removeDataAttr (in DOMString prop); */
  NS_IMETHOD_(void) RemoveDataAttr(const nsAString & prop) = 0;

  /* [notxpcom] void removeProp (in nsIAtom attr); */
  NS_IMETHOD_(void) RemoveProp(nsIAtom *attr) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMDOMStringMap, NS_IDOMDOMSTRINGMAP_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMDOMSTRINGMAP \
  NS_IMETHOD_(PRBool) HasDataAttr(const nsAString & prop); \
  NS_IMETHOD GetDataAttr(const nsAString & prop, nsAString & _retval NS_OUTPARAM); \
  NS_IMETHOD SetDataAttr(const nsAString & prop, const nsAString & value); \
  NS_IMETHOD_(void) RemoveDataAttr(const nsAString & prop); \
  NS_IMETHOD_(void) RemoveProp(nsIAtom *attr); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMDOMSTRINGMAP(_to) \
  NS_IMETHOD_(PRBool) HasDataAttr(const nsAString & prop) { return _to HasDataAttr(prop); } \
  NS_IMETHOD GetDataAttr(const nsAString & prop, nsAString & _retval NS_OUTPARAM) { return _to GetDataAttr(prop, _retval); } \
  NS_IMETHOD SetDataAttr(const nsAString & prop, const nsAString & value) { return _to SetDataAttr(prop, value); } \
  NS_IMETHOD_(void) RemoveDataAttr(const nsAString & prop) { return _to RemoveDataAttr(prop); } \
  NS_IMETHOD_(void) RemoveProp(nsIAtom *attr) { return _to RemoveProp(attr); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMDOMSTRINGMAP(_to) \
  NS_IMETHOD_(PRBool) HasDataAttr(const nsAString & prop) { return !_to ? NS_ERROR_NULL_POINTER : _to->HasDataAttr(prop); } \
  NS_IMETHOD GetDataAttr(const nsAString & prop, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDataAttr(prop, _retval); } \
  NS_IMETHOD SetDataAttr(const nsAString & prop, const nsAString & value) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDataAttr(prop, value); } \
  NS_IMETHOD_(void) RemoveDataAttr(const nsAString & prop) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveDataAttr(prop); } \
  NS_IMETHOD_(void) RemoveProp(nsIAtom *attr) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveProp(attr); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMDOMStringMap : public nsIDOMDOMStringMap
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMDOMSTRINGMAP

  nsDOMDOMStringMap();

private:
  ~nsDOMDOMStringMap();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMDOMStringMap, nsIDOMDOMStringMap)

nsDOMDOMStringMap::nsDOMDOMStringMap()
{
  /* member initializers and constructor code */
}

nsDOMDOMStringMap::~nsDOMDOMStringMap()
{
  /* destructor code */
}

/* [notxpcom] boolean hasDataAttr (in DOMString prop); */
NS_IMETHODIMP_(PRBool) nsDOMDOMStringMap::HasDataAttr(const nsAString & prop)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] DOMString getDataAttr (in DOMString prop); */
NS_IMETHODIMP nsDOMDOMStringMap::GetDataAttr(const nsAString & prop, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void setDataAttr (in DOMString prop, in DOMString value); */
NS_IMETHODIMP nsDOMDOMStringMap::SetDataAttr(const nsAString & prop, const nsAString & value)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [notxpcom] void removeDataAttr (in DOMString prop); */
NS_IMETHODIMP_(void) nsDOMDOMStringMap::RemoveDataAttr(const nsAString & prop)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [notxpcom] void removeProp (in nsIAtom attr); */
NS_IMETHODIMP_(void) nsDOMDOMStringMap::RemoveProp(nsIAtom *attr)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMDOMStringMap_h__ */
