/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/netwerk/dns/nsIDNSRecord.idl
 */

#ifndef __gen_nsIDNSRecord_h__
#define __gen_nsIDNSRecord_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsIDNSRecord */
#define NS_IDNSRECORD_IID_STR "ead9e9d8-7eef-4dae-a7f0-a1edcfb20478"

#define NS_IDNSRECORD_IID \
  {0xead9e9d8, 0x7eef, 0x4dae, \
    { 0xa7, 0xf0, 0xa1, 0xed, 0xcf, 0xb2, 0x04, 0x78 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDNSRecord : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDNSRECORD_IID)

  /* readonly attribute ACString canonicalName; */
  NS_SCRIPTABLE NS_IMETHOD GetCanonicalName(nsACString & aCanonicalName) = 0;

  /* [noscript] PRNetAddr getNextAddr (in PRUint16 aPort); */
  NS_IMETHOD GetNextAddr(PRUint16 aPort, union PRNetAddr *_retval NS_OUTPARAM) = 0;

  /* ACString getNextAddrAsString (); */
  NS_SCRIPTABLE NS_IMETHOD GetNextAddrAsString(nsACString & _retval NS_OUTPARAM) = 0;

  /* boolean hasMore (); */
  NS_SCRIPTABLE NS_IMETHOD HasMore(PRBool *_retval NS_OUTPARAM) = 0;

  /* void rewind (); */
  NS_SCRIPTABLE NS_IMETHOD Rewind(void) = 0;

  /* void reportUnusable (in PRUint16 aPort); */
  NS_SCRIPTABLE NS_IMETHOD ReportUnusable(PRUint16 aPort) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDNSRecord, NS_IDNSRECORD_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDNSRECORD \
  NS_SCRIPTABLE NS_IMETHOD GetCanonicalName(nsACString & aCanonicalName); \
  NS_IMETHOD GetNextAddr(PRUint16 aPort, union PRNetAddr *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetNextAddrAsString(nsACString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD HasMore(PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Rewind(void); \
  NS_SCRIPTABLE NS_IMETHOD ReportUnusable(PRUint16 aPort); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDNSRECORD(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetCanonicalName(nsACString & aCanonicalName) { return _to GetCanonicalName(aCanonicalName); } \
  NS_IMETHOD GetNextAddr(PRUint16 aPort, union PRNetAddr *_retval NS_OUTPARAM) { return _to GetNextAddr(aPort, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetNextAddrAsString(nsACString & _retval NS_OUTPARAM) { return _to GetNextAddrAsString(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD HasMore(PRBool *_retval NS_OUTPARAM) { return _to HasMore(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Rewind(void) { return _to Rewind(); } \
  NS_SCRIPTABLE NS_IMETHOD ReportUnusable(PRUint16 aPort) { return _to ReportUnusable(aPort); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDNSRECORD(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetCanonicalName(nsACString & aCanonicalName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCanonicalName(aCanonicalName); } \
  NS_IMETHOD GetNextAddr(PRUint16 aPort, union PRNetAddr *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNextAddr(aPort, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetNextAddrAsString(nsACString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetNextAddrAsString(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD HasMore(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->HasMore(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD Rewind(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Rewind(); } \
  NS_SCRIPTABLE NS_IMETHOD ReportUnusable(PRUint16 aPort) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReportUnusable(aPort); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDNSRecord : public nsIDNSRecord
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDNSRECORD

  nsDNSRecord();

private:
  ~nsDNSRecord();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDNSRecord, nsIDNSRecord)

nsDNSRecord::nsDNSRecord()
{
  /* member initializers and constructor code */
}

nsDNSRecord::~nsDNSRecord()
{
  /* destructor code */
}

/* readonly attribute ACString canonicalName; */
NS_IMETHODIMP nsDNSRecord::GetCanonicalName(nsACString & aCanonicalName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] PRNetAddr getNextAddr (in PRUint16 aPort); */
NS_IMETHODIMP nsDNSRecord::GetNextAddr(PRUint16 aPort, union PRNetAddr *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* ACString getNextAddrAsString (); */
NS_IMETHODIMP nsDNSRecord::GetNextAddrAsString(nsACString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean hasMore (); */
NS_IMETHODIMP nsDNSRecord::HasMore(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void rewind (); */
NS_IMETHODIMP nsDNSRecord::Rewind()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void reportUnusable (in PRUint16 aPort); */
NS_IMETHODIMP nsDNSRecord::ReportUnusable(PRUint16 aPort)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDNSRecord_h__ */
