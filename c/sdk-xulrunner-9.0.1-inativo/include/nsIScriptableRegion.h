/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/gfx/src/nsIScriptableRegion.idl
 */

#ifndef __gen_nsIScriptableRegion_h__
#define __gen_nsIScriptableRegion_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIntRegion;

/* starting interface:    nsIScriptableRegion */
#define NS_ISCRIPTABLEREGION_IID_STR "f390b97c-a0cf-4cb4-b9e8-bfc15df76ab5"

#define NS_ISCRIPTABLEREGION_IID \
  {0xf390b97c, 0xa0cf, 0x4cb4, \
    { 0xb9, 0xe8, 0xbf, 0xc1, 0x5d, 0xf7, 0x6a, 0xb5 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIScriptableRegion : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISCRIPTABLEREGION_IID)

  /* void init (); */
  NS_SCRIPTABLE NS_IMETHOD Init(void) = 0;

  /* void setToRegion (in nsIScriptableRegion aRegion); */
  NS_SCRIPTABLE NS_IMETHOD SetToRegion(nsIScriptableRegion *aRegion) = 0;

  /* void setToRect (in long aX, in long aY, in long aWidth, in long aHeight); */
  NS_SCRIPTABLE NS_IMETHOD SetToRect(PRInt32 aX, PRInt32 aY, PRInt32 aWidth, PRInt32 aHeight) = 0;

  /* void intersectRegion (in nsIScriptableRegion aRegion); */
  NS_SCRIPTABLE NS_IMETHOD IntersectRegion(nsIScriptableRegion *aRegion) = 0;

  /* void intersectRect (in long aX, in long aY, in long aWidth, in long aHeight); */
  NS_SCRIPTABLE NS_IMETHOD IntersectRect(PRInt32 aX, PRInt32 aY, PRInt32 aWidth, PRInt32 aHeight) = 0;

  /* void unionRegion (in nsIScriptableRegion aRegion); */
  NS_SCRIPTABLE NS_IMETHOD UnionRegion(nsIScriptableRegion *aRegion) = 0;

  /* void unionRect (in long aX, in long aY, in long aWidth, in long aHeight); */
  NS_SCRIPTABLE NS_IMETHOD UnionRect(PRInt32 aX, PRInt32 aY, PRInt32 aWidth, PRInt32 aHeight) = 0;

  /* void subtractRegion (in nsIScriptableRegion aRegion); */
  NS_SCRIPTABLE NS_IMETHOD SubtractRegion(nsIScriptableRegion *aRegion) = 0;

  /* void subtractRect (in long aX, in long aY, in long aWidth, in long aHeight); */
  NS_SCRIPTABLE NS_IMETHOD SubtractRect(PRInt32 aX, PRInt32 aY, PRInt32 aWidth, PRInt32 aHeight) = 0;

  /* boolean isEmpty (); */
  NS_SCRIPTABLE NS_IMETHOD IsEmpty(PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean isEqualRegion (in nsIScriptableRegion aRegion); */
  NS_SCRIPTABLE NS_IMETHOD IsEqualRegion(nsIScriptableRegion *aRegion, PRBool *_retval NS_OUTPARAM) = 0;

  /* void getBoundingBox (out long aX, out long aY, out long aWidth, out long aHeight); */
  NS_SCRIPTABLE NS_IMETHOD GetBoundingBox(PRInt32 *aX NS_OUTPARAM, PRInt32 *aY NS_OUTPARAM, PRInt32 *aWidth NS_OUTPARAM, PRInt32 *aHeight NS_OUTPARAM) = 0;

  /* void offset (in long aXOffset, in long aYOffset); */
  NS_SCRIPTABLE NS_IMETHOD Offset(PRInt32 aXOffset, PRInt32 aYOffset) = 0;

  /* void getRects (); */
  NS_SCRIPTABLE NS_IMETHOD GetRects(void) = 0;

  /* boolean containsRect (in long aX, in long aY, in long aWidth, in long aHeight); */
  NS_SCRIPTABLE NS_IMETHOD ContainsRect(PRInt32 aX, PRInt32 aY, PRInt32 aWidth, PRInt32 aHeight, PRBool *_retval NS_OUTPARAM) = 0;

  /* [noscript] readonly attribute nsIntRegion region; */
  NS_IMETHOD GetRegion(nsIntRegion *aRegion) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIScriptableRegion, NS_ISCRIPTABLEREGION_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISCRIPTABLEREGION \
  NS_SCRIPTABLE NS_IMETHOD Init(void); \
  NS_SCRIPTABLE NS_IMETHOD SetToRegion(nsIScriptableRegion *aRegion); \
  NS_SCRIPTABLE NS_IMETHOD SetToRect(PRInt32 aX, PRInt32 aY, PRInt32 aWidth, PRInt32 aHeight); \
  NS_SCRIPTABLE NS_IMETHOD IntersectRegion(nsIScriptableRegion *aRegion); \
  NS_SCRIPTABLE NS_IMETHOD IntersectRect(PRInt32 aX, PRInt32 aY, PRInt32 aWidth, PRInt32 aHeight); \
  NS_SCRIPTABLE NS_IMETHOD UnionRegion(nsIScriptableRegion *aRegion); \
  NS_SCRIPTABLE NS_IMETHOD UnionRect(PRInt32 aX, PRInt32 aY, PRInt32 aWidth, PRInt32 aHeight); \
  NS_SCRIPTABLE NS_IMETHOD SubtractRegion(nsIScriptableRegion *aRegion); \
  NS_SCRIPTABLE NS_IMETHOD SubtractRect(PRInt32 aX, PRInt32 aY, PRInt32 aWidth, PRInt32 aHeight); \
  NS_SCRIPTABLE NS_IMETHOD IsEmpty(PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsEqualRegion(nsIScriptableRegion *aRegion, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetBoundingBox(PRInt32 *aX NS_OUTPARAM, PRInt32 *aY NS_OUTPARAM, PRInt32 *aWidth NS_OUTPARAM, PRInt32 *aHeight NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Offset(PRInt32 aXOffset, PRInt32 aYOffset); \
  NS_SCRIPTABLE NS_IMETHOD GetRects(void); \
  NS_SCRIPTABLE NS_IMETHOD ContainsRect(PRInt32 aX, PRInt32 aY, PRInt32 aWidth, PRInt32 aHeight, PRBool *_retval NS_OUTPARAM); \
  NS_IMETHOD GetRegion(nsIntRegion *aRegion); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISCRIPTABLEREGION(_to) \
  NS_SCRIPTABLE NS_IMETHOD Init(void) { return _to Init(); } \
  NS_SCRIPTABLE NS_IMETHOD SetToRegion(nsIScriptableRegion *aRegion) { return _to SetToRegion(aRegion); } \
  NS_SCRIPTABLE NS_IMETHOD SetToRect(PRInt32 aX, PRInt32 aY, PRInt32 aWidth, PRInt32 aHeight) { return _to SetToRect(aX, aY, aWidth, aHeight); } \
  NS_SCRIPTABLE NS_IMETHOD IntersectRegion(nsIScriptableRegion *aRegion) { return _to IntersectRegion(aRegion); } \
  NS_SCRIPTABLE NS_IMETHOD IntersectRect(PRInt32 aX, PRInt32 aY, PRInt32 aWidth, PRInt32 aHeight) { return _to IntersectRect(aX, aY, aWidth, aHeight); } \
  NS_SCRIPTABLE NS_IMETHOD UnionRegion(nsIScriptableRegion *aRegion) { return _to UnionRegion(aRegion); } \
  NS_SCRIPTABLE NS_IMETHOD UnionRect(PRInt32 aX, PRInt32 aY, PRInt32 aWidth, PRInt32 aHeight) { return _to UnionRect(aX, aY, aWidth, aHeight); } \
  NS_SCRIPTABLE NS_IMETHOD SubtractRegion(nsIScriptableRegion *aRegion) { return _to SubtractRegion(aRegion); } \
  NS_SCRIPTABLE NS_IMETHOD SubtractRect(PRInt32 aX, PRInt32 aY, PRInt32 aWidth, PRInt32 aHeight) { return _to SubtractRect(aX, aY, aWidth, aHeight); } \
  NS_SCRIPTABLE NS_IMETHOD IsEmpty(PRBool *_retval NS_OUTPARAM) { return _to IsEmpty(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsEqualRegion(nsIScriptableRegion *aRegion, PRBool *_retval NS_OUTPARAM) { return _to IsEqualRegion(aRegion, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetBoundingBox(PRInt32 *aX NS_OUTPARAM, PRInt32 *aY NS_OUTPARAM, PRInt32 *aWidth NS_OUTPARAM, PRInt32 *aHeight NS_OUTPARAM) { return _to GetBoundingBox(aX, aY, aWidth, aHeight); } \
  NS_SCRIPTABLE NS_IMETHOD Offset(PRInt32 aXOffset, PRInt32 aYOffset) { return _to Offset(aXOffset, aYOffset); } \
  NS_SCRIPTABLE NS_IMETHOD GetRects(void) { return _to GetRects(); } \
  NS_SCRIPTABLE NS_IMETHOD ContainsRect(PRInt32 aX, PRInt32 aY, PRInt32 aWidth, PRInt32 aHeight, PRBool *_retval NS_OUTPARAM) { return _to ContainsRect(aX, aY, aWidth, aHeight, _retval); } \
  NS_IMETHOD GetRegion(nsIntRegion *aRegion) { return _to GetRegion(aRegion); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISCRIPTABLEREGION(_to) \
  NS_SCRIPTABLE NS_IMETHOD Init(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Init(); } \
  NS_SCRIPTABLE NS_IMETHOD SetToRegion(nsIScriptableRegion *aRegion) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetToRegion(aRegion); } \
  NS_SCRIPTABLE NS_IMETHOD SetToRect(PRInt32 aX, PRInt32 aY, PRInt32 aWidth, PRInt32 aHeight) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetToRect(aX, aY, aWidth, aHeight); } \
  NS_SCRIPTABLE NS_IMETHOD IntersectRegion(nsIScriptableRegion *aRegion) { return !_to ? NS_ERROR_NULL_POINTER : _to->IntersectRegion(aRegion); } \
  NS_SCRIPTABLE NS_IMETHOD IntersectRect(PRInt32 aX, PRInt32 aY, PRInt32 aWidth, PRInt32 aHeight) { return !_to ? NS_ERROR_NULL_POINTER : _to->IntersectRect(aX, aY, aWidth, aHeight); } \
  NS_SCRIPTABLE NS_IMETHOD UnionRegion(nsIScriptableRegion *aRegion) { return !_to ? NS_ERROR_NULL_POINTER : _to->UnionRegion(aRegion); } \
  NS_SCRIPTABLE NS_IMETHOD UnionRect(PRInt32 aX, PRInt32 aY, PRInt32 aWidth, PRInt32 aHeight) { return !_to ? NS_ERROR_NULL_POINTER : _to->UnionRect(aX, aY, aWidth, aHeight); } \
  NS_SCRIPTABLE NS_IMETHOD SubtractRegion(nsIScriptableRegion *aRegion) { return !_to ? NS_ERROR_NULL_POINTER : _to->SubtractRegion(aRegion); } \
  NS_SCRIPTABLE NS_IMETHOD SubtractRect(PRInt32 aX, PRInt32 aY, PRInt32 aWidth, PRInt32 aHeight) { return !_to ? NS_ERROR_NULL_POINTER : _to->SubtractRect(aX, aY, aWidth, aHeight); } \
  NS_SCRIPTABLE NS_IMETHOD IsEmpty(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsEmpty(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsEqualRegion(nsIScriptableRegion *aRegion, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsEqualRegion(aRegion, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetBoundingBox(PRInt32 *aX NS_OUTPARAM, PRInt32 *aY NS_OUTPARAM, PRInt32 *aWidth NS_OUTPARAM, PRInt32 *aHeight NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBoundingBox(aX, aY, aWidth, aHeight); } \
  NS_SCRIPTABLE NS_IMETHOD Offset(PRInt32 aXOffset, PRInt32 aYOffset) { return !_to ? NS_ERROR_NULL_POINTER : _to->Offset(aXOffset, aYOffset); } \
  NS_SCRIPTABLE NS_IMETHOD GetRects(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRects(); } \
  NS_SCRIPTABLE NS_IMETHOD ContainsRect(PRInt32 aX, PRInt32 aY, PRInt32 aWidth, PRInt32 aHeight, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ContainsRect(aX, aY, aWidth, aHeight, _retval); } \
  NS_IMETHOD GetRegion(nsIntRegion *aRegion) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRegion(aRegion); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsScriptableRegion : public nsIScriptableRegion
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISCRIPTABLEREGION

  nsScriptableRegion();

private:
  ~nsScriptableRegion();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsScriptableRegion, nsIScriptableRegion)

nsScriptableRegion::nsScriptableRegion()
{
  /* member initializers and constructor code */
}

nsScriptableRegion::~nsScriptableRegion()
{
  /* destructor code */
}

/* void init (); */
NS_IMETHODIMP nsScriptableRegion::Init()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setToRegion (in nsIScriptableRegion aRegion); */
NS_IMETHODIMP nsScriptableRegion::SetToRegion(nsIScriptableRegion *aRegion)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setToRect (in long aX, in long aY, in long aWidth, in long aHeight); */
NS_IMETHODIMP nsScriptableRegion::SetToRect(PRInt32 aX, PRInt32 aY, PRInt32 aWidth, PRInt32 aHeight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void intersectRegion (in nsIScriptableRegion aRegion); */
NS_IMETHODIMP nsScriptableRegion::IntersectRegion(nsIScriptableRegion *aRegion)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void intersectRect (in long aX, in long aY, in long aWidth, in long aHeight); */
NS_IMETHODIMP nsScriptableRegion::IntersectRect(PRInt32 aX, PRInt32 aY, PRInt32 aWidth, PRInt32 aHeight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void unionRegion (in nsIScriptableRegion aRegion); */
NS_IMETHODIMP nsScriptableRegion::UnionRegion(nsIScriptableRegion *aRegion)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void unionRect (in long aX, in long aY, in long aWidth, in long aHeight); */
NS_IMETHODIMP nsScriptableRegion::UnionRect(PRInt32 aX, PRInt32 aY, PRInt32 aWidth, PRInt32 aHeight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void subtractRegion (in nsIScriptableRegion aRegion); */
NS_IMETHODIMP nsScriptableRegion::SubtractRegion(nsIScriptableRegion *aRegion)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void subtractRect (in long aX, in long aY, in long aWidth, in long aHeight); */
NS_IMETHODIMP nsScriptableRegion::SubtractRect(PRInt32 aX, PRInt32 aY, PRInt32 aWidth, PRInt32 aHeight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isEmpty (); */
NS_IMETHODIMP nsScriptableRegion::IsEmpty(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isEqualRegion (in nsIScriptableRegion aRegion); */
NS_IMETHODIMP nsScriptableRegion::IsEqualRegion(nsIScriptableRegion *aRegion, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getBoundingBox (out long aX, out long aY, out long aWidth, out long aHeight); */
NS_IMETHODIMP nsScriptableRegion::GetBoundingBox(PRInt32 *aX NS_OUTPARAM, PRInt32 *aY NS_OUTPARAM, PRInt32 *aWidth NS_OUTPARAM, PRInt32 *aHeight NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void offset (in long aXOffset, in long aYOffset); */
NS_IMETHODIMP nsScriptableRegion::Offset(PRInt32 aXOffset, PRInt32 aYOffset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getRects (); */
NS_IMETHODIMP nsScriptableRegion::GetRects()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean containsRect (in long aX, in long aY, in long aWidth, in long aHeight); */
NS_IMETHODIMP nsScriptableRegion::ContainsRect(PRInt32 aX, PRInt32 aY, PRInt32 aWidth, PRInt32 aHeight, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] readonly attribute nsIntRegion region; */
NS_IMETHODIMP nsScriptableRegion::GetRegion(nsIntRegion *aRegion)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif



#endif /* __gen_nsIScriptableRegion_h__ */
