/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/intl/uconv/idl/nsIUTF8ConverterService.idl
 */

#ifndef __gen_nsIUTF8ConverterService_h__
#define __gen_nsIUTF8ConverterService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIUTF8ConverterService */
#define NS_IUTF8CONVERTERSERVICE_IID_STR "249f52a3-2599-4b00-ba40-0481364831a2"

#define NS_IUTF8CONVERTERSERVICE_IID \
  {0x249f52a3, 0x2599, 0x4b00, \
    { 0xba, 0x40, 0x04, 0x81, 0x36, 0x48, 0x31, 0xa2 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIUTF8ConverterService : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IUTF8CONVERTERSERVICE_IID)

  /* AUTF8String convertStringToUTF8 (in ACString aString, in string aCharset, in boolean aSkipCheck); */
  NS_SCRIPTABLE NS_IMETHOD ConvertStringToUTF8(const nsACString & aString, const char * aCharset, PRBool aSkipCheck, nsACString & _retval NS_OUTPARAM) = 0;

  /* AUTF8String convertURISpecToUTF8 (in ACString aSpec, in string aCharset); */
  NS_SCRIPTABLE NS_IMETHOD ConvertURISpecToUTF8(const nsACString & aSpec, const char * aCharset, nsACString & _retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIUTF8ConverterService, NS_IUTF8CONVERTERSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIUTF8CONVERTERSERVICE \
  NS_SCRIPTABLE NS_IMETHOD ConvertStringToUTF8(const nsACString & aString, const char * aCharset, PRBool aSkipCheck, nsACString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ConvertURISpecToUTF8(const nsACString & aSpec, const char * aCharset, nsACString & _retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIUTF8CONVERTERSERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD ConvertStringToUTF8(const nsACString & aString, const char * aCharset, PRBool aSkipCheck, nsACString & _retval NS_OUTPARAM) { return _to ConvertStringToUTF8(aString, aCharset, aSkipCheck, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ConvertURISpecToUTF8(const nsACString & aSpec, const char * aCharset, nsACString & _retval NS_OUTPARAM) { return _to ConvertURISpecToUTF8(aSpec, aCharset, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIUTF8CONVERTERSERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD ConvertStringToUTF8(const nsACString & aString, const char * aCharset, PRBool aSkipCheck, nsACString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ConvertStringToUTF8(aString, aCharset, aSkipCheck, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ConvertURISpecToUTF8(const nsACString & aSpec, const char * aCharset, nsACString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ConvertURISpecToUTF8(aSpec, aCharset, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsUTF8ConverterService : public nsIUTF8ConverterService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIUTF8CONVERTERSERVICE

  nsUTF8ConverterService();

private:
  ~nsUTF8ConverterService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsUTF8ConverterService, nsIUTF8ConverterService)

nsUTF8ConverterService::nsUTF8ConverterService()
{
  /* member initializers and constructor code */
}

nsUTF8ConverterService::~nsUTF8ConverterService()
{
  /* destructor code */
}

/* AUTF8String convertStringToUTF8 (in ACString aString, in string aCharset, in boolean aSkipCheck); */
NS_IMETHODIMP nsUTF8ConverterService::ConvertStringToUTF8(const nsACString & aString, const char * aCharset, PRBool aSkipCheck, nsACString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AUTF8String convertURISpecToUTF8 (in ACString aSpec, in string aCharset); */
NS_IMETHODIMP nsUTF8ConverterService::ConvertURISpecToUTF8(const nsACString & aSpec, const char * aCharset, nsACString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIUTF8ConverterService_h__ */
