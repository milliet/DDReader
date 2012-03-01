/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/accessible/public/nsIAccessibleRelation.idl
 */

#ifndef __gen_nsIAccessibleRelation_h__
#define __gen_nsIAccessibleRelation_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#ifndef __gen_nsIArray_h__
#include "nsIArray.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIAccessible; /* forward declaration */


/* starting interface:    nsIAccessibleRelation */
#define NS_IACCESSIBLERELATION_IID_STR "f42a1589-70ab-4704-877f-4a9162bbe188"

#define NS_IACCESSIBLERELATION_IID \
  {0xf42a1589, 0x70ab, 0x4704, \
    { 0x87, 0x7f, 0x4a, 0x91, 0x62, 0xbb, 0xe1, 0x88 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIAccessibleRelation : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IACCESSIBLERELATION_IID)

  enum { RELATION_NUL = 0U };

  enum { RELATION_CONTROLLED_BY = 1U };

  enum { RELATION_FIRST = 1U };

  enum { RELATION_CONTROLLER_FOR = 2U };

  enum { RELATION_LABEL_FOR = 3U };

  enum { RELATION_LABELLED_BY = 4U };

  enum { RELATION_MEMBER_OF = 5U };

  enum { RELATION_NODE_CHILD_OF = 6U };

  enum { RELATION_FLOWS_TO = 7U };

  enum { RELATION_FLOWS_FROM = 8U };

  enum { RELATION_SUBWINDOW_OF = 9U };

  enum { RELATION_EMBEDS = 10U };

  enum { RELATION_EMBEDDED_BY = 11U };

  enum { RELATION_POPUP_FOR = 12U };

  enum { RELATION_PARENT_WINDOW_OF = 13U };

  enum { RELATION_DESCRIBED_BY = 14U };

  enum { RELATION_DESCRIPTION_FOR = 15U };

  enum { RELATION_LAST = 15U };

  enum { RELATION_DEFAULT_BUTTON = 16384U };

  /* readonly attribute unsigned long relationType; */
  NS_SCRIPTABLE NS_IMETHOD GetRelationType(PRUint32 *aRelationType) = 0;

  /* readonly attribute unsigned long targetsCount; */
  NS_SCRIPTABLE NS_IMETHOD GetTargetsCount(PRUint32 *aTargetsCount) = 0;

  /* nsIAccessible getTarget (in unsigned long index); */
  NS_SCRIPTABLE NS_IMETHOD GetTarget(PRUint32 index, nsIAccessible * *_retval NS_OUTPARAM) = 0;

  /* nsIArray getTargets (); */
  NS_SCRIPTABLE NS_IMETHOD GetTargets(nsIArray * *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIAccessibleRelation, NS_IACCESSIBLERELATION_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIACCESSIBLERELATION \
  NS_SCRIPTABLE NS_IMETHOD GetRelationType(PRUint32 *aRelationType); \
  NS_SCRIPTABLE NS_IMETHOD GetTargetsCount(PRUint32 *aTargetsCount); \
  NS_SCRIPTABLE NS_IMETHOD GetTarget(PRUint32 index, nsIAccessible * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetTargets(nsIArray * *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIACCESSIBLERELATION(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetRelationType(PRUint32 *aRelationType) { return _to GetRelationType(aRelationType); } \
  NS_SCRIPTABLE NS_IMETHOD GetTargetsCount(PRUint32 *aTargetsCount) { return _to GetTargetsCount(aTargetsCount); } \
  NS_SCRIPTABLE NS_IMETHOD GetTarget(PRUint32 index, nsIAccessible * *_retval NS_OUTPARAM) { return _to GetTarget(index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetTargets(nsIArray * *_retval NS_OUTPARAM) { return _to GetTargets(_retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIACCESSIBLERELATION(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetRelationType(PRUint32 *aRelationType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRelationType(aRelationType); } \
  NS_SCRIPTABLE NS_IMETHOD GetTargetsCount(PRUint32 *aTargetsCount) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTargetsCount(aTargetsCount); } \
  NS_SCRIPTABLE NS_IMETHOD GetTarget(PRUint32 index, nsIAccessible * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTarget(index, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetTargets(nsIArray * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTargets(_retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsAccessibleRelation : public nsIAccessibleRelation
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIACCESSIBLERELATION

  nsAccessibleRelation();

private:
  ~nsAccessibleRelation();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsAccessibleRelation, nsIAccessibleRelation)

nsAccessibleRelation::nsAccessibleRelation()
{
  /* member initializers and constructor code */
}

nsAccessibleRelation::~nsAccessibleRelation()
{
  /* destructor code */
}

/* readonly attribute unsigned long relationType; */
NS_IMETHODIMP nsAccessibleRelation::GetRelationType(PRUint32 *aRelationType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long targetsCount; */
NS_IMETHODIMP nsAccessibleRelation::GetTargetsCount(PRUint32 *aTargetsCount)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIAccessible getTarget (in unsigned long index); */
NS_IMETHODIMP nsAccessibleRelation::GetTarget(PRUint32 index, nsIAccessible * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIArray getTargets (); */
NS_IMETHODIMP nsAccessibleRelation::GetTargets(nsIArray * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIAccessibleRelation_h__ */
