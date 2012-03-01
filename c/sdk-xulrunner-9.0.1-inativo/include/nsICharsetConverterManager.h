/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/intl/uconv/idl/nsICharsetConverterManager.idl
 */

#ifndef __gen_nsICharsetConverterManager_h__
#define __gen_nsICharsetConverterManager_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIAtom_h__
#include "nsIAtom.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
#include "nsIUnicodeDecoder.h"
#include "nsIUnicodeEncoder.h"
#include "nsStringGlue.h"
// XXX change to NS_CHARSETCONVERTERMANAGER_CID
#define NS_ICHARSETCONVERTERMANAGER_CID \
  {0x3c1c0163, 0x9bd0, 0x11d3, { 0x9d, 0x9, 0x0, 0x50, 0x4, 0x0, 0x7, 0xb2}}
// XXX change to NS_CHARSETCONVERTERMANAGER_PID
#define NS_CHARSETCONVERTERMANAGER_CONTRACTID "@mozilla.org/charset-converter-manager;1"
class nsIUnicodeDecoder; /* forward declaration */

class nsIUnicodeEncoder; /* forward declaration */

class nsIUTF8StringEnumerator; /* forward declaration */


/* starting interface:    nsICharsetConverterManager */
#define NS_ICHARSETCONVERTERMANAGER_IID_STR "bf733b00-198f-4553-a061-637a21793330"

#define NS_ICHARSETCONVERTERMANAGER_IID \
  {0xbf733b00, 0x198f, 0x4553, \
    { 0xa0, 0x61, 0x63, 0x7a, 0x21, 0x79, 0x33, 0x30 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsICharsetConverterManager : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ICHARSETCONVERTERMANAGER_IID)

  /* [noscript] nsIUnicodeDecoder getUnicodeDecoder (in string charset); */
  NS_IMETHOD GetUnicodeDecoder(const char * charset, nsIUnicodeDecoder * *_retval NS_OUTPARAM) = 0;

  /* [noscript] nsIUnicodeDecoder getUnicodeDecoderRaw (in string charset); */
  NS_IMETHOD GetUnicodeDecoderRaw(const char * charset, nsIUnicodeDecoder * *_retval NS_OUTPARAM) = 0;

  /* [noscript] nsIUnicodeDecoder getUnicodeDecoderInternal (in string charset); */
  NS_IMETHOD GetUnicodeDecoderInternal(const char * charset, nsIUnicodeDecoder * *_retval NS_OUTPARAM) = 0;

  /* [noscript] nsIUnicodeDecoder getUnicodeDecoderRawInternal (in string charset); */
  NS_IMETHOD GetUnicodeDecoderRawInternal(const char * charset, nsIUnicodeDecoder * *_retval NS_OUTPARAM) = 0;

  /* [noscript] nsIUnicodeEncoder getUnicodeEncoder (in string charset); */
  NS_IMETHOD GetUnicodeEncoder(const char * charset, nsIUnicodeEncoder * *_retval NS_OUTPARAM) = 0;

  /* [noscript] nsIUnicodeEncoder getUnicodeEncoderRaw (in string charset); */
  NS_IMETHOD GetUnicodeEncoderRaw(const char * charset, nsIUnicodeEncoder * *_retval NS_OUTPARAM) = 0;

  /* ACString getCharsetAlias (in string charset); */
  NS_SCRIPTABLE NS_IMETHOD GetCharsetAlias(const char * charset, nsACString & _retval NS_OUTPARAM) = 0;

  /* nsIUTF8StringEnumerator getDecoderList (); */
  NS_SCRIPTABLE NS_IMETHOD GetDecoderList(nsIUTF8StringEnumerator * *_retval NS_OUTPARAM) = 0;

  /* nsIUTF8StringEnumerator getEncoderList (); */
  NS_SCRIPTABLE NS_IMETHOD GetEncoderList(nsIUTF8StringEnumerator * *_retval NS_OUTPARAM) = 0;

  /* nsIUTF8StringEnumerator GetCharsetDetectorList (); */
  NS_SCRIPTABLE NS_IMETHOD GetCharsetDetectorList(nsIUTF8StringEnumerator * *_retval NS_OUTPARAM) = 0;

  /* AString getCharsetTitle (in string charset); */
  NS_SCRIPTABLE NS_IMETHOD GetCharsetTitle(const char * charset, nsAString & _retval NS_OUTPARAM) = 0;

  /* AString getCharsetData (in string charset, in wstring prop); */
  NS_SCRIPTABLE NS_IMETHOD GetCharsetData(const char * charset, const PRUnichar * prop, nsAString & _retval NS_OUTPARAM) = 0;

  /* nsIAtom getCharsetLangGroup (in string charset); */
  NS_SCRIPTABLE NS_IMETHOD GetCharsetLangGroup(const char * charset, nsIAtom * *_retval NS_OUTPARAM) = 0;

  /* nsIAtom getCharsetLangGroupRaw (in string charset); */
  NS_SCRIPTABLE NS_IMETHOD GetCharsetLangGroupRaw(const char * charset, nsIAtom * *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsICharsetConverterManager, NS_ICHARSETCONVERTERMANAGER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSICHARSETCONVERTERMANAGER \
  NS_IMETHOD GetUnicodeDecoder(const char * charset, nsIUnicodeDecoder * *_retval NS_OUTPARAM); \
  NS_IMETHOD GetUnicodeDecoderRaw(const char * charset, nsIUnicodeDecoder * *_retval NS_OUTPARAM); \
  NS_IMETHOD GetUnicodeDecoderInternal(const char * charset, nsIUnicodeDecoder * *_retval NS_OUTPARAM); \
  NS_IMETHOD GetUnicodeDecoderRawInternal(const char * charset, nsIUnicodeDecoder * *_retval NS_OUTPARAM); \
  NS_IMETHOD GetUnicodeEncoder(const char * charset, nsIUnicodeEncoder * *_retval NS_OUTPARAM); \
  NS_IMETHOD GetUnicodeEncoderRaw(const char * charset, nsIUnicodeEncoder * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetCharsetAlias(const char * charset, nsACString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetDecoderList(nsIUTF8StringEnumerator * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetEncoderList(nsIUTF8StringEnumerator * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetCharsetDetectorList(nsIUTF8StringEnumerator * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetCharsetTitle(const char * charset, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetCharsetData(const char * charset, const PRUnichar * prop, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetCharsetLangGroup(const char * charset, nsIAtom * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetCharsetLangGroupRaw(const char * charset, nsIAtom * *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSICHARSETCONVERTERMANAGER(_to) \
  NS_IMETHOD GetUnicodeDecoder(const char * charset, nsIUnicodeDecoder * *_retval NS_OUTPARAM) { return _to GetUnicodeDecoder(charset, _retval); } \
  NS_IMETHOD GetUnicodeDecoderRaw(const char * charset, nsIUnicodeDecoder * *_retval NS_OUTPARAM) { return _to GetUnicodeDecoderRaw(charset, _retval); } \
  NS_IMETHOD GetUnicodeDecoderInternal(const char * charset, nsIUnicodeDecoder * *_retval NS_OUTPARAM) { return _to GetUnicodeDecoderInternal(charset, _retval); } \
  NS_IMETHOD GetUnicodeDecoderRawInternal(const char * charset, nsIUnicodeDecoder * *_retval NS_OUTPARAM) { return _to GetUnicodeDecoderRawInternal(charset, _retval); } \
  NS_IMETHOD GetUnicodeEncoder(const char * charset, nsIUnicodeEncoder * *_retval NS_OUTPARAM) { return _to GetUnicodeEncoder(charset, _retval); } \
  NS_IMETHOD GetUnicodeEncoderRaw(const char * charset, nsIUnicodeEncoder * *_retval NS_OUTPARAM) { return _to GetUnicodeEncoderRaw(charset, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCharsetAlias(const char * charset, nsACString & _retval NS_OUTPARAM) { return _to GetCharsetAlias(charset, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetDecoderList(nsIUTF8StringEnumerator * *_retval NS_OUTPARAM) { return _to GetDecoderList(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetEncoderList(nsIUTF8StringEnumerator * *_retval NS_OUTPARAM) { return _to GetEncoderList(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCharsetDetectorList(nsIUTF8StringEnumerator * *_retval NS_OUTPARAM) { return _to GetCharsetDetectorList(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCharsetTitle(const char * charset, nsAString & _retval NS_OUTPARAM) { return _to GetCharsetTitle(charset, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCharsetData(const char * charset, const PRUnichar * prop, nsAString & _retval NS_OUTPARAM) { return _to GetCharsetData(charset, prop, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCharsetLangGroup(const char * charset, nsIAtom * *_retval NS_OUTPARAM) { return _to GetCharsetLangGroup(charset, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCharsetLangGroupRaw(const char * charset, nsIAtom * *_retval NS_OUTPARAM) { return _to GetCharsetLangGroupRaw(charset, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSICHARSETCONVERTERMANAGER(_to) \
  NS_IMETHOD GetUnicodeDecoder(const char * charset, nsIUnicodeDecoder * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUnicodeDecoder(charset, _retval); } \
  NS_IMETHOD GetUnicodeDecoderRaw(const char * charset, nsIUnicodeDecoder * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUnicodeDecoderRaw(charset, _retval); } \
  NS_IMETHOD GetUnicodeDecoderInternal(const char * charset, nsIUnicodeDecoder * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUnicodeDecoderInternal(charset, _retval); } \
  NS_IMETHOD GetUnicodeDecoderRawInternal(const char * charset, nsIUnicodeDecoder * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUnicodeDecoderRawInternal(charset, _retval); } \
  NS_IMETHOD GetUnicodeEncoder(const char * charset, nsIUnicodeEncoder * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUnicodeEncoder(charset, _retval); } \
  NS_IMETHOD GetUnicodeEncoderRaw(const char * charset, nsIUnicodeEncoder * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUnicodeEncoderRaw(charset, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCharsetAlias(const char * charset, nsACString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCharsetAlias(charset, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetDecoderList(nsIUTF8StringEnumerator * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDecoderList(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetEncoderList(nsIUTF8StringEnumerator * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEncoderList(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCharsetDetectorList(nsIUTF8StringEnumerator * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCharsetDetectorList(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCharsetTitle(const char * charset, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCharsetTitle(charset, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCharsetData(const char * charset, const PRUnichar * prop, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCharsetData(charset, prop, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCharsetLangGroup(const char * charset, nsIAtom * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCharsetLangGroup(charset, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCharsetLangGroupRaw(const char * charset, nsIAtom * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCharsetLangGroupRaw(charset, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsCharsetConverterManager : public nsICharsetConverterManager
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSICHARSETCONVERTERMANAGER

  nsCharsetConverterManager();

private:
  ~nsCharsetConverterManager();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsCharsetConverterManager, nsICharsetConverterManager)

nsCharsetConverterManager::nsCharsetConverterManager()
{
  /* member initializers and constructor code */
}

nsCharsetConverterManager::~nsCharsetConverterManager()
{
  /* destructor code */
}

/* [noscript] nsIUnicodeDecoder getUnicodeDecoder (in string charset); */
NS_IMETHODIMP nsCharsetConverterManager::GetUnicodeDecoder(const char * charset, nsIUnicodeDecoder * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] nsIUnicodeDecoder getUnicodeDecoderRaw (in string charset); */
NS_IMETHODIMP nsCharsetConverterManager::GetUnicodeDecoderRaw(const char * charset, nsIUnicodeDecoder * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] nsIUnicodeDecoder getUnicodeDecoderInternal (in string charset); */
NS_IMETHODIMP nsCharsetConverterManager::GetUnicodeDecoderInternal(const char * charset, nsIUnicodeDecoder * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] nsIUnicodeDecoder getUnicodeDecoderRawInternal (in string charset); */
NS_IMETHODIMP nsCharsetConverterManager::GetUnicodeDecoderRawInternal(const char * charset, nsIUnicodeDecoder * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] nsIUnicodeEncoder getUnicodeEncoder (in string charset); */
NS_IMETHODIMP nsCharsetConverterManager::GetUnicodeEncoder(const char * charset, nsIUnicodeEncoder * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] nsIUnicodeEncoder getUnicodeEncoderRaw (in string charset); */
NS_IMETHODIMP nsCharsetConverterManager::GetUnicodeEncoderRaw(const char * charset, nsIUnicodeEncoder * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* ACString getCharsetAlias (in string charset); */
NS_IMETHODIMP nsCharsetConverterManager::GetCharsetAlias(const char * charset, nsACString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIUTF8StringEnumerator getDecoderList (); */
NS_IMETHODIMP nsCharsetConverterManager::GetDecoderList(nsIUTF8StringEnumerator * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIUTF8StringEnumerator getEncoderList (); */
NS_IMETHODIMP nsCharsetConverterManager::GetEncoderList(nsIUTF8StringEnumerator * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIUTF8StringEnumerator GetCharsetDetectorList (); */
NS_IMETHODIMP nsCharsetConverterManager::GetCharsetDetectorList(nsIUTF8StringEnumerator * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString getCharsetTitle (in string charset); */
NS_IMETHODIMP nsCharsetConverterManager::GetCharsetTitle(const char * charset, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString getCharsetData (in string charset, in wstring prop); */
NS_IMETHODIMP nsCharsetConverterManager::GetCharsetData(const char * charset, const PRUnichar * prop, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIAtom getCharsetLangGroup (in string charset); */
NS_IMETHODIMP nsCharsetConverterManager::GetCharsetLangGroup(const char * charset, nsIAtom * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIAtom getCharsetLangGroupRaw (in string charset); */
NS_IMETHODIMP nsCharsetConverterManager::GetCharsetLangGroupRaw(const char * charset, nsIAtom * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsICharsetConverterManager_h__ */
