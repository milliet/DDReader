/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/storage/public/mozIStorageService.idl
 */

#ifndef __gen_mozIStorageService_h__
#define __gen_mozIStorageService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class mozIStorageConnection; /* forward declaration */

class nsIFile; /* forward declaration */


/* starting interface:    mozIStorageService */
#define MOZISTORAGESERVICE_IID_STR "fe8e95cb-b377-4c8d-bccb-d9198c67542b"

#define MOZISTORAGESERVICE_IID \
  {0xfe8e95cb, 0xb377, 0x4c8d, \
    { 0xbc, 0xcb, 0xd9, 0x19, 0x8c, 0x67, 0x54, 0x2b }}

class NS_NO_VTABLE NS_SCRIPTABLE mozIStorageService : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(MOZISTORAGESERVICE_IID)

  /* mozIStorageConnection openSpecialDatabase (in string aStorageKey); */
  NS_SCRIPTABLE NS_IMETHOD OpenSpecialDatabase(const char * aStorageKey, mozIStorageConnection * *_retval NS_OUTPARAM) = 0;

  /* mozIStorageConnection openDatabase (in nsIFile aDatabaseFile); */
  NS_SCRIPTABLE NS_IMETHOD OpenDatabase(nsIFile *aDatabaseFile, mozIStorageConnection * *_retval NS_OUTPARAM) = 0;

  /* mozIStorageConnection openUnsharedDatabase (in nsIFile aDatabaseFile); */
  NS_SCRIPTABLE NS_IMETHOD OpenUnsharedDatabase(nsIFile *aDatabaseFile, mozIStorageConnection * *_retval NS_OUTPARAM) = 0;

  /* nsIFile backupDatabaseFile (in nsIFile aDBFile, in AString aBackupFileName, [optional] in nsIFile aBackupParentDirectory); */
  NS_SCRIPTABLE NS_IMETHOD BackupDatabaseFile(nsIFile *aDBFile, const nsAString & aBackupFileName, nsIFile *aBackupParentDirectory, nsIFile * *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(mozIStorageService, MOZISTORAGESERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_MOZISTORAGESERVICE \
  NS_SCRIPTABLE NS_IMETHOD OpenSpecialDatabase(const char * aStorageKey, mozIStorageConnection * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD OpenDatabase(nsIFile *aDatabaseFile, mozIStorageConnection * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD OpenUnsharedDatabase(nsIFile *aDatabaseFile, mozIStorageConnection * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD BackupDatabaseFile(nsIFile *aDBFile, const nsAString & aBackupFileName, nsIFile *aBackupParentDirectory, nsIFile * *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_MOZISTORAGESERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD OpenSpecialDatabase(const char * aStorageKey, mozIStorageConnection * *_retval NS_OUTPARAM) { return _to OpenSpecialDatabase(aStorageKey, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD OpenDatabase(nsIFile *aDatabaseFile, mozIStorageConnection * *_retval NS_OUTPARAM) { return _to OpenDatabase(aDatabaseFile, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD OpenUnsharedDatabase(nsIFile *aDatabaseFile, mozIStorageConnection * *_retval NS_OUTPARAM) { return _to OpenUnsharedDatabase(aDatabaseFile, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD BackupDatabaseFile(nsIFile *aDBFile, const nsAString & aBackupFileName, nsIFile *aBackupParentDirectory, nsIFile * *_retval NS_OUTPARAM) { return _to BackupDatabaseFile(aDBFile, aBackupFileName, aBackupParentDirectory, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_MOZISTORAGESERVICE(_to) \
  NS_SCRIPTABLE NS_IMETHOD OpenSpecialDatabase(const char * aStorageKey, mozIStorageConnection * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->OpenSpecialDatabase(aStorageKey, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD OpenDatabase(nsIFile *aDatabaseFile, mozIStorageConnection * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->OpenDatabase(aDatabaseFile, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD OpenUnsharedDatabase(nsIFile *aDatabaseFile, mozIStorageConnection * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->OpenUnsharedDatabase(aDatabaseFile, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD BackupDatabaseFile(nsIFile *aDBFile, const nsAString & aBackupFileName, nsIFile *aBackupParentDirectory, nsIFile * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->BackupDatabaseFile(aDBFile, aBackupFileName, aBackupParentDirectory, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public mozIStorageService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_MOZISTORAGESERVICE

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, mozIStorageService)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* mozIStorageConnection openSpecialDatabase (in string aStorageKey); */
NS_IMETHODIMP _MYCLASS_::OpenSpecialDatabase(const char * aStorageKey, mozIStorageConnection * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* mozIStorageConnection openDatabase (in nsIFile aDatabaseFile); */
NS_IMETHODIMP _MYCLASS_::OpenDatabase(nsIFile *aDatabaseFile, mozIStorageConnection * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* mozIStorageConnection openUnsharedDatabase (in nsIFile aDatabaseFile); */
NS_IMETHODIMP _MYCLASS_::OpenUnsharedDatabase(nsIFile *aDatabaseFile, mozIStorageConnection * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIFile backupDatabaseFile (in nsIFile aDBFile, in AString aBackupFileName, [optional] in nsIFile aBackupParentDirectory); */
NS_IMETHODIMP _MYCLASS_::BackupDatabaseFile(nsIFile *aDBFile, const nsAString & aBackupFileName, nsIFile *aBackupParentDirectory, nsIFile * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#define MOZ_STORAGE_MEMORY_STORAGE_KEY    "memory"
#define MOZ_STORAGE_PROFILE_STORAGE_KEY   "profile"

#endif /* __gen_mozIStorageService_h__ */
