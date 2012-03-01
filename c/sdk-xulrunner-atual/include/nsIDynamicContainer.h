/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/toolkit/components/places/nsIDynamicContainer.idl
 */

#ifndef __gen_nsIDynamicContainer_h__
#define __gen_nsIDynamicContainer_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIURI; /* forward declaration */

class nsINavHistoryContainerResultNode; /* forward declaration */

class nsINavHistoryQueryOptions; /* forward declaration */


/* starting interface:    nsIDynamicContainer */
#define NS_IDYNAMICCONTAINER_IID_STR "7e85d97b-4109-4ea7-afd8-bc2cd3840d70"

#define NS_IDYNAMICCONTAINER_IID \
  {0x7e85d97b, 0x4109, 0x4ea7, \
    { 0xaf, 0xd8, 0xbc, 0x2c, 0xd3, 0x84, 0x0d, 0x70 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDynamicContainer : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDYNAMICCONTAINER_IID)

  /* void onContainerNodeOpening (in nsINavHistoryContainerResultNode aContainer, in nsINavHistoryQueryOptions aOptions); */
  NS_SCRIPTABLE NS_IMETHOD OnContainerNodeOpening(nsINavHistoryContainerResultNode *aContainer, nsINavHistoryQueryOptions *aOptions) = 0;

  /* void onContainerNodeClosed (in nsINavHistoryContainerResultNode aContainer); */
  NS_SCRIPTABLE NS_IMETHOD OnContainerNodeClosed(nsINavHistoryContainerResultNode *aContainer) = 0;

  /* void onContainerRemoving (in long long aItemId); */
  NS_SCRIPTABLE NS_IMETHOD OnContainerRemoving(PRInt64 aItemId) = 0;

  /* void onContainerMoved (in long long aItemId, in long long aNewParent, in long aNewIndex); */
  NS_SCRIPTABLE NS_IMETHOD OnContainerMoved(PRInt64 aItemId, PRInt64 aNewParent, PRInt32 aNewIndex) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDynamicContainer, NS_IDYNAMICCONTAINER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDYNAMICCONTAINER \
  NS_SCRIPTABLE NS_IMETHOD OnContainerNodeOpening(nsINavHistoryContainerResultNode *aContainer, nsINavHistoryQueryOptions *aOptions); \
  NS_SCRIPTABLE NS_IMETHOD OnContainerNodeClosed(nsINavHistoryContainerResultNode *aContainer); \
  NS_SCRIPTABLE NS_IMETHOD OnContainerRemoving(PRInt64 aItemId); \
  NS_SCRIPTABLE NS_IMETHOD OnContainerMoved(PRInt64 aItemId, PRInt64 aNewParent, PRInt32 aNewIndex); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDYNAMICCONTAINER(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnContainerNodeOpening(nsINavHistoryContainerResultNode *aContainer, nsINavHistoryQueryOptions *aOptions) { return _to OnContainerNodeOpening(aContainer, aOptions); } \
  NS_SCRIPTABLE NS_IMETHOD OnContainerNodeClosed(nsINavHistoryContainerResultNode *aContainer) { return _to OnContainerNodeClosed(aContainer); } \
  NS_SCRIPTABLE NS_IMETHOD OnContainerRemoving(PRInt64 aItemId) { return _to OnContainerRemoving(aItemId); } \
  NS_SCRIPTABLE NS_IMETHOD OnContainerMoved(PRInt64 aItemId, PRInt64 aNewParent, PRInt32 aNewIndex) { return _to OnContainerMoved(aItemId, aNewParent, aNewIndex); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDYNAMICCONTAINER(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnContainerNodeOpening(nsINavHistoryContainerResultNode *aContainer, nsINavHistoryQueryOptions *aOptions) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnContainerNodeOpening(aContainer, aOptions); } \
  NS_SCRIPTABLE NS_IMETHOD OnContainerNodeClosed(nsINavHistoryContainerResultNode *aContainer) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnContainerNodeClosed(aContainer); } \
  NS_SCRIPTABLE NS_IMETHOD OnContainerRemoving(PRInt64 aItemId) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnContainerRemoving(aItemId); } \
  NS_SCRIPTABLE NS_IMETHOD OnContainerMoved(PRInt64 aItemId, PRInt64 aNewParent, PRInt32 aNewIndex) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnContainerMoved(aItemId, aNewParent, aNewIndex); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDynamicContainer : public nsIDynamicContainer
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDYNAMICCONTAINER

  nsDynamicContainer();

private:
  ~nsDynamicContainer();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDynamicContainer, nsIDynamicContainer)

nsDynamicContainer::nsDynamicContainer()
{
  /* member initializers and constructor code */
}

nsDynamicContainer::~nsDynamicContainer()
{
  /* destructor code */
}

/* void onContainerNodeOpening (in nsINavHistoryContainerResultNode aContainer, in nsINavHistoryQueryOptions aOptions); */
NS_IMETHODIMP nsDynamicContainer::OnContainerNodeOpening(nsINavHistoryContainerResultNode *aContainer, nsINavHistoryQueryOptions *aOptions)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onContainerNodeClosed (in nsINavHistoryContainerResultNode aContainer); */
NS_IMETHODIMP nsDynamicContainer::OnContainerNodeClosed(nsINavHistoryContainerResultNode *aContainer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onContainerRemoving (in long long aItemId); */
NS_IMETHODIMP nsDynamicContainer::OnContainerRemoving(PRInt64 aItemId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onContainerMoved (in long long aItemId, in long long aNewParent, in long aNewIndex); */
NS_IMETHODIMP nsDynamicContainer::OnContainerMoved(PRInt64 aItemId, PRInt64 aNewParent, PRInt32 aNewIndex)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDynamicContainer_h__ */
