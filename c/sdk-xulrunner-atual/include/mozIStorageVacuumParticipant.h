/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/storage/public/mozIStorageVacuumParticipant.idl
 */

#ifndef __gen_mozIStorageVacuumParticipant_h__
#define __gen_mozIStorageVacuumParticipant_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class mozIStorageConnection; /* forward declaration */


/* starting interface:    mozIStorageVacuumParticipant */
#define MOZISTORAGEVACUUMPARTICIPANT_IID_STR "8f367508-1d9a-4d3f-be0c-ac11b6dd7dbf"

#define MOZISTORAGEVACUUMPARTICIPANT_IID \
  {0x8f367508, 0x1d9a, 0x4d3f, \
    { 0xbe, 0x0c, 0xac, 0x11, 0xb6, 0xdd, 0x7d, 0xbf }}

class NS_NO_VTABLE NS_SCRIPTABLE mozIStorageVacuumParticipant : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(MOZISTORAGEVACUUMPARTICIPANT_IID)

  /* readonly attribute long expectedDatabasePageSize; */
  NS_SCRIPTABLE NS_IMETHOD GetExpectedDatabasePageSize(PRInt32 *aExpectedDatabasePageSize) = 0;

  /* readonly attribute mozIStorageConnection databaseConnection; */
  NS_SCRIPTABLE NS_IMETHOD GetDatabaseConnection(mozIStorageConnection * *aDatabaseConnection) = 0;

  /* boolean onBeginVacuum (); */
  NS_SCRIPTABLE NS_IMETHOD OnBeginVacuum(PRBool *_retval NS_OUTPARAM) = 0;

  /* void onEndVacuum (in boolean aSucceeded); */
  NS_SCRIPTABLE NS_IMETHOD OnEndVacuum(PRBool aSucceeded) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(mozIStorageVacuumParticipant, MOZISTORAGEVACUUMPARTICIPANT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_MOZISTORAGEVACUUMPARTICIPANT \
  NS_SCRIPTABLE NS_IMETHOD GetExpectedDatabasePageSize(PRInt32 *aExpectedDatabasePageSize); \
  NS_SCRIPTABLE NS_IMETHOD GetDatabaseConnection(mozIStorageConnection * *aDatabaseConnection); \
  NS_SCRIPTABLE NS_IMETHOD OnBeginVacuum(PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD OnEndVacuum(PRBool aSucceeded); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_MOZISTORAGEVACUUMPARTICIPANT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetExpectedDatabasePageSize(PRInt32 *aExpectedDatabasePageSize) { return _to GetExpectedDatabasePageSize(aExpectedDatabasePageSize); } \
  NS_SCRIPTABLE NS_IMETHOD GetDatabaseConnection(mozIStorageConnection * *aDatabaseConnection) { return _to GetDatabaseConnection(aDatabaseConnection); } \
  NS_SCRIPTABLE NS_IMETHOD OnBeginVacuum(PRBool *_retval NS_OUTPARAM) { return _to OnBeginVacuum(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD OnEndVacuum(PRBool aSucceeded) { return _to OnEndVacuum(aSucceeded); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_MOZISTORAGEVACUUMPARTICIPANT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetExpectedDatabasePageSize(PRInt32 *aExpectedDatabasePageSize) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetExpectedDatabasePageSize(aExpectedDatabasePageSize); } \
  NS_SCRIPTABLE NS_IMETHOD GetDatabaseConnection(mozIStorageConnection * *aDatabaseConnection) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDatabaseConnection(aDatabaseConnection); } \
  NS_SCRIPTABLE NS_IMETHOD OnBeginVacuum(PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnBeginVacuum(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD OnEndVacuum(PRBool aSucceeded) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnEndVacuum(aSucceeded); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public mozIStorageVacuumParticipant
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_MOZISTORAGEVACUUMPARTICIPANT

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, mozIStorageVacuumParticipant)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* readonly attribute long expectedDatabasePageSize; */
NS_IMETHODIMP _MYCLASS_::GetExpectedDatabasePageSize(PRInt32 *aExpectedDatabasePageSize)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute mozIStorageConnection databaseConnection; */
NS_IMETHODIMP _MYCLASS_::GetDatabaseConnection(mozIStorageConnection * *aDatabaseConnection)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean onBeginVacuum (); */
NS_IMETHODIMP _MYCLASS_::OnBeginVacuum(PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onEndVacuum (in boolean aSucceeded); */
NS_IMETHODIMP _MYCLASS_::OnEndVacuum(PRBool aSucceeded)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_mozIStorageVacuumParticipant_h__ */
