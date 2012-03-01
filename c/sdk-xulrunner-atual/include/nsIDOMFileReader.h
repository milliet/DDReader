/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/content/base/public/nsIDOMFileReader.idl
 */

#ifndef __gen_nsIDOMFileReader_h__
#define __gen_nsIDOMFileReader_h__


#ifndef __gen_nsIDOMEventTarget_h__
#include "nsIDOMEventTarget.h"
#endif

#include "jspubtd.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMEventListener; /* forward declaration */

class nsIDOMBlob; /* forward declaration */

class nsIDOMFileError; /* forward declaration */


/* starting interface:    nsIDOMFileReader */
#define NS_IDOMFILEREADER_IID_STR "3d77e784-1459-4206-b8a2-0855d826f569"

#define NS_IDOMFILEREADER_IID \
  {0x3d77e784, 0x1459, 0x4206, \
    { 0xb8, 0xa2, 0x08, 0x55, 0xd8, 0x26, 0xf5, 0x69 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDOMFileReader : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOMFILEREADER_IID)

  /* [implicit_jscontext] void readAsArrayBuffer (in nsIDOMBlob filedata); */
  NS_SCRIPTABLE NS_IMETHOD ReadAsArrayBuffer(nsIDOMBlob *filedata, JSContext* cx) = 0;

  /* void readAsBinaryString (in nsIDOMBlob filedata); */
  NS_SCRIPTABLE NS_IMETHOD ReadAsBinaryString(nsIDOMBlob *filedata) = 0;

  /* void readAsText (in nsIDOMBlob filedata, [optional] in DOMString encoding); */
  NS_SCRIPTABLE NS_IMETHOD ReadAsText(nsIDOMBlob *filedata, const nsAString & encoding) = 0;

  /* void readAsDataURL (in nsIDOMBlob file); */
  NS_SCRIPTABLE NS_IMETHOD ReadAsDataURL(nsIDOMBlob *file) = 0;

  /* void abort (); */
  NS_SCRIPTABLE NS_IMETHOD Abort(void) = 0;

  enum { EMPTY = 0U };

  enum { LOADING = 1U };

  enum { DONE = 2U };

  /* readonly attribute unsigned short readyState; */
  NS_SCRIPTABLE NS_IMETHOD GetReadyState(PRUint16 *aReadyState) = 0;

  /* [implicit_jscontext] readonly attribute jsval result; */
  NS_SCRIPTABLE NS_IMETHOD GetResult(JSContext* cx, JS::Value *aResult) = 0;

  /* readonly attribute nsIDOMFileError error; */
  NS_SCRIPTABLE NS_IMETHOD GetError(nsIDOMFileError * *aError) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDOMFileReader, NS_IDOMFILEREADER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOMFILEREADER \
  NS_SCRIPTABLE NS_IMETHOD ReadAsArrayBuffer(nsIDOMBlob *filedata, JSContext* cx); \
  NS_SCRIPTABLE NS_IMETHOD ReadAsBinaryString(nsIDOMBlob *filedata); \
  NS_SCRIPTABLE NS_IMETHOD ReadAsText(nsIDOMBlob *filedata, const nsAString & encoding); \
  NS_SCRIPTABLE NS_IMETHOD ReadAsDataURL(nsIDOMBlob *file); \
  NS_SCRIPTABLE NS_IMETHOD Abort(void); \
  NS_SCRIPTABLE NS_IMETHOD GetReadyState(PRUint16 *aReadyState); \
  NS_SCRIPTABLE NS_IMETHOD GetResult(JSContext* cx, JS::Value *aResult); \
  NS_SCRIPTABLE NS_IMETHOD GetError(nsIDOMFileError * *aError); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOMFILEREADER(_to) \
  NS_SCRIPTABLE NS_IMETHOD ReadAsArrayBuffer(nsIDOMBlob *filedata, JSContext* cx) { return _to ReadAsArrayBuffer(filedata, cx); } \
  NS_SCRIPTABLE NS_IMETHOD ReadAsBinaryString(nsIDOMBlob *filedata) { return _to ReadAsBinaryString(filedata); } \
  NS_SCRIPTABLE NS_IMETHOD ReadAsText(nsIDOMBlob *filedata, const nsAString & encoding) { return _to ReadAsText(filedata, encoding); } \
  NS_SCRIPTABLE NS_IMETHOD ReadAsDataURL(nsIDOMBlob *file) { return _to ReadAsDataURL(file); } \
  NS_SCRIPTABLE NS_IMETHOD Abort(void) { return _to Abort(); } \
  NS_SCRIPTABLE NS_IMETHOD GetReadyState(PRUint16 *aReadyState) { return _to GetReadyState(aReadyState); } \
  NS_SCRIPTABLE NS_IMETHOD GetResult(JSContext* cx, JS::Value *aResult) { return _to GetResult(cx, aResult); } \
  NS_SCRIPTABLE NS_IMETHOD GetError(nsIDOMFileError * *aError) { return _to GetError(aError); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOMFILEREADER(_to) \
  NS_SCRIPTABLE NS_IMETHOD ReadAsArrayBuffer(nsIDOMBlob *filedata, JSContext* cx) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReadAsArrayBuffer(filedata, cx); } \
  NS_SCRIPTABLE NS_IMETHOD ReadAsBinaryString(nsIDOMBlob *filedata) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReadAsBinaryString(filedata); } \
  NS_SCRIPTABLE NS_IMETHOD ReadAsText(nsIDOMBlob *filedata, const nsAString & encoding) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReadAsText(filedata, encoding); } \
  NS_SCRIPTABLE NS_IMETHOD ReadAsDataURL(nsIDOMBlob *file) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReadAsDataURL(file); } \
  NS_SCRIPTABLE NS_IMETHOD Abort(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Abort(); } \
  NS_SCRIPTABLE NS_IMETHOD GetReadyState(PRUint16 *aReadyState) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetReadyState(aReadyState); } \
  NS_SCRIPTABLE NS_IMETHOD GetResult(JSContext* cx, JS::Value *aResult) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResult(cx, aResult); } \
  NS_SCRIPTABLE NS_IMETHOD GetError(nsIDOMFileError * *aError) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetError(aError); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDOMFileReader : public nsIDOMFileReader
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOMFILEREADER

  nsDOMFileReader();

private:
  ~nsDOMFileReader();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDOMFileReader, nsIDOMFileReader)

nsDOMFileReader::nsDOMFileReader()
{
  /* member initializers and constructor code */
}

nsDOMFileReader::~nsDOMFileReader()
{
  /* destructor code */
}

/* [implicit_jscontext] void readAsArrayBuffer (in nsIDOMBlob filedata); */
NS_IMETHODIMP nsDOMFileReader::ReadAsArrayBuffer(nsIDOMBlob *filedata, JSContext* cx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void readAsBinaryString (in nsIDOMBlob filedata); */
NS_IMETHODIMP nsDOMFileReader::ReadAsBinaryString(nsIDOMBlob *filedata)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void readAsText (in nsIDOMBlob filedata, [optional] in DOMString encoding); */
NS_IMETHODIMP nsDOMFileReader::ReadAsText(nsIDOMBlob *filedata, const nsAString & encoding)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void readAsDataURL (in nsIDOMBlob file); */
NS_IMETHODIMP nsDOMFileReader::ReadAsDataURL(nsIDOMBlob *file)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void abort (); */
NS_IMETHODIMP nsDOMFileReader::Abort()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned short readyState; */
NS_IMETHODIMP nsDOMFileReader::GetReadyState(PRUint16 *aReadyState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] readonly attribute jsval result; */
NS_IMETHODIMP nsDOMFileReader::GetResult(JSContext* cx, JS::Value *aResult)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIDOMFileError error; */
NS_IMETHODIMP nsDOMFileReader::GetError(nsIDOMFileError * *aError)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

#define NS_FILEREADER_CID                            \
{0x06aa7c21, 0xfe05, 0x4cf2,                         \
{0xb1, 0xc4, 0x0c, 0x71, 0x26, 0xa4, 0xf7, 0x13}}
#define NS_FILEREADER_CONTRACTID \
"@mozilla.org/files/filereader;1"

#endif /* __gen_nsIDOMFileReader_h__ */
