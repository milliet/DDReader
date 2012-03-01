/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/storage/public/mozIStorageConnection.idl
 */

#ifndef __gen_mozIStorageConnection_h__
#define __gen_mozIStorageConnection_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class mozIStorageAggregateFunction; /* forward declaration */

class mozIStorageCompletionCallback; /* forward declaration */

class mozIStorageFunction; /* forward declaration */

class mozIStorageProgressHandler; /* forward declaration */

class mozIStorageBaseStatement; /* forward declaration */

class mozIStorageStatement; /* forward declaration */

class mozIStorageAsyncStatement; /* forward declaration */

class mozIStorageStatementCallback; /* forward declaration */

class mozIStoragePendingStatement; /* forward declaration */

class nsIFile; /* forward declaration */


/* starting interface:    mozIStorageConnection */
#define MOZISTORAGECONNECTION_IID_STR "ad035628-4ffb-42ff-a256-0ed9e410b859"

#define MOZISTORAGECONNECTION_IID \
  {0xad035628, 0x4ffb, 0x42ff, \
    { 0xa2, 0x56, 0x0e, 0xd9, 0xe4, 0x10, 0xb8, 0x59 }}

class NS_NO_VTABLE NS_SCRIPTABLE mozIStorageConnection : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(MOZISTORAGECONNECTION_IID)

  enum { DEFAULT_PAGE_SIZE = 32768 };

  /* void close (); */
  NS_SCRIPTABLE NS_IMETHOD Close(void) = 0;

  /* void asyncClose ([optional] in mozIStorageCompletionCallback aCallback); */
  NS_SCRIPTABLE NS_IMETHOD AsyncClose(mozIStorageCompletionCallback *aCallback) = 0;

  /* mozIStorageConnection clone ([optional] in boolean aReadOnly); */
  NS_SCRIPTABLE NS_IMETHOD Clone(PRBool aReadOnly, mozIStorageConnection * *_retval NS_OUTPARAM) = 0;

  /* readonly attribute boolean connectionReady; */
  NS_SCRIPTABLE NS_IMETHOD GetConnectionReady(PRBool *aConnectionReady) = 0;

  /* readonly attribute nsIFile databaseFile; */
  NS_SCRIPTABLE NS_IMETHOD GetDatabaseFile(nsIFile * *aDatabaseFile) = 0;

  /* readonly attribute long long lastInsertRowID; */
  NS_SCRIPTABLE NS_IMETHOD GetLastInsertRowID(PRInt64 *aLastInsertRowID) = 0;

  /* readonly attribute long lastError; */
  NS_SCRIPTABLE NS_IMETHOD GetLastError(PRInt32 *aLastError) = 0;

  /* readonly attribute AUTF8String lastErrorString; */
  NS_SCRIPTABLE NS_IMETHOD GetLastErrorString(nsACString & aLastErrorString) = 0;

  /* attribute long schemaVersion; */
  NS_SCRIPTABLE NS_IMETHOD GetSchemaVersion(PRInt32 *aSchemaVersion) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetSchemaVersion(PRInt32 aSchemaVersion) = 0;

  /* mozIStorageStatement createStatement (in AUTF8String aSQLStatement); */
  NS_SCRIPTABLE NS_IMETHOD CreateStatement(const nsACString & aSQLStatement, mozIStorageStatement * *_retval NS_OUTPARAM) = 0;

  /* mozIStorageAsyncStatement createAsyncStatement (in AUTF8String aSQLStatement); */
  NS_SCRIPTABLE NS_IMETHOD CreateAsyncStatement(const nsACString & aSQLStatement, mozIStorageAsyncStatement * *_retval NS_OUTPARAM) = 0;

  /* void executeSimpleSQL (in AUTF8String aSQLStatement); */
  NS_SCRIPTABLE NS_IMETHOD ExecuteSimpleSQL(const nsACString & aSQLStatement) = 0;

  /* mozIStoragePendingStatement executeAsync ([array, size_is (aNumStatements)] in mozIStorageBaseStatement aStatements, in unsigned long aNumStatements, [optional] in mozIStorageStatementCallback aCallback); */
  NS_SCRIPTABLE NS_IMETHOD ExecuteAsync(mozIStorageBaseStatement **aStatements, PRUint32 aNumStatements, mozIStorageStatementCallback *aCallback, mozIStoragePendingStatement * *_retval NS_OUTPARAM) = 0;

  /* boolean tableExists (in AUTF8String aTableName); */
  NS_SCRIPTABLE NS_IMETHOD TableExists(const nsACString & aTableName, PRBool *_retval NS_OUTPARAM) = 0;

  /* boolean indexExists (in AUTF8String aIndexName); */
  NS_SCRIPTABLE NS_IMETHOD IndexExists(const nsACString & aIndexName, PRBool *_retval NS_OUTPARAM) = 0;

  /* readonly attribute boolean transactionInProgress; */
  NS_SCRIPTABLE NS_IMETHOD GetTransactionInProgress(PRBool *aTransactionInProgress) = 0;

  /* void beginTransaction (); */
  NS_SCRIPTABLE NS_IMETHOD BeginTransaction(void) = 0;

  enum { TRANSACTION_DEFERRED = 0 };

  enum { TRANSACTION_IMMEDIATE = 1 };

  enum { TRANSACTION_EXCLUSIVE = 2 };

  /* void beginTransactionAs (in PRInt32 transactionType); */
  NS_SCRIPTABLE NS_IMETHOD BeginTransactionAs(PRInt32 transactionType) = 0;

  /* void commitTransaction (); */
  NS_SCRIPTABLE NS_IMETHOD CommitTransaction(void) = 0;

  /* void rollbackTransaction (); */
  NS_SCRIPTABLE NS_IMETHOD RollbackTransaction(void) = 0;

  /* void createTable (in string aTableName, in string aTableSchema); */
  NS_SCRIPTABLE NS_IMETHOD CreateTable(const char * aTableName, const char * aTableSchema) = 0;

  /* void createFunction (in AUTF8String aFunctionName, in long aNumArguments, in mozIStorageFunction aFunction); */
  NS_SCRIPTABLE NS_IMETHOD CreateFunction(const nsACString & aFunctionName, PRInt32 aNumArguments, mozIStorageFunction *aFunction) = 0;

  /* void createAggregateFunction (in AUTF8String aFunctionName, in long aNumArguments, in mozIStorageAggregateFunction aFunction); */
  NS_SCRIPTABLE NS_IMETHOD CreateAggregateFunction(const nsACString & aFunctionName, PRInt32 aNumArguments, mozIStorageAggregateFunction *aFunction) = 0;

  /* void removeFunction (in AUTF8String aFunctionName); */
  NS_SCRIPTABLE NS_IMETHOD RemoveFunction(const nsACString & aFunctionName) = 0;

  /* mozIStorageProgressHandler setProgressHandler (in PRInt32 aGranularity, in mozIStorageProgressHandler aHandler); */
  NS_SCRIPTABLE NS_IMETHOD SetProgressHandler(PRInt32 aGranularity, mozIStorageProgressHandler *aHandler, mozIStorageProgressHandler * *_retval NS_OUTPARAM) = 0;

  /* mozIStorageProgressHandler removeProgressHandler (); */
  NS_SCRIPTABLE NS_IMETHOD RemoveProgressHandler(mozIStorageProgressHandler * *_retval NS_OUTPARAM) = 0;

  /* void setGrowthIncrement (in PRInt32 aIncrement, in AUTF8String aDatabaseName); */
  NS_SCRIPTABLE NS_IMETHOD SetGrowthIncrement(PRInt32 aIncrement, const nsACString & aDatabaseName) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(mozIStorageConnection, MOZISTORAGECONNECTION_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_MOZISTORAGECONNECTION \
  NS_SCRIPTABLE NS_IMETHOD Close(void); \
  NS_SCRIPTABLE NS_IMETHOD AsyncClose(mozIStorageCompletionCallback *aCallback); \
  NS_SCRIPTABLE NS_IMETHOD Clone(PRBool aReadOnly, mozIStorageConnection * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetConnectionReady(PRBool *aConnectionReady); \
  NS_SCRIPTABLE NS_IMETHOD GetDatabaseFile(nsIFile * *aDatabaseFile); \
  NS_SCRIPTABLE NS_IMETHOD GetLastInsertRowID(PRInt64 *aLastInsertRowID); \
  NS_SCRIPTABLE NS_IMETHOD GetLastError(PRInt32 *aLastError); \
  NS_SCRIPTABLE NS_IMETHOD GetLastErrorString(nsACString & aLastErrorString); \
  NS_SCRIPTABLE NS_IMETHOD GetSchemaVersion(PRInt32 *aSchemaVersion); \
  NS_SCRIPTABLE NS_IMETHOD SetSchemaVersion(PRInt32 aSchemaVersion); \
  NS_SCRIPTABLE NS_IMETHOD CreateStatement(const nsACString & aSQLStatement, mozIStorageStatement * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CreateAsyncStatement(const nsACString & aSQLStatement, mozIStorageAsyncStatement * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ExecuteSimpleSQL(const nsACString & aSQLStatement); \
  NS_SCRIPTABLE NS_IMETHOD ExecuteAsync(mozIStorageBaseStatement **aStatements, PRUint32 aNumStatements, mozIStorageStatementCallback *aCallback, mozIStoragePendingStatement * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD TableExists(const nsACString & aTableName, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IndexExists(const nsACString & aIndexName, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetTransactionInProgress(PRBool *aTransactionInProgress); \
  NS_SCRIPTABLE NS_IMETHOD BeginTransaction(void); \
  NS_SCRIPTABLE NS_IMETHOD BeginTransactionAs(PRInt32 transactionType); \
  NS_SCRIPTABLE NS_IMETHOD CommitTransaction(void); \
  NS_SCRIPTABLE NS_IMETHOD RollbackTransaction(void); \
  NS_SCRIPTABLE NS_IMETHOD CreateTable(const char * aTableName, const char * aTableSchema); \
  NS_SCRIPTABLE NS_IMETHOD CreateFunction(const nsACString & aFunctionName, PRInt32 aNumArguments, mozIStorageFunction *aFunction); \
  NS_SCRIPTABLE NS_IMETHOD CreateAggregateFunction(const nsACString & aFunctionName, PRInt32 aNumArguments, mozIStorageAggregateFunction *aFunction); \
  NS_SCRIPTABLE NS_IMETHOD RemoveFunction(const nsACString & aFunctionName); \
  NS_SCRIPTABLE NS_IMETHOD SetProgressHandler(PRInt32 aGranularity, mozIStorageProgressHandler *aHandler, mozIStorageProgressHandler * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD RemoveProgressHandler(mozIStorageProgressHandler * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetGrowthIncrement(PRInt32 aIncrement, const nsACString & aDatabaseName); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_MOZISTORAGECONNECTION(_to) \
  NS_SCRIPTABLE NS_IMETHOD Close(void) { return _to Close(); } \
  NS_SCRIPTABLE NS_IMETHOD AsyncClose(mozIStorageCompletionCallback *aCallback) { return _to AsyncClose(aCallback); } \
  NS_SCRIPTABLE NS_IMETHOD Clone(PRBool aReadOnly, mozIStorageConnection * *_retval NS_OUTPARAM) { return _to Clone(aReadOnly, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetConnectionReady(PRBool *aConnectionReady) { return _to GetConnectionReady(aConnectionReady); } \
  NS_SCRIPTABLE NS_IMETHOD GetDatabaseFile(nsIFile * *aDatabaseFile) { return _to GetDatabaseFile(aDatabaseFile); } \
  NS_SCRIPTABLE NS_IMETHOD GetLastInsertRowID(PRInt64 *aLastInsertRowID) { return _to GetLastInsertRowID(aLastInsertRowID); } \
  NS_SCRIPTABLE NS_IMETHOD GetLastError(PRInt32 *aLastError) { return _to GetLastError(aLastError); } \
  NS_SCRIPTABLE NS_IMETHOD GetLastErrorString(nsACString & aLastErrorString) { return _to GetLastErrorString(aLastErrorString); } \
  NS_SCRIPTABLE NS_IMETHOD GetSchemaVersion(PRInt32 *aSchemaVersion) { return _to GetSchemaVersion(aSchemaVersion); } \
  NS_SCRIPTABLE NS_IMETHOD SetSchemaVersion(PRInt32 aSchemaVersion) { return _to SetSchemaVersion(aSchemaVersion); } \
  NS_SCRIPTABLE NS_IMETHOD CreateStatement(const nsACString & aSQLStatement, mozIStorageStatement * *_retval NS_OUTPARAM) { return _to CreateStatement(aSQLStatement, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CreateAsyncStatement(const nsACString & aSQLStatement, mozIStorageAsyncStatement * *_retval NS_OUTPARAM) { return _to CreateAsyncStatement(aSQLStatement, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ExecuteSimpleSQL(const nsACString & aSQLStatement) { return _to ExecuteSimpleSQL(aSQLStatement); } \
  NS_SCRIPTABLE NS_IMETHOD ExecuteAsync(mozIStorageBaseStatement **aStatements, PRUint32 aNumStatements, mozIStorageStatementCallback *aCallback, mozIStoragePendingStatement * *_retval NS_OUTPARAM) { return _to ExecuteAsync(aStatements, aNumStatements, aCallback, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD TableExists(const nsACString & aTableName, PRBool *_retval NS_OUTPARAM) { return _to TableExists(aTableName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IndexExists(const nsACString & aIndexName, PRBool *_retval NS_OUTPARAM) { return _to IndexExists(aIndexName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetTransactionInProgress(PRBool *aTransactionInProgress) { return _to GetTransactionInProgress(aTransactionInProgress); } \
  NS_SCRIPTABLE NS_IMETHOD BeginTransaction(void) { return _to BeginTransaction(); } \
  NS_SCRIPTABLE NS_IMETHOD BeginTransactionAs(PRInt32 transactionType) { return _to BeginTransactionAs(transactionType); } \
  NS_SCRIPTABLE NS_IMETHOD CommitTransaction(void) { return _to CommitTransaction(); } \
  NS_SCRIPTABLE NS_IMETHOD RollbackTransaction(void) { return _to RollbackTransaction(); } \
  NS_SCRIPTABLE NS_IMETHOD CreateTable(const char * aTableName, const char * aTableSchema) { return _to CreateTable(aTableName, aTableSchema); } \
  NS_SCRIPTABLE NS_IMETHOD CreateFunction(const nsACString & aFunctionName, PRInt32 aNumArguments, mozIStorageFunction *aFunction) { return _to CreateFunction(aFunctionName, aNumArguments, aFunction); } \
  NS_SCRIPTABLE NS_IMETHOD CreateAggregateFunction(const nsACString & aFunctionName, PRInt32 aNumArguments, mozIStorageAggregateFunction *aFunction) { return _to CreateAggregateFunction(aFunctionName, aNumArguments, aFunction); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveFunction(const nsACString & aFunctionName) { return _to RemoveFunction(aFunctionName); } \
  NS_SCRIPTABLE NS_IMETHOD SetProgressHandler(PRInt32 aGranularity, mozIStorageProgressHandler *aHandler, mozIStorageProgressHandler * *_retval NS_OUTPARAM) { return _to SetProgressHandler(aGranularity, aHandler, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveProgressHandler(mozIStorageProgressHandler * *_retval NS_OUTPARAM) { return _to RemoveProgressHandler(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetGrowthIncrement(PRInt32 aIncrement, const nsACString & aDatabaseName) { return _to SetGrowthIncrement(aIncrement, aDatabaseName); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_MOZISTORAGECONNECTION(_to) \
  NS_SCRIPTABLE NS_IMETHOD Close(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Close(); } \
  NS_SCRIPTABLE NS_IMETHOD AsyncClose(mozIStorageCompletionCallback *aCallback) { return !_to ? NS_ERROR_NULL_POINTER : _to->AsyncClose(aCallback); } \
  NS_SCRIPTABLE NS_IMETHOD Clone(PRBool aReadOnly, mozIStorageConnection * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Clone(aReadOnly, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetConnectionReady(PRBool *aConnectionReady) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetConnectionReady(aConnectionReady); } \
  NS_SCRIPTABLE NS_IMETHOD GetDatabaseFile(nsIFile * *aDatabaseFile) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDatabaseFile(aDatabaseFile); } \
  NS_SCRIPTABLE NS_IMETHOD GetLastInsertRowID(PRInt64 *aLastInsertRowID) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLastInsertRowID(aLastInsertRowID); } \
  NS_SCRIPTABLE NS_IMETHOD GetLastError(PRInt32 *aLastError) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLastError(aLastError); } \
  NS_SCRIPTABLE NS_IMETHOD GetLastErrorString(nsACString & aLastErrorString) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLastErrorString(aLastErrorString); } \
  NS_SCRIPTABLE NS_IMETHOD GetSchemaVersion(PRInt32 *aSchemaVersion) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSchemaVersion(aSchemaVersion); } \
  NS_SCRIPTABLE NS_IMETHOD SetSchemaVersion(PRInt32 aSchemaVersion) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSchemaVersion(aSchemaVersion); } \
  NS_SCRIPTABLE NS_IMETHOD CreateStatement(const nsACString & aSQLStatement, mozIStorageStatement * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateStatement(aSQLStatement, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD CreateAsyncStatement(const nsACString & aSQLStatement, mozIStorageAsyncStatement * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateAsyncStatement(aSQLStatement, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ExecuteSimpleSQL(const nsACString & aSQLStatement) { return !_to ? NS_ERROR_NULL_POINTER : _to->ExecuteSimpleSQL(aSQLStatement); } \
  NS_SCRIPTABLE NS_IMETHOD ExecuteAsync(mozIStorageBaseStatement **aStatements, PRUint32 aNumStatements, mozIStorageStatementCallback *aCallback, mozIStoragePendingStatement * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ExecuteAsync(aStatements, aNumStatements, aCallback, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD TableExists(const nsACString & aTableName, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->TableExists(aTableName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IndexExists(const nsACString & aIndexName, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IndexExists(aIndexName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetTransactionInProgress(PRBool *aTransactionInProgress) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTransactionInProgress(aTransactionInProgress); } \
  NS_SCRIPTABLE NS_IMETHOD BeginTransaction(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->BeginTransaction(); } \
  NS_SCRIPTABLE NS_IMETHOD BeginTransactionAs(PRInt32 transactionType) { return !_to ? NS_ERROR_NULL_POINTER : _to->BeginTransactionAs(transactionType); } \
  NS_SCRIPTABLE NS_IMETHOD CommitTransaction(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->CommitTransaction(); } \
  NS_SCRIPTABLE NS_IMETHOD RollbackTransaction(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->RollbackTransaction(); } \
  NS_SCRIPTABLE NS_IMETHOD CreateTable(const char * aTableName, const char * aTableSchema) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateTable(aTableName, aTableSchema); } \
  NS_SCRIPTABLE NS_IMETHOD CreateFunction(const nsACString & aFunctionName, PRInt32 aNumArguments, mozIStorageFunction *aFunction) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateFunction(aFunctionName, aNumArguments, aFunction); } \
  NS_SCRIPTABLE NS_IMETHOD CreateAggregateFunction(const nsACString & aFunctionName, PRInt32 aNumArguments, mozIStorageAggregateFunction *aFunction) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateAggregateFunction(aFunctionName, aNumArguments, aFunction); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveFunction(const nsACString & aFunctionName) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveFunction(aFunctionName); } \
  NS_SCRIPTABLE NS_IMETHOD SetProgressHandler(PRInt32 aGranularity, mozIStorageProgressHandler *aHandler, mozIStorageProgressHandler * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetProgressHandler(aGranularity, aHandler, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveProgressHandler(mozIStorageProgressHandler * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveProgressHandler(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetGrowthIncrement(PRInt32 aIncrement, const nsACString & aDatabaseName) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetGrowthIncrement(aIncrement, aDatabaseName); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public mozIStorageConnection
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_MOZISTORAGECONNECTION

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, mozIStorageConnection)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void close (); */
NS_IMETHODIMP _MYCLASS_::Close()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void asyncClose ([optional] in mozIStorageCompletionCallback aCallback); */
NS_IMETHODIMP _MYCLASS_::AsyncClose(mozIStorageCompletionCallback *aCallback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* mozIStorageConnection clone ([optional] in boolean aReadOnly); */
NS_IMETHODIMP _MYCLASS_::Clone(PRBool aReadOnly, mozIStorageConnection * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean connectionReady; */
NS_IMETHODIMP _MYCLASS_::GetConnectionReady(PRBool *aConnectionReady)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIFile databaseFile; */
NS_IMETHODIMP _MYCLASS_::GetDatabaseFile(nsIFile * *aDatabaseFile)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long long lastInsertRowID; */
NS_IMETHODIMP _MYCLASS_::GetLastInsertRowID(PRInt64 *aLastInsertRowID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long lastError; */
NS_IMETHODIMP _MYCLASS_::GetLastError(PRInt32 *aLastError)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AUTF8String lastErrorString; */
NS_IMETHODIMP _MYCLASS_::GetLastErrorString(nsACString & aLastErrorString)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long schemaVersion; */
NS_IMETHODIMP _MYCLASS_::GetSchemaVersion(PRInt32 *aSchemaVersion)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetSchemaVersion(PRInt32 aSchemaVersion)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* mozIStorageStatement createStatement (in AUTF8String aSQLStatement); */
NS_IMETHODIMP _MYCLASS_::CreateStatement(const nsACString & aSQLStatement, mozIStorageStatement * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* mozIStorageAsyncStatement createAsyncStatement (in AUTF8String aSQLStatement); */
NS_IMETHODIMP _MYCLASS_::CreateAsyncStatement(const nsACString & aSQLStatement, mozIStorageAsyncStatement * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void executeSimpleSQL (in AUTF8String aSQLStatement); */
NS_IMETHODIMP _MYCLASS_::ExecuteSimpleSQL(const nsACString & aSQLStatement)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* mozIStoragePendingStatement executeAsync ([array, size_is (aNumStatements)] in mozIStorageBaseStatement aStatements, in unsigned long aNumStatements, [optional] in mozIStorageStatementCallback aCallback); */
NS_IMETHODIMP _MYCLASS_::ExecuteAsync(mozIStorageBaseStatement **aStatements, PRUint32 aNumStatements, mozIStorageStatementCallback *aCallback, mozIStoragePendingStatement * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean tableExists (in AUTF8String aTableName); */
NS_IMETHODIMP _MYCLASS_::TableExists(const nsACString & aTableName, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean indexExists (in AUTF8String aIndexName); */
NS_IMETHODIMP _MYCLASS_::IndexExists(const nsACString & aIndexName, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean transactionInProgress; */
NS_IMETHODIMP _MYCLASS_::GetTransactionInProgress(PRBool *aTransactionInProgress)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void beginTransaction (); */
NS_IMETHODIMP _MYCLASS_::BeginTransaction()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void beginTransactionAs (in PRInt32 transactionType); */
NS_IMETHODIMP _MYCLASS_::BeginTransactionAs(PRInt32 transactionType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void commitTransaction (); */
NS_IMETHODIMP _MYCLASS_::CommitTransaction()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void rollbackTransaction (); */
NS_IMETHODIMP _MYCLASS_::RollbackTransaction()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void createTable (in string aTableName, in string aTableSchema); */
NS_IMETHODIMP _MYCLASS_::CreateTable(const char * aTableName, const char * aTableSchema)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void createFunction (in AUTF8String aFunctionName, in long aNumArguments, in mozIStorageFunction aFunction); */
NS_IMETHODIMP _MYCLASS_::CreateFunction(const nsACString & aFunctionName, PRInt32 aNumArguments, mozIStorageFunction *aFunction)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void createAggregateFunction (in AUTF8String aFunctionName, in long aNumArguments, in mozIStorageAggregateFunction aFunction); */
NS_IMETHODIMP _MYCLASS_::CreateAggregateFunction(const nsACString & aFunctionName, PRInt32 aNumArguments, mozIStorageAggregateFunction *aFunction)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeFunction (in AUTF8String aFunctionName); */
NS_IMETHODIMP _MYCLASS_::RemoveFunction(const nsACString & aFunctionName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* mozIStorageProgressHandler setProgressHandler (in PRInt32 aGranularity, in mozIStorageProgressHandler aHandler); */
NS_IMETHODIMP _MYCLASS_::SetProgressHandler(PRInt32 aGranularity, mozIStorageProgressHandler *aHandler, mozIStorageProgressHandler * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* mozIStorageProgressHandler removeProgressHandler (); */
NS_IMETHODIMP _MYCLASS_::RemoveProgressHandler(mozIStorageProgressHandler * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setGrowthIncrement (in PRInt32 aIncrement, in AUTF8String aDatabaseName); */
NS_IMETHODIMP _MYCLASS_::SetGrowthIncrement(PRInt32 aIncrement, const nsACString & aDatabaseName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_mozIStorageConnection_h__ */
