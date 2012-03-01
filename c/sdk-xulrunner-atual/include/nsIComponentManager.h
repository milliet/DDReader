/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/xpcom/components/nsIComponentManager.idl
 */

#ifndef __gen_nsIComponentManager_h__
#define __gen_nsIComponentManager_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsILocalFile; /* forward declaration */

class nsIFactory; /* forward declaration */


/* starting interface:    nsIComponentManager */
#define NS_ICOMPONENTMANAGER_IID_STR "1d940426-5fe5-42c3-84ae-a300f2d9ebd5"

#define NS_ICOMPONENTMANAGER_IID \
  {0x1d940426, 0x5fe5, 0x42c3, \
    { 0x84, 0xae, 0xa3, 0x00, 0xf2, 0xd9, 0xeb, 0xd5 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIComponentManager : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ICOMPONENTMANAGER_IID)

  /* void getClassObject (in nsCIDRef aClass, in nsIIDRef aIID, [iid_is (aIID), retval] out nsQIResult result); */
  NS_SCRIPTABLE NS_IMETHOD GetClassObject(const nsCID & aClass, const nsIID & aIID, void **result NS_OUTPARAM) = 0;

  /* void getClassObjectByContractID (in string aContractID, in nsIIDRef aIID, [iid_is (aIID), retval] out nsQIResult result); */
  NS_SCRIPTABLE NS_IMETHOD GetClassObjectByContractID(const char * aContractID, const nsIID & aIID, void **result NS_OUTPARAM) = 0;

  /* void createInstance (in nsCIDRef aClass, in nsISupports aDelegate, in nsIIDRef aIID, [iid_is (aIID), retval] out nsQIResult result); */
  NS_SCRIPTABLE NS_IMETHOD CreateInstance(const nsCID & aClass, nsISupports *aDelegate, const nsIID & aIID, void **result NS_OUTPARAM) = 0;

  /* void createInstanceByContractID (in string aContractID, in nsISupports aDelegate, in nsIIDRef aIID, [iid_is (aIID), retval] out nsQIResult result); */
  NS_SCRIPTABLE NS_IMETHOD CreateInstanceByContractID(const char * aContractID, nsISupports *aDelegate, const nsIID & aIID, void **result NS_OUTPARAM) = 0;

  /* void addBootstrappedManifestLocation (in nsILocalFile aLocation); */
  NS_SCRIPTABLE NS_IMETHOD AddBootstrappedManifestLocation(nsILocalFile *aLocation) = 0;

  /* void removeBootstrappedManifestLocation (in nsILocalFile aLocation); */
  NS_SCRIPTABLE NS_IMETHOD RemoveBootstrappedManifestLocation(nsILocalFile *aLocation) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIComponentManager, NS_ICOMPONENTMANAGER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSICOMPONENTMANAGER \
  NS_SCRIPTABLE NS_IMETHOD GetClassObject(const nsCID & aClass, const nsIID & aIID, void **result NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetClassObjectByContractID(const char * aContractID, const nsIID & aIID, void **result NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CreateInstance(const nsCID & aClass, nsISupports *aDelegate, const nsIID & aIID, void **result NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD CreateInstanceByContractID(const char * aContractID, nsISupports *aDelegate, const nsIID & aIID, void **result NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD AddBootstrappedManifestLocation(nsILocalFile *aLocation); \
  NS_SCRIPTABLE NS_IMETHOD RemoveBootstrappedManifestLocation(nsILocalFile *aLocation); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSICOMPONENTMANAGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetClassObject(const nsCID & aClass, const nsIID & aIID, void **result NS_OUTPARAM) { return _to GetClassObject(aClass, aIID, result); } \
  NS_SCRIPTABLE NS_IMETHOD GetClassObjectByContractID(const char * aContractID, const nsIID & aIID, void **result NS_OUTPARAM) { return _to GetClassObjectByContractID(aContractID, aIID, result); } \
  NS_SCRIPTABLE NS_IMETHOD CreateInstance(const nsCID & aClass, nsISupports *aDelegate, const nsIID & aIID, void **result NS_OUTPARAM) { return _to CreateInstance(aClass, aDelegate, aIID, result); } \
  NS_SCRIPTABLE NS_IMETHOD CreateInstanceByContractID(const char * aContractID, nsISupports *aDelegate, const nsIID & aIID, void **result NS_OUTPARAM) { return _to CreateInstanceByContractID(aContractID, aDelegate, aIID, result); } \
  NS_SCRIPTABLE NS_IMETHOD AddBootstrappedManifestLocation(nsILocalFile *aLocation) { return _to AddBootstrappedManifestLocation(aLocation); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveBootstrappedManifestLocation(nsILocalFile *aLocation) { return _to RemoveBootstrappedManifestLocation(aLocation); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSICOMPONENTMANAGER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetClassObject(const nsCID & aClass, const nsIID & aIID, void **result NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetClassObject(aClass, aIID, result); } \
  NS_SCRIPTABLE NS_IMETHOD GetClassObjectByContractID(const char * aContractID, const nsIID & aIID, void **result NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetClassObjectByContractID(aContractID, aIID, result); } \
  NS_SCRIPTABLE NS_IMETHOD CreateInstance(const nsCID & aClass, nsISupports *aDelegate, const nsIID & aIID, void **result NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateInstance(aClass, aDelegate, aIID, result); } \
  NS_SCRIPTABLE NS_IMETHOD CreateInstanceByContractID(const char * aContractID, nsISupports *aDelegate, const nsIID & aIID, void **result NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateInstanceByContractID(aContractID, aDelegate, aIID, result); } \
  NS_SCRIPTABLE NS_IMETHOD AddBootstrappedManifestLocation(nsILocalFile *aLocation) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddBootstrappedManifestLocation(aLocation); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveBootstrappedManifestLocation(nsILocalFile *aLocation) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveBootstrappedManifestLocation(aLocation); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsComponentManager : public nsIComponentManager
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSICOMPONENTMANAGER

  nsComponentManager();

private:
  ~nsComponentManager();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsComponentManager, nsIComponentManager)

nsComponentManager::nsComponentManager()
{
  /* member initializers and constructor code */
}

nsComponentManager::~nsComponentManager()
{
  /* destructor code */
}

/* void getClassObject (in nsCIDRef aClass, in nsIIDRef aIID, [iid_is (aIID), retval] out nsQIResult result); */
NS_IMETHODIMP nsComponentManager::GetClassObject(const nsCID & aClass, const nsIID & aIID, void **result NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getClassObjectByContractID (in string aContractID, in nsIIDRef aIID, [iid_is (aIID), retval] out nsQIResult result); */
NS_IMETHODIMP nsComponentManager::GetClassObjectByContractID(const char * aContractID, const nsIID & aIID, void **result NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void createInstance (in nsCIDRef aClass, in nsISupports aDelegate, in nsIIDRef aIID, [iid_is (aIID), retval] out nsQIResult result); */
NS_IMETHODIMP nsComponentManager::CreateInstance(const nsCID & aClass, nsISupports *aDelegate, const nsIID & aIID, void **result NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void createInstanceByContractID (in string aContractID, in nsISupports aDelegate, in nsIIDRef aIID, [iid_is (aIID), retval] out nsQIResult result); */
NS_IMETHODIMP nsComponentManager::CreateInstanceByContractID(const char * aContractID, nsISupports *aDelegate, const nsIID & aIID, void **result NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addBootstrappedManifestLocation (in nsILocalFile aLocation); */
NS_IMETHODIMP nsComponentManager::AddBootstrappedManifestLocation(nsILocalFile *aLocation)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeBootstrappedManifestLocation (in nsILocalFile aLocation); */
NS_IMETHODIMP nsComponentManager::RemoveBootstrappedManifestLocation(nsILocalFile *aLocation)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif

#ifdef MOZILLA_INTERNAL_API
#include "nsComponentManagerUtils.h"
#endif

#endif /* __gen_nsIComponentManager_h__ */
