/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/content/base/public/nsIDOMFile.idl
 */

#ifndef __gen_nsIDOMFile_h__
#define __gen_nsIDOMFile_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

#include "jspubtd.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
#include "jsapi.h"
class nsIDOMFileError; /* forward declaration */

class nsIInputStream; /* forward declaration */

class nsIURI; /* forward declaration */

class nsIPrincipal; /* forward declaration */

class nsIDOMBlob; /* forward declaration */


/* starting interface:    nsIDOMBlob */
#define NS_IDOMBLOB_IID_STR "d5237f31-443a-460b-9e42-449a135346f0"

#define NS_IDOMBLOB_IID \
  {0xd5237f31, 0x443a, 0x460b, \
    { 0x9e, 0x42, 0x44, 0x9a, 0x13, 0x53, 0x46, 0xf0 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMBlob : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMBLOB_IID)

  /* readonly attribute unsigned long long size; */
  NS_SCRIPTABLE NS_IMETHOD GetSize(PRUint64 *aSize) = 0;

  /* readonly attribute DOMString type; */
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType) = 0;

  /* [noscript] readonly attribute nsIInputStream internalStream; */
  NS_IMETHOD GetInternalStream(nsIInputStream * *aInternalStream) = 0;

  /* [noscript] DOMString getInternalUrl (in nsIPrincipal principal); */
  NS_IMETHOD GetInternalUrl(nsIPrincipal *principal, nsAString & _retval NS_OUTPARAM) = 0;

  /* [optional_argc] nsIDOMBlob mozSlice ([optional] in long long start, [optional] in long long end, [optional] in DOMString contentType); */
  NS_SCRIPTABLE NS_IMETHOD MozSlice(PRInt64 start, PRInt64 end, const nsAString & contentType, PRUint8 _argc, nsIDOMBlob * *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMBlob, NS_IDOMBLOB_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMBLOB \
  NS_SCRIPTABLE NS_IMETHOD GetSize(PRUint64 *aSize); \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType); \
  NS_IMETHOD GetInternalStream(nsIInputStream * *aInternalStream); \
  NS_IMETHOD GetInternalUrl(nsIPrincipal *principal, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD MozSlice(PRInt64 start, PRInt64 end, const nsAString & contentType, PRUint8 _argc, nsIDOMBlob * *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMBLOB(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetSize(PRUint64 *aSize) { return _to GetSize(aSize); } \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType) { return _to GetType(aType); } \
  NS_IMETHOD GetInternalStream(nsIInputStream * *aInternalStream) { return _to GetInternalStream(aInternalStream); } \
  NS_IMETHOD GetInternalUrl(nsIPrincipal *principal, nsAString & _retval NS_OUTPARAM) { return _to GetInternalUrl(principal, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD MozSlice(PRInt64 start, PRInt64 end, const nsAString & contentType, PRUint8 _argc, nsIDOMBlob * *_retval NS_OUTPARAM) { return _to MozSlice(start, end, contentType, _argc, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMBLOB(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetSize(PRUint64 *aSize) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSize(aSize); } \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(aType); } \
  NS_IMETHOD GetInternalStream(nsIInputStream * *aInternalStream) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInternalStream(aInternalStream); } \
  NS_IMETHOD GetInternalUrl(nsIPrincipal *principal, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInternalUrl(principal, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD MozSlice(PRInt64 start, PRInt64 end, const nsAString & contentType, PRUint8 _argc, nsIDOMBlob * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->MozSlice(start, end, contentType, _argc, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMBlob : public nsIDOMBlob
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMBLOB

  nsDOMBlob();

private:
  ~nsDOMBlob();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMBlob, nsIDOMBlob)

nsDOMBlob::nsDOMBlob()
{
  /* member initializers and constructor code */
}

nsDOMBlob::~nsDOMBlob()
{
  /* destructor code */
}

/* readonly attribute unsigned long long size; */
NS_IMETHODIMP nsDOMBlob::GetSize(PRUint64 *aSize)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString type; */
NS_IMETHODIMP nsDOMBlob::GetType(nsAString & aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] readonly attribute nsIInputStream internalStream; */
NS_IMETHODIMP nsDOMBlob::GetInternalStream(nsIInputStream * *aInternalStream)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] DOMString getInternalUrl (in nsIPrincipal principal); */
NS_IMETHODIMP nsDOMBlob::GetInternalUrl(nsIPrincipal *principal, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [optional_argc] nsIDOMBlob mozSlice ([optional] in long long start, [optional] in long long end, [optional] in DOMString contentType); */
NS_IMETHODIMP nsDOMBlob::MozSlice(PRInt64 start, PRInt64 end, const nsAString & contentType, PRUint8 _argc, nsIDOMBlob * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMFile */
#define NS_IDOMFILE_IID_STR "b096ef67-7b77-47f8-8e70-5d8ee36416bf"

#define NS_IDOMFILE_IID \
  {0xb096ef67, 0x7b77, 0x47f8, \
    { 0x8e, 0x70, 0x5d, 0x8e, 0xe3, 0x64, 0x16, 0xbf }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMFile : public nsIDOMBlob {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMFILE_IID)

  /* readonly attribute DOMString name; */
  NS_SCRIPTABLE NS_IMETHOD GetName(nsAString & aName) = 0;

  /* readonly attribute DOMString mozFullPath; */
  NS_SCRIPTABLE NS_IMETHOD GetMozFullPath(nsAString & aMozFullPath) = 0;

  /* [noscript] readonly attribute DOMString mozFullPathInternal; */
  NS_IMETHOD GetMozFullPathInternal(nsAString & aMozFullPathInternal) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMFile, NS_IDOMFILE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMFILE \
  NS_SCRIPTABLE NS_IMETHOD GetName(nsAString & aName); \
  NS_SCRIPTABLE NS_IMETHOD GetMozFullPath(nsAString & aMozFullPath); \
  NS_IMETHOD GetMozFullPathInternal(nsAString & aMozFullPathInternal); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMFILE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetName(nsAString & aName) { return _to GetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozFullPath(nsAString & aMozFullPath) { return _to GetMozFullPath(aMozFullPath); } \
  NS_IMETHOD GetMozFullPathInternal(nsAString & aMozFullPathInternal) { return _to GetMozFullPathInternal(aMozFullPathInternal); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMFILE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetName(nsAString & aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD GetMozFullPath(nsAString & aMozFullPath) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMozFullPath(aMozFullPath); } \
  NS_IMETHOD GetMozFullPathInternal(nsAString & aMozFullPathInternal) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMozFullPathInternal(aMozFullPathInternal); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMFile : public nsIDOMFile
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMFILE

  nsDOMFile();

private:
  ~nsDOMFile();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMFile, nsIDOMFile)

nsDOMFile::nsDOMFile()
{
  /* member initializers and constructor code */
}

nsDOMFile::~nsDOMFile()
{
  /* destructor code */
}

/* readonly attribute DOMString name; */
NS_IMETHODIMP nsDOMFile::GetName(nsAString & aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute DOMString mozFullPath; */
NS_IMETHODIMP nsDOMFile::GetMozFullPath(nsAString & aMozFullPath)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] readonly attribute DOMString mozFullPathInternal; */
NS_IMETHODIMP nsDOMFile::GetMozFullPathInternal(nsAString & aMozFullPathInternal)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDOMMozBlobBuilder */
#define NS_IDOMMOZBLOBBUILDER_IID_STR "006d2cde-ec18-41d4-acc3-43682dd418e2"

#define NS_IDOMMOZBLOBBUILDER_IID \
  {0x006d2cde, 0xec18, 0x41d4, \
    { 0xac, 0xc3, 0x43, 0x68, 0x2d, 0xd4, 0x18, 0xe2 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMMozBlobBuilder : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMMOZBLOBBUILDER_IID)

  /* nsIDOMBlob getBlob ([optional] in DOMString contentType); */
  NS_SCRIPTABLE NS_IMETHOD GetBlob(const nsAString & contentType, nsIDOMBlob * *_retval NS_OUTPARAM) = 0;

  /* nsIDOMFile getFile (in DOMString name, [optional] in DOMString contentType); */
  NS_SCRIPTABLE NS_IMETHOD GetFile(const nsAString & name, const nsAString & contentType, nsIDOMFile * *_retval NS_OUTPARAM) = 0;

  /* [implicit_jscontext] void append (in jsval data); */
  NS_SCRIPTABLE NS_IMETHOD Append(const JS::Value & data, JSContext* cx) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMMozBlobBuilder, NS_IDOMMOZBLOBBUILDER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMMOZBLOBBUILDER \
  NS_SCRIPTABLE NS_IMETHOD GetBlob(const nsAString & contentType, nsIDOMBlob * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetFile(const nsAString & name, const nsAString & contentType, nsIDOMFile * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Append(const JS::Value & data, JSContext* cx); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMMOZBLOBBUILDER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetBlob(const nsAString & contentType, nsIDOMBlob * *_retval NS_OUTPARAM) { return _to GetBlob(contentType, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetFile(const nsAString & name, const nsAString & contentType, nsIDOMFile * *_retval NS_OUTPARAM) { return _to GetFile(name, contentType, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Append(const JS::Value & data, JSContext* cx) { return _to Append(data, cx); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMMOZBLOBBUILDER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetBlob(const nsAString & contentType, nsIDOMBlob * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBlob(contentType, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetFile(const nsAString & name, const nsAString & contentType, nsIDOMFile * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFile(name, contentType, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Append(const JS::Value & data, JSContext* cx) { return !_to ? NS_ERROR_NULL_POINTER : _to->Append(data, cx); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMMozBlobBuilder : public nsIDOMMozBlobBuilder
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMMOZBLOBBUILDER

  nsDOMMozBlobBuilder();

private:
  ~nsDOMMozBlobBuilder();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMMozBlobBuilder, nsIDOMMozBlobBuilder)

nsDOMMozBlobBuilder::nsDOMMozBlobBuilder()
{
  /* member initializers and constructor code */
}

nsDOMMozBlobBuilder::~nsDOMMozBlobBuilder()
{
  /* destructor code */
}

/* nsIDOMBlob getBlob ([optional] in DOMString contentType); */
NS_IMETHODIMP nsDOMMozBlobBuilder::GetBlob(const nsAString & contentType, nsIDOMBlob * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDOMFile getFile (in DOMString name, [optional] in DOMString contentType); */
NS_IMETHODIMP nsDOMMozBlobBuilder::GetFile(const nsAString & name, const nsAString & contentType, nsIDOMFile * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] void append (in jsval data); */
NS_IMETHODIMP nsDOMMozBlobBuilder::Append(const JS::Value & data, JSContext* cx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDOMFile_h__ */
