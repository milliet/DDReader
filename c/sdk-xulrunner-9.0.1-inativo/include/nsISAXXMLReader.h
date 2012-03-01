/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/parser/xml/public/nsISAXXMLReader.idl
 */

#ifndef __gen_nsISAXXMLReader_h__
#define __gen_nsISAXXMLReader_h__


#ifndef __gen_nsIStreamListener_h__
#include "nsIStreamListener.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIInputStream; /* forward declaration */

class nsIRequestObserver; /* forward declaration */

class nsIURI; /* forward declaration */

class nsISAXContentHandler; /* forward declaration */

class nsISAXDTDHandler; /* forward declaration */

class nsISAXEntityResolver; /* forward declaration */

class nsISAXErrorHandler; /* forward declaration */

class nsISAXLexicalHandler; /* forward declaration */


/* starting interface:    nsISAXXMLReader */
#define NS_ISAXXMLREADER_IID_STR "5556997e-d816-4218-8b54-803d4261206e"

#define NS_ISAXXMLREADER_IID \
  {0x5556997e, 0xd816, 0x4218, \
    { 0x8b, 0x54, 0x80, 0x3d, 0x42, 0x61, 0x20, 0x6e }}

class NS_NO_VTABLE NS_SCRIPTABLE nsISAXXMLReader : public nsIStreamListener {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ISAXXMLREADER_IID)

  /* attribute nsIURI baseURI; */
  NS_SCRIPTABLE NS_IMETHOD GetBaseURI(nsIURI * *aBaseURI) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetBaseURI(nsIURI *aBaseURI) = 0;

  /* attribute nsISAXContentHandler contentHandler; */
  NS_SCRIPTABLE NS_IMETHOD GetContentHandler(nsISAXContentHandler * *aContentHandler) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetContentHandler(nsISAXContentHandler *aContentHandler) = 0;

  /* attribute nsISAXDTDHandler dtdHandler; */
  NS_SCRIPTABLE NS_IMETHOD GetDtdHandler(nsISAXDTDHandler * *aDtdHandler) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetDtdHandler(nsISAXDTDHandler *aDtdHandler) = 0;

  /* attribute nsISAXErrorHandler errorHandler; */
  NS_SCRIPTABLE NS_IMETHOD GetErrorHandler(nsISAXErrorHandler * *aErrorHandler) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetErrorHandler(nsISAXErrorHandler *aErrorHandler) = 0;

  /* attribute nsISAXLexicalHandler lexicalHandler; */
  NS_SCRIPTABLE NS_IMETHOD GetLexicalHandler(nsISAXLexicalHandler * *aLexicalHandler) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetLexicalHandler(nsISAXLexicalHandler *aLexicalHandler) = 0;

  /* void setFeature (in AString name, in boolean value); */
  NS_SCRIPTABLE NS_IMETHOD SetFeature(const nsAString & name, PRBool value) = 0;

  /* boolean getFeature (in AString name); */
  NS_SCRIPTABLE NS_IMETHOD GetFeature(const nsAString & name, PRBool *_retval NS_OUTPARAM) = 0;

  /* void setProperty (in AString name, in nsISupports value); */
  NS_SCRIPTABLE NS_IMETHOD SetProperty(const nsAString & name, nsISupports *value) = 0;

  /* boolean getProperty (in AString name); */
  NS_SCRIPTABLE NS_IMETHOD GetProperty(const nsAString & name, PRBool *_retval NS_OUTPARAM) = 0;

  /* void parseFromString (in AString str, in string contentType); */
  NS_SCRIPTABLE NS_IMETHOD ParseFromString(const nsAString & str, const char * contentType) = 0;

  /* void parseFromStream (in nsIInputStream stream, in string charset, in string contentType); */
  NS_SCRIPTABLE NS_IMETHOD ParseFromStream(nsIInputStream *stream, const char * charset, const char * contentType) = 0;

  /* void parseAsync (in nsIRequestObserver observer); */
  NS_SCRIPTABLE NS_IMETHOD ParseAsync(nsIRequestObserver *observer) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsISAXXMLReader, NS_ISAXXMLREADER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSISAXXMLREADER \
  NS_SCRIPTABLE NS_IMETHOD GetBaseURI(nsIURI * *aBaseURI); \
  NS_SCRIPTABLE NS_IMETHOD SetBaseURI(nsIURI *aBaseURI); \
  NS_SCRIPTABLE NS_IMETHOD GetContentHandler(nsISAXContentHandler * *aContentHandler); \
  NS_SCRIPTABLE NS_IMETHOD SetContentHandler(nsISAXContentHandler *aContentHandler); \
  NS_SCRIPTABLE NS_IMETHOD GetDtdHandler(nsISAXDTDHandler * *aDtdHandler); \
  NS_SCRIPTABLE NS_IMETHOD SetDtdHandler(nsISAXDTDHandler *aDtdHandler); \
  NS_SCRIPTABLE NS_IMETHOD GetErrorHandler(nsISAXErrorHandler * *aErrorHandler); \
  NS_SCRIPTABLE NS_IMETHOD SetErrorHandler(nsISAXErrorHandler *aErrorHandler); \
  NS_SCRIPTABLE NS_IMETHOD GetLexicalHandler(nsISAXLexicalHandler * *aLexicalHandler); \
  NS_SCRIPTABLE NS_IMETHOD SetLexicalHandler(nsISAXLexicalHandler *aLexicalHandler); \
  NS_SCRIPTABLE NS_IMETHOD SetFeature(const nsAString & name, PRBool value); \
  NS_SCRIPTABLE NS_IMETHOD GetFeature(const nsAString & name, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetProperty(const nsAString & name, nsISupports *value); \
  NS_SCRIPTABLE NS_IMETHOD GetProperty(const nsAString & name, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ParseFromString(const nsAString & str, const char * contentType); \
  NS_SCRIPTABLE NS_IMETHOD ParseFromStream(nsIInputStream *stream, const char * charset, const char * contentType); \
  NS_SCRIPTABLE NS_IMETHOD ParseAsync(nsIRequestObserver *observer); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSISAXXMLREADER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetBaseURI(nsIURI * *aBaseURI) { return _to GetBaseURI(aBaseURI); } \
  NS_SCRIPTABLE NS_IMETHOD SetBaseURI(nsIURI *aBaseURI) { return _to SetBaseURI(aBaseURI); } \
  NS_SCRIPTABLE NS_IMETHOD GetContentHandler(nsISAXContentHandler * *aContentHandler) { return _to GetContentHandler(aContentHandler); } \
  NS_SCRIPTABLE NS_IMETHOD SetContentHandler(nsISAXContentHandler *aContentHandler) { return _to SetContentHandler(aContentHandler); } \
  NS_SCRIPTABLE NS_IMETHOD GetDtdHandler(nsISAXDTDHandler * *aDtdHandler) { return _to GetDtdHandler(aDtdHandler); } \
  NS_SCRIPTABLE NS_IMETHOD SetDtdHandler(nsISAXDTDHandler *aDtdHandler) { return _to SetDtdHandler(aDtdHandler); } \
  NS_SCRIPTABLE NS_IMETHOD GetErrorHandler(nsISAXErrorHandler * *aErrorHandler) { return _to GetErrorHandler(aErrorHandler); } \
  NS_SCRIPTABLE NS_IMETHOD SetErrorHandler(nsISAXErrorHandler *aErrorHandler) { return _to SetErrorHandler(aErrorHandler); } \
  NS_SCRIPTABLE NS_IMETHOD GetLexicalHandler(nsISAXLexicalHandler * *aLexicalHandler) { return _to GetLexicalHandler(aLexicalHandler); } \
  NS_SCRIPTABLE NS_IMETHOD SetLexicalHandler(nsISAXLexicalHandler *aLexicalHandler) { return _to SetLexicalHandler(aLexicalHandler); } \
  NS_SCRIPTABLE NS_IMETHOD SetFeature(const nsAString & name, PRBool value) { return _to SetFeature(name, value); } \
  NS_SCRIPTABLE NS_IMETHOD GetFeature(const nsAString & name, PRBool *_retval NS_OUTPARAM) { return _to GetFeature(name, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetProperty(const nsAString & name, nsISupports *value) { return _to SetProperty(name, value); } \
  NS_SCRIPTABLE NS_IMETHOD GetProperty(const nsAString & name, PRBool *_retval NS_OUTPARAM) { return _to GetProperty(name, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ParseFromString(const nsAString & str, const char * contentType) { return _to ParseFromString(str, contentType); } \
  NS_SCRIPTABLE NS_IMETHOD ParseFromStream(nsIInputStream *stream, const char * charset, const char * contentType) { return _to ParseFromStream(stream, charset, contentType); } \
  NS_SCRIPTABLE NS_IMETHOD ParseAsync(nsIRequestObserver *observer) { return _to ParseAsync(observer); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSISAXXMLREADER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetBaseURI(nsIURI * *aBaseURI) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBaseURI(aBaseURI); } \
  NS_SCRIPTABLE NS_IMETHOD SetBaseURI(nsIURI *aBaseURI) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetBaseURI(aBaseURI); } \
  NS_SCRIPTABLE NS_IMETHOD GetContentHandler(nsISAXContentHandler * *aContentHandler) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetContentHandler(aContentHandler); } \
  NS_SCRIPTABLE NS_IMETHOD SetContentHandler(nsISAXContentHandler *aContentHandler) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetContentHandler(aContentHandler); } \
  NS_SCRIPTABLE NS_IMETHOD GetDtdHandler(nsISAXDTDHandler * *aDtdHandler) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDtdHandler(aDtdHandler); } \
  NS_SCRIPTABLE NS_IMETHOD SetDtdHandler(nsISAXDTDHandler *aDtdHandler) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDtdHandler(aDtdHandler); } \
  NS_SCRIPTABLE NS_IMETHOD GetErrorHandler(nsISAXErrorHandler * *aErrorHandler) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetErrorHandler(aErrorHandler); } \
  NS_SCRIPTABLE NS_IMETHOD SetErrorHandler(nsISAXErrorHandler *aErrorHandler) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetErrorHandler(aErrorHandler); } \
  NS_SCRIPTABLE NS_IMETHOD GetLexicalHandler(nsISAXLexicalHandler * *aLexicalHandler) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLexicalHandler(aLexicalHandler); } \
  NS_SCRIPTABLE NS_IMETHOD SetLexicalHandler(nsISAXLexicalHandler *aLexicalHandler) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetLexicalHandler(aLexicalHandler); } \
  NS_SCRIPTABLE NS_IMETHOD SetFeature(const nsAString & name, PRBool value) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFeature(name, value); } \
  NS_SCRIPTABLE NS_IMETHOD GetFeature(const nsAString & name, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFeature(name, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetProperty(const nsAString & name, nsISupports *value) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetProperty(name, value); } \
  NS_SCRIPTABLE NS_IMETHOD GetProperty(const nsAString & name, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetProperty(name, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ParseFromString(const nsAString & str, const char * contentType) { return !_to ? NS_ERROR_NULL_POINTER : _to->ParseFromString(str, contentType); } \
  NS_SCRIPTABLE NS_IMETHOD ParseFromStream(nsIInputStream *stream, const char * charset, const char * contentType) { return !_to ? NS_ERROR_NULL_POINTER : _to->ParseFromStream(stream, charset, contentType); } \
  NS_SCRIPTABLE NS_IMETHOD ParseAsync(nsIRequestObserver *observer) { return !_to ? NS_ERROR_NULL_POINTER : _to->ParseAsync(observer); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsSAXXMLReader : public nsISAXXMLReader
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSISAXXMLREADER

  nsSAXXMLReader();

private:
  ~nsSAXXMLReader();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsSAXXMLReader, nsISAXXMLReader)

nsSAXXMLReader::nsSAXXMLReader()
{
  /* member initializers and constructor code */
}

nsSAXXMLReader::~nsSAXXMLReader()
{
  /* destructor code */
}

/* attribute nsIURI baseURI; */
NS_IMETHODIMP nsSAXXMLReader::GetBaseURI(nsIURI * *aBaseURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSAXXMLReader::SetBaseURI(nsIURI *aBaseURI)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsISAXContentHandler contentHandler; */
NS_IMETHODIMP nsSAXXMLReader::GetContentHandler(nsISAXContentHandler * *aContentHandler)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSAXXMLReader::SetContentHandler(nsISAXContentHandler *aContentHandler)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsISAXDTDHandler dtdHandler; */
NS_IMETHODIMP nsSAXXMLReader::GetDtdHandler(nsISAXDTDHandler * *aDtdHandler)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSAXXMLReader::SetDtdHandler(nsISAXDTDHandler *aDtdHandler)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsISAXErrorHandler errorHandler; */
NS_IMETHODIMP nsSAXXMLReader::GetErrorHandler(nsISAXErrorHandler * *aErrorHandler)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSAXXMLReader::SetErrorHandler(nsISAXErrorHandler *aErrorHandler)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsISAXLexicalHandler lexicalHandler; */
NS_IMETHODIMP nsSAXXMLReader::GetLexicalHandler(nsISAXLexicalHandler * *aLexicalHandler)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsSAXXMLReader::SetLexicalHandler(nsISAXLexicalHandler *aLexicalHandler)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setFeature (in AString name, in boolean value); */
NS_IMETHODIMP nsSAXXMLReader::SetFeature(const nsAString & name, PRBool value)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean getFeature (in AString name); */
NS_IMETHODIMP nsSAXXMLReader::GetFeature(const nsAString & name, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setProperty (in AString name, in nsISupports value); */
NS_IMETHODIMP nsSAXXMLReader::SetProperty(const nsAString & name, nsISupports *value)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean getProperty (in AString name); */
NS_IMETHODIMP nsSAXXMLReader::GetProperty(const nsAString & name, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void parseFromString (in AString str, in string contentType); */
NS_IMETHODIMP nsSAXXMLReader::ParseFromString(const nsAString & str, const char * contentType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void parseFromStream (in nsIInputStream stream, in string charset, in string contentType); */
NS_IMETHODIMP nsSAXXMLReader::ParseFromStream(nsIInputStream *stream, const char * charset, const char * contentType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void parseAsync (in nsIRequestObserver observer); */
NS_IMETHODIMP nsSAXXMLReader::ParseAsync(nsIRequestObserver *observer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsISAXXMLReader_h__ */
