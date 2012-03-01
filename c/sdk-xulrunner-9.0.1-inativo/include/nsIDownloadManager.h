/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/toolkit/components/downloads/nsIDownloadManager.idl
 */

#ifndef __gen_nsIDownloadManager_h__
#define __gen_nsIDownloadManager_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIURI; /* forward declaration */

class nsILocalFile; /* forward declaration */

class nsIDownload; /* forward declaration */

class nsICancelable; /* forward declaration */

class nsIMIMEInfo; /* forward declaration */

class nsIDownloadProgressListener; /* forward declaration */

class nsISimpleEnumerator; /* forward declaration */

class mozIStorageConnection; /* forward declaration */


/* starting interface:    nsIDownloadManager */
#define NS_IDOWNLOADMANAGER_IID_STR "bacca1ac-1b01-4a6f-9e91-c2ead1f7d2c0"

#define NS_IDOWNLOADMANAGER_IID \
  {0xbacca1ac, 0x1b01, 0x4a6f, \
    { 0x9e, 0x91, 0xc2, 0xea, 0xd1, 0xf7, 0xd2, 0xc0 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDownloadManager : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOWNLOADMANAGER_IID)

  enum { DOWNLOAD_TYPE_DOWNLOAD = 0 };

  enum { DOWNLOAD_NOTSTARTED = -1 };

  enum { DOWNLOAD_DOWNLOADING = 0 };

  enum { DOWNLOAD_FINISHED = 1 };

  enum { DOWNLOAD_FAILED = 2 };

  enum { DOWNLOAD_CANCELED = 3 };

  enum { DOWNLOAD_PAUSED = 4 };

  enum { DOWNLOAD_QUEUED = 5 };

  enum { DOWNLOAD_BLOCKED_PARENTAL = 6 };

  enum { DOWNLOAD_SCANNING = 7 };

  enum { DOWNLOAD_DIRTY = 8 };

  enum { DOWNLOAD_BLOCKED_POLICY = 9 };

  /* nsIDownload addDownload (in short aDownloadType, in nsIURI aSource, in nsIURI aTarget, in AString aDisplayName, in nsIMIMEInfo aMIMEInfo, in PRTime aStartTime, in nsILocalFile aTempFile, in nsICancelable aCancelable); */
  NS_SCRIPTABLE NS_IMETHOD AddDownload(PRInt16 aDownloadType, nsIURI *aSource, nsIURI *aTarget, const nsAString & aDisplayName, nsIMIMEInfo *aMIMEInfo, PRTime aStartTime, nsILocalFile *aTempFile, nsICancelable *aCancelable, nsIDownload * *_retval NS_OUTPARAM) = 0;

  /* nsIDownload getDownload (in unsigned long aID); */
  NS_SCRIPTABLE NS_IMETHOD GetDownload(PRUint32 aID, nsIDownload * *_retval NS_OUTPARAM) = 0;

  /* void cancelDownload (in unsigned long aID); */
  NS_SCRIPTABLE NS_IMETHOD CancelDownload(PRUint32 aID) = 0;

  /* void removeDownload (in unsigned long aID); */
  NS_SCRIPTABLE NS_IMETHOD RemoveDownload(PRUint32 aID) = 0;

  /* void removeDownloadsByTimeframe (in long long aBeginTime, in long long aEndTime); */
  NS_SCRIPTABLE NS_IMETHOD RemoveDownloadsByTimeframe(PRInt64 aBeginTime, PRInt64 aEndTime) = 0;

  /* void pauseDownload (in unsigned long aID); */
  NS_SCRIPTABLE NS_IMETHOD PauseDownload(PRUint32 aID) = 0;

  /* void resumeDownload (in unsigned long aID); */
  NS_SCRIPTABLE NS_IMETHOD ResumeDownload(PRUint32 aID) = 0;

  /* void retryDownload (in unsigned long aID); */
  NS_SCRIPTABLE NS_IMETHOD RetryDownload(PRUint32 aID) = 0;

  /* readonly attribute mozIStorageConnection DBConnection; */
  NS_SCRIPTABLE NS_IMETHOD GetDBConnection(mozIStorageConnection * *aDBConnection) = 0;

  /* readonly attribute boolean canCleanUp; */
  NS_SCRIPTABLE NS_IMETHOD GetCanCleanUp(PRBool *aCanCleanUp) = 0;

  /* void cleanUp (); */
  NS_SCRIPTABLE NS_IMETHOD CleanUp(void) = 0;

  /* readonly attribute long activeDownloadCount; */
  NS_SCRIPTABLE NS_IMETHOD GetActiveDownloadCount(PRInt32 *aActiveDownloadCount) = 0;

  /* readonly attribute nsISimpleEnumerator activeDownloads; */
  NS_SCRIPTABLE NS_IMETHOD GetActiveDownloads(nsISimpleEnumerator * *aActiveDownloads) = 0;

  /* void addListener (in nsIDownloadProgressListener aListener); */
  NS_SCRIPTABLE NS_IMETHOD AddListener(nsIDownloadProgressListener *aListener) = 0;

  /* void removeListener (in nsIDownloadProgressListener aListener); */
  NS_SCRIPTABLE NS_IMETHOD RemoveListener(nsIDownloadProgressListener *aListener) = 0;

  /* readonly attribute nsILocalFile defaultDownloadsDirectory; */
  NS_SCRIPTABLE NS_IMETHOD GetDefaultDownloadsDirectory(nsILocalFile * *aDefaultDownloadsDirectory) = 0;

  /* readonly attribute nsILocalFile userDownloadsDirectory; */
  NS_SCRIPTABLE NS_IMETHOD GetUserDownloadsDirectory(nsILocalFile * *aUserDownloadsDirectory) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDownloadManager, NS_IDOWNLOADMANAGER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOWNLOADMANAGER \
  NS_SCRIPTABLE NS_IMETHOD AddDownload(PRInt16 aDownloadType, nsIURI *aSource, nsIURI *aTarget, const nsAString & aDisplayName, nsIMIMEInfo *aMIMEInfo, PRTime aStartTime, nsILocalFile *aTempFile, nsICancelable *aCancelable, nsIDownload * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetDownload(PRUint32 aID, nsIDownload * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CancelDownload(PRUint32 aID); \
  NS_SCRIPTABLE NS_IMETHOD RemoveDownload(PRUint32 aID); \
  NS_SCRIPTABLE NS_IMETHOD RemoveDownloadsByTimeframe(PRInt64 aBeginTime, PRInt64 aEndTime); \
  NS_SCRIPTABLE NS_IMETHOD PauseDownload(PRUint32 aID); \
  NS_SCRIPTABLE NS_IMETHOD ResumeDownload(PRUint32 aID); \
  NS_SCRIPTABLE NS_IMETHOD RetryDownload(PRUint32 aID); \
  NS_SCRIPTABLE NS_IMETHOD GetDBConnection(mozIStorageConnection * *aDBConnection); \
  NS_SCRIPTABLE NS_IMETHOD GetCanCleanUp(PRBool *aCanCleanUp); \
  NS_SCRIPTABLE NS_IMETHOD CleanUp(void); \
  NS_SCRIPTABLE NS_IMETHOD GetActiveDownloadCount(PRInt32 *aActiveDownloadCount); \
  NS_SCRIPTABLE NS_IMETHOD GetActiveDownloads(nsISimpleEnumerator * *aActiveDownloads); \
  NS_SCRIPTABLE NS_IMETHOD AddListener(nsIDownloadProgressListener *aListener); \
  NS_SCRIPTABLE NS_IMETHOD RemoveListener(nsIDownloadProgressListener *aListener); \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultDownloadsDirectory(nsILocalFile * *aDefaultDownloadsDirectory); \
  NS_SCRIPTABLE NS_IMETHOD GetUserDownloadsDirectory(nsILocalFile * *aUserDownloadsDirectory); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOWNLOADMANAGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD AddDownload(PRInt16 aDownloadType, nsIURI *aSource, nsIURI *aTarget, const nsAString & aDisplayName, nsIMIMEInfo *aMIMEInfo, PRTime aStartTime, nsILocalFile *aTempFile, nsICancelable *aCancelable, nsIDownload * *_retval NS_OUTPARAM) { return _to AddDownload(aDownloadType, aSource, aTarget, aDisplayName, aMIMEInfo, aStartTime, aTempFile, aCancelable, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetDownload(PRUint32 aID, nsIDownload * *_retval NS_OUTPARAM) { return _to GetDownload(aID, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CancelDownload(PRUint32 aID) { return _to CancelDownload(aID); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveDownload(PRUint32 aID) { return _to RemoveDownload(aID); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveDownloadsByTimeframe(PRInt64 aBeginTime, PRInt64 aEndTime) { return _to RemoveDownloadsByTimeframe(aBeginTime, aEndTime); } \
  NS_SCRIPTABLE NS_IMETHOD PauseDownload(PRUint32 aID) { return _to PauseDownload(aID); } \
  NS_SCRIPTABLE NS_IMETHOD ResumeDownload(PRUint32 aID) { return _to ResumeDownload(aID); } \
  NS_SCRIPTABLE NS_IMETHOD RetryDownload(PRUint32 aID) { return _to RetryDownload(aID); } \
  NS_SCRIPTABLE NS_IMETHOD GetDBConnection(mozIStorageConnection * *aDBConnection) { return _to GetDBConnection(aDBConnection); } \
  NS_SCRIPTABLE NS_IMETHOD GetCanCleanUp(PRBool *aCanCleanUp) { return _to GetCanCleanUp(aCanCleanUp); } \
  NS_SCRIPTABLE NS_IMETHOD CleanUp(void) { return _to CleanUp(); } \
  NS_SCRIPTABLE NS_IMETHOD GetActiveDownloadCount(PRInt32 *aActiveDownloadCount) { return _to GetActiveDownloadCount(aActiveDownloadCount); } \
  NS_SCRIPTABLE NS_IMETHOD GetActiveDownloads(nsISimpleEnumerator * *aActiveDownloads) { return _to GetActiveDownloads(aActiveDownloads); } \
  NS_SCRIPTABLE NS_IMETHOD AddListener(nsIDownloadProgressListener *aListener) { return _to AddListener(aListener); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveListener(nsIDownloadProgressListener *aListener) { return _to RemoveListener(aListener); } \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultDownloadsDirectory(nsILocalFile * *aDefaultDownloadsDirectory) { return _to GetDefaultDownloadsDirectory(aDefaultDownloadsDirectory); } \
  NS_SCRIPTABLE NS_IMETHOD GetUserDownloadsDirectory(nsILocalFile * *aUserDownloadsDirectory) { return _to GetUserDownloadsDirectory(aUserDownloadsDirectory); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOWNLOADMANAGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD AddDownload(PRInt16 aDownloadType, nsIURI *aSource, nsIURI *aTarget, const nsAString & aDisplayName, nsIMIMEInfo *aMIMEInfo, PRTime aStartTime, nsILocalFile *aTempFile, nsICancelable *aCancelable, nsIDownload * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddDownload(aDownloadType, aSource, aTarget, aDisplayName, aMIMEInfo, aStartTime, aTempFile, aCancelable, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetDownload(PRUint32 aID, nsIDownload * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDownload(aID, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CancelDownload(PRUint32 aID) { return !_to ? NS_ERROR_NULL_POINTER : _to->CancelDownload(aID); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveDownload(PRUint32 aID) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveDownload(aID); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveDownloadsByTimeframe(PRInt64 aBeginTime, PRInt64 aEndTime) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveDownloadsByTimeframe(aBeginTime, aEndTime); } \
  NS_SCRIPTABLE NS_IMETHOD PauseDownload(PRUint32 aID) { return !_to ? NS_ERROR_NULL_POINTER : _to->PauseDownload(aID); } \
  NS_SCRIPTABLE NS_IMETHOD ResumeDownload(PRUint32 aID) { return !_to ? NS_ERROR_NULL_POINTER : _to->ResumeDownload(aID); } \
  NS_SCRIPTABLE NS_IMETHOD RetryDownload(PRUint32 aID) { return !_to ? NS_ERROR_NULL_POINTER : _to->RetryDownload(aID); } \
  NS_SCRIPTABLE NS_IMETHOD GetDBConnection(mozIStorageConnection * *aDBConnection) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDBConnection(aDBConnection); } \
  NS_SCRIPTABLE NS_IMETHOD GetCanCleanUp(PRBool *aCanCleanUp) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCanCleanUp(aCanCleanUp); } \
  NS_SCRIPTABLE NS_IMETHOD CleanUp(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->CleanUp(); } \
  NS_SCRIPTABLE NS_IMETHOD GetActiveDownloadCount(PRInt32 *aActiveDownloadCount) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetActiveDownloadCount(aActiveDownloadCount); } \
  NS_SCRIPTABLE NS_IMETHOD GetActiveDownloads(nsISimpleEnumerator * *aActiveDownloads) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetActiveDownloads(aActiveDownloads); } \
  NS_SCRIPTABLE NS_IMETHOD AddListener(nsIDownloadProgressListener *aListener) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddListener(aListener); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveListener(nsIDownloadProgressListener *aListener) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveListener(aListener); } \
  NS_SCRIPTABLE NS_IMETHOD GetDefaultDownloadsDirectory(nsILocalFile * *aDefaultDownloadsDirectory) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDefaultDownloadsDirectory(aDefaultDownloadsDirectory); } \
  NS_SCRIPTABLE NS_IMETHOD GetUserDownloadsDirectory(nsILocalFile * *aUserDownloadsDirectory) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUserDownloadsDirectory(aUserDownloadsDirectory); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDownloadManager : public nsIDownloadManager
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOWNLOADMANAGER

  nsDownloadManager();

private:
  ~nsDownloadManager();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDownloadManager, nsIDownloadManager)

nsDownloadManager::nsDownloadManager()
{
  /* member initializers and constructor code */
}

nsDownloadManager::~nsDownloadManager()
{
  /* destructor code */
}

/* nsIDownload addDownload (in short aDownloadType, in nsIURI aSource, in nsIURI aTarget, in AString aDisplayName, in nsIMIMEInfo aMIMEInfo, in PRTime aStartTime, in nsILocalFile aTempFile, in nsICancelable aCancelable); */
NS_IMETHODIMP nsDownloadManager::AddDownload(PRInt16 aDownloadType, nsIURI *aSource, nsIURI *aTarget, const nsAString & aDisplayName, nsIMIMEInfo *aMIMEInfo, PRTime aStartTime, nsILocalFile *aTempFile, nsICancelable *aCancelable, nsIDownload * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIDownload getDownload (in unsigned long aID); */
NS_IMETHODIMP nsDownloadManager::GetDownload(PRUint32 aID, nsIDownload * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void cancelDownload (in unsigned long aID); */
NS_IMETHODIMP nsDownloadManager::CancelDownload(PRUint32 aID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeDownload (in unsigned long aID); */
NS_IMETHODIMP nsDownloadManager::RemoveDownload(PRUint32 aID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeDownloadsByTimeframe (in long long aBeginTime, in long long aEndTime); */
NS_IMETHODIMP nsDownloadManager::RemoveDownloadsByTimeframe(PRInt64 aBeginTime, PRInt64 aEndTime)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void pauseDownload (in unsigned long aID); */
NS_IMETHODIMP nsDownloadManager::PauseDownload(PRUint32 aID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void resumeDownload (in unsigned long aID); */
NS_IMETHODIMP nsDownloadManager::ResumeDownload(PRUint32 aID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void retryDownload (in unsigned long aID); */
NS_IMETHODIMP nsDownloadManager::RetryDownload(PRUint32 aID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute mozIStorageConnection DBConnection; */
NS_IMETHODIMP nsDownloadManager::GetDBConnection(mozIStorageConnection * *aDBConnection)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean canCleanUp; */
NS_IMETHODIMP nsDownloadManager::GetCanCleanUp(PRBool *aCanCleanUp)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void cleanUp (); */
NS_IMETHODIMP nsDownloadManager::CleanUp()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long activeDownloadCount; */
NS_IMETHODIMP nsDownloadManager::GetActiveDownloadCount(PRInt32 *aActiveDownloadCount)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsISimpleEnumerator activeDownloads; */
NS_IMETHODIMP nsDownloadManager::GetActiveDownloads(nsISimpleEnumerator * *aActiveDownloads)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addListener (in nsIDownloadProgressListener aListener); */
NS_IMETHODIMP nsDownloadManager::AddListener(nsIDownloadProgressListener *aListener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeListener (in nsIDownloadProgressListener aListener); */
NS_IMETHODIMP nsDownloadManager::RemoveListener(nsIDownloadProgressListener *aListener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsILocalFile defaultDownloadsDirectory; */
NS_IMETHODIMP nsDownloadManager::GetDefaultDownloadsDirectory(nsILocalFile * *aDefaultDownloadsDirectory)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsILocalFile userDownloadsDirectory; */
NS_IMETHODIMP nsDownloadManager::GetUserDownloadsDirectory(nsILocalFile * *aUserDownloadsDirectory)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDownloadManager_h__ */
