/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/js/ductwork/debugger/IJSDebugger.idl
 */

#ifndef __gen_IJSDebugger_h__
#define __gen_IJSDebugger_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#include "jspubtd.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    IJSDebugger */
#define IJSDEBUGGER_IID_STR "2fc14cc6-4ed0-4bbf-a7dd-e535bf088eb5"

#define IJSDEBUGGER_IID \
  {0x2fc14cc6, 0x4ed0, 0x4bbf, \
    { 0xa7, 0xdd, 0xe5, 0x35, 0xbf, 0x08, 0x8e, 0xb5 }}

class NS_NO_VTABLE NS_SCRIPTABLE IJSDebugger : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(IJSDEBUGGER_IID)

  /* [implicit_jscontext] void addClass (); */
  NS_SCRIPTABLE NS_IMETHOD AddClass(JSContext* cx) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(IJSDebugger, IJSDEBUGGER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_IJSDEBUGGER \
  NS_SCRIPTABLE NS_IMETHOD AddClass(JSContext* cx); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_IJSDEBUGGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD AddClass(JSContext* cx) { return _to AddClass(cx); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_IJSDEBUGGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD AddClass(JSContext* cx) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddClass(cx); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public IJSDebugger
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IJSDEBUGGER

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, IJSDebugger)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* [implicit_jscontext] void addClass (); */
NS_IMETHODIMP _MYCLASS_::AddClass(JSContext* cx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_IJSDebugger_h__ */
