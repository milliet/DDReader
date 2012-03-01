/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/toolkit/components/telemetry/nsITelemetry.idl
 */

#ifndef __gen_nsITelemetry_h__
#define __gen_nsITelemetry_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#include "jspubtd.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif

/* starting interface:    nsITelemetry */
#define NS_ITELEMETRY_IID_STR "db854295-478d-4de9-8211-d73ed7d81cd0"

#define NS_ITELEMETRY_IID \
  {0xdb854295, 0x478d, 0x4de9, \
    { 0x82, 0x11, 0xd7, 0x3e, 0xd7, 0xd8, 0x1c, 0xd0 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsITelemetry : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ITELEMETRY_IID)

  enum { HISTOGRAM_EXPONENTIAL = 0U };

  enum { HISTOGRAM_LINEAR = 1U };

  enum { HISTOGRAM_BOOLEAN = 2U };

  /* [implicit_jscontext] readonly attribute jsval histogramSnapshots; */
  NS_SCRIPTABLE NS_IMETHOD GetHistogramSnapshots(JSContext* cx, JS::Value *aHistogramSnapshots) = 0;

  /* [implicit_jscontext] jsval newHistogram (in ACString name, in PRUint32 min, in PRUint32 max, in PRUint32 bucket_count, in unsigned long histogram_type); */
  NS_SCRIPTABLE NS_IMETHOD NewHistogram(const nsACString & name, PRUint32 min, PRUint32 max, PRUint32 bucket_count, PRUint32 histogram_type, JSContext* cx, JS::Value *_retval NS_OUTPARAM) = 0;

  /* [implicit_jscontext] jsval getHistogramById (in ACString id); */
  NS_SCRIPTABLE NS_IMETHOD GetHistogramById(const nsACString & id, JSContext* cx, JS::Value *_retval NS_OUTPARAM) = 0;

  /* attribute boolean canRecord; */
  NS_SCRIPTABLE NS_IMETHOD GetCanRecord(PRBool *aCanRecord) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetCanRecord(PRBool aCanRecord) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsITelemetry, NS_ITELEMETRY_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSITELEMETRY \
  NS_SCRIPTABLE NS_IMETHOD GetHistogramSnapshots(JSContext* cx, JS::Value *aHistogramSnapshots); \
  NS_SCRIPTABLE NS_IMETHOD NewHistogram(const nsACString & name, PRUint32 min, PRUint32 max, PRUint32 bucket_count, PRUint32 histogram_type, JSContext* cx, JS::Value *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetHistogramById(const nsACString & id, JSContext* cx, JS::Value *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetCanRecord(PRBool *aCanRecord); \
  NS_SCRIPTABLE NS_IMETHOD SetCanRecord(PRBool aCanRecord); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSITELEMETRY(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetHistogramSnapshots(JSContext* cx, JS::Value *aHistogramSnapshots) { return _to GetHistogramSnapshots(cx, aHistogramSnapshots); } \
  NS_SCRIPTABLE NS_IMETHOD NewHistogram(const nsACString & name, PRUint32 min, PRUint32 max, PRUint32 bucket_count, PRUint32 histogram_type, JSContext* cx, JS::Value *_retval NS_OUTPARAM) { return _to NewHistogram(name, min, max, bucket_count, histogram_type, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetHistogramById(const nsACString & id, JSContext* cx, JS::Value *_retval NS_OUTPARAM) { return _to GetHistogramById(id, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCanRecord(PRBool *aCanRecord) { return _to GetCanRecord(aCanRecord); } \
  NS_SCRIPTABLE NS_IMETHOD SetCanRecord(PRBool aCanRecord) { return _to SetCanRecord(aCanRecord); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSITELEMETRY(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetHistogramSnapshots(JSContext* cx, JS::Value *aHistogramSnapshots) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHistogramSnapshots(cx, aHistogramSnapshots); } \
  NS_SCRIPTABLE NS_IMETHOD NewHistogram(const nsACString & name, PRUint32 min, PRUint32 max, PRUint32 bucket_count, PRUint32 histogram_type, JSContext* cx, JS::Value *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->NewHistogram(name, min, max, bucket_count, histogram_type, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetHistogramById(const nsACString & id, JSContext* cx, JS::Value *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetHistogramById(id, cx, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCanRecord(PRBool *aCanRecord) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCanRecord(aCanRecord); } \
  NS_SCRIPTABLE NS_IMETHOD SetCanRecord(PRBool aCanRecord) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCanRecord(aCanRecord); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsTelemetry : public nsITelemetry
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSITELEMETRY

  nsTelemetry();

private:
  ~nsTelemetry();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsTelemetry, nsITelemetry)

nsTelemetry::nsTelemetry()
{
  /* member initializers and constructor code */
}

nsTelemetry::~nsTelemetry()
{
  /* destructor code */
}

/* [implicit_jscontext] readonly attribute jsval histogramSnapshots; */
NS_IMETHODIMP nsTelemetry::GetHistogramSnapshots(JSContext* cx, JS::Value *aHistogramSnapshots)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] jsval newHistogram (in ACString name, in PRUint32 min, in PRUint32 max, in PRUint32 bucket_count, in unsigned long histogram_type); */
NS_IMETHODIMP nsTelemetry::NewHistogram(const nsACString & name, PRUint32 min, PRUint32 max, PRUint32 bucket_count, PRUint32 histogram_type, JSContext* cx, JS::Value *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [implicit_jscontext] jsval getHistogramById (in ACString id); */
NS_IMETHODIMP nsTelemetry::GetHistogramById(const nsACString & id, JSContext* cx, JS::Value *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean canRecord; */
NS_IMETHODIMP nsTelemetry::GetCanRecord(PRBool *aCanRecord)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsTelemetry::SetCanRecord(PRBool aCanRecord)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsITelemetry_h__ */
