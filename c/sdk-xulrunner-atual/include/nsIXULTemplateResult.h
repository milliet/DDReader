/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/content/xul/templates/public/nsIXULTemplateResult.idl
 */

#ifndef __gen_nsIXULTemplateResult_h__
#define __gen_nsIXULTemplateResult_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIAtom; /* forward declaration */

class nsIDOMNode; /* forward declaration */

class nsIRDFResource; /* forward declaration */


/* starting interface:    nsIXULTemplateResult */
#define NS_IXULTEMPLATERESULT_IID_STR "ebea0230-36fa-41b7-8e31-760806057965"

#define NS_IXULTEMPLATERESULT_IID \
  {0xebea0230, 0x36fa, 0x41b7, \
    { 0x8e, 0x31, 0x76, 0x08, 0x06, 0x05, 0x79, 0x65 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIXULTemplateResult : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IXULTEMPLATERESULT_IID)

  /* readonly attribute boolean isContainer; */
  NS_SCRIPTABLE NS_IMETHOD GetIsContainer(PRBool *aIsContainer) = 0;

  /* readonly attribute boolean isEmpty; */
  NS_SCRIPTABLE NS_IMETHOD GetIsEmpty(PRBool *aIsEmpty) = 0;

  /* readonly attribute boolean mayProcessChildren; */
  NS_SCRIPTABLE NS_IMETHOD GetMayProcessChildren(PRBool *aMayProcessChildren) = 0;

  /* readonly attribute AString id; */
  NS_SCRIPTABLE NS_IMETHOD GetId(nsAString & aId) = 0;

  /* readonly attribute nsIRDFResource resource; */
  NS_SCRIPTABLE NS_IMETHOD GetResource(nsIRDFResource * *aResource) = 0;

  /* readonly attribute AString type; */
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType) = 0;

  /* AString getBindingFor (in nsIAtom aVar); */
  NS_SCRIPTABLE NS_IMETHOD GetBindingFor(nsIAtom *aVar, nsAString & _retval NS_OUTPARAM) = 0;

  /* nsISupports getBindingObjectFor (in nsIAtom aVar); */
  NS_SCRIPTABLE NS_IMETHOD GetBindingObjectFor(nsIAtom *aVar, nsISupports * *_retval NS_OUTPARAM) = 0;

  /* void ruleMatched (in nsISupports aQuery, in nsIDOMNode aRuleNode); */
  NS_SCRIPTABLE NS_IMETHOD RuleMatched(nsISupports *aQuery, nsIDOMNode *aRuleNode) = 0;

  /* void hasBeenRemoved (); */
  NS_SCRIPTABLE NS_IMETHOD HasBeenRemoved(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIXULTemplateResult, NS_IXULTEMPLATERESULT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIXULTEMPLATERESULT \
  NS_SCRIPTABLE NS_IMETHOD GetIsContainer(PRBool *aIsContainer); \
  NS_SCRIPTABLE NS_IMETHOD GetIsEmpty(PRBool *aIsEmpty); \
  NS_SCRIPTABLE NS_IMETHOD GetMayProcessChildren(PRBool *aMayProcessChildren); \
  NS_SCRIPTABLE NS_IMETHOD GetId(nsAString & aId); \
  NS_SCRIPTABLE NS_IMETHOD GetResource(nsIRDFResource * *aResource); \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType); \
  NS_SCRIPTABLE NS_IMETHOD GetBindingFor(nsIAtom *aVar, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetBindingObjectFor(nsIAtom *aVar, nsISupports * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD RuleMatched(nsISupports *aQuery, nsIDOMNode *aRuleNode); \
  NS_SCRIPTABLE NS_IMETHOD HasBeenRemoved(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIXULTEMPLATERESULT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetIsContainer(PRBool *aIsContainer) { return _to GetIsContainer(aIsContainer); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsEmpty(PRBool *aIsEmpty) { return _to GetIsEmpty(aIsEmpty); } \
  NS_SCRIPTABLE NS_IMETHOD GetMayProcessChildren(PRBool *aMayProcessChildren) { return _to GetMayProcessChildren(aMayProcessChildren); } \
  NS_SCRIPTABLE NS_IMETHOD GetId(nsAString & aId) { return _to GetId(aId); } \
  NS_SCRIPTABLE NS_IMETHOD GetResource(nsIRDFResource * *aResource) { return _to GetResource(aResource); } \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType) { return _to GetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD GetBindingFor(nsIAtom *aVar, nsAString & _retval NS_OUTPARAM) { return _to GetBindingFor(aVar, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetBindingObjectFor(nsIAtom *aVar, nsISupports * *_retval NS_OUTPARAM) { return _to GetBindingObjectFor(aVar, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RuleMatched(nsISupports *aQuery, nsIDOMNode *aRuleNode) { return _to RuleMatched(aQuery, aRuleNode); } \
  NS_SCRIPTABLE NS_IMETHOD HasBeenRemoved(void) { return _to HasBeenRemoved(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIXULTEMPLATERESULT(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetIsContainer(PRBool *aIsContainer) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsContainer(aIsContainer); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsEmpty(PRBool *aIsEmpty) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsEmpty(aIsEmpty); } \
  NS_SCRIPTABLE NS_IMETHOD GetMayProcessChildren(PRBool *aMayProcessChildren) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMayProcessChildren(aMayProcessChildren); } \
  NS_SCRIPTABLE NS_IMETHOD GetId(nsAString & aId) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetId(aId); } \
  NS_SCRIPTABLE NS_IMETHOD GetResource(nsIRDFResource * *aResource) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResource(aResource); } \
  NS_SCRIPTABLE NS_IMETHOD GetType(nsAString & aType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetType(aType); } \
  NS_SCRIPTABLE NS_IMETHOD GetBindingFor(nsIAtom *aVar, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBindingFor(aVar, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetBindingObjectFor(nsIAtom *aVar, nsISupports * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBindingObjectFor(aVar, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD RuleMatched(nsISupports *aQuery, nsIDOMNode *aRuleNode) { return !_to ? NS_ERROR_NULL_POINTER : _to->RuleMatched(aQuery, aRuleNode); } \
  NS_SCRIPTABLE NS_IMETHOD HasBeenRemoved(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->HasBeenRemoved(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsXULTemplateResult : public nsIXULTemplateResult
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIXULTEMPLATERESULT

  nsXULTemplateResult();

private:
  ~nsXULTemplateResult();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsXULTemplateResult, nsIXULTemplateResult)

nsXULTemplateResult::nsXULTemplateResult()
{
  /* member initializers and constructor code */
}

nsXULTemplateResult::~nsXULTemplateResult()
{
  /* destructor code */
}

/* readonly attribute boolean isContainer; */
NS_IMETHODIMP nsXULTemplateResult::GetIsContainer(PRBool *aIsContainer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean isEmpty; */
NS_IMETHODIMP nsXULTemplateResult::GetIsEmpty(PRBool *aIsEmpty)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean mayProcessChildren; */
NS_IMETHODIMP nsXULTemplateResult::GetMayProcessChildren(PRBool *aMayProcessChildren)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString id; */
NS_IMETHODIMP nsXULTemplateResult::GetId(nsAString & aId)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIRDFResource resource; */
NS_IMETHODIMP nsXULTemplateResult::GetResource(nsIRDFResource * *aResource)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString type; */
NS_IMETHODIMP nsXULTemplateResult::GetType(nsAString & aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString getBindingFor (in nsIAtom aVar); */
NS_IMETHODIMP nsXULTemplateResult::GetBindingFor(nsIAtom *aVar, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsISupports getBindingObjectFor (in nsIAtom aVar); */
NS_IMETHODIMP nsXULTemplateResult::GetBindingObjectFor(nsIAtom *aVar, nsISupports * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void ruleMatched (in nsISupports aQuery, in nsIDOMNode aRuleNode); */
NS_IMETHODIMP nsXULTemplateResult::RuleMatched(nsISupports *aQuery, nsIDOMNode *aRuleNode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void hasBeenRemoved (); */
NS_IMETHODIMP nsXULTemplateResult::HasBeenRemoved()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIXULTemplateResult_h__ */
