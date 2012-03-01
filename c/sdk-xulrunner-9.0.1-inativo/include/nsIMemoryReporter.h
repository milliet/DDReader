/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/xpcom/base/nsIMemoryReporter.idl
 */

#ifndef __gen_nsIMemoryReporter_h__
#define __gen_nsIMemoryReporter_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsISimpleEnumerator; /* forward declaration */


/* starting interface:    nsIMemoryReporter */
#define NS_IMEMORYREPORTER_IID_STR "b2c39f65-1799-4b92-a806-ab3cf6af3cfa"

#define NS_IMEMORYREPORTER_IID \
  {0xb2c39f65, 0x1799, 0x4b92, \
    { 0xa8, 0x06, 0xab, 0x3c, 0xf6, 0xaf, 0x3c, 0xfa }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIMemoryReporter : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IMEMORYREPORTER_IID)

  /* readonly attribute ACString process; */
  NS_SCRIPTABLE NS_IMETHOD GetProcess(nsACString & aProcess) = 0;

  /* readonly attribute AUTF8String path; */
  NS_SCRIPTABLE NS_IMETHOD GetPath(nsACString & aPath) = 0;

  enum { KIND_NONHEAP = 0 };

  enum { KIND_HEAP = 1 };

  enum { KIND_OTHER = 2 };

  enum { KIND_MAPPED = 0 };

  /* readonly attribute PRInt32 kind; */
  NS_SCRIPTABLE NS_IMETHOD GetKind(PRInt32 *aKind) = 0;

  enum { UNITS_BYTES = 0 };

  enum { UNITS_COUNT = 1 };

  enum { UNITS_COUNT_CUMULATIVE = 2 };

  enum { UNITS_PERCENTAGE = 3 };

  /* readonly attribute PRInt32 units; */
  NS_SCRIPTABLE NS_IMETHOD GetUnits(PRInt32 *aUnits) = 0;

  /* readonly attribute PRInt64 amount; */
  NS_SCRIPTABLE NS_IMETHOD GetAmount(PRInt64 *aAmount) = 0;

  /* readonly attribute AUTF8String description; */
  NS_SCRIPTABLE NS_IMETHOD GetDescription(nsACString & aDescription) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIMemoryReporter, NS_IMEMORYREPORTER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIMEMORYREPORTER \
  NS_SCRIPTABLE NS_IMETHOD GetProcess(nsACString & aProcess); \
  NS_SCRIPTABLE NS_IMETHOD GetPath(nsACString & aPath); \
  NS_SCRIPTABLE NS_IMETHOD GetKind(PRInt32 *aKind); \
  NS_SCRIPTABLE NS_IMETHOD GetUnits(PRInt32 *aUnits); \
  NS_SCRIPTABLE NS_IMETHOD GetAmount(PRInt64 *aAmount); \
  NS_SCRIPTABLE NS_IMETHOD GetDescription(nsACString & aDescription); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIMEMORYREPORTER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetProcess(nsACString & aProcess) { return _to GetProcess(aProcess); } \
  NS_SCRIPTABLE NS_IMETHOD GetPath(nsACString & aPath) { return _to GetPath(aPath); } \
  NS_SCRIPTABLE NS_IMETHOD GetKind(PRInt32 *aKind) { return _to GetKind(aKind); } \
  NS_SCRIPTABLE NS_IMETHOD GetUnits(PRInt32 *aUnits) { return _to GetUnits(aUnits); } \
  NS_SCRIPTABLE NS_IMETHOD GetAmount(PRInt64 *aAmount) { return _to GetAmount(aAmount); } \
  NS_SCRIPTABLE NS_IMETHOD GetDescription(nsACString & aDescription) { return _to GetDescription(aDescription); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIMEMORYREPORTER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetProcess(nsACString & aProcess) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetProcess(aProcess); } \
  NS_SCRIPTABLE NS_IMETHOD GetPath(nsACString & aPath) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPath(aPath); } \
  NS_SCRIPTABLE NS_IMETHOD GetKind(PRInt32 *aKind) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetKind(aKind); } \
  NS_SCRIPTABLE NS_IMETHOD GetUnits(PRInt32 *aUnits) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUnits(aUnits); } \
  NS_SCRIPTABLE NS_IMETHOD GetAmount(PRInt64 *aAmount) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAmount(aAmount); } \
  NS_SCRIPTABLE NS_IMETHOD GetDescription(nsACString & aDescription) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDescription(aDescription); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsMemoryReporter : public nsIMemoryReporter
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIMEMORYREPORTER

  nsMemoryReporter();

private:
  ~nsMemoryReporter();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsMemoryReporter, nsIMemoryReporter)

nsMemoryReporter::nsMemoryReporter()
{
  /* member initializers and constructor code */
}

nsMemoryReporter::~nsMemoryReporter()
{
  /* destructor code */
}

/* readonly attribute ACString process; */
NS_IMETHODIMP nsMemoryReporter::GetProcess(nsACString & aProcess)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AUTF8String path; */
NS_IMETHODIMP nsMemoryReporter::GetPath(nsACString & aPath)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute PRInt32 kind; */
NS_IMETHODIMP nsMemoryReporter::GetKind(PRInt32 *aKind)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute PRInt32 units; */
NS_IMETHODIMP nsMemoryReporter::GetUnits(PRInt32 *aUnits)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute PRInt64 amount; */
NS_IMETHODIMP nsMemoryReporter::GetAmount(PRInt64 *aAmount)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AUTF8String description; */
NS_IMETHODIMP nsMemoryReporter::GetDescription(nsACString & aDescription)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIMemoryMultiReporterCallback */
#define NS_IMEMORYMULTIREPORTERCALLBACK_IID_STR "5b15f3fa-ba15-443c-8337-7770f5f0ce5d"

#define NS_IMEMORYMULTIREPORTERCALLBACK_IID \
  {0x5b15f3fa, 0xba15, 0x443c, \
    { 0x83, 0x37, 0x77, 0x70, 0xf5, 0xf0, 0xce, 0x5d }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIMemoryMultiReporterCallback : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IMEMORYMULTIREPORTERCALLBACK_IID)

  /* void callback (in ACString process, in AUTF8String path, in PRInt32 kind, in PRInt32 units, in PRInt64 amount, in AUTF8String description, in nsISupports closure); */
  NS_SCRIPTABLE NS_IMETHOD Callback(const nsACString & process, const nsACString & path, PRInt32 kind, PRInt32 units, PRInt64 amount, const nsACString & description, nsISupports *closure) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIMemoryMultiReporterCallback, NS_IMEMORYMULTIREPORTERCALLBACK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIMEMORYMULTIREPORTERCALLBACK \
  NS_SCRIPTABLE NS_IMETHOD Callback(const nsACString & process, const nsACString & path, PRInt32 kind, PRInt32 units, PRInt64 amount, const nsACString & description, nsISupports *closure); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIMEMORYMULTIREPORTERCALLBACK(_to) \
  NS_SCRIPTABLE NS_IMETHOD Callback(const nsACString & process, const nsACString & path, PRInt32 kind, PRInt32 units, PRInt64 amount, const nsACString & description, nsISupports *closure) { return _to Callback(process, path, kind, units, amount, description, closure); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIMEMORYMULTIREPORTERCALLBACK(_to) \
  NS_SCRIPTABLE NS_IMETHOD Callback(const nsACString & process, const nsACString & path, PRInt32 kind, PRInt32 units, PRInt64 amount, const nsACString & description, nsISupports *closure) { return !_to ? NS_ERROR_NULL_POINTER : _to->Callback(process, path, kind, units, amount, description, closure); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsMemoryMultiReporterCallback : public nsIMemoryMultiReporterCallback
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIMEMORYMULTIREPORTERCALLBACK

  nsMemoryMultiReporterCallback();

private:
  ~nsMemoryMultiReporterCallback();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsMemoryMultiReporterCallback, nsIMemoryMultiReporterCallback)

nsMemoryMultiReporterCallback::nsMemoryMultiReporterCallback()
{
  /* member initializers and constructor code */
}

nsMemoryMultiReporterCallback::~nsMemoryMultiReporterCallback()
{
  /* destructor code */
}

/* void callback (in ACString process, in AUTF8String path, in PRInt32 kind, in PRInt32 units, in PRInt64 amount, in AUTF8String description, in nsISupports closure); */
NS_IMETHODIMP nsMemoryMultiReporterCallback::Callback(const nsACString & process, const nsACString & path, PRInt32 kind, PRInt32 units, PRInt64 amount, const nsACString & description, nsISupports *closure)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIMemoryMultiReporter */
#define NS_IMEMORYMULTIREPORTER_IID_STR "eae277ad-b67d-4389-95f4-03fa11c09d06"

#define NS_IMEMORYMULTIREPORTER_IID \
  {0xeae277ad, 0xb67d, 0x4389, \
    { 0x95, 0xf4, 0x03, 0xfa, 0x11, 0xc0, 0x9d, 0x06 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIMemoryMultiReporter : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IMEMORYMULTIREPORTER_IID)

  /* void collectReports (in nsIMemoryMultiReporterCallback callback, in nsISupports closure); */
  NS_SCRIPTABLE NS_IMETHOD CollectReports(nsIMemoryMultiReporterCallback *callback, nsISupports *closure) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIMemoryMultiReporter, NS_IMEMORYMULTIREPORTER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIMEMORYMULTIREPORTER \
  NS_SCRIPTABLE NS_IMETHOD CollectReports(nsIMemoryMultiReporterCallback *callback, nsISupports *closure); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIMEMORYMULTIREPORTER(_to) \
  NS_SCRIPTABLE NS_IMETHOD CollectReports(nsIMemoryMultiReporterCallback *callback, nsISupports *closure) { return _to CollectReports(callback, closure); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIMEMORYMULTIREPORTER(_to) \
  NS_SCRIPTABLE NS_IMETHOD CollectReports(nsIMemoryMultiReporterCallback *callback, nsISupports *closure) { return !_to ? NS_ERROR_NULL_POINTER : _to->CollectReports(callback, closure); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsMemoryMultiReporter : public nsIMemoryMultiReporter
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIMEMORYMULTIREPORTER

  nsMemoryMultiReporter();

private:
  ~nsMemoryMultiReporter();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsMemoryMultiReporter, nsIMemoryMultiReporter)

nsMemoryMultiReporter::nsMemoryMultiReporter()
{
  /* member initializers and constructor code */
}

nsMemoryMultiReporter::~nsMemoryMultiReporter()
{
  /* destructor code */
}

/* void collectReports (in nsIMemoryMultiReporterCallback callback, in nsISupports closure); */
NS_IMETHODIMP nsMemoryMultiReporter::CollectReports(nsIMemoryMultiReporterCallback *callback, nsISupports *closure)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIMemoryReporterManager */
#define NS_IMEMORYREPORTERMANAGER_IID_STR "84ba9c85-3372-4423-b7ab-74708b9269a6"

#define NS_IMEMORYREPORTERMANAGER_IID \
  {0x84ba9c85, 0x3372, 0x4423, \
    { 0xb7, 0xab, 0x74, 0x70, 0x8b, 0x92, 0x69, 0xa6 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIMemoryReporterManager : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IMEMORYREPORTERMANAGER_IID)

  /* nsISimpleEnumerator enumerateReporters (); */
  NS_SCRIPTABLE NS_IMETHOD EnumerateReporters(nsISimpleEnumerator * *_retval NS_OUTPARAM) = 0;

  /* nsISimpleEnumerator enumerateMultiReporters (); */
  NS_SCRIPTABLE NS_IMETHOD EnumerateMultiReporters(nsISimpleEnumerator * *_retval NS_OUTPARAM) = 0;

  /* void registerReporter (in nsIMemoryReporter reporter); */
  NS_SCRIPTABLE NS_IMETHOD RegisterReporter(nsIMemoryReporter *reporter) = 0;

  /* void registerMultiReporter (in nsIMemoryMultiReporter reporter); */
  NS_SCRIPTABLE NS_IMETHOD RegisterMultiReporter(nsIMemoryMultiReporter *reporter) = 0;

  /* void unregisterReporter (in nsIMemoryReporter reporter); */
  NS_SCRIPTABLE NS_IMETHOD UnregisterReporter(nsIMemoryReporter *reporter) = 0;

  /* void unregisterMultiReporter (in nsIMemoryMultiReporter reporter); */
  NS_SCRIPTABLE NS_IMETHOD UnregisterMultiReporter(nsIMemoryMultiReporter *reporter) = 0;

  /* void init (); */
  NS_SCRIPTABLE NS_IMETHOD Init(void) = 0;

  /* readonly attribute PRInt64 resident; */
  NS_SCRIPTABLE NS_IMETHOD GetResident(PRInt64 *aResident) = 0;

  /* readonly attribute PRInt64 explicit; */
  NS_SCRIPTABLE NS_IMETHOD GetExplicit(PRInt64 *aExplicit) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIMemoryReporterManager, NS_IMEMORYREPORTERMANAGER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIMEMORYREPORTERMANAGER \
  NS_SCRIPTABLE NS_IMETHOD EnumerateReporters(nsISimpleEnumerator * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD EnumerateMultiReporters(nsISimpleEnumerator * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD RegisterReporter(nsIMemoryReporter *reporter); \
  NS_SCRIPTABLE NS_IMETHOD RegisterMultiReporter(nsIMemoryMultiReporter *reporter); \
  NS_SCRIPTABLE NS_IMETHOD UnregisterReporter(nsIMemoryReporter *reporter); \
  NS_SCRIPTABLE NS_IMETHOD UnregisterMultiReporter(nsIMemoryMultiReporter *reporter); \
  NS_SCRIPTABLE NS_IMETHOD Init(void); \
  NS_SCRIPTABLE NS_IMETHOD GetResident(PRInt64 *aResident); \
  NS_SCRIPTABLE NS_IMETHOD GetExplicit(PRInt64 *aExplicit); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIMEMORYREPORTERMANAGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD EnumerateReporters(nsISimpleEnumerator * *_retval NS_OUTPARAM) { return _to EnumerateReporters(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD EnumerateMultiReporters(nsISimpleEnumerator * *_retval NS_OUTPARAM) { return _to EnumerateMultiReporters(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD RegisterReporter(nsIMemoryReporter *reporter) { return _to RegisterReporter(reporter); } \
  NS_SCRIPTABLE NS_IMETHOD RegisterMultiReporter(nsIMemoryMultiReporter *reporter) { return _to RegisterMultiReporter(reporter); } \
  NS_SCRIPTABLE NS_IMETHOD UnregisterReporter(nsIMemoryReporter *reporter) { return _to UnregisterReporter(reporter); } \
  NS_SCRIPTABLE NS_IMETHOD UnregisterMultiReporter(nsIMemoryMultiReporter *reporter) { return _to UnregisterMultiReporter(reporter); } \
  NS_SCRIPTABLE NS_IMETHOD Init(void) { return _to Init(); } \
  NS_SCRIPTABLE NS_IMETHOD GetResident(PRInt64 *aResident) { return _to GetResident(aResident); } \
  NS_SCRIPTABLE NS_IMETHOD GetExplicit(PRInt64 *aExplicit) { return _to GetExplicit(aExplicit); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIMEMORYREPORTERMANAGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD EnumerateReporters(nsISimpleEnumerator * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->EnumerateReporters(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD EnumerateMultiReporters(nsISimpleEnumerator * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->EnumerateMultiReporters(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD RegisterReporter(nsIMemoryReporter *reporter) { return !_to ? NS_ERROR_NULL_POINTER : _to->RegisterReporter(reporter); } \
  NS_SCRIPTABLE NS_IMETHOD RegisterMultiReporter(nsIMemoryMultiReporter *reporter) { return !_to ? NS_ERROR_NULL_POINTER : _to->RegisterMultiReporter(reporter); } \
  NS_SCRIPTABLE NS_IMETHOD UnregisterReporter(nsIMemoryReporter *reporter) { return !_to ? NS_ERROR_NULL_POINTER : _to->UnregisterReporter(reporter); } \
  NS_SCRIPTABLE NS_IMETHOD UnregisterMultiReporter(nsIMemoryMultiReporter *reporter) { return !_to ? NS_ERROR_NULL_POINTER : _to->UnregisterMultiReporter(reporter); } \
  NS_SCRIPTABLE NS_IMETHOD Init(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Init(); } \
  NS_SCRIPTABLE NS_IMETHOD GetResident(PRInt64 *aResident) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResident(aResident); } \
  NS_SCRIPTABLE NS_IMETHOD GetExplicit(PRInt64 *aExplicit) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetExplicit(aExplicit); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsMemoryReporterManager : public nsIMemoryReporterManager
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIMEMORYREPORTERMANAGER

  nsMemoryReporterManager();

private:
  ~nsMemoryReporterManager();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsMemoryReporterManager, nsIMemoryReporterManager)

nsMemoryReporterManager::nsMemoryReporterManager()
{
  /* member initializers and constructor code */
}

nsMemoryReporterManager::~nsMemoryReporterManager()
{
  /* destructor code */
}

/* nsISimpleEnumerator enumerateReporters (); */
NS_IMETHODIMP nsMemoryReporterManager::EnumerateReporters(nsISimpleEnumerator * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsISimpleEnumerator enumerateMultiReporters (); */
NS_IMETHODIMP nsMemoryReporterManager::EnumerateMultiReporters(nsISimpleEnumerator * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void registerReporter (in nsIMemoryReporter reporter); */
NS_IMETHODIMP nsMemoryReporterManager::RegisterReporter(nsIMemoryReporter *reporter)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void registerMultiReporter (in nsIMemoryMultiReporter reporter); */
NS_IMETHODIMP nsMemoryReporterManager::RegisterMultiReporter(nsIMemoryMultiReporter *reporter)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void unregisterReporter (in nsIMemoryReporter reporter); */
NS_IMETHODIMP nsMemoryReporterManager::UnregisterReporter(nsIMemoryReporter *reporter)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void unregisterMultiReporter (in nsIMemoryMultiReporter reporter); */
NS_IMETHODIMP nsMemoryReporterManager::UnregisterMultiReporter(nsIMemoryMultiReporter *reporter)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void init (); */
NS_IMETHODIMP nsMemoryReporterManager::Init()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute PRInt64 resident; */
NS_IMETHODIMP nsMemoryReporterManager::GetResident(PRInt64 *aResident)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute PRInt64 explicit; */
NS_IMETHODIMP nsMemoryReporterManager::GetExplicit(PRInt64 *aExplicit)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/*
 * Note that this defaults 'process' to "", which is usually what's desired.
 */
#define NS_MEMORY_REPORTER_IMPLEMENT_HELPER(_classname, _path, _kind, _units, _amountFunction, _desc, _ts) \
    class MemoryReporter_##_classname : public nsIMemoryReporter {                            \
    public:                                                                                   \
      NS_DECL_ISUPPORTS                                                                       \
      NS_IMETHOD GetProcess(nsACString &process) { process.Truncate(); return NS_OK; } \
      NS_IMETHOD GetPath(nsACString &memoryPath) { memoryPath.Assign(_path); return NS_OK; } \
      NS_IMETHOD GetKind(int *kind) { *kind = _kind; return NS_OK; }                          \
      NS_IMETHOD GetUnits(int *units) { *units = _units; return NS_OK; }                      \
      NS_IMETHOD GetAmount(PRInt64 *amount) { *amount = _amountFunction(); return NS_OK; }     \
      NS_IMETHOD GetDescription(nsACString &desc) { desc.Assign(_desc); return NS_OK; } \
    };                                                                                        \
    NS_IMPL##_ts##ISUPPORTS1(MemoryReporter_##_classname, nsIMemoryReporter)
#define NS_MEMORY_REPORTER_IMPLEMENT(_c, _p, _k, _u, _a, _d) \
        NS_MEMORY_REPORTER_IMPLEMENT_HELPER(_c, _p, _k, _u, _a, _d, _)
#define NS_THREADSAFE_MEMORY_REPORTER_IMPLEMENT(_c, _p, _k, _u, _a, _d) \
        NS_MEMORY_REPORTER_IMPLEMENT_HELPER(_c, _p, _k, _u, _a, _d, _THREADSAFE_)
#define NS_MEMORY_REPORTER_NAME(_classname)  MemoryReporter_##_classname
nsresult NS_RegisterMemoryReporter (nsIMemoryReporter *reporter);
nsresult NS_RegisterMemoryMultiReporter (nsIMemoryMultiReporter *reporter);
nsresult NS_UnregisterMemoryReporter (nsIMemoryReporter *reporter);
nsresult NS_UnregisterMemoryMultiReporter (nsIMemoryMultiReporter *reporter);

#endif /* __gen_nsIMemoryReporter_h__ */
