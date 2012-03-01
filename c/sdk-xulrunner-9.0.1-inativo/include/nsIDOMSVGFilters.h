/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/dom/interfaces/svg/nsIDOMSVGFilters.idl
 */

#ifndef __gen_nsIDOMSVGFilters_h__
#define __gen_nsIDOMSVGFilters_h__


#ifndef __gen_nsIDOMSVGElement_h__
#include "nsIDOMSVGElement.h"
#endif

#ifndef __gen_nsIDOMSVGStylable_h__
#include "nsIDOMSVGStylable.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMSVGAnimatedLength; /* forward declaration */

class nsIDOMSVGAnimatedString; /* forward declaration */

class nsIDOMSVGAnimatedNumber; /* forward declaration */

class nsIDOMSVGAnimatedEnumeration; /* forward declaration */

class nsIDOMSVGAnimatedNumberList; /* forward declaration */

class nsIDOMSVGAnimatedInteger; /* forward declaration */

class nsIDOMSVGAnimatedBoolean; /* forward declaration */


/* starting interface:    nsIDOMSVGFilterPrimitiveStandardAttributes */
#define NS_IDOMSVGFILTERPRIMITIVESTANDARDATTRIBUTES_IID_STR "e5ed442b-a208-41cd-8494-9670d9a19023"

#define NS_IDOMSVGFILTERPRIMITIVESTANDARDATTRIBUTES_IID \
  {0xe5ed442b, 0xa208, 0x41cd, \
    { 0x84, 0x94, 0x96, 0x70, 0xd9, 0xa1, 0x90, 0x23 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMSVGFilterPrimitiveStandardAttributes : public nsIDOMSVGElement {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMSVGFILTERPRIMITIVESTANDARDATTRIBUTES_IID)

  /* readonly attribute nsIDOMSVGAnimatedLength x; */
  NS_SCRIPTABLE NS_IMETHOD GetX(nsIDOMSVGAnimatedLength * *aX) = 0;

  /* readonly attribute nsIDOMSVGAnimatedLength y; */
  NS_SCRIPTABLE NS_IMETHOD GetY(nsIDOMSVGAnimatedLength * *aY) = 0;

  /* readonly attribute nsIDOMSVGAnimatedLength width; */
  NS_SCRIPTABLE NS_IMETHOD GetWidth(nsIDOMSVGAnimatedLength * *aWidth) = 0;

  /* readonly attribute nsIDOMSVGAnimatedLength height; */
  NS_SCRIPTABLE NS_IMETHOD GetHeight(nsIDOMSVGAnimatedLength * *aHeight) = 0;

  /* readonly attribute nsIDOMSVGAnimatedString result; */
  NS_SCRIPTABLE NS_IMETHOD GetResult(nsIDOMSVGAnimatedString * *aResult) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMSVGFilterPrimitiveStandardAttributes, NS_IDOMSVGFILTERPRIMITIVESTANDARDATTRIBUTES_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMSVGFILTERPRIMITIVESTANDARDATTRIBUTES \
  NS_SCRIPTABLE NS_IMETHOD GetX(nsIDOMSVGAnimatedLength * *aX); \
  NS_SCRIPTABLE NS_IMETHOD GetY(nsIDOMSVGAnimatedLength * *aY); \
  NS_SCRIPTABLE NS_IMETHOD GetWidth(nsIDOMSVGAnimatedLength * *aWidth); \
  NS_SCRIPTABLE NS_IMETHOD GetHeight(nsIDOMSVGAnimatedLength * *aHeight); \
  NS_SCRIPTABLE NS_IMETHOD GetResult(nsIDOMSVGAnimatedString * *aResult); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMSVGFILTERPRIMITIVESTANDARDATTRIBUTES(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetX(nsIDOMSVGAnimatedLength * *aX) { return _to GetX(aX); } \
  NS_SCRIPTABLE NS_IMETHOD GetY(nsIDOMSVGAnimatedLength * *aY) { return _to GetY(aY); } \
  NS_SCRIPTABLE NS_IMETHOD GetWidth(nsIDOMSVGAnimatedLength * *aWidth) { return _to GetWidth(aWidth); } \
  NS_SCRIPTABLE NS_IMETHOD GetHeight(nsIDOMSVGAnimatedLength * *aHeight) { return _to GetHeight(aHeight); } \
  NS_SCRIPTABLE NS_IMETHOD GetResult(nsIDOMSVGAnimatedString * *aResult) { return _to GetResult(aResult); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMSVGFILTERPRIMITIVESTANDARDATTRIBUTES(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetX(nsIDOMSVGAnimatedLength * *aX) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetX(aX); } \
  NS_SCRIPTABLE NS_IMETHOD GetY(nsIDOMSVGAnimatedLength * *aY) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetY(aY); } \
  NS_SCRIPTABLE NS_IMETHOD GetWidth(nsIDOMSVGAnimatedLength * *aWidth) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWidth(aWidth); } \
  NS_SCRIPTABLE NS_IMETHOD GetHeight(nsIDOMSVGAnimatedLength * *aHeight) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHeight(aHeight); } \
  NS_SCRIPTABLE NS_IMETHOD GetResult(nsIDOMSVGAnimatedString * *aResult) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResult(aResult); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMSVGFilterPrimitiveStandardAttributes : public nsIDOMSVGFilterPrimitiveStandardAttributes
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMSVGFILTERPRIMITIVESTANDARDATTRIBUTES

  nsDOMSVGFilterPrimitiveStandardAttributes();

private:
  ~nsDOMSVGFilterPrimitiveStandardAttributes();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMSVGFilterPrimitiveStandardAttributes, nsIDOMSVGFilterPrimitiveStandardAttributes)

nsDOMSVGFilterPrimitiveStandardAttributes::nsDOMSVGFilterPrimitiveStandardAttributes()
{
  /* member initializers and constructor code */
}

nsDOMSVGFilterPrimitiveStandardAttributes::~nsDOMSVGFilterPrimitiveStandardAttributes()
{
  /* destructor code */
}

/* readonly attribute nsIDOMSVGAnimatedLength x; */
NS_IMETHODIMP nsDOMSVGFilterPrimitiveStandardAttributes::GetX(nsIDOMSVGAnimatedLength * *aX)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedLength y; */
NS_IMETHODIMP nsDOMSVGFilterPrimitiveStandardAttributes::GetY(nsIDOMSVGAnimatedLength * *aY)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedLength width; */
NS_IMETHODIMP nsDOMSVGFilterPrimitiveStandardAttributes::GetWidth(nsIDOMSVGAnimatedLength * *aWidth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedLength height; */
NS_IMETHODIMP nsDOMSVGFilterPrimitiveStandardAttributes::GetHeight(nsIDOMSVGAnimatedLength * *aHeight)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedString result; */
NS_IMETHODIMP nsDOMSVGFilterPrimitiveStandardAttributes::GetResult(nsIDOMSVGAnimatedString * *aResult)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMSVGFEBlendElement */
#define NS_IDOMSVGFEBLENDELEMENT_IID_STR "e3538ea5-625d-485e-a902-ea6b60d47047"

#define NS_IDOMSVGFEBLENDELEMENT_IID \
  {0xe3538ea5, 0x625d, 0x485e, \
    { 0xa9, 0x02, 0xea, 0x6b, 0x60, 0xd4, 0x70, 0x47 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMSVGFEBlendElement : public nsIDOMSVGFilterPrimitiveStandardAttributes {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMSVGFEBLENDELEMENT_IID)

  enum { SVG_MODE_UNKNOWN = 0U };

  enum { SVG_MODE_NORMAL = 1U };

  enum { SVG_MODE_MULTIPLY = 2U };

  enum { SVG_MODE_SCREEN = 3U };

  enum { SVG_MODE_DARKEN = 4U };

  enum { SVG_MODE_LIGHTEN = 5U };

  /* readonly attribute nsIDOMSVGAnimatedString in1; */
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1) = 0;

  /* readonly attribute nsIDOMSVGAnimatedString in2; */
  NS_SCRIPTABLE NS_IMETHOD GetIn2(nsIDOMSVGAnimatedString * *aIn2) = 0;

  /* readonly attribute nsIDOMSVGAnimatedEnumeration mode; */
  NS_SCRIPTABLE NS_IMETHOD GetMode(nsIDOMSVGAnimatedEnumeration * *aMode) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMSVGFEBlendElement, NS_IDOMSVGFEBLENDELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMSVGFEBLENDELEMENT \
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1); \
  NS_SCRIPTABLE NS_IMETHOD GetIn2(nsIDOMSVGAnimatedString * *aIn2); \
  NS_SCRIPTABLE NS_IMETHOD GetMode(nsIDOMSVGAnimatedEnumeration * *aMode); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMSVGFEBLENDELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1) { return _to GetIn1(aIn1); } \
  NS_SCRIPTABLE NS_IMETHOD GetIn2(nsIDOMSVGAnimatedString * *aIn2) { return _to GetIn2(aIn2); } \
  NS_SCRIPTABLE NS_IMETHOD GetMode(nsIDOMSVGAnimatedEnumeration * *aMode) { return _to GetMode(aMode); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMSVGFEBLENDELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIn1(aIn1); } \
  NS_SCRIPTABLE NS_IMETHOD GetIn2(nsIDOMSVGAnimatedString * *aIn2) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIn2(aIn2); } \
  NS_SCRIPTABLE NS_IMETHOD GetMode(nsIDOMSVGAnimatedEnumeration * *aMode) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMode(aMode); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMSVGFEBlendElement : public nsIDOMSVGFEBlendElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMSVGFEBLENDELEMENT

  nsDOMSVGFEBlendElement();

private:
  ~nsDOMSVGFEBlendElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMSVGFEBlendElement, nsIDOMSVGFEBlendElement)

nsDOMSVGFEBlendElement::nsDOMSVGFEBlendElement()
{
  /* member initializers and constructor code */
}

nsDOMSVGFEBlendElement::~nsDOMSVGFEBlendElement()
{
  /* destructor code */
}

/* readonly attribute nsIDOMSVGAnimatedString in1; */
NS_IMETHODIMP nsDOMSVGFEBlendElement::GetIn1(nsIDOMSVGAnimatedString * *aIn1)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedString in2; */
NS_IMETHODIMP nsDOMSVGFEBlendElement::GetIn2(nsIDOMSVGAnimatedString * *aIn2)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedEnumeration mode; */
NS_IMETHODIMP nsDOMSVGFEBlendElement::GetMode(nsIDOMSVGAnimatedEnumeration * *aMode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMSVGFEColorMatrixElement */
#define NS_IDOMSVGFECOLORMATRIXELEMENT_IID_STR "67415934-e859-4408-aec7-e3bccf3a85c5"

#define NS_IDOMSVGFECOLORMATRIXELEMENT_IID \
  {0x67415934, 0xe859, 0x4408, \
    { 0xae, 0xc7, 0xe3, 0xbc, 0xcf, 0x3a, 0x85, 0xc5 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMSVGFEColorMatrixElement : public nsIDOMSVGFilterPrimitiveStandardAttributes {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMSVGFECOLORMATRIXELEMENT_IID)

  enum { SVG_FECOLORMATRIX_TYPE_UNKNOWN = 0U };

  enum { SVG_FECOLORMATRIX_TYPE_MATRIX = 1U };

  enum { SVG_FECOLORMATRIX_TYPE_SATURATE = 2U };

  enum { SVG_FECOLORMATRIX_TYPE_HUE_ROTATE = 3U };

  enum { SVG_FECOLORMATRIX_TYPE_LUMINANCE_TO_ALPHA = 4U };

  /* readonly attribute nsIDOMSVGAnimatedString in1; */
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1) = 0;

  /* readonly attribute nsIDOMSVGAnimatedEnumeration type; */
  NS_SCRIPTABLE NS_IMETHOD GetType(nsIDOMSVGAnimatedEnumeration * *aType) = 0;

  /* readonly attribute nsIDOMSVGAnimatedNumberList values; */
  NS_SCRIPTABLE NS_IMETHOD GetValues(nsIDOMSVGAnimatedNumberList * *aValues) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMSVGFEColorMatrixElement, NS_IDOMSVGFECOLORMATRIXELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMSVGFECOLORMATRIXELEMENT \
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1); \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsIDOMSVGAnimatedEnumeration * *aType); \
  NS_SCRIPTABLE NS_IMETHOD GetValues(nsIDOMSVGAnimatedNumberList * *aValues); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMSVGFECOLORMATRIXELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1) { return _to GetIn1(aIn1); } \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsIDOMSVGAnimatedEnumeration * *aType) { return _to GetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD GetValues(nsIDOMSVGAnimatedNumberList * *aValues) { return _to GetValues(aValues); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMSVGFECOLORMATRIXELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIn1(aIn1); } \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsIDOMSVGAnimatedEnumeration * *aType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD GetValues(nsIDOMSVGAnimatedNumberList * *aValues) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetValues(aValues); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMSVGFEColorMatrixElement : public nsIDOMSVGFEColorMatrixElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMSVGFECOLORMATRIXELEMENT

  nsDOMSVGFEColorMatrixElement();

private:
  ~nsDOMSVGFEColorMatrixElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMSVGFEColorMatrixElement, nsIDOMSVGFEColorMatrixElement)

nsDOMSVGFEColorMatrixElement::nsDOMSVGFEColorMatrixElement()
{
  /* member initializers and constructor code */
}

nsDOMSVGFEColorMatrixElement::~nsDOMSVGFEColorMatrixElement()
{
  /* destructor code */
}

/* readonly attribute nsIDOMSVGAnimatedString in1; */
NS_IMETHODIMP nsDOMSVGFEColorMatrixElement::GetIn1(nsIDOMSVGAnimatedString * *aIn1)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedEnumeration type; */
NS_IMETHODIMP nsDOMSVGFEColorMatrixElement::GetType(nsIDOMSVGAnimatedEnumeration * *aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedNumberList values; */
NS_IMETHODIMP nsDOMSVGFEColorMatrixElement::GetValues(nsIDOMSVGAnimatedNumberList * *aValues)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMSVGFEComponentTransferElement */
#define NS_IDOMSVGFECOMPONENTTRANSFERELEMENT_IID_STR "75159f44-2f78-4d4d-8136-a6c23070f187"

#define NS_IDOMSVGFECOMPONENTTRANSFERELEMENT_IID \
  {0x75159f44, 0x2f78, 0x4d4d, \
    { 0x81, 0x36, 0xa6, 0xc2, 0x30, 0x70, 0xf1, 0x87 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMSVGFEComponentTransferElement : public nsIDOMSVGFilterPrimitiveStandardAttributes {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMSVGFECOMPONENTTRANSFERELEMENT_IID)

  /* readonly attribute nsIDOMSVGAnimatedString in1; */
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMSVGFEComponentTransferElement, NS_IDOMSVGFECOMPONENTTRANSFERELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMSVGFECOMPONENTTRANSFERELEMENT \
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMSVGFECOMPONENTTRANSFERELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1) { return _to GetIn1(aIn1); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMSVGFECOMPONENTTRANSFERELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIn1(aIn1); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMSVGFEComponentTransferElement : public nsIDOMSVGFEComponentTransferElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMSVGFECOMPONENTTRANSFERELEMENT

  nsDOMSVGFEComponentTransferElement();

private:
  ~nsDOMSVGFEComponentTransferElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMSVGFEComponentTransferElement, nsIDOMSVGFEComponentTransferElement)

nsDOMSVGFEComponentTransferElement::nsDOMSVGFEComponentTransferElement()
{
  /* member initializers and constructor code */
}

nsDOMSVGFEComponentTransferElement::~nsDOMSVGFEComponentTransferElement()
{
  /* destructor code */
}

/* readonly attribute nsIDOMSVGAnimatedString in1; */
NS_IMETHODIMP nsDOMSVGFEComponentTransferElement::GetIn1(nsIDOMSVGAnimatedString * *aIn1)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMSVGComponentTransferFunctionElement */
#define NS_IDOMSVGCOMPONENTTRANSFERFUNCTIONELEMENT_IID_STR "819d470b-9d0d-40c6-8379-acaa026bdbac"

#define NS_IDOMSVGCOMPONENTTRANSFERFUNCTIONELEMENT_IID \
  {0x819d470b, 0x9d0d, 0x40c6, \
    { 0x83, 0x79, 0xac, 0xaa, 0x02, 0x6b, 0xdb, 0xac }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMSVGComponentTransferFunctionElement : public nsIDOMSVGElement {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMSVGCOMPONENTTRANSFERFUNCTIONELEMENT_IID)

  enum { SVG_FECOMPONENTTRANSFER_TYPE_UNKNOWN = 0U };

  enum { SVG_FECOMPONENTTRANSFER_TYPE_IDENTITY = 1U };

  enum { SVG_FECOMPONENTTRANSFER_TYPE_TABLE = 2U };

  enum { SVG_FECOMPONENTTRANSFER_TYPE_DISCRETE = 3U };

  enum { SVG_FECOMPONENTTRANSFER_TYPE_LINEAR = 4U };

  enum { SVG_FECOMPONENTTRANSFER_TYPE_GAMMA = 5U };

  /* readonly attribute nsIDOMSVGAnimatedEnumeration type; */
  NS_SCRIPTABLE NS_IMETHOD GetType(nsIDOMSVGAnimatedEnumeration * *aType) = 0;

  /* readonly attribute nsIDOMSVGAnimatedNumberList tableValues; */
  NS_SCRIPTABLE NS_IMETHOD GetTableValues(nsIDOMSVGAnimatedNumberList * *aTableValues) = 0;

  /* readonly attribute nsIDOMSVGAnimatedNumber slope; */
  NS_SCRIPTABLE NS_IMETHOD GetSlope(nsIDOMSVGAnimatedNumber * *aSlope) = 0;

  /* readonly attribute nsIDOMSVGAnimatedNumber intercept; */
  NS_SCRIPTABLE NS_IMETHOD GetIntercept(nsIDOMSVGAnimatedNumber * *aIntercept) = 0;

  /* readonly attribute nsIDOMSVGAnimatedNumber amplitude; */
  NS_SCRIPTABLE NS_IMETHOD GetAmplitude(nsIDOMSVGAnimatedNumber * *aAmplitude) = 0;

  /* readonly attribute nsIDOMSVGAnimatedNumber exponent; */
  NS_SCRIPTABLE NS_IMETHOD GetExponent(nsIDOMSVGAnimatedNumber * *aExponent) = 0;

  /* readonly attribute nsIDOMSVGAnimatedNumber offset; */
  NS_SCRIPTABLE NS_IMETHOD GetOffset(nsIDOMSVGAnimatedNumber * *aOffset) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMSVGComponentTransferFunctionElement, NS_IDOMSVGCOMPONENTTRANSFERFUNCTIONELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMSVGCOMPONENTTRANSFERFUNCTIONELEMENT \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsIDOMSVGAnimatedEnumeration * *aType); \
  NS_SCRIPTABLE NS_IMETHOD GetTableValues(nsIDOMSVGAnimatedNumberList * *aTableValues); \
  NS_SCRIPTABLE NS_IMETHOD GetSlope(nsIDOMSVGAnimatedNumber * *aSlope); \
  NS_SCRIPTABLE NS_IMETHOD GetIntercept(nsIDOMSVGAnimatedNumber * *aIntercept); \
  NS_SCRIPTABLE NS_IMETHOD GetAmplitude(nsIDOMSVGAnimatedNumber * *aAmplitude); \
  NS_SCRIPTABLE NS_IMETHOD GetExponent(nsIDOMSVGAnimatedNumber * *aExponent); \
  NS_SCRIPTABLE NS_IMETHOD GetOffset(nsIDOMSVGAnimatedNumber * *aOffset); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMSVGCOMPONENTTRANSFERFUNCTIONELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsIDOMSVGAnimatedEnumeration * *aType) { return _to GetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD GetTableValues(nsIDOMSVGAnimatedNumberList * *aTableValues) { return _to GetTableValues(aTableValues); } \
  NS_SCRIPTABLE NS_IMETHOD GetSlope(nsIDOMSVGAnimatedNumber * *aSlope) { return _to GetSlope(aSlope); } \
  NS_SCRIPTABLE NS_IMETHOD GetIntercept(nsIDOMSVGAnimatedNumber * *aIntercept) { return _to GetIntercept(aIntercept); } \
  NS_SCRIPTABLE NS_IMETHOD GetAmplitude(nsIDOMSVGAnimatedNumber * *aAmplitude) { return _to GetAmplitude(aAmplitude); } \
  NS_SCRIPTABLE NS_IMETHOD GetExponent(nsIDOMSVGAnimatedNumber * *aExponent) { return _to GetExponent(aExponent); } \
  NS_SCRIPTABLE NS_IMETHOD GetOffset(nsIDOMSVGAnimatedNumber * *aOffset) { return _to GetOffset(aOffset); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMSVGCOMPONENTTRANSFERFUNCTIONELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsIDOMSVGAnimatedEnumeration * *aType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD GetTableValues(nsIDOMSVGAnimatedNumberList * *aTableValues) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTableValues(aTableValues); } \
  NS_SCRIPTABLE NS_IMETHOD GetSlope(nsIDOMSVGAnimatedNumber * *aSlope) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSlope(aSlope); } \
  NS_SCRIPTABLE NS_IMETHOD GetIntercept(nsIDOMSVGAnimatedNumber * *aIntercept) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIntercept(aIntercept); } \
  NS_SCRIPTABLE NS_IMETHOD GetAmplitude(nsIDOMSVGAnimatedNumber * *aAmplitude) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAmplitude(aAmplitude); } \
  NS_SCRIPTABLE NS_IMETHOD GetExponent(nsIDOMSVGAnimatedNumber * *aExponent) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetExponent(aExponent); } \
  NS_SCRIPTABLE NS_IMETHOD GetOffset(nsIDOMSVGAnimatedNumber * *aOffset) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOffset(aOffset); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMSVGComponentTransferFunctionElement : public nsIDOMSVGComponentTransferFunctionElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMSVGCOMPONENTTRANSFERFUNCTIONELEMENT

  nsDOMSVGComponentTransferFunctionElement();

private:
  ~nsDOMSVGComponentTransferFunctionElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMSVGComponentTransferFunctionElement, nsIDOMSVGComponentTransferFunctionElement)

nsDOMSVGComponentTransferFunctionElement::nsDOMSVGComponentTransferFunctionElement()
{
  /* member initializers and constructor code */
}

nsDOMSVGComponentTransferFunctionElement::~nsDOMSVGComponentTransferFunctionElement()
{
  /* destructor code */
}

/* readonly attribute nsIDOMSVGAnimatedEnumeration type; */
NS_IMETHODIMP nsDOMSVGComponentTransferFunctionElement::GetType(nsIDOMSVGAnimatedEnumeration * *aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedNumberList tableValues; */
NS_IMETHODIMP nsDOMSVGComponentTransferFunctionElement::GetTableValues(nsIDOMSVGAnimatedNumberList * *aTableValues)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedNumber slope; */
NS_IMETHODIMP nsDOMSVGComponentTransferFunctionElement::GetSlope(nsIDOMSVGAnimatedNumber * *aSlope)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedNumber intercept; */
NS_IMETHODIMP nsDOMSVGComponentTransferFunctionElement::GetIntercept(nsIDOMSVGAnimatedNumber * *aIntercept)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedNumber amplitude; */
NS_IMETHODIMP nsDOMSVGComponentTransferFunctionElement::GetAmplitude(nsIDOMSVGAnimatedNumber * *aAmplitude)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedNumber exponent; */
NS_IMETHODIMP nsDOMSVGComponentTransferFunctionElement::GetExponent(nsIDOMSVGAnimatedNumber * *aExponent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedNumber offset; */
NS_IMETHODIMP nsDOMSVGComponentTransferFunctionElement::GetOffset(nsIDOMSVGAnimatedNumber * *aOffset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMSVGFECompositeElement */
#define NS_IDOMSVGFECOMPOSITEELEMENT_IID_STR "5566215e-fbbd-4a65-975b-32f900ff593e"

#define NS_IDOMSVGFECOMPOSITEELEMENT_IID \
  {0x5566215e, 0xfbbd, 0x4a65, \
    { 0x97, 0x5b, 0x32, 0xf9, 0x00, 0xff, 0x59, 0x3e }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMSVGFECompositeElement : public nsIDOMSVGFilterPrimitiveStandardAttributes {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMSVGFECOMPOSITEELEMENT_IID)

  enum { SVG_OPERATOR_UNKNOWN = 0U };

  enum { SVG_OPERATOR_OVER = 1U };

  enum { SVG_OPERATOR_IN = 2U };

  enum { SVG_OPERATOR_OUT = 3U };

  enum { SVG_OPERATOR_ATOP = 4U };

  enum { SVG_OPERATOR_XOR = 5U };

  enum { SVG_OPERATOR_ARITHMETIC = 6U };

  /* readonly attribute nsIDOMSVGAnimatedString in1; */
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1) = 0;

  /* readonly attribute nsIDOMSVGAnimatedString in2; */
  NS_SCRIPTABLE NS_IMETHOD GetIn2(nsIDOMSVGAnimatedString * *aIn2) = 0;

  /* readonly attribute nsIDOMSVGAnimatedNumber k1; */
  NS_SCRIPTABLE NS_IMETHOD GetK1(nsIDOMSVGAnimatedNumber * *aK1) = 0;

  /* readonly attribute nsIDOMSVGAnimatedNumber k2; */
  NS_SCRIPTABLE NS_IMETHOD GetK2(nsIDOMSVGAnimatedNumber * *aK2) = 0;

  /* readonly attribute nsIDOMSVGAnimatedNumber k3; */
  NS_SCRIPTABLE NS_IMETHOD GetK3(nsIDOMSVGAnimatedNumber * *aK3) = 0;

  /* readonly attribute nsIDOMSVGAnimatedNumber k4; */
  NS_SCRIPTABLE NS_IMETHOD GetK4(nsIDOMSVGAnimatedNumber * *aK4) = 0;

  /* readonly attribute nsIDOMSVGAnimatedEnumeration operator; */
  NS_SCRIPTABLE NS_IMETHOD GetOperator(nsIDOMSVGAnimatedEnumeration * *aOperator) = 0;

  /* void setK (in float k1, in float k2, in float k3, in float k4); */
  NS_SCRIPTABLE NS_IMETHOD SetK(float k1, float k2, float k3, float k4) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMSVGFECompositeElement, NS_IDOMSVGFECOMPOSITEELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMSVGFECOMPOSITEELEMENT \
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1); \
  NS_SCRIPTABLE NS_IMETHOD GetIn2(nsIDOMSVGAnimatedString * *aIn2); \
  NS_SCRIPTABLE NS_IMETHOD GetK1(nsIDOMSVGAnimatedNumber * *aK1); \
  NS_SCRIPTABLE NS_IMETHOD GetK2(nsIDOMSVGAnimatedNumber * *aK2); \
  NS_SCRIPTABLE NS_IMETHOD GetK3(nsIDOMSVGAnimatedNumber * *aK3); \
  NS_SCRIPTABLE NS_IMETHOD GetK4(nsIDOMSVGAnimatedNumber * *aK4); \
  NS_SCRIPTABLE NS_IMETHOD GetOperator(nsIDOMSVGAnimatedEnumeration * *aOperator); \
  NS_SCRIPTABLE NS_IMETHOD SetK(float k1, float k2, float k3, float k4); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMSVGFECOMPOSITEELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1) { return _to GetIn1(aIn1); } \
  NS_SCRIPTABLE NS_IMETHOD GetIn2(nsIDOMSVGAnimatedString * *aIn2) { return _to GetIn2(aIn2); } \
  NS_SCRIPTABLE NS_IMETHOD GetK1(nsIDOMSVGAnimatedNumber * *aK1) { return _to GetK1(aK1); } \
  NS_SCRIPTABLE NS_IMETHOD GetK2(nsIDOMSVGAnimatedNumber * *aK2) { return _to GetK2(aK2); } \
  NS_SCRIPTABLE NS_IMETHOD GetK3(nsIDOMSVGAnimatedNumber * *aK3) { return _to GetK3(aK3); } \
  NS_SCRIPTABLE NS_IMETHOD GetK4(nsIDOMSVGAnimatedNumber * *aK4) { return _to GetK4(aK4); } \
  NS_SCRIPTABLE NS_IMETHOD GetOperator(nsIDOMSVGAnimatedEnumeration * *aOperator) { return _to GetOperator(aOperator); } \
  NS_SCRIPTABLE NS_IMETHOD SetK(float k1, float k2, float k3, float k4) { return _to SetK(k1, k2, k3, k4); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMSVGFECOMPOSITEELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIn1(aIn1); } \
  NS_SCRIPTABLE NS_IMETHOD GetIn2(nsIDOMSVGAnimatedString * *aIn2) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIn2(aIn2); } \
  NS_SCRIPTABLE NS_IMETHOD GetK1(nsIDOMSVGAnimatedNumber * *aK1) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetK1(aK1); } \
  NS_SCRIPTABLE NS_IMETHOD GetK2(nsIDOMSVGAnimatedNumber * *aK2) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetK2(aK2); } \
  NS_SCRIPTABLE NS_IMETHOD GetK3(nsIDOMSVGAnimatedNumber * *aK3) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetK3(aK3); } \
  NS_SCRIPTABLE NS_IMETHOD GetK4(nsIDOMSVGAnimatedNumber * *aK4) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetK4(aK4); } \
  NS_SCRIPTABLE NS_IMETHOD GetOperator(nsIDOMSVGAnimatedEnumeration * *aOperator) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOperator(aOperator); } \
  NS_SCRIPTABLE NS_IMETHOD SetK(float k1, float k2, float k3, float k4) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetK(k1, k2, k3, k4); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMSVGFECompositeElement : public nsIDOMSVGFECompositeElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMSVGFECOMPOSITEELEMENT

  nsDOMSVGFECompositeElement();

private:
  ~nsDOMSVGFECompositeElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMSVGFECompositeElement, nsIDOMSVGFECompositeElement)

nsDOMSVGFECompositeElement::nsDOMSVGFECompositeElement()
{
  /* member initializers and constructor code */
}

nsDOMSVGFECompositeElement::~nsDOMSVGFECompositeElement()
{
  /* destructor code */
}

/* readonly attribute nsIDOMSVGAnimatedString in1; */
NS_IMETHODIMP nsDOMSVGFECompositeElement::GetIn1(nsIDOMSVGAnimatedString * *aIn1)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedString in2; */
NS_IMETHODIMP nsDOMSVGFECompositeElement::GetIn2(nsIDOMSVGAnimatedString * *aIn2)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedNumber k1; */
NS_IMETHODIMP nsDOMSVGFECompositeElement::GetK1(nsIDOMSVGAnimatedNumber * *aK1)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedNumber k2; */
NS_IMETHODIMP nsDOMSVGFECompositeElement::GetK2(nsIDOMSVGAnimatedNumber * *aK2)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedNumber k3; */
NS_IMETHODIMP nsDOMSVGFECompositeElement::GetK3(nsIDOMSVGAnimatedNumber * *aK3)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedNumber k4; */
NS_IMETHODIMP nsDOMSVGFECompositeElement::GetK4(nsIDOMSVGAnimatedNumber * *aK4)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedEnumeration operator; */
NS_IMETHODIMP nsDOMSVGFECompositeElement::GetOperator(nsIDOMSVGAnimatedEnumeration * *aOperator)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setK (in float k1, in float k2, in float k3, in float k4); */
NS_IMETHODIMP nsDOMSVGFECompositeElement::SetK(float k1, float k2, float k3, float k4)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMSVGFEFuncRElement */
#define NS_IDOMSVGFEFUNCRELEMENT_IID_STR "652da357-e3e3-4398-bc08-8dedd24fafba"

#define NS_IDOMSVGFEFUNCRELEMENT_IID \
  {0x652da357, 0xe3e3, 0x4398, \
    { 0xbc, 0x08, 0x8d, 0xed, 0xd2, 0x4f, 0xaf, 0xba }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMSVGFEFuncRElement : public nsIDOMSVGComponentTransferFunctionElement {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMSVGFEFUNCRELEMENT_IID)

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMSVGFEFuncRElement, NS_IDOMSVGFEFUNCRELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMSVGFEFUNCRELEMENT \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMSVGFEFUNCRELEMENT(_to) \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMSVGFEFUNCRELEMENT(_to) \
  /* no methods! */

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMSVGFEFuncRElement : public nsIDOMSVGFEFuncRElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMSVGFEFUNCRELEMENT

  nsDOMSVGFEFuncRElement();

private:
  ~nsDOMSVGFEFuncRElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMSVGFEFuncRElement, nsIDOMSVGFEFuncRElement)

nsDOMSVGFEFuncRElement::nsDOMSVGFEFuncRElement()
{
  /* member initializers and constructor code */
}

nsDOMSVGFEFuncRElement::~nsDOMSVGFEFuncRElement()
{
  /* destructor code */
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMSVGFEFuncGElement */
#define NS_IDOMSVGFEFUNCGELEMENT_IID_STR "d525c67b-0b22-4037-936c-477d0cba2279"

#define NS_IDOMSVGFEFUNCGELEMENT_IID \
  {0xd525c67b, 0x0b22, 0x4037, \
    { 0x93, 0x6c, 0x47, 0x7d, 0x0c, 0xba, 0x22, 0x79 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMSVGFEFuncGElement : public nsIDOMSVGComponentTransferFunctionElement {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMSVGFEFUNCGELEMENT_IID)

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMSVGFEFuncGElement, NS_IDOMSVGFEFUNCGELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMSVGFEFUNCGELEMENT \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMSVGFEFUNCGELEMENT(_to) \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMSVGFEFUNCGELEMENT(_to) \
  /* no methods! */

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMSVGFEFuncGElement : public nsIDOMSVGFEFuncGElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMSVGFEFUNCGELEMENT

  nsDOMSVGFEFuncGElement();

private:
  ~nsDOMSVGFEFuncGElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMSVGFEFuncGElement, nsIDOMSVGFEFuncGElement)

nsDOMSVGFEFuncGElement::nsDOMSVGFEFuncGElement()
{
  /* member initializers and constructor code */
}

nsDOMSVGFEFuncGElement::~nsDOMSVGFEFuncGElement()
{
  /* destructor code */
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMSVGFEFuncBElement */
#define NS_IDOMSVGFEFUNCBELEMENT_IID_STR "157a90f8-018e-4f6c-afed-4083f1062643"

#define NS_IDOMSVGFEFUNCBELEMENT_IID \
  {0x157a90f8, 0x018e, 0x4f6c, \
    { 0xaf, 0xed, 0x40, 0x83, 0xf1, 0x06, 0x26, 0x43 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMSVGFEFuncBElement : public nsIDOMSVGComponentTransferFunctionElement {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMSVGFEFUNCBELEMENT_IID)

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMSVGFEFuncBElement, NS_IDOMSVGFEFUNCBELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMSVGFEFUNCBELEMENT \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMSVGFEFUNCBELEMENT(_to) \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMSVGFEFUNCBELEMENT(_to) \
  /* no methods! */

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMSVGFEFuncBElement : public nsIDOMSVGFEFuncBElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMSVGFEFUNCBELEMENT

  nsDOMSVGFEFuncBElement();

private:
  ~nsDOMSVGFEFuncBElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMSVGFEFuncBElement, nsIDOMSVGFEFuncBElement)

nsDOMSVGFEFuncBElement::nsDOMSVGFEFuncBElement()
{
  /* member initializers and constructor code */
}

nsDOMSVGFEFuncBElement::~nsDOMSVGFEFuncBElement()
{
  /* destructor code */
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMSVGFEFuncAElement */
#define NS_IDOMSVGFEFUNCAELEMENT_IID_STR "8b3f860a-3cdc-4495-87fe-99adb5845a91"

#define NS_IDOMSVGFEFUNCAELEMENT_IID \
  {0x8b3f860a, 0x3cdc, 0x4495, \
    { 0x87, 0xfe, 0x99, 0xad, 0xb5, 0x84, 0x5a, 0x91 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMSVGFEFuncAElement : public nsIDOMSVGComponentTransferFunctionElement {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMSVGFEFUNCAELEMENT_IID)

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMSVGFEFuncAElement, NS_IDOMSVGFEFUNCAELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMSVGFEFUNCAELEMENT \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMSVGFEFUNCAELEMENT(_to) \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMSVGFEFUNCAELEMENT(_to) \
  /* no methods! */

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMSVGFEFuncAElement : public nsIDOMSVGFEFuncAElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMSVGFEFUNCAELEMENT

  nsDOMSVGFEFuncAElement();

private:
  ~nsDOMSVGFEFuncAElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMSVGFEFuncAElement, nsIDOMSVGFEFuncAElement)

nsDOMSVGFEFuncAElement::nsDOMSVGFEFuncAElement()
{
  /* member initializers and constructor code */
}

nsDOMSVGFEFuncAElement::~nsDOMSVGFEFuncAElement()
{
  /* destructor code */
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMSVGFEGaussianBlurElement */
#define NS_IDOMSVGFEGAUSSIANBLURELEMENT_IID_STR "c0dba6ef-014a-4b90-9f57-f6b52a624738"

#define NS_IDOMSVGFEGAUSSIANBLURELEMENT_IID \
  {0xc0dba6ef, 0x014a, 0x4b90, \
    { 0x9f, 0x57, 0xf6, 0xb5, 0x2a, 0x62, 0x47, 0x38 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMSVGFEGaussianBlurElement : public nsIDOMSVGFilterPrimitiveStandardAttributes {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMSVGFEGAUSSIANBLURELEMENT_IID)

  /* readonly attribute nsIDOMSVGAnimatedString in1; */
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1) = 0;

  /* readonly attribute nsIDOMSVGAnimatedNumber stdDeviationX; */
  NS_SCRIPTABLE NS_IMETHOD GetStdDeviationX(nsIDOMSVGAnimatedNumber * *aStdDeviationX) = 0;

  /* readonly attribute nsIDOMSVGAnimatedNumber stdDeviationY; */
  NS_SCRIPTABLE NS_IMETHOD GetStdDeviationY(nsIDOMSVGAnimatedNumber * *aStdDeviationY) = 0;

  /* void setStdDeviation (in float stdDeviationX, in float stdDeviationY); */
  NS_SCRIPTABLE NS_IMETHOD SetStdDeviation(float stdDeviationX, float stdDeviationY) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMSVGFEGaussianBlurElement, NS_IDOMSVGFEGAUSSIANBLURELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMSVGFEGAUSSIANBLURELEMENT \
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1); \
  NS_SCRIPTABLE NS_IMETHOD GetStdDeviationX(nsIDOMSVGAnimatedNumber * *aStdDeviationX); \
  NS_SCRIPTABLE NS_IMETHOD GetStdDeviationY(nsIDOMSVGAnimatedNumber * *aStdDeviationY); \
  NS_SCRIPTABLE NS_IMETHOD SetStdDeviation(float stdDeviationX, float stdDeviationY); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMSVGFEGAUSSIANBLURELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1) { return _to GetIn1(aIn1); } \
  NS_SCRIPTABLE NS_IMETHOD GetStdDeviationX(nsIDOMSVGAnimatedNumber * *aStdDeviationX) { return _to GetStdDeviationX(aStdDeviationX); } \
  NS_SCRIPTABLE NS_IMETHOD GetStdDeviationY(nsIDOMSVGAnimatedNumber * *aStdDeviationY) { return _to GetStdDeviationY(aStdDeviationY); } \
  NS_SCRIPTABLE NS_IMETHOD SetStdDeviation(float stdDeviationX, float stdDeviationY) { return _to SetStdDeviation(stdDeviationX, stdDeviationY); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMSVGFEGAUSSIANBLURELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIn1(aIn1); } \
  NS_SCRIPTABLE NS_IMETHOD GetStdDeviationX(nsIDOMSVGAnimatedNumber * *aStdDeviationX) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStdDeviationX(aStdDeviationX); } \
  NS_SCRIPTABLE NS_IMETHOD GetStdDeviationY(nsIDOMSVGAnimatedNumber * *aStdDeviationY) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStdDeviationY(aStdDeviationY); } \
  NS_SCRIPTABLE NS_IMETHOD SetStdDeviation(float stdDeviationX, float stdDeviationY) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetStdDeviation(stdDeviationX, stdDeviationY); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMSVGFEGaussianBlurElement : public nsIDOMSVGFEGaussianBlurElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMSVGFEGAUSSIANBLURELEMENT

  nsDOMSVGFEGaussianBlurElement();

private:
  ~nsDOMSVGFEGaussianBlurElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMSVGFEGaussianBlurElement, nsIDOMSVGFEGaussianBlurElement)

nsDOMSVGFEGaussianBlurElement::nsDOMSVGFEGaussianBlurElement()
{
  /* member initializers and constructor code */
}

nsDOMSVGFEGaussianBlurElement::~nsDOMSVGFEGaussianBlurElement()
{
  /* destructor code */
}

/* readonly attribute nsIDOMSVGAnimatedString in1; */
NS_IMETHODIMP nsDOMSVGFEGaussianBlurElement::GetIn1(nsIDOMSVGAnimatedString * *aIn1)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedNumber stdDeviationX; */
NS_IMETHODIMP nsDOMSVGFEGaussianBlurElement::GetStdDeviationX(nsIDOMSVGAnimatedNumber * *aStdDeviationX)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedNumber stdDeviationY; */
NS_IMETHODIMP nsDOMSVGFEGaussianBlurElement::GetStdDeviationY(nsIDOMSVGAnimatedNumber * *aStdDeviationY)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setStdDeviation (in float stdDeviationX, in float stdDeviationY); */
NS_IMETHODIMP nsDOMSVGFEGaussianBlurElement::SetStdDeviation(float stdDeviationX, float stdDeviationY)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMSVGFEMergeElement */
#define NS_IDOMSVGFEMERGEELEMENT_IID_STR "147077be-9b75-487f-9c6a-b941d797dc6d"

#define NS_IDOMSVGFEMERGEELEMENT_IID \
  {0x147077be, 0x9b75, 0x487f, \
    { 0x9c, 0x6a, 0xb9, 0x41, 0xd7, 0x97, 0xdc, 0x6d }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMSVGFEMergeElement : public nsIDOMSVGFilterPrimitiveStandardAttributes {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMSVGFEMERGEELEMENT_IID)

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMSVGFEMergeElement, NS_IDOMSVGFEMERGEELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMSVGFEMERGEELEMENT \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMSVGFEMERGEELEMENT(_to) \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMSVGFEMERGEELEMENT(_to) \
  /* no methods! */

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMSVGFEMergeElement : public nsIDOMSVGFEMergeElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMSVGFEMERGEELEMENT

  nsDOMSVGFEMergeElement();

private:
  ~nsDOMSVGFEMergeElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMSVGFEMergeElement, nsIDOMSVGFEMergeElement)

nsDOMSVGFEMergeElement::nsDOMSVGFEMergeElement()
{
  /* member initializers and constructor code */
}

nsDOMSVGFEMergeElement::~nsDOMSVGFEMergeElement()
{
  /* destructor code */
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMSVGFEMergeNodeElement */
#define NS_IDOMSVGFEMERGENODEELEMENT_IID_STR "ca45efa5-f3d5-4160-ae5e-8c6a6c80b308"

#define NS_IDOMSVGFEMERGENODEELEMENT_IID \
  {0xca45efa5, 0xf3d5, 0x4160, \
    { 0xae, 0x5e, 0x8c, 0x6a, 0x6c, 0x80, 0xb3, 0x08 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMSVGFEMergeNodeElement : public nsIDOMSVGElement {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMSVGFEMERGENODEELEMENT_IID)

  /* readonly attribute nsIDOMSVGAnimatedString in1; */
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMSVGFEMergeNodeElement, NS_IDOMSVGFEMERGENODEELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMSVGFEMERGENODEELEMENT \
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMSVGFEMERGENODEELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1) { return _to GetIn1(aIn1); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMSVGFEMERGENODEELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIn1(aIn1); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMSVGFEMergeNodeElement : public nsIDOMSVGFEMergeNodeElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMSVGFEMERGENODEELEMENT

  nsDOMSVGFEMergeNodeElement();

private:
  ~nsDOMSVGFEMergeNodeElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMSVGFEMergeNodeElement, nsIDOMSVGFEMergeNodeElement)

nsDOMSVGFEMergeNodeElement::nsDOMSVGFEMergeNodeElement()
{
  /* member initializers and constructor code */
}

nsDOMSVGFEMergeNodeElement::~nsDOMSVGFEMergeNodeElement()
{
  /* destructor code */
}

/* readonly attribute nsIDOMSVGAnimatedString in1; */
NS_IMETHODIMP nsDOMSVGFEMergeNodeElement::GetIn1(nsIDOMSVGAnimatedString * *aIn1)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMSVGFEOffsetElement */
#define NS_IDOMSVGFEOFFSETELEMENT_IID_STR "5ce4bdf0-6ef5-41b8-8be6-d936c88dfbb5"

#define NS_IDOMSVGFEOFFSETELEMENT_IID \
  {0x5ce4bdf0, 0x6ef5, 0x41b8, \
    { 0x8b, 0xe6, 0xd9, 0x36, 0xc8, 0x8d, 0xfb, 0xb5 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMSVGFEOffsetElement : public nsIDOMSVGFilterPrimitiveStandardAttributes {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMSVGFEOFFSETELEMENT_IID)

  /* readonly attribute nsIDOMSVGAnimatedString in1; */
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1) = 0;

  /* readonly attribute nsIDOMSVGAnimatedNumber dx; */
  NS_SCRIPTABLE NS_IMETHOD GetDx(nsIDOMSVGAnimatedNumber * *aDx) = 0;

  /* readonly attribute nsIDOMSVGAnimatedNumber dy; */
  NS_SCRIPTABLE NS_IMETHOD GetDy(nsIDOMSVGAnimatedNumber * *aDy) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMSVGFEOffsetElement, NS_IDOMSVGFEOFFSETELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMSVGFEOFFSETELEMENT \
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1); \
  NS_SCRIPTABLE NS_IMETHOD GetDx(nsIDOMSVGAnimatedNumber * *aDx); \
  NS_SCRIPTABLE NS_IMETHOD GetDy(nsIDOMSVGAnimatedNumber * *aDy); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMSVGFEOFFSETELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1) { return _to GetIn1(aIn1); } \
  NS_SCRIPTABLE NS_IMETHOD GetDx(nsIDOMSVGAnimatedNumber * *aDx) { return _to GetDx(aDx); } \
  NS_SCRIPTABLE NS_IMETHOD GetDy(nsIDOMSVGAnimatedNumber * *aDy) { return _to GetDy(aDy); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMSVGFEOFFSETELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIn1(aIn1); } \
  NS_SCRIPTABLE NS_IMETHOD GetDx(nsIDOMSVGAnimatedNumber * *aDx) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDx(aDx); } \
  NS_SCRIPTABLE NS_IMETHOD GetDy(nsIDOMSVGAnimatedNumber * *aDy) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDy(aDy); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMSVGFEOffsetElement : public nsIDOMSVGFEOffsetElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMSVGFEOFFSETELEMENT

  nsDOMSVGFEOffsetElement();

private:
  ~nsDOMSVGFEOffsetElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMSVGFEOffsetElement, nsIDOMSVGFEOffsetElement)

nsDOMSVGFEOffsetElement::nsDOMSVGFEOffsetElement()
{
  /* member initializers and constructor code */
}

nsDOMSVGFEOffsetElement::~nsDOMSVGFEOffsetElement()
{
  /* destructor code */
}

/* readonly attribute nsIDOMSVGAnimatedString in1; */
NS_IMETHODIMP nsDOMSVGFEOffsetElement::GetIn1(nsIDOMSVGAnimatedString * *aIn1)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedNumber dx; */
NS_IMETHODIMP nsDOMSVGFEOffsetElement::GetDx(nsIDOMSVGAnimatedNumber * *aDx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedNumber dy; */
NS_IMETHODIMP nsDOMSVGFEOffsetElement::GetDy(nsIDOMSVGAnimatedNumber * *aDy)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMSVGFEFloodElement */
#define NS_IDOMSVGFEFLOODELEMENT_IID_STR "74c74158-4feb-4a8a-8c6e-f986dd46ae97"

#define NS_IDOMSVGFEFLOODELEMENT_IID \
  {0x74c74158, 0x4feb, 0x4a8a, \
    { 0x8c, 0x6e, 0xf9, 0x86, 0xdd, 0x46, 0xae, 0x97 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMSVGFEFloodElement : public nsIDOMSVGFilterPrimitiveStandardAttributes {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMSVGFEFLOODELEMENT_IID)

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMSVGFEFloodElement, NS_IDOMSVGFEFLOODELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMSVGFEFLOODELEMENT \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMSVGFEFLOODELEMENT(_to) \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMSVGFEFLOODELEMENT(_to) \
  /* no methods! */

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMSVGFEFloodElement : public nsIDOMSVGFEFloodElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMSVGFEFLOODELEMENT

  nsDOMSVGFEFloodElement();

private:
  ~nsDOMSVGFEFloodElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMSVGFEFloodElement, nsIDOMSVGFEFloodElement)

nsDOMSVGFEFloodElement::nsDOMSVGFEFloodElement()
{
  /* member initializers and constructor code */
}

nsDOMSVGFEFloodElement::~nsDOMSVGFEFloodElement()
{
  /* destructor code */
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMSVGFETileElement */
#define NS_IDOMSVGFETILEELEMENT_IID_STR "40b9b789-b852-4297-8fc7-f9e9f1be1cbc"

#define NS_IDOMSVGFETILEELEMENT_IID \
  {0x40b9b789, 0xb852, 0x4297, \
    { 0x8f, 0xc7, 0xf9, 0xe9, 0xf1, 0xbe, 0x1c, 0xbc }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMSVGFETileElement : public nsIDOMSVGFilterPrimitiveStandardAttributes {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMSVGFETILEELEMENT_IID)

  /* readonly attribute nsIDOMSVGAnimatedString in1; */
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMSVGFETileElement, NS_IDOMSVGFETILEELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMSVGFETILEELEMENT \
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMSVGFETILEELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1) { return _to GetIn1(aIn1); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMSVGFETILEELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIn1(aIn1); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMSVGFETileElement : public nsIDOMSVGFETileElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMSVGFETILEELEMENT

  nsDOMSVGFETileElement();

private:
  ~nsDOMSVGFETileElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMSVGFETileElement, nsIDOMSVGFETileElement)

nsDOMSVGFETileElement::nsDOMSVGFETileElement()
{
  /* member initializers and constructor code */
}

nsDOMSVGFETileElement::~nsDOMSVGFETileElement()
{
  /* destructor code */
}

/* readonly attribute nsIDOMSVGAnimatedString in1; */
NS_IMETHODIMP nsDOMSVGFETileElement::GetIn1(nsIDOMSVGAnimatedString * *aIn1)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMSVGFETurbulenceElement */
#define NS_IDOMSVGFETURBULENCEELEMENT_IID_STR "6afc9962-fcba-4300-9dde-89faad74f2e9"

#define NS_IDOMSVGFETURBULENCEELEMENT_IID \
  {0x6afc9962, 0xfcba, 0x4300, \
    { 0x9d, 0xde, 0x89, 0xfa, 0xad, 0x74, 0xf2, 0xe9 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMSVGFETurbulenceElement : public nsIDOMSVGFilterPrimitiveStandardAttributes {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMSVGFETURBULENCEELEMENT_IID)

  enum { SVG_TURBULENCE_TYPE_UNKNOWN = 0U };

  enum { SVG_TURBULENCE_TYPE_FRACTALNOISE = 1U };

  enum { SVG_TURBULENCE_TYPE_TURBULENCE = 2U };

  enum { SVG_STITCHTYPE_UNKNOWN = 0U };

  enum { SVG_STITCHTYPE_STITCH = 1U };

  enum { SVG_STITCHTYPE_NOSTITCH = 2U };

  /* readonly attribute nsIDOMSVGAnimatedNumber baseFrequencyX; */
  NS_SCRIPTABLE NS_IMETHOD GetBaseFrequencyX(nsIDOMSVGAnimatedNumber * *aBaseFrequencyX) = 0;

  /* readonly attribute nsIDOMSVGAnimatedNumber baseFrequencyY; */
  NS_SCRIPTABLE NS_IMETHOD GetBaseFrequencyY(nsIDOMSVGAnimatedNumber * *aBaseFrequencyY) = 0;

  /* readonly attribute nsIDOMSVGAnimatedInteger numOctaves; */
  NS_SCRIPTABLE NS_IMETHOD GetNumOctaves(nsIDOMSVGAnimatedInteger * *aNumOctaves) = 0;

  /* readonly attribute nsIDOMSVGAnimatedNumber seed; */
  NS_SCRIPTABLE NS_IMETHOD GetSeed(nsIDOMSVGAnimatedNumber * *aSeed) = 0;

  /* readonly attribute nsIDOMSVGAnimatedEnumeration stitchTiles; */
  NS_SCRIPTABLE NS_IMETHOD GetStitchTiles(nsIDOMSVGAnimatedEnumeration * *aStitchTiles) = 0;

  /* readonly attribute nsIDOMSVGAnimatedEnumeration type; */
  NS_SCRIPTABLE NS_IMETHOD GetType(nsIDOMSVGAnimatedEnumeration * *aType) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMSVGFETurbulenceElement, NS_IDOMSVGFETURBULENCEELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMSVGFETURBULENCEELEMENT \
  NS_SCRIPTABLE NS_IMETHOD GetBaseFrequencyX(nsIDOMSVGAnimatedNumber * *aBaseFrequencyX); \
  NS_SCRIPTABLE NS_IMETHOD GetBaseFrequencyY(nsIDOMSVGAnimatedNumber * *aBaseFrequencyY); \
  NS_SCRIPTABLE NS_IMETHOD GetNumOctaves(nsIDOMSVGAnimatedInteger * *aNumOctaves); \
  NS_SCRIPTABLE NS_IMETHOD GetSeed(nsIDOMSVGAnimatedNumber * *aSeed); \
  NS_SCRIPTABLE NS_IMETHOD GetStitchTiles(nsIDOMSVGAnimatedEnumeration * *aStitchTiles); \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsIDOMSVGAnimatedEnumeration * *aType); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMSVGFETURBULENCEELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetBaseFrequencyX(nsIDOMSVGAnimatedNumber * *aBaseFrequencyX) { return _to GetBaseFrequencyX(aBaseFrequencyX); } \
  NS_SCRIPTABLE NS_IMETHOD GetBaseFrequencyY(nsIDOMSVGAnimatedNumber * *aBaseFrequencyY) { return _to GetBaseFrequencyY(aBaseFrequencyY); } \
  NS_SCRIPTABLE NS_IMETHOD GetNumOctaves(nsIDOMSVGAnimatedInteger * *aNumOctaves) { return _to GetNumOctaves(aNumOctaves); } \
  NS_SCRIPTABLE NS_IMETHOD GetSeed(nsIDOMSVGAnimatedNumber * *aSeed) { return _to GetSeed(aSeed); } \
  NS_SCRIPTABLE NS_IMETHOD GetStitchTiles(nsIDOMSVGAnimatedEnumeration * *aStitchTiles) { return _to GetStitchTiles(aStitchTiles); } \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsIDOMSVGAnimatedEnumeration * *aType) { return _to GetType(aType); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMSVGFETURBULENCEELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetBaseFrequencyX(nsIDOMSVGAnimatedNumber * *aBaseFrequencyX) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBaseFrequencyX(aBaseFrequencyX); } \
  NS_SCRIPTABLE NS_IMETHOD GetBaseFrequencyY(nsIDOMSVGAnimatedNumber * *aBaseFrequencyY) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBaseFrequencyY(aBaseFrequencyY); } \
  NS_SCRIPTABLE NS_IMETHOD GetNumOctaves(nsIDOMSVGAnimatedInteger * *aNumOctaves) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNumOctaves(aNumOctaves); } \
  NS_SCRIPTABLE NS_IMETHOD GetSeed(nsIDOMSVGAnimatedNumber * *aSeed) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSeed(aSeed); } \
  NS_SCRIPTABLE NS_IMETHOD GetStitchTiles(nsIDOMSVGAnimatedEnumeration * *aStitchTiles) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStitchTiles(aStitchTiles); } \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsIDOMSVGAnimatedEnumeration * *aType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(aType); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMSVGFETurbulenceElement : public nsIDOMSVGFETurbulenceElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMSVGFETURBULENCEELEMENT

  nsDOMSVGFETurbulenceElement();

private:
  ~nsDOMSVGFETurbulenceElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMSVGFETurbulenceElement, nsIDOMSVGFETurbulenceElement)

nsDOMSVGFETurbulenceElement::nsDOMSVGFETurbulenceElement()
{
  /* member initializers and constructor code */
}

nsDOMSVGFETurbulenceElement::~nsDOMSVGFETurbulenceElement()
{
  /* destructor code */
}

/* readonly attribute nsIDOMSVGAnimatedNumber baseFrequencyX; */
NS_IMETHODIMP nsDOMSVGFETurbulenceElement::GetBaseFrequencyX(nsIDOMSVGAnimatedNumber * *aBaseFrequencyX)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedNumber baseFrequencyY; */
NS_IMETHODIMP nsDOMSVGFETurbulenceElement::GetBaseFrequencyY(nsIDOMSVGAnimatedNumber * *aBaseFrequencyY)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedInteger numOctaves; */
NS_IMETHODIMP nsDOMSVGFETurbulenceElement::GetNumOctaves(nsIDOMSVGAnimatedInteger * *aNumOctaves)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedNumber seed; */
NS_IMETHODIMP nsDOMSVGFETurbulenceElement::GetSeed(nsIDOMSVGAnimatedNumber * *aSeed)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedEnumeration stitchTiles; */
NS_IMETHODIMP nsDOMSVGFETurbulenceElement::GetStitchTiles(nsIDOMSVGAnimatedEnumeration * *aStitchTiles)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedEnumeration type; */
NS_IMETHODIMP nsDOMSVGFETurbulenceElement::GetType(nsIDOMSVGAnimatedEnumeration * *aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMSVGFEMorphologyElement */
#define NS_IDOMSVGFEMORPHOLOGYELEMENT_IID_STR "1aa777de-4dbb-4cf7-820e-46b2bbadeaa2"

#define NS_IDOMSVGFEMORPHOLOGYELEMENT_IID \
  {0x1aa777de, 0x4dbb, 0x4cf7, \
    { 0x82, 0x0e, 0x46, 0xb2, 0xbb, 0xad, 0xea, 0xa2 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMSVGFEMorphologyElement : public nsIDOMSVGFilterPrimitiveStandardAttributes {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMSVGFEMORPHOLOGYELEMENT_IID)

  enum { SVG_OPERATOR_UNKNOWN = 0U };

  enum { SVG_OPERATOR_ERODE = 1U };

  enum { SVG_OPERATOR_DILATE = 2U };

  /* readonly attribute nsIDOMSVGAnimatedString in1; */
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1) = 0;

  /* readonly attribute nsIDOMSVGAnimatedNumber radiusX; */
  NS_SCRIPTABLE NS_IMETHOD GetRadiusX(nsIDOMSVGAnimatedNumber * *aRadiusX) = 0;

  /* readonly attribute nsIDOMSVGAnimatedNumber radiusY; */
  NS_SCRIPTABLE NS_IMETHOD GetRadiusY(nsIDOMSVGAnimatedNumber * *aRadiusY) = 0;

  /* readonly attribute nsIDOMSVGAnimatedEnumeration operator; */
  NS_SCRIPTABLE NS_IMETHOD GetOperator(nsIDOMSVGAnimatedEnumeration * *aOperator) = 0;

  /* void setRadius (in float rx, in float ry); */
  NS_SCRIPTABLE NS_IMETHOD SetRadius(float rx, float ry) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMSVGFEMorphologyElement, NS_IDOMSVGFEMORPHOLOGYELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMSVGFEMORPHOLOGYELEMENT \
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1); \
  NS_SCRIPTABLE NS_IMETHOD GetRadiusX(nsIDOMSVGAnimatedNumber * *aRadiusX); \
  NS_SCRIPTABLE NS_IMETHOD GetRadiusY(nsIDOMSVGAnimatedNumber * *aRadiusY); \
  NS_SCRIPTABLE NS_IMETHOD GetOperator(nsIDOMSVGAnimatedEnumeration * *aOperator); \
  NS_SCRIPTABLE NS_IMETHOD SetRadius(float rx, float ry); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMSVGFEMORPHOLOGYELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1) { return _to GetIn1(aIn1); } \
  NS_SCRIPTABLE NS_IMETHOD GetRadiusX(nsIDOMSVGAnimatedNumber * *aRadiusX) { return _to GetRadiusX(aRadiusX); } \
  NS_SCRIPTABLE NS_IMETHOD GetRadiusY(nsIDOMSVGAnimatedNumber * *aRadiusY) { return _to GetRadiusY(aRadiusY); } \
  NS_SCRIPTABLE NS_IMETHOD GetOperator(nsIDOMSVGAnimatedEnumeration * *aOperator) { return _to GetOperator(aOperator); } \
  NS_SCRIPTABLE NS_IMETHOD SetRadius(float rx, float ry) { return _to SetRadius(rx, ry); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMSVGFEMORPHOLOGYELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIn1(aIn1); } \
  NS_SCRIPTABLE NS_IMETHOD GetRadiusX(nsIDOMSVGAnimatedNumber * *aRadiusX) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRadiusX(aRadiusX); } \
  NS_SCRIPTABLE NS_IMETHOD GetRadiusY(nsIDOMSVGAnimatedNumber * *aRadiusY) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRadiusY(aRadiusY); } \
  NS_SCRIPTABLE NS_IMETHOD GetOperator(nsIDOMSVGAnimatedEnumeration * *aOperator) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOperator(aOperator); } \
  NS_SCRIPTABLE NS_IMETHOD SetRadius(float rx, float ry) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetRadius(rx, ry); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMSVGFEMorphologyElement : public nsIDOMSVGFEMorphologyElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMSVGFEMORPHOLOGYELEMENT

  nsDOMSVGFEMorphologyElement();

private:
  ~nsDOMSVGFEMorphologyElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMSVGFEMorphologyElement, nsIDOMSVGFEMorphologyElement)

nsDOMSVGFEMorphologyElement::nsDOMSVGFEMorphologyElement()
{
  /* member initializers and constructor code */
}

nsDOMSVGFEMorphologyElement::~nsDOMSVGFEMorphologyElement()
{
  /* destructor code */
}

/* readonly attribute nsIDOMSVGAnimatedString in1; */
NS_IMETHODIMP nsDOMSVGFEMorphologyElement::GetIn1(nsIDOMSVGAnimatedString * *aIn1)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedNumber radiusX; */
NS_IMETHODIMP nsDOMSVGFEMorphologyElement::GetRadiusX(nsIDOMSVGAnimatedNumber * *aRadiusX)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedNumber radiusY; */
NS_IMETHODIMP nsDOMSVGFEMorphologyElement::GetRadiusY(nsIDOMSVGAnimatedNumber * *aRadiusY)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedEnumeration operator; */
NS_IMETHODIMP nsDOMSVGFEMorphologyElement::GetOperator(nsIDOMSVGAnimatedEnumeration * *aOperator)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setRadius (in float rx, in float ry); */
NS_IMETHODIMP nsDOMSVGFEMorphologyElement::SetRadius(float rx, float ry)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMSVGFEConvolveMatrixElement */
#define NS_IDOMSVGFECONVOLVEMATRIXELEMENT_IID_STR "db6b7ac9-1511-452c-8575-8d87b995c97f"

#define NS_IDOMSVGFECONVOLVEMATRIXELEMENT_IID \
  {0xdb6b7ac9, 0x1511, 0x452c, \
    { 0x85, 0x75, 0x8d, 0x87, 0xb9, 0x95, 0xc9, 0x7f }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMSVGFEConvolveMatrixElement : public nsIDOMSVGFilterPrimitiveStandardAttributes {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMSVGFECONVOLVEMATRIXELEMENT_IID)

  enum { SVG_EDGEMODE_UNKNOWN = 0U };

  enum { SVG_EDGEMODE_DUPLICATE = 1U };

  enum { SVG_EDGEMODE_WRAP = 2U };

  enum { SVG_EDGEMODE_NONE = 3U };

  /* readonly attribute nsIDOMSVGAnimatedString in1; */
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1) = 0;

  /* readonly attribute nsIDOMSVGAnimatedInteger orderX; */
  NS_SCRIPTABLE NS_IMETHOD GetOrderX(nsIDOMSVGAnimatedInteger * *aOrderX) = 0;

  /* readonly attribute nsIDOMSVGAnimatedInteger orderY; */
  NS_SCRIPTABLE NS_IMETHOD GetOrderY(nsIDOMSVGAnimatedInteger * *aOrderY) = 0;

  /* readonly attribute nsIDOMSVGAnimatedNumberList kernelMatrix; */
  NS_SCRIPTABLE NS_IMETHOD GetKernelMatrix(nsIDOMSVGAnimatedNumberList * *aKernelMatrix) = 0;

  /* readonly attribute nsIDOMSVGAnimatedNumber divisor; */
  NS_SCRIPTABLE NS_IMETHOD GetDivisor(nsIDOMSVGAnimatedNumber * *aDivisor) = 0;

  /* readonly attribute nsIDOMSVGAnimatedNumber bias; */
  NS_SCRIPTABLE NS_IMETHOD GetBias(nsIDOMSVGAnimatedNumber * *aBias) = 0;

  /* readonly attribute nsIDOMSVGAnimatedInteger targetX; */
  NS_SCRIPTABLE NS_IMETHOD GetTargetX(nsIDOMSVGAnimatedInteger * *aTargetX) = 0;

  /* readonly attribute nsIDOMSVGAnimatedInteger targetY; */
  NS_SCRIPTABLE NS_IMETHOD GetTargetY(nsIDOMSVGAnimatedInteger * *aTargetY) = 0;

  /* readonly attribute nsIDOMSVGAnimatedEnumeration edgeMode; */
  NS_SCRIPTABLE NS_IMETHOD GetEdgeMode(nsIDOMSVGAnimatedEnumeration * *aEdgeMode) = 0;

  /* readonly attribute nsIDOMSVGAnimatedNumber kernelUnitLengthX; */
  NS_SCRIPTABLE NS_IMETHOD GetKernelUnitLengthX(nsIDOMSVGAnimatedNumber * *aKernelUnitLengthX) = 0;

  /* readonly attribute nsIDOMSVGAnimatedNumber kernelUnitLengthY; */
  NS_SCRIPTABLE NS_IMETHOD GetKernelUnitLengthY(nsIDOMSVGAnimatedNumber * *aKernelUnitLengthY) = 0;

  /* readonly attribute nsIDOMSVGAnimatedBoolean preserveAlpha; */
  NS_SCRIPTABLE NS_IMETHOD GetPreserveAlpha(nsIDOMSVGAnimatedBoolean * *aPreserveAlpha) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMSVGFEConvolveMatrixElement, NS_IDOMSVGFECONVOLVEMATRIXELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMSVGFECONVOLVEMATRIXELEMENT \
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1); \
  NS_SCRIPTABLE NS_IMETHOD GetOrderX(nsIDOMSVGAnimatedInteger * *aOrderX); \
  NS_SCRIPTABLE NS_IMETHOD GetOrderY(nsIDOMSVGAnimatedInteger * *aOrderY); \
  NS_SCRIPTABLE NS_IMETHOD GetKernelMatrix(nsIDOMSVGAnimatedNumberList * *aKernelMatrix); \
  NS_SCRIPTABLE NS_IMETHOD GetDivisor(nsIDOMSVGAnimatedNumber * *aDivisor); \
  NS_SCRIPTABLE NS_IMETHOD GetBias(nsIDOMSVGAnimatedNumber * *aBias); \
  NS_SCRIPTABLE NS_IMETHOD GetTargetX(nsIDOMSVGAnimatedInteger * *aTargetX); \
  NS_SCRIPTABLE NS_IMETHOD GetTargetY(nsIDOMSVGAnimatedInteger * *aTargetY); \
  NS_SCRIPTABLE NS_IMETHOD GetEdgeMode(nsIDOMSVGAnimatedEnumeration * *aEdgeMode); \
  NS_SCRIPTABLE NS_IMETHOD GetKernelUnitLengthX(nsIDOMSVGAnimatedNumber * *aKernelUnitLengthX); \
  NS_SCRIPTABLE NS_IMETHOD GetKernelUnitLengthY(nsIDOMSVGAnimatedNumber * *aKernelUnitLengthY); \
  NS_SCRIPTABLE NS_IMETHOD GetPreserveAlpha(nsIDOMSVGAnimatedBoolean * *aPreserveAlpha); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMSVGFECONVOLVEMATRIXELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1) { return _to GetIn1(aIn1); } \
  NS_SCRIPTABLE NS_IMETHOD GetOrderX(nsIDOMSVGAnimatedInteger * *aOrderX) { return _to GetOrderX(aOrderX); } \
  NS_SCRIPTABLE NS_IMETHOD GetOrderY(nsIDOMSVGAnimatedInteger * *aOrderY) { return _to GetOrderY(aOrderY); } \
  NS_SCRIPTABLE NS_IMETHOD GetKernelMatrix(nsIDOMSVGAnimatedNumberList * *aKernelMatrix) { return _to GetKernelMatrix(aKernelMatrix); } \
  NS_SCRIPTABLE NS_IMETHOD GetDivisor(nsIDOMSVGAnimatedNumber * *aDivisor) { return _to GetDivisor(aDivisor); } \
  NS_SCRIPTABLE NS_IMETHOD GetBias(nsIDOMSVGAnimatedNumber * *aBias) { return _to GetBias(aBias); } \
  NS_SCRIPTABLE NS_IMETHOD GetTargetX(nsIDOMSVGAnimatedInteger * *aTargetX) { return _to GetTargetX(aTargetX); } \
  NS_SCRIPTABLE NS_IMETHOD GetTargetY(nsIDOMSVGAnimatedInteger * *aTargetY) { return _to GetTargetY(aTargetY); } \
  NS_SCRIPTABLE NS_IMETHOD GetEdgeMode(nsIDOMSVGAnimatedEnumeration * *aEdgeMode) { return _to GetEdgeMode(aEdgeMode); } \
  NS_SCRIPTABLE NS_IMETHOD GetKernelUnitLengthX(nsIDOMSVGAnimatedNumber * *aKernelUnitLengthX) { return _to GetKernelUnitLengthX(aKernelUnitLengthX); } \
  NS_SCRIPTABLE NS_IMETHOD GetKernelUnitLengthY(nsIDOMSVGAnimatedNumber * *aKernelUnitLengthY) { return _to GetKernelUnitLengthY(aKernelUnitLengthY); } \
  NS_SCRIPTABLE NS_IMETHOD GetPreserveAlpha(nsIDOMSVGAnimatedBoolean * *aPreserveAlpha) { return _to GetPreserveAlpha(aPreserveAlpha); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMSVGFECONVOLVEMATRIXELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIn1(aIn1); } \
  NS_SCRIPTABLE NS_IMETHOD GetOrderX(nsIDOMSVGAnimatedInteger * *aOrderX) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOrderX(aOrderX); } \
  NS_SCRIPTABLE NS_IMETHOD GetOrderY(nsIDOMSVGAnimatedInteger * *aOrderY) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOrderY(aOrderY); } \
  NS_SCRIPTABLE NS_IMETHOD GetKernelMatrix(nsIDOMSVGAnimatedNumberList * *aKernelMatrix) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetKernelMatrix(aKernelMatrix); } \
  NS_SCRIPTABLE NS_IMETHOD GetDivisor(nsIDOMSVGAnimatedNumber * *aDivisor) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDivisor(aDivisor); } \
  NS_SCRIPTABLE NS_IMETHOD GetBias(nsIDOMSVGAnimatedNumber * *aBias) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBias(aBias); } \
  NS_SCRIPTABLE NS_IMETHOD GetTargetX(nsIDOMSVGAnimatedInteger * *aTargetX) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTargetX(aTargetX); } \
  NS_SCRIPTABLE NS_IMETHOD GetTargetY(nsIDOMSVGAnimatedInteger * *aTargetY) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTargetY(aTargetY); } \
  NS_SCRIPTABLE NS_IMETHOD GetEdgeMode(nsIDOMSVGAnimatedEnumeration * *aEdgeMode) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEdgeMode(aEdgeMode); } \
  NS_SCRIPTABLE NS_IMETHOD GetKernelUnitLengthX(nsIDOMSVGAnimatedNumber * *aKernelUnitLengthX) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetKernelUnitLengthX(aKernelUnitLengthX); } \
  NS_SCRIPTABLE NS_IMETHOD GetKernelUnitLengthY(nsIDOMSVGAnimatedNumber * *aKernelUnitLengthY) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetKernelUnitLengthY(aKernelUnitLengthY); } \
  NS_SCRIPTABLE NS_IMETHOD GetPreserveAlpha(nsIDOMSVGAnimatedBoolean * *aPreserveAlpha) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPreserveAlpha(aPreserveAlpha); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMSVGFEConvolveMatrixElement : public nsIDOMSVGFEConvolveMatrixElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMSVGFECONVOLVEMATRIXELEMENT

  nsDOMSVGFEConvolveMatrixElement();

private:
  ~nsDOMSVGFEConvolveMatrixElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMSVGFEConvolveMatrixElement, nsIDOMSVGFEConvolveMatrixElement)

nsDOMSVGFEConvolveMatrixElement::nsDOMSVGFEConvolveMatrixElement()
{
  /* member initializers and constructor code */
}

nsDOMSVGFEConvolveMatrixElement::~nsDOMSVGFEConvolveMatrixElement()
{
  /* destructor code */
}

/* readonly attribute nsIDOMSVGAnimatedString in1; */
NS_IMETHODIMP nsDOMSVGFEConvolveMatrixElement::GetIn1(nsIDOMSVGAnimatedString * *aIn1)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedInteger orderX; */
NS_IMETHODIMP nsDOMSVGFEConvolveMatrixElement::GetOrderX(nsIDOMSVGAnimatedInteger * *aOrderX)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedInteger orderY; */
NS_IMETHODIMP nsDOMSVGFEConvolveMatrixElement::GetOrderY(nsIDOMSVGAnimatedInteger * *aOrderY)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedNumberList kernelMatrix; */
NS_IMETHODIMP nsDOMSVGFEConvolveMatrixElement::GetKernelMatrix(nsIDOMSVGAnimatedNumberList * *aKernelMatrix)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedNumber divisor; */
NS_IMETHODIMP nsDOMSVGFEConvolveMatrixElement::GetDivisor(nsIDOMSVGAnimatedNumber * *aDivisor)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedNumber bias; */
NS_IMETHODIMP nsDOMSVGFEConvolveMatrixElement::GetBias(nsIDOMSVGAnimatedNumber * *aBias)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedInteger targetX; */
NS_IMETHODIMP nsDOMSVGFEConvolveMatrixElement::GetTargetX(nsIDOMSVGAnimatedInteger * *aTargetX)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedInteger targetY; */
NS_IMETHODIMP nsDOMSVGFEConvolveMatrixElement::GetTargetY(nsIDOMSVGAnimatedInteger * *aTargetY)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedEnumeration edgeMode; */
NS_IMETHODIMP nsDOMSVGFEConvolveMatrixElement::GetEdgeMode(nsIDOMSVGAnimatedEnumeration * *aEdgeMode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedNumber kernelUnitLengthX; */
NS_IMETHODIMP nsDOMSVGFEConvolveMatrixElement::GetKernelUnitLengthX(nsIDOMSVGAnimatedNumber * *aKernelUnitLengthX)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedNumber kernelUnitLengthY; */
NS_IMETHODIMP nsDOMSVGFEConvolveMatrixElement::GetKernelUnitLengthY(nsIDOMSVGAnimatedNumber * *aKernelUnitLengthY)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedBoolean preserveAlpha; */
NS_IMETHODIMP nsDOMSVGFEConvolveMatrixElement::GetPreserveAlpha(nsIDOMSVGAnimatedBoolean * *aPreserveAlpha)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMSVGFEDiffuseLightingElement */
#define NS_IDOMSVGFEDIFFUSELIGHTINGELEMENT_IID_STR "ab84cbd9-bb0f-447b-a3a5-0a149bed151d"

#define NS_IDOMSVGFEDIFFUSELIGHTINGELEMENT_IID \
  {0xab84cbd9, 0xbb0f, 0x447b, \
    { 0xa3, 0xa5, 0x0a, 0x14, 0x9b, 0xed, 0x15, 0x1d }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMSVGFEDiffuseLightingElement : public nsIDOMSVGFilterPrimitiveStandardAttributes {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMSVGFEDIFFUSELIGHTINGELEMENT_IID)

  /* readonly attribute nsIDOMSVGAnimatedString in1; */
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1) = 0;

  /* readonly attribute nsIDOMSVGAnimatedNumber surfaceScale; */
  NS_SCRIPTABLE NS_IMETHOD GetSurfaceScale(nsIDOMSVGAnimatedNumber * *aSurfaceScale) = 0;

  /* readonly attribute nsIDOMSVGAnimatedNumber diffuseConstant; */
  NS_SCRIPTABLE NS_IMETHOD GetDiffuseConstant(nsIDOMSVGAnimatedNumber * *aDiffuseConstant) = 0;

  /* readonly attribute nsIDOMSVGAnimatedNumber kernelUnitLengthX; */
  NS_SCRIPTABLE NS_IMETHOD GetKernelUnitLengthX(nsIDOMSVGAnimatedNumber * *aKernelUnitLengthX) = 0;

  /* readonly attribute nsIDOMSVGAnimatedNumber kernelUnitLengthY; */
  NS_SCRIPTABLE NS_IMETHOD GetKernelUnitLengthY(nsIDOMSVGAnimatedNumber * *aKernelUnitLengthY) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMSVGFEDiffuseLightingElement, NS_IDOMSVGFEDIFFUSELIGHTINGELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMSVGFEDIFFUSELIGHTINGELEMENT \
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1); \
  NS_SCRIPTABLE NS_IMETHOD GetSurfaceScale(nsIDOMSVGAnimatedNumber * *aSurfaceScale); \
  NS_SCRIPTABLE NS_IMETHOD GetDiffuseConstant(nsIDOMSVGAnimatedNumber * *aDiffuseConstant); \
  NS_SCRIPTABLE NS_IMETHOD GetKernelUnitLengthX(nsIDOMSVGAnimatedNumber * *aKernelUnitLengthX); \
  NS_SCRIPTABLE NS_IMETHOD GetKernelUnitLengthY(nsIDOMSVGAnimatedNumber * *aKernelUnitLengthY); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMSVGFEDIFFUSELIGHTINGELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1) { return _to GetIn1(aIn1); } \
  NS_SCRIPTABLE NS_IMETHOD GetSurfaceScale(nsIDOMSVGAnimatedNumber * *aSurfaceScale) { return _to GetSurfaceScale(aSurfaceScale); } \
  NS_SCRIPTABLE NS_IMETHOD GetDiffuseConstant(nsIDOMSVGAnimatedNumber * *aDiffuseConstant) { return _to GetDiffuseConstant(aDiffuseConstant); } \
  NS_SCRIPTABLE NS_IMETHOD GetKernelUnitLengthX(nsIDOMSVGAnimatedNumber * *aKernelUnitLengthX) { return _to GetKernelUnitLengthX(aKernelUnitLengthX); } \
  NS_SCRIPTABLE NS_IMETHOD GetKernelUnitLengthY(nsIDOMSVGAnimatedNumber * *aKernelUnitLengthY) { return _to GetKernelUnitLengthY(aKernelUnitLengthY); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMSVGFEDIFFUSELIGHTINGELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIn1(aIn1); } \
  NS_SCRIPTABLE NS_IMETHOD GetSurfaceScale(nsIDOMSVGAnimatedNumber * *aSurfaceScale) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSurfaceScale(aSurfaceScale); } \
  NS_SCRIPTABLE NS_IMETHOD GetDiffuseConstant(nsIDOMSVGAnimatedNumber * *aDiffuseConstant) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDiffuseConstant(aDiffuseConstant); } \
  NS_SCRIPTABLE NS_IMETHOD GetKernelUnitLengthX(nsIDOMSVGAnimatedNumber * *aKernelUnitLengthX) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetKernelUnitLengthX(aKernelUnitLengthX); } \
  NS_SCRIPTABLE NS_IMETHOD GetKernelUnitLengthY(nsIDOMSVGAnimatedNumber * *aKernelUnitLengthY) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetKernelUnitLengthY(aKernelUnitLengthY); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMSVGFEDiffuseLightingElement : public nsIDOMSVGFEDiffuseLightingElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMSVGFEDIFFUSELIGHTINGELEMENT

  nsDOMSVGFEDiffuseLightingElement();

private:
  ~nsDOMSVGFEDiffuseLightingElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMSVGFEDiffuseLightingElement, nsIDOMSVGFEDiffuseLightingElement)

nsDOMSVGFEDiffuseLightingElement::nsDOMSVGFEDiffuseLightingElement()
{
  /* member initializers and constructor code */
}

nsDOMSVGFEDiffuseLightingElement::~nsDOMSVGFEDiffuseLightingElement()
{
  /* destructor code */
}

/* readonly attribute nsIDOMSVGAnimatedString in1; */
NS_IMETHODIMP nsDOMSVGFEDiffuseLightingElement::GetIn1(nsIDOMSVGAnimatedString * *aIn1)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedNumber surfaceScale; */
NS_IMETHODIMP nsDOMSVGFEDiffuseLightingElement::GetSurfaceScale(nsIDOMSVGAnimatedNumber * *aSurfaceScale)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedNumber diffuseConstant; */
NS_IMETHODIMP nsDOMSVGFEDiffuseLightingElement::GetDiffuseConstant(nsIDOMSVGAnimatedNumber * *aDiffuseConstant)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedNumber kernelUnitLengthX; */
NS_IMETHODIMP nsDOMSVGFEDiffuseLightingElement::GetKernelUnitLengthX(nsIDOMSVGAnimatedNumber * *aKernelUnitLengthX)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedNumber kernelUnitLengthY; */
NS_IMETHODIMP nsDOMSVGFEDiffuseLightingElement::GetKernelUnitLengthY(nsIDOMSVGAnimatedNumber * *aKernelUnitLengthY)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMSVGFESpecularLightingElement */
#define NS_IDOMSVGFESPECULARLIGHTINGELEMENT_IID_STR "088715b7-7592-47d1-a838-d4b98d349554"

#define NS_IDOMSVGFESPECULARLIGHTINGELEMENT_IID \
  {0x088715b7, 0x7592, 0x47d1, \
    { 0xa8, 0x38, 0xd4, 0xb9, 0x8d, 0x34, 0x95, 0x54 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMSVGFESpecularLightingElement : public nsIDOMSVGFilterPrimitiveStandardAttributes {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMSVGFESPECULARLIGHTINGELEMENT_IID)

  /* readonly attribute nsIDOMSVGAnimatedString in1; */
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1) = 0;

  /* readonly attribute nsIDOMSVGAnimatedNumber surfaceScale; */
  NS_SCRIPTABLE NS_IMETHOD GetSurfaceScale(nsIDOMSVGAnimatedNumber * *aSurfaceScale) = 0;

  /* readonly attribute nsIDOMSVGAnimatedNumber specularConstant; */
  NS_SCRIPTABLE NS_IMETHOD GetSpecularConstant(nsIDOMSVGAnimatedNumber * *aSpecularConstant) = 0;

  /* readonly attribute nsIDOMSVGAnimatedNumber specularExponent; */
  NS_SCRIPTABLE NS_IMETHOD GetSpecularExponent(nsIDOMSVGAnimatedNumber * *aSpecularExponent) = 0;

  /* readonly attribute nsIDOMSVGAnimatedNumber kernelUnitLengthX; */
  NS_SCRIPTABLE NS_IMETHOD GetKernelUnitLengthX(nsIDOMSVGAnimatedNumber * *aKernelUnitLengthX) = 0;

  /* readonly attribute nsIDOMSVGAnimatedNumber kernelUnitLengthY; */
  NS_SCRIPTABLE NS_IMETHOD GetKernelUnitLengthY(nsIDOMSVGAnimatedNumber * *aKernelUnitLengthY) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMSVGFESpecularLightingElement, NS_IDOMSVGFESPECULARLIGHTINGELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMSVGFESPECULARLIGHTINGELEMENT \
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1); \
  NS_SCRIPTABLE NS_IMETHOD GetSurfaceScale(nsIDOMSVGAnimatedNumber * *aSurfaceScale); \
  NS_SCRIPTABLE NS_IMETHOD GetSpecularConstant(nsIDOMSVGAnimatedNumber * *aSpecularConstant); \
  NS_SCRIPTABLE NS_IMETHOD GetSpecularExponent(nsIDOMSVGAnimatedNumber * *aSpecularExponent); \
  NS_SCRIPTABLE NS_IMETHOD GetKernelUnitLengthX(nsIDOMSVGAnimatedNumber * *aKernelUnitLengthX); \
  NS_SCRIPTABLE NS_IMETHOD GetKernelUnitLengthY(nsIDOMSVGAnimatedNumber * *aKernelUnitLengthY); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMSVGFESPECULARLIGHTINGELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1) { return _to GetIn1(aIn1); } \
  NS_SCRIPTABLE NS_IMETHOD GetSurfaceScale(nsIDOMSVGAnimatedNumber * *aSurfaceScale) { return _to GetSurfaceScale(aSurfaceScale); } \
  NS_SCRIPTABLE NS_IMETHOD GetSpecularConstant(nsIDOMSVGAnimatedNumber * *aSpecularConstant) { return _to GetSpecularConstant(aSpecularConstant); } \
  NS_SCRIPTABLE NS_IMETHOD GetSpecularExponent(nsIDOMSVGAnimatedNumber * *aSpecularExponent) { return _to GetSpecularExponent(aSpecularExponent); } \
  NS_SCRIPTABLE NS_IMETHOD GetKernelUnitLengthX(nsIDOMSVGAnimatedNumber * *aKernelUnitLengthX) { return _to GetKernelUnitLengthX(aKernelUnitLengthX); } \
  NS_SCRIPTABLE NS_IMETHOD GetKernelUnitLengthY(nsIDOMSVGAnimatedNumber * *aKernelUnitLengthY) { return _to GetKernelUnitLengthY(aKernelUnitLengthY); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMSVGFESPECULARLIGHTINGELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIn1(aIn1); } \
  NS_SCRIPTABLE NS_IMETHOD GetSurfaceScale(nsIDOMSVGAnimatedNumber * *aSurfaceScale) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSurfaceScale(aSurfaceScale); } \
  NS_SCRIPTABLE NS_IMETHOD GetSpecularConstant(nsIDOMSVGAnimatedNumber * *aSpecularConstant) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSpecularConstant(aSpecularConstant); } \
  NS_SCRIPTABLE NS_IMETHOD GetSpecularExponent(nsIDOMSVGAnimatedNumber * *aSpecularExponent) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSpecularExponent(aSpecularExponent); } \
  NS_SCRIPTABLE NS_IMETHOD GetKernelUnitLengthX(nsIDOMSVGAnimatedNumber * *aKernelUnitLengthX) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetKernelUnitLengthX(aKernelUnitLengthX); } \
  NS_SCRIPTABLE NS_IMETHOD GetKernelUnitLengthY(nsIDOMSVGAnimatedNumber * *aKernelUnitLengthY) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetKernelUnitLengthY(aKernelUnitLengthY); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMSVGFESpecularLightingElement : public nsIDOMSVGFESpecularLightingElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMSVGFESPECULARLIGHTINGELEMENT

  nsDOMSVGFESpecularLightingElement();

private:
  ~nsDOMSVGFESpecularLightingElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMSVGFESpecularLightingElement, nsIDOMSVGFESpecularLightingElement)

nsDOMSVGFESpecularLightingElement::nsDOMSVGFESpecularLightingElement()
{
  /* member initializers and constructor code */
}

nsDOMSVGFESpecularLightingElement::~nsDOMSVGFESpecularLightingElement()
{
  /* destructor code */
}

/* readonly attribute nsIDOMSVGAnimatedString in1; */
NS_IMETHODIMP nsDOMSVGFESpecularLightingElement::GetIn1(nsIDOMSVGAnimatedString * *aIn1)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedNumber surfaceScale; */
NS_IMETHODIMP nsDOMSVGFESpecularLightingElement::GetSurfaceScale(nsIDOMSVGAnimatedNumber * *aSurfaceScale)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedNumber specularConstant; */
NS_IMETHODIMP nsDOMSVGFESpecularLightingElement::GetSpecularConstant(nsIDOMSVGAnimatedNumber * *aSpecularConstant)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedNumber specularExponent; */
NS_IMETHODIMP nsDOMSVGFESpecularLightingElement::GetSpecularExponent(nsIDOMSVGAnimatedNumber * *aSpecularExponent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedNumber kernelUnitLengthX; */
NS_IMETHODIMP nsDOMSVGFESpecularLightingElement::GetKernelUnitLengthX(nsIDOMSVGAnimatedNumber * *aKernelUnitLengthX)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedNumber kernelUnitLengthY; */
NS_IMETHODIMP nsDOMSVGFESpecularLightingElement::GetKernelUnitLengthY(nsIDOMSVGAnimatedNumber * *aKernelUnitLengthY)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMSVGFEDistantLightElement */
#define NS_IDOMSVGFEDISTANTLIGHTELEMENT_IID_STR "2a3d954d-bc5a-4732-8f72-5030dae9de48"

#define NS_IDOMSVGFEDISTANTLIGHTELEMENT_IID \
  {0x2a3d954d, 0xbc5a, 0x4732, \
    { 0x8f, 0x72, 0x50, 0x30, 0xda, 0xe9, 0xde, 0x48 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMSVGFEDistantLightElement : public nsIDOMSVGElement {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMSVGFEDISTANTLIGHTELEMENT_IID)

  /* readonly attribute nsIDOMSVGAnimatedNumber azimuth; */
  NS_SCRIPTABLE NS_IMETHOD GetAzimuth(nsIDOMSVGAnimatedNumber * *aAzimuth) = 0;

  /* readonly attribute nsIDOMSVGAnimatedNumber elevation; */
  NS_SCRIPTABLE NS_IMETHOD GetElevation(nsIDOMSVGAnimatedNumber * *aElevation) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMSVGFEDistantLightElement, NS_IDOMSVGFEDISTANTLIGHTELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMSVGFEDISTANTLIGHTELEMENT \
  NS_SCRIPTABLE NS_IMETHOD GetAzimuth(nsIDOMSVGAnimatedNumber * *aAzimuth); \
  NS_SCRIPTABLE NS_IMETHOD GetElevation(nsIDOMSVGAnimatedNumber * *aElevation); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMSVGFEDISTANTLIGHTELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetAzimuth(nsIDOMSVGAnimatedNumber * *aAzimuth) { return _to GetAzimuth(aAzimuth); } \
  NS_SCRIPTABLE NS_IMETHOD GetElevation(nsIDOMSVGAnimatedNumber * *aElevation) { return _to GetElevation(aElevation); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMSVGFEDISTANTLIGHTELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetAzimuth(nsIDOMSVGAnimatedNumber * *aAzimuth) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAzimuth(aAzimuth); } \
  NS_SCRIPTABLE NS_IMETHOD GetElevation(nsIDOMSVGAnimatedNumber * *aElevation) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetElevation(aElevation); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMSVGFEDistantLightElement : public nsIDOMSVGFEDistantLightElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMSVGFEDISTANTLIGHTELEMENT

  nsDOMSVGFEDistantLightElement();

private:
  ~nsDOMSVGFEDistantLightElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMSVGFEDistantLightElement, nsIDOMSVGFEDistantLightElement)

nsDOMSVGFEDistantLightElement::nsDOMSVGFEDistantLightElement()
{
  /* member initializers and constructor code */
}

nsDOMSVGFEDistantLightElement::~nsDOMSVGFEDistantLightElement()
{
  /* destructor code */
}

/* readonly attribute nsIDOMSVGAnimatedNumber azimuth; */
NS_IMETHODIMP nsDOMSVGFEDistantLightElement::GetAzimuth(nsIDOMSVGAnimatedNumber * *aAzimuth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedNumber elevation; */
NS_IMETHODIMP nsDOMSVGFEDistantLightElement::GetElevation(nsIDOMSVGAnimatedNumber * *aElevation)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMSVGFEPointLightElement */
#define NS_IDOMSVGFEPOINTLIGHTELEMENT_IID_STR "b225e777-d585-4a15-a40d-856d9d3afcfd"

#define NS_IDOMSVGFEPOINTLIGHTELEMENT_IID \
  {0xb225e777, 0xd585, 0x4a15, \
    { 0xa4, 0x0d, 0x85, 0x6d, 0x9d, 0x3a, 0xfc, 0xfd }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMSVGFEPointLightElement : public nsIDOMSVGElement {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMSVGFEPOINTLIGHTELEMENT_IID)

  /* readonly attribute nsIDOMSVGAnimatedNumber x; */
  NS_SCRIPTABLE NS_IMETHOD GetX(nsIDOMSVGAnimatedNumber * *aX) = 0;

  /* readonly attribute nsIDOMSVGAnimatedNumber y; */
  NS_SCRIPTABLE NS_IMETHOD GetY(nsIDOMSVGAnimatedNumber * *aY) = 0;

  /* readonly attribute nsIDOMSVGAnimatedNumber z; */
  NS_SCRIPTABLE NS_IMETHOD GetZ(nsIDOMSVGAnimatedNumber * *aZ) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMSVGFEPointLightElement, NS_IDOMSVGFEPOINTLIGHTELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMSVGFEPOINTLIGHTELEMENT \
  NS_SCRIPTABLE NS_IMETHOD GetX(nsIDOMSVGAnimatedNumber * *aX); \
  NS_SCRIPTABLE NS_IMETHOD GetY(nsIDOMSVGAnimatedNumber * *aY); \
  NS_SCRIPTABLE NS_IMETHOD GetZ(nsIDOMSVGAnimatedNumber * *aZ); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMSVGFEPOINTLIGHTELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetX(nsIDOMSVGAnimatedNumber * *aX) { return _to GetX(aX); } \
  NS_SCRIPTABLE NS_IMETHOD GetY(nsIDOMSVGAnimatedNumber * *aY) { return _to GetY(aY); } \
  NS_SCRIPTABLE NS_IMETHOD GetZ(nsIDOMSVGAnimatedNumber * *aZ) { return _to GetZ(aZ); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMSVGFEPOINTLIGHTELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetX(nsIDOMSVGAnimatedNumber * *aX) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetX(aX); } \
  NS_SCRIPTABLE NS_IMETHOD GetY(nsIDOMSVGAnimatedNumber * *aY) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetY(aY); } \
  NS_SCRIPTABLE NS_IMETHOD GetZ(nsIDOMSVGAnimatedNumber * *aZ) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetZ(aZ); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMSVGFEPointLightElement : public nsIDOMSVGFEPointLightElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMSVGFEPOINTLIGHTELEMENT

  nsDOMSVGFEPointLightElement();

private:
  ~nsDOMSVGFEPointLightElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMSVGFEPointLightElement, nsIDOMSVGFEPointLightElement)

nsDOMSVGFEPointLightElement::nsDOMSVGFEPointLightElement()
{
  /* member initializers and constructor code */
}

nsDOMSVGFEPointLightElement::~nsDOMSVGFEPointLightElement()
{
  /* destructor code */
}

/* readonly attribute nsIDOMSVGAnimatedNumber x; */
NS_IMETHODIMP nsDOMSVGFEPointLightElement::GetX(nsIDOMSVGAnimatedNumber * *aX)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedNumber y; */
NS_IMETHODIMP nsDOMSVGFEPointLightElement::GetY(nsIDOMSVGAnimatedNumber * *aY)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedNumber z; */
NS_IMETHODIMP nsDOMSVGFEPointLightElement::GetZ(nsIDOMSVGAnimatedNumber * *aZ)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMSVGFESpotLightElement */
#define NS_IDOMSVGFESPOTLIGHTELEMENT_IID_STR "d7a342bf-ad29-46d0-bc50-43d4ee1202a9"

#define NS_IDOMSVGFESPOTLIGHTELEMENT_IID \
  {0xd7a342bf, 0xad29, 0x46d0, \
    { 0xbc, 0x50, 0x43, 0xd4, 0xee, 0x12, 0x02, 0xa9 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMSVGFESpotLightElement : public nsIDOMSVGElement {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMSVGFESPOTLIGHTELEMENT_IID)

  /* readonly attribute nsIDOMSVGAnimatedNumber x; */
  NS_SCRIPTABLE NS_IMETHOD GetX(nsIDOMSVGAnimatedNumber * *aX) = 0;

  /* readonly attribute nsIDOMSVGAnimatedNumber y; */
  NS_SCRIPTABLE NS_IMETHOD GetY(nsIDOMSVGAnimatedNumber * *aY) = 0;

  /* readonly attribute nsIDOMSVGAnimatedNumber z; */
  NS_SCRIPTABLE NS_IMETHOD GetZ(nsIDOMSVGAnimatedNumber * *aZ) = 0;

  /* readonly attribute nsIDOMSVGAnimatedNumber pointsAtX; */
  NS_SCRIPTABLE NS_IMETHOD GetPointsAtX(nsIDOMSVGAnimatedNumber * *aPointsAtX) = 0;

  /* readonly attribute nsIDOMSVGAnimatedNumber pointsAtY; */
  NS_SCRIPTABLE NS_IMETHOD GetPointsAtY(nsIDOMSVGAnimatedNumber * *aPointsAtY) = 0;

  /* readonly attribute nsIDOMSVGAnimatedNumber pointsAtZ; */
  NS_SCRIPTABLE NS_IMETHOD GetPointsAtZ(nsIDOMSVGAnimatedNumber * *aPointsAtZ) = 0;

  /* readonly attribute nsIDOMSVGAnimatedNumber specularExponent; */
  NS_SCRIPTABLE NS_IMETHOD GetSpecularExponent(nsIDOMSVGAnimatedNumber * *aSpecularExponent) = 0;

  /* readonly attribute nsIDOMSVGAnimatedNumber limitingConeAngle; */
  NS_SCRIPTABLE NS_IMETHOD GetLimitingConeAngle(nsIDOMSVGAnimatedNumber * *aLimitingConeAngle) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMSVGFESpotLightElement, NS_IDOMSVGFESPOTLIGHTELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMSVGFESPOTLIGHTELEMENT \
  NS_SCRIPTABLE NS_IMETHOD GetX(nsIDOMSVGAnimatedNumber * *aX); \
  NS_SCRIPTABLE NS_IMETHOD GetY(nsIDOMSVGAnimatedNumber * *aY); \
  NS_SCRIPTABLE NS_IMETHOD GetZ(nsIDOMSVGAnimatedNumber * *aZ); \
  NS_SCRIPTABLE NS_IMETHOD GetPointsAtX(nsIDOMSVGAnimatedNumber * *aPointsAtX); \
  NS_SCRIPTABLE NS_IMETHOD GetPointsAtY(nsIDOMSVGAnimatedNumber * *aPointsAtY); \
  NS_SCRIPTABLE NS_IMETHOD GetPointsAtZ(nsIDOMSVGAnimatedNumber * *aPointsAtZ); \
  NS_SCRIPTABLE NS_IMETHOD GetSpecularExponent(nsIDOMSVGAnimatedNumber * *aSpecularExponent); \
  NS_SCRIPTABLE NS_IMETHOD GetLimitingConeAngle(nsIDOMSVGAnimatedNumber * *aLimitingConeAngle); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMSVGFESPOTLIGHTELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetX(nsIDOMSVGAnimatedNumber * *aX) { return _to GetX(aX); } \
  NS_SCRIPTABLE NS_IMETHOD GetY(nsIDOMSVGAnimatedNumber * *aY) { return _to GetY(aY); } \
  NS_SCRIPTABLE NS_IMETHOD GetZ(nsIDOMSVGAnimatedNumber * *aZ) { return _to GetZ(aZ); } \
  NS_SCRIPTABLE NS_IMETHOD GetPointsAtX(nsIDOMSVGAnimatedNumber * *aPointsAtX) { return _to GetPointsAtX(aPointsAtX); } \
  NS_SCRIPTABLE NS_IMETHOD GetPointsAtY(nsIDOMSVGAnimatedNumber * *aPointsAtY) { return _to GetPointsAtY(aPointsAtY); } \
  NS_SCRIPTABLE NS_IMETHOD GetPointsAtZ(nsIDOMSVGAnimatedNumber * *aPointsAtZ) { return _to GetPointsAtZ(aPointsAtZ); } \
  NS_SCRIPTABLE NS_IMETHOD GetSpecularExponent(nsIDOMSVGAnimatedNumber * *aSpecularExponent) { return _to GetSpecularExponent(aSpecularExponent); } \
  NS_SCRIPTABLE NS_IMETHOD GetLimitingConeAngle(nsIDOMSVGAnimatedNumber * *aLimitingConeAngle) { return _to GetLimitingConeAngle(aLimitingConeAngle); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMSVGFESPOTLIGHTELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetX(nsIDOMSVGAnimatedNumber * *aX) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetX(aX); } \
  NS_SCRIPTABLE NS_IMETHOD GetY(nsIDOMSVGAnimatedNumber * *aY) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetY(aY); } \
  NS_SCRIPTABLE NS_IMETHOD GetZ(nsIDOMSVGAnimatedNumber * *aZ) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetZ(aZ); } \
  NS_SCRIPTABLE NS_IMETHOD GetPointsAtX(nsIDOMSVGAnimatedNumber * *aPointsAtX) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPointsAtX(aPointsAtX); } \
  NS_SCRIPTABLE NS_IMETHOD GetPointsAtY(nsIDOMSVGAnimatedNumber * *aPointsAtY) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPointsAtY(aPointsAtY); } \
  NS_SCRIPTABLE NS_IMETHOD GetPointsAtZ(nsIDOMSVGAnimatedNumber * *aPointsAtZ) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPointsAtZ(aPointsAtZ); } \
  NS_SCRIPTABLE NS_IMETHOD GetSpecularExponent(nsIDOMSVGAnimatedNumber * *aSpecularExponent) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSpecularExponent(aSpecularExponent); } \
  NS_SCRIPTABLE NS_IMETHOD GetLimitingConeAngle(nsIDOMSVGAnimatedNumber * *aLimitingConeAngle) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLimitingConeAngle(aLimitingConeAngle); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMSVGFESpotLightElement : public nsIDOMSVGFESpotLightElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMSVGFESPOTLIGHTELEMENT

  nsDOMSVGFESpotLightElement();

private:
  ~nsDOMSVGFESpotLightElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMSVGFESpotLightElement, nsIDOMSVGFESpotLightElement)

nsDOMSVGFESpotLightElement::nsDOMSVGFESpotLightElement()
{
  /* member initializers and constructor code */
}

nsDOMSVGFESpotLightElement::~nsDOMSVGFESpotLightElement()
{
  /* destructor code */
}

/* readonly attribute nsIDOMSVGAnimatedNumber x; */
NS_IMETHODIMP nsDOMSVGFESpotLightElement::GetX(nsIDOMSVGAnimatedNumber * *aX)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedNumber y; */
NS_IMETHODIMP nsDOMSVGFESpotLightElement::GetY(nsIDOMSVGAnimatedNumber * *aY)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedNumber z; */
NS_IMETHODIMP nsDOMSVGFESpotLightElement::GetZ(nsIDOMSVGAnimatedNumber * *aZ)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedNumber pointsAtX; */
NS_IMETHODIMP nsDOMSVGFESpotLightElement::GetPointsAtX(nsIDOMSVGAnimatedNumber * *aPointsAtX)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedNumber pointsAtY; */
NS_IMETHODIMP nsDOMSVGFESpotLightElement::GetPointsAtY(nsIDOMSVGAnimatedNumber * *aPointsAtY)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedNumber pointsAtZ; */
NS_IMETHODIMP nsDOMSVGFESpotLightElement::GetPointsAtZ(nsIDOMSVGAnimatedNumber * *aPointsAtZ)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedNumber specularExponent; */
NS_IMETHODIMP nsDOMSVGFESpotLightElement::GetSpecularExponent(nsIDOMSVGAnimatedNumber * *aSpecularExponent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedNumber limitingConeAngle; */
NS_IMETHODIMP nsDOMSVGFESpotLightElement::GetLimitingConeAngle(nsIDOMSVGAnimatedNumber * *aLimitingConeAngle)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMSVGFEImageElement */
#define NS_IDOMSVGFEIMAGEELEMENT_IID_STR "4ffbfc41-92e8-467e-b63e-8a998f31a5e6"

#define NS_IDOMSVGFEIMAGEELEMENT_IID \
  {0x4ffbfc41, 0x92e8, 0x467e, \
    { 0xb6, 0x3e, 0x8a, 0x99, 0x8f, 0x31, 0xa5, 0xe6 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMSVGFEImageElement : public nsIDOMSVGFilterPrimitiveStandardAttributes {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMSVGFEIMAGEELEMENT_IID)

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMSVGFEImageElement, NS_IDOMSVGFEIMAGEELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMSVGFEIMAGEELEMENT \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMSVGFEIMAGEELEMENT(_to) \
  /* no methods! */

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMSVGFEIMAGEELEMENT(_to) \
  /* no methods! */

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMSVGFEImageElement : public nsIDOMSVGFEImageElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMSVGFEIMAGEELEMENT

  nsDOMSVGFEImageElement();

private:
  ~nsDOMSVGFEImageElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMSVGFEImageElement, nsIDOMSVGFEImageElement)

nsDOMSVGFEImageElement::nsDOMSVGFEImageElement()
{
  /* member initializers and constructor code */
}

nsDOMSVGFEImageElement::~nsDOMSVGFEImageElement()
{
  /* destructor code */
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMSVGFEDisplacementMapElement */
#define NS_IDOMSVGFEDISPLACEMENTMAPELEMENT_IID_STR "bdda2dda-14d1-4c97-a1d6-95558d50d902"

#define NS_IDOMSVGFEDISPLACEMENTMAPELEMENT_IID \
  {0xbdda2dda, 0x14d1, 0x4c97, \
    { 0xa1, 0xd6, 0x95, 0x55, 0x8d, 0x50, 0xd9, 0x02 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMSVGFEDisplacementMapElement : public nsIDOMSVGFilterPrimitiveStandardAttributes {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMSVGFEDISPLACEMENTMAPELEMENT_IID)

  enum { SVG_CHANNEL_UNKNOWN = 0U };

  enum { SVG_CHANNEL_R = 1U };

  enum { SVG_CHANNEL_G = 2U };

  enum { SVG_CHANNEL_B = 3U };

  enum { SVG_CHANNEL_A = 4U };

  /* readonly attribute nsIDOMSVGAnimatedString in1; */
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1) = 0;

  /* readonly attribute nsIDOMSVGAnimatedString in2; */
  NS_SCRIPTABLE NS_IMETHOD GetIn2(nsIDOMSVGAnimatedString * *aIn2) = 0;

  /* readonly attribute nsIDOMSVGAnimatedNumber scale; */
  NS_SCRIPTABLE NS_IMETHOD GetScale(nsIDOMSVGAnimatedNumber * *aScale) = 0;

  /* readonly attribute nsIDOMSVGAnimatedEnumeration xChannelSelector; */
  NS_SCRIPTABLE NS_IMETHOD GetXChannelSelector(nsIDOMSVGAnimatedEnumeration * *aXChannelSelector) = 0;

  /* readonly attribute nsIDOMSVGAnimatedEnumeration yChannelSelector; */
  NS_SCRIPTABLE NS_IMETHOD GetYChannelSelector(nsIDOMSVGAnimatedEnumeration * *aYChannelSelector) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMSVGFEDisplacementMapElement, NS_IDOMSVGFEDISPLACEMENTMAPELEMENT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMSVGFEDISPLACEMENTMAPELEMENT \
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1); \
  NS_SCRIPTABLE NS_IMETHOD GetIn2(nsIDOMSVGAnimatedString * *aIn2); \
  NS_SCRIPTABLE NS_IMETHOD GetScale(nsIDOMSVGAnimatedNumber * *aScale); \
  NS_SCRIPTABLE NS_IMETHOD GetXChannelSelector(nsIDOMSVGAnimatedEnumeration * *aXChannelSelector); \
  NS_SCRIPTABLE NS_IMETHOD GetYChannelSelector(nsIDOMSVGAnimatedEnumeration * *aYChannelSelector); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMSVGFEDISPLACEMENTMAPELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1) { return _to GetIn1(aIn1); } \
  NS_SCRIPTABLE NS_IMETHOD GetIn2(nsIDOMSVGAnimatedString * *aIn2) { return _to GetIn2(aIn2); } \
  NS_SCRIPTABLE NS_IMETHOD GetScale(nsIDOMSVGAnimatedNumber * *aScale) { return _to GetScale(aScale); } \
  NS_SCRIPTABLE NS_IMETHOD GetXChannelSelector(nsIDOMSVGAnimatedEnumeration * *aXChannelSelector) { return _to GetXChannelSelector(aXChannelSelector); } \
  NS_SCRIPTABLE NS_IMETHOD GetYChannelSelector(nsIDOMSVGAnimatedEnumeration * *aYChannelSelector) { return _to GetYChannelSelector(aYChannelSelector); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMSVGFEDISPLACEMENTMAPELEMENT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetIn1(nsIDOMSVGAnimatedString * *aIn1) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIn1(aIn1); } \
  NS_SCRIPTABLE NS_IMETHOD GetIn2(nsIDOMSVGAnimatedString * *aIn2) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIn2(aIn2); } \
  NS_SCRIPTABLE NS_IMETHOD GetScale(nsIDOMSVGAnimatedNumber * *aScale) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetScale(aScale); } \
  NS_SCRIPTABLE NS_IMETHOD GetXChannelSelector(nsIDOMSVGAnimatedEnumeration * *aXChannelSelector) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetXChannelSelector(aXChannelSelector); } \
  NS_SCRIPTABLE NS_IMETHOD GetYChannelSelector(nsIDOMSVGAnimatedEnumeration * *aYChannelSelector) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetYChannelSelector(aYChannelSelector); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMSVGFEDisplacementMapElement : public nsIDOMSVGFEDisplacementMapElement
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMSVGFEDISPLACEMENTMAPELEMENT

  nsDOMSVGFEDisplacementMapElement();

private:
  ~nsDOMSVGFEDisplacementMapElement();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMSVGFEDisplacementMapElement, nsIDOMSVGFEDisplacementMapElement)

nsDOMSVGFEDisplacementMapElement::nsDOMSVGFEDisplacementMapElement()
{
  /* member initializers and constructor code */
}

nsDOMSVGFEDisplacementMapElement::~nsDOMSVGFEDisplacementMapElement()
{
  /* destructor code */
}

/* readonly attribute nsIDOMSVGAnimatedString in1; */
NS_IMETHODIMP nsDOMSVGFEDisplacementMapElement::GetIn1(nsIDOMSVGAnimatedString * *aIn1)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedString in2; */
NS_IMETHODIMP nsDOMSVGFEDisplacementMapElement::GetIn2(nsIDOMSVGAnimatedString * *aIn2)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedNumber scale; */
NS_IMETHODIMP nsDOMSVGFEDisplacementMapElement::GetScale(nsIDOMSVGAnimatedNumber * *aScale)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedEnumeration xChannelSelector; */
NS_IMETHODIMP nsDOMSVGFEDisplacementMapElement::GetXChannelSelector(nsIDOMSVGAnimatedEnumeration * *aXChannelSelector)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMSVGAnimatedEnumeration yChannelSelector; */
NS_IMETHODIMP nsDOMSVGFEDisplacementMapElement::GetYChannelSelector(nsIDOMSVGAnimatedEnumeration * *aYChannelSelector)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMSVGFilters_h__ */
