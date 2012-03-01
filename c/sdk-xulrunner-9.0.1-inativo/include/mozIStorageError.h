/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/storage/public/mozIStorageError.idl
 */

#ifndef __gen_mozIStorageError_h__
#define __gen_mozIStorageError_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
#ifdef ERROR
#undef ERROR
#endif

/* starting interface:    mozIStorageError */
#define MOZISTORAGEERROR_IID_STR "1f350f96-7023-434a-8864-40a1c493aac1"

#define MOZISTORAGEERROR_IID \
  {0x1f350f96, 0x7023, 0x434a, \
    { 0x88, 0x64, 0x40, 0xa1, 0xc4, 0x93, 0xaa, 0xc1 }}

class NS_NO_VTABLE NS_SCRIPTABLE mozIStorageError : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(MOZISTORAGEERROR_IID)

  enum { ERROR = 1 };

  enum { INTERNAL = 2 };

  enum { PERM = 3 };

  enum { ABORT = 4 };

  enum { BUSY = 5 };

  enum { LOCKED = 6 };

  enum { NOMEM = 7 };

  enum { READONLY = 8 };

  enum { INTERRUPT = 9 };

  enum { IOERR = 10 };

  enum { CORRUPT = 11 };

  enum { FULL = 13 };

  enum { CANTOPEN = 14 };

  enum { EMPTY = 16 };

  enum { SCHEMA = 17 };

  enum { TOOBIG = 18 };

  enum { CONSTRAINT = 19 };

  enum { MISMATCH = 20 };

  enum { MISUSE = 21 };

  enum { NOLFS = 22 };

  enum { AUTH = 23 };

  enum { FORMAT = 24 };

  enum { RANGE = 25 };

  enum { NOTADB = 26 };

  /* readonly attribute long result; */
  NS_SCRIPTABLE NS_IMETHOD GetResult(PRInt32 *aResult) = 0;

  /* readonly attribute AUTF8String message; */
  NS_SCRIPTABLE NS_IMETHOD GetMessage(nsACString & aMessage) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(mozIStorageError, MOZISTORAGEERROR_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_MOZISTORAGEERROR \
  NS_SCRIPTABLE NS_IMETHOD GetResult(PRInt32 *aResult); \
  NS_SCRIPTABLE NS_IMETHOD GetMessage(nsACString & aMessage); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_MOZISTORAGEERROR(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetResult(PRInt32 *aResult) { return _to GetResult(aResult); } \
  NS_SCRIPTABLE NS_IMETHOD GetMessage(nsACString & aMessage) { return _to GetMessage(aMessage); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_MOZISTORAGEERROR(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetResult(PRInt32 *aResult) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResult(aResult); } \
  NS_SCRIPTABLE NS_IMETHOD GetMessage(nsACString & aMessage) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMessage(aMessage); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public mozIStorageError
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_MOZISTORAGEERROR

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, mozIStorageError)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* readonly attribute long result; */
NS_IMETHODIMP _MYCLASS_::GetResult(PRInt32 *aResult)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AUTF8String message; */
NS_IMETHODIMP _MYCLASS_::GetMessage(nsACString & aMessage)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_mozIStorageError_h__ */
