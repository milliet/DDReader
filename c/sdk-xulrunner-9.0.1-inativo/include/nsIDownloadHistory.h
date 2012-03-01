/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/docshell/base/nsIDownloadHistory.idl
 */

#ifndef __gen_nsIDownloadHistory_h__
#define __gen_nsIDownloadHistory_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIURI; /* forward declaration */


/* starting interface:    nsIDownloadHistory */
#define NS_IDOWNLOADHISTORY_IID_STR "a7a3358c-9af2-41e3-adfe-3bf0b7ac2c38"

#define NS_IDOWNLOADHISTORY_IID \
  {0xa7a3358c, 0x9af2, 0x41e3, \
    { 0xad, 0xfe, 0x3b, 0xf0, 0xb7, 0xac, 0x2c, 0x38 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDownloadHistory : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOWNLOADHISTORY_IID)

  /* void addDownload (in nsIURI aSource, [optional] in nsIURI aReferrer, [optional] in PRTime aStartTime, [optional] in nsIURI aDestination); */
  NS_SCRIPTABLE NS_IMETHOD AddDownload(nsIURI *aSource, nsIURI *aReferrer, PRTime aStartTime, nsIURI *aDestination) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDownloadHistory, NS_IDOWNLOADHISTORY_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOWNLOADHISTORY \
  NS_SCRIPTABLE NS_IMETHOD AddDownload(nsIURI *aSource, nsIURI *aReferrer, PRTime aStartTime, nsIURI *aDestination); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOWNLOADHISTORY(_to) \
  NS_SCRIPTABLE NS_IMETHOD AddDownload(nsIURI *aSource, nsIURI *aReferrer, PRTime aStartTime, nsIURI *aDestination) { return _to AddDownload(aSource, aReferrer, aStartTime, aDestination); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOWNLOADHISTORY(_to) \
  NS_SCRIPTABLE NS_IMETHOD AddDownload(nsIURI *aSource, nsIURI *aReferrer, PRTime aStartTime, nsIURI *aDestination) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddDownload(aSource, aReferrer, aStartTime, aDestination); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDownloadHistory : public nsIDownloadHistory
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOWNLOADHISTORY

  nsDownloadHistory();

private:
  ~nsDownloadHistory();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDownloadHistory, nsIDownloadHistory)

nsDownloadHistory::nsDownloadHistory()
{
  /* member initializers and constructor code */
}

nsDownloadHistory::~nsDownloadHistory()
{
  /* destructor code */
}

/* void addDownload (in nsIURI aSource, [optional] in nsIURI aReferrer, [optional] in PRTime aStartTime, [optional] in nsIURI aDestination); */
NS_IMETHODIMP nsDownloadHistory::AddDownload(nsIURI *aSource, nsIURI *aReferrer, PRTime aStartTime, nsIURI *aDestination)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDownloadHistory_h__ */
