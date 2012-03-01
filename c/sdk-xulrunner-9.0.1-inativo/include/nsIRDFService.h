/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/rdf/base/idl/nsIRDFService.idl
 */

#ifndef __gen_nsIRDFService_h__
#define __gen_nsIRDFService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIRDFResource_h__
#include "nsIRDFResource.h"
#endif

#ifndef __gen_nsIRDFLiteral_h__
#include "nsIRDFLiteral.h"
#endif

#ifndef __gen_nsIRDFDataSource_h__
#include "nsIRDFDataSource.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIRDFService */
#define NS_IRDFSERVICE_IID_STR "bfd05261-834c-11d2-8eac-00805f29f370"

#define NS_IRDFSERVICE_IID \
  {0xbfd05261, 0x834c, 0x11d2, \
    { 0x8e, 0xac, 0x00, 0x80, 0x5f, 0x29, 0xf3, 0x70 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIRDFService : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IRDFSERVICE_IID)

  /* nsIRDFResource GetResource (in AUTF8String aURI); */
  NS_SCRIPTABLE NS_IMETHOD GetResource(const nsACString & aURI, nsIRDFResource * *_retval NS_OUTPARAM) = 0;

  /* nsIRDFResource GetUnicodeResource (in AString aURI); */
  NS_SCRIPTABLE NS_IMETHOD GetUnicodeResource(const nsAString & aURI, nsIRDFResource * *_retval NS_OUTPARAM) = 0;

  /* nsIRDFResource GetAnonymousResource (); */
  NS_SCRIPTABLE NS_IMETHOD GetAnonymousResource(nsIRDFResource * *_retval NS_OUTPARAM) = 0;

  /* nsIRDFLiteral GetLiteral (in wstring aValue); */
  NS_SCRIPTABLE NS_IMETHOD GetLiteral(const PRUnichar * aValue, nsIRDFLiteral * *_retval NS_OUTPARAM) = 0;

  /* nsIRDFDate GetDateLiteral (in long long aValue); */
  NS_SCRIPTABLE NS_IMETHOD GetDateLiteral(PRInt64 aValue, nsIRDFDate * *_retval NS_OUTPARAM) = 0;

  /* nsIRDFInt GetIntLiteral (in long aValue); */
  NS_SCRIPTABLE NS_IMETHOD GetIntLiteral(PRInt32 aValue, nsIRDFInt * *_retval NS_OUTPARAM) = 0;

  /* [noscript] nsIRDFBlob getBlobLiteral (in const_octet_ptr aValue, in long aLength); */
  NS_IMETHOD GetBlobLiteral(const PRUint8 *aValue, PRInt32 aLength, nsIRDFBlob * *_retval NS_OUTPARAM) = 0;

  /* boolean IsAnonymousResource (in nsIRDFResource aResource); */
  NS_SCRIPTABLE NS_IMETHOD IsAnonymousResource(nsIRDFResource *aResource, PRBool *_retval NS_OUTPARAM) = 0;

  /* void RegisterResource (in nsIRDFResource aResource, in boolean aReplace); */
  NS_SCRIPTABLE NS_IMETHOD RegisterResource(nsIRDFResource *aResource, PRBool aReplace) = 0;

  /* void UnregisterResource (in nsIRDFResource aResource); */
  NS_SCRIPTABLE NS_IMETHOD UnregisterResource(nsIRDFResource *aResource) = 0;

  /* void RegisterDataSource (in nsIRDFDataSource aDataSource, in boolean aReplace); */
  NS_SCRIPTABLE NS_IMETHOD RegisterDataSource(nsIRDFDataSource *aDataSource, PRBool aReplace) = 0;

  /* void UnregisterDataSource (in nsIRDFDataSource aDataSource); */
  NS_SCRIPTABLE NS_IMETHOD UnregisterDataSource(nsIRDFDataSource *aDataSource) = 0;

  /* nsIRDFDataSource GetDataSource (in string aURI); */
  NS_SCRIPTABLE NS_IMETHOD GetDataSource(const char * aURI, nsIRDFDataSource * *_retval NS_OUTPARAM) = 0;

  /* nsIRDFDataSource GetDataSourceBlocking (in string aURI); */
  NS_SCRIPTABLE NS_IMETHOD GetDataSourceBlocking(const char * aURI, nsIRDFDataSource * *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIRDFService, NS_IRDFSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIRDFSERVICE \
  NS_SCRIPTABLE NS_IMETHOD GetResource(const nsACString & aURI, nsIRDFResource * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetUnicodeResource(const nsAString & aURI, nsIRDFResource * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetAnonymousResource(nsIRDFResource * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetLiteral(const PRUnichar * aValue, nsIRDFLiteral * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetDateLiteral(PRInt64 aValue, nsIRDFDate * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetIntLiteral(PRInt32 aValue, nsIRDFInt * *_retval NS_OUTPARAM); \
  NS_IMETHOD GetBlobLiteral(const PRUint8 *aValue, PRInt32 aLength, nsIRDFBlob * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsAnonymousResource(nsIRDFResource *aResource, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD RegisterResource(nsIRDFResource *aResource, PRBool aReplace); \
  NS_SCRIPTABLE NS_IMETHOD UnregisterResource(nsIRDFResource *aResource); \
  NS_SCRIPTABLE NS_IMETHOD RegisterDataSource(nsIRDFDataSource *aDataSource, PRBool aReplace); \
  NS_SCRIPTABLE NS_IMETHOD UnregisterDataSource(nsIRDFDataSource *aDataSource); \
  NS_SCRIPTABLE NS_IMETHOD GetDataSource(const char * aURI, nsIRDFDataSource * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetDataSourceBlocking(const char * aURI, nsIRDFDataSource * *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIRDFSERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetResource(const nsACString & aURI, nsIRDFResource * *_retval NS_OUTPARAM) { return _to GetResource(aURI, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetUnicodeResource(const nsAString & aURI, nsIRDFResource * *_retval NS_OUTPARAM) { return _to GetUnicodeResource(aURI, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAnonymousResource(nsIRDFResource * *_retval NS_OUTPARAM) { return _to GetAnonymousResource(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetLiteral(const PRUnichar * aValue, nsIRDFLiteral * *_retval NS_OUTPARAM) { return _to GetLiteral(aValue, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetDateLiteral(PRInt64 aValue, nsIRDFDate * *_retval NS_OUTPARAM) { return _to GetDateLiteral(aValue, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetIntLiteral(PRInt32 aValue, nsIRDFInt * *_retval NS_OUTPARAM) { return _to GetIntLiteral(aValue, _retval); } \
  NS_IMETHOD GetBlobLiteral(const PRUint8 *aValue, PRInt32 aLength, nsIRDFBlob * *_retval NS_OUTPARAM) { return _to GetBlobLiteral(aValue, aLength, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsAnonymousResource(nsIRDFResource *aResource, PRBool *_retval NS_OUTPARAM) { return _to IsAnonymousResource(aResource, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RegisterResource(nsIRDFResource *aResource, PRBool aReplace) { return _to RegisterResource(aResource, aReplace); } \
  NS_SCRIPTABLE NS_IMETHOD UnregisterResource(nsIRDFResource *aResource) { return _to UnregisterResource(aResource); } \
  NS_SCRIPTABLE NS_IMETHOD RegisterDataSource(nsIRDFDataSource *aDataSource, PRBool aReplace) { return _to RegisterDataSource(aDataSource, aReplace); } \
  NS_SCRIPTABLE NS_IMETHOD UnregisterDataSource(nsIRDFDataSource *aDataSource) { return _to UnregisterDataSource(aDataSource); } \
  NS_SCRIPTABLE NS_IMETHOD GetDataSource(const char * aURI, nsIRDFDataSource * *_retval NS_OUTPARAM) { return _to GetDataSource(aURI, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetDataSourceBlocking(const char * aURI, nsIRDFDataSource * *_retval NS_OUTPARAM) { return _to GetDataSourceBlocking(aURI, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIRDFSERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetResource(const nsACString & aURI, nsIRDFResource * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResource(aURI, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetUnicodeResource(const nsAString & aURI, nsIRDFResource * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUnicodeResource(aURI, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetAnonymousResource(nsIRDFResource * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAnonymousResource(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetLiteral(const PRUnichar * aValue, nsIRDFLiteral * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLiteral(aValue, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetDateLiteral(PRInt64 aValue, nsIRDFDate * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDateLiteral(aValue, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetIntLiteral(PRInt32 aValue, nsIRDFInt * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIntLiteral(aValue, _retval); } \
  NS_IMETHOD GetBlobLiteral(const PRUint8 *aValue, PRInt32 aLength, nsIRDFBlob * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBlobLiteral(aValue, aLength, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsAnonymousResource(nsIRDFResource *aResource, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsAnonymousResource(aResource, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RegisterResource(nsIRDFResource *aResource, PRBool aReplace) { return !_to ? NS_ERROR_NULL_POINTER : _to->RegisterResource(aResource, aReplace); } \
  NS_SCRIPTABLE NS_IMETHOD UnregisterResource(nsIRDFResource *aResource) { return !_to ? NS_ERROR_NULL_POINTER : _to->UnregisterResource(aResource); } \
  NS_SCRIPTABLE NS_IMETHOD RegisterDataSource(nsIRDFDataSource *aDataSource, PRBool aReplace) { return !_to ? NS_ERROR_NULL_POINTER : _to->RegisterDataSource(aDataSource, aReplace); } \
  NS_SCRIPTABLE NS_IMETHOD UnregisterDataSource(nsIRDFDataSource *aDataSource) { return !_to ? NS_ERROR_NULL_POINTER : _to->UnregisterDataSource(aDataSource); } \
  NS_SCRIPTABLE NS_IMETHOD GetDataSource(const char * aURI, nsIRDFDataSource * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDataSource(aURI, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetDataSourceBlocking(const char * aURI, nsIRDFDataSource * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDataSourceBlocking(aURI, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsRDFService : public nsIRDFService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIRDFSERVICE

  nsRDFService();

private:
  ~nsRDFService();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsRDFService, nsIRDFService)

nsRDFService::nsRDFService()
{
  /* member initializers and constructor code */
}

nsRDFService::~nsRDFService()
{
  /* destructor code */
}

/* nsIRDFResource GetResource (in AUTF8String aURI); */
NS_IMETHODIMP nsRDFService::GetResource(const nsACString & aURI, nsIRDFResource * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIRDFResource GetUnicodeResource (in AString aURI); */
NS_IMETHODIMP nsRDFService::GetUnicodeResource(const nsAString & aURI, nsIRDFResource * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIRDFResource GetAnonymousResource (); */
NS_IMETHODIMP nsRDFService::GetAnonymousResource(nsIRDFResource * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIRDFLiteral GetLiteral (in wstring aValue); */
NS_IMETHODIMP nsRDFService::GetLiteral(const PRUnichar * aValue, nsIRDFLiteral * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIRDFDate GetDateLiteral (in long long aValue); */
NS_IMETHODIMP nsRDFService::GetDateLiteral(PRInt64 aValue, nsIRDFDate * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIRDFInt GetIntLiteral (in long aValue); */
NS_IMETHODIMP nsRDFService::GetIntLiteral(PRInt32 aValue, nsIRDFInt * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] nsIRDFBlob getBlobLiteral (in const_octet_ptr aValue, in long aLength); */
NS_IMETHODIMP nsRDFService::GetBlobLiteral(const PRUint8 *aValue, PRInt32 aLength, nsIRDFBlob * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean IsAnonymousResource (in nsIRDFResource aResource); */
NS_IMETHODIMP nsRDFService::IsAnonymousResource(nsIRDFResource *aResource, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void RegisterResource (in nsIRDFResource aResource, in boolean aReplace); */
NS_IMETHODIMP nsRDFService::RegisterResource(nsIRDFResource *aResource, PRBool aReplace)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void UnregisterResource (in nsIRDFResource aResource); */
NS_IMETHODIMP nsRDFService::UnregisterResource(nsIRDFResource *aResource)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void RegisterDataSource (in nsIRDFDataSource aDataSource, in boolean aReplace); */
NS_IMETHODIMP nsRDFService::RegisterDataSource(nsIRDFDataSource *aDataSource, PRBool aReplace)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void UnregisterDataSource (in nsIRDFDataSource aDataSource); */
NS_IMETHODIMP nsRDFService::UnregisterDataSource(nsIRDFDataSource *aDataSource)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIRDFDataSource GetDataSource (in string aURI); */
NS_IMETHODIMP nsRDFService::GetDataSource(const char * aURI, nsIRDFDataSource * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIRDFDataSource GetDataSourceBlocking (in string aURI); */
NS_IMETHODIMP nsRDFService::GetDataSourceBlocking(const char * aURI, nsIRDFDataSource * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

extern nsresult
NS_NewRDFService(nsIRDFService** result);

#endif /* __gen_nsIRDFService_h__ */
