/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/js/src/xpconnect/idl/xpcIJSModuleLoader.idl
 */

#ifndef __gen_xpcIJSModuleLoader_h__
#define __gen_xpcIJSModuleLoader_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
struct JSObject;

/* starting interface:    xpcIJSModuleLoader */
#define XPCIJSMODULELOADER_IID_STR "3f945a8e-58ca-47ba-a789-82d022e837fd"

#define XPCIJSMODULELOADER_IID \
  {0x3f945a8e, 0x58ca, 0x47ba, \
    { 0xa7, 0x89, 0x82, 0xd0, 0x22, 0xe8, 0x37, 0xfd }}

class NS_NO_VTABLE NS_SCRIPTABLE xpcIJSModuleLoader : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(XPCIJSMODULELOADER_IID)

  /* void import (in AUTF8String aResourceURI); */
  NS_SCRIPTABLE NS_IMETHOD Import(const nsACString & aResourceURI) = 0;

  /* [noscript] JSObjectPtr importInto (in AUTF8String aResourceURI, in JSObjectPtr targetObj, in nsAXPCNativeCallContextPtr cc); */
  NS_IMETHOD ImportInto(const nsACString & aResourceURI, JSObject *targetObj, nsAXPCNativeCallContext *cc, JSObject **_retval NS_OUTPARAM) = 0;

  /* void unload (in AUTF8String aResourceURI); */
  NS_SCRIPTABLE NS_IMETHOD Unload(const nsACString & aResourceURI) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(xpcIJSModuleLoader, XPCIJSMODULELOADER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_XPCIJSMODULELOADER \
  NS_SCRIPTABLE NS_IMETHOD Import(const nsACString & aResourceURI); \
  NS_IMETHOD ImportInto(const nsACString & aResourceURI, JSObject *targetObj, nsAXPCNativeCallContext *cc, JSObject **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Unload(const nsACString & aResourceURI); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_XPCIJSMODULELOADER(_to) \
  NS_SCRIPTABLE NS_IMETHOD Import(const nsACString & aResourceURI) { return _to Import(aResourceURI); } \
  NS_IMETHOD ImportInto(const nsACString & aResourceURI, JSObject *targetObj, nsAXPCNativeCallContext *cc, JSObject **_retval NS_OUTPARAM) { return _to ImportInto(aResourceURI, targetObj, cc, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Unload(const nsACString & aResourceURI) { return _to Unload(aResourceURI); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_XPCIJSMODULELOADER(_to) \
  NS_SCRIPTABLE NS_IMETHOD Import(const nsACString & aResourceURI) { return !_to ? NS_ERROR_NULL_POINTER : _to->Import(aResourceURI); } \
  NS_IMETHOD ImportInto(const nsACString & aResourceURI, JSObject *targetObj, nsAXPCNativeCallContext *cc, JSObject **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ImportInto(aResourceURI, targetObj, cc, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Unload(const nsACString & aResourceURI) { return !_to ? NS_ERROR_NULL_POINTER : _to->Unload(aResourceURI); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public xpcIJSModuleLoader
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_XPCIJSMODULELOADER

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, xpcIJSModuleLoader)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void import (in AUTF8String aResourceURI); */
NS_IMETHODIMP _MYCLASS_::Import(const nsACString & aResourceURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] JSObjectPtr importInto (in AUTF8String aResourceURI, in JSObjectPtr targetObj, in nsAXPCNativeCallContextPtr cc); */
NS_IMETHODIMP _MYCLASS_::ImportInto(const nsACString & aResourceURI, JSObject *targetObj, nsAXPCNativeCallContext *cc, JSObject **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void unload (in AUTF8String aResourceURI); */
NS_IMETHODIMP _MYCLASS_::Unload(const nsACString & aResourceURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_xpcIJSModuleLoader_h__ */
