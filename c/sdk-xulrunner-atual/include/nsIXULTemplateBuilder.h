/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/content/xul/templates/public/nsIXULTemplateBuilder.idl
 */

#ifndef __gen_nsIXULTemplateBuilder_h__
#define __gen_nsIXULTemplateBuilder_h__


#ifndef __gen_domstubs_h__
#include "domstubs.h"
#endif

#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIAtom; /* forward declaration */

class nsIContent; /* forward declaration */

class nsIXULBuilderListener; /* forward declaration */

class nsIXULTemplateResult; /* forward declaration */

class nsIXULTemplateRuleFilter; /* forward declaration */

class nsIXULTemplateQueryProcessor; /* forward declaration */

class nsIRDFResource; /* forward declaration */

class nsIRDFCompositeDataSource; /* forward declaration */

class nsIDOMDataTransfer; /* forward declaration */


/* starting interface:    nsIXULTemplateBuilder */
#define NS_IXULTEMPLATEBUILDER_IID_STR "a583b676-5b02-4f9c-a0c9-cb850cb99818"

#define NS_IXULTEMPLATEBUILDER_IID \
  {0xa583b676, 0x5b02, 0x4f9c, \
    { 0xa0, 0xc9, 0xcb, 0x85, 0x0c, 0xb9, 0x98, 0x18 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIXULTemplateBuilder : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IXULTEMPLATEBUILDER_IID)

  /* readonly attribute nsIDOMElement root; */
  NS_SCRIPTABLE NS_IMETHOD GetRoot(nsIDOMElement * *aRoot) = 0;

  /* attribute nsISupports datasource; */
  NS_SCRIPTABLE NS_IMETHOD GetDatasource(nsISupports * *aDatasource) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetDatasource(nsISupports *aDatasource) = 0;

  /* readonly attribute nsIRDFCompositeDataSource database; */
  NS_SCRIPTABLE NS_IMETHOD GetDatabase(nsIRDFCompositeDataSource * *aDatabase) = 0;

  /* readonly attribute nsIXULTemplateResult rootResult; */
  NS_SCRIPTABLE NS_IMETHOD GetRootResult(nsIXULTemplateResult * *aRootResult) = 0;

  /* [noscript] readonly attribute nsIXULTemplateQueryProcessor queryProcessor; */
  NS_IMETHOD GetQueryProcessor(nsIXULTemplateQueryProcessor * *aQueryProcessor) = 0;

  /* void rebuild (); */
  NS_SCRIPTABLE NS_IMETHOD Rebuild(void) = 0;

  /* void refresh (); */
  NS_SCRIPTABLE NS_IMETHOD Refresh(void) = 0;

  /* void addResult (in nsIXULTemplateResult aResult, in nsIDOMNode aQueryNode); */
  NS_SCRIPTABLE NS_IMETHOD AddResult(nsIXULTemplateResult *aResult, nsIDOMNode *aQueryNode) = 0;

  /* void removeResult (in nsIXULTemplateResult aResult); */
  NS_SCRIPTABLE NS_IMETHOD RemoveResult(nsIXULTemplateResult *aResult) = 0;

  /* void replaceResult (in nsIXULTemplateResult aOldResult, in nsIXULTemplateResult aNewResult, in nsIDOMNode aQueryNode); */
  NS_SCRIPTABLE NS_IMETHOD ReplaceResult(nsIXULTemplateResult *aOldResult, nsIXULTemplateResult *aNewResult, nsIDOMNode *aQueryNode) = 0;

  /* void resultBindingChanged (in nsIXULTemplateResult aResult); */
  NS_SCRIPTABLE NS_IMETHOD ResultBindingChanged(nsIXULTemplateResult *aResult) = 0;

  /* nsIXULTemplateResult getResultForId (in AString aId); */
  NS_SCRIPTABLE NS_IMETHOD GetResultForId(const nsAString & aId, nsIXULTemplateResult * *_retval NS_OUTPARAM) = 0;

  /* nsIXULTemplateResult getResultForContent (in nsIDOMElement aElement); */
  NS_SCRIPTABLE NS_IMETHOD GetResultForContent(nsIDOMElement *aElement, nsIXULTemplateResult * *_retval NS_OUTPARAM) = 0;

  /* boolean hasGeneratedContent (in nsIRDFResource aNode, in nsIAtom aTag); */
  NS_SCRIPTABLE NS_IMETHOD HasGeneratedContent(nsIRDFResource *aNode, nsIAtom *aTag, PRBool *_retval NS_OUTPARAM) = 0;

  /* void addRuleFilter (in nsIDOMNode aRule, in nsIXULTemplateRuleFilter aFilter); */
  NS_SCRIPTABLE NS_IMETHOD AddRuleFilter(nsIDOMNode *aRule, nsIXULTemplateRuleFilter *aFilter) = 0;

  /* [noscript] void init (in nsIContent aElement); */
  NS_IMETHOD Init(nsIContent *aElement) = 0;

  /* [noscript] void createContents (in nsIContent aElement, in boolean aForceCreation); */
  NS_IMETHOD CreateContents(nsIContent *aElement, PRBool aForceCreation) = 0;

  /* void addListener (in nsIXULBuilderListener aListener); */
  NS_SCRIPTABLE NS_IMETHOD AddListener(nsIXULBuilderListener *aListener) = 0;

  /* void removeListener (in nsIXULBuilderListener aListener); */
  NS_SCRIPTABLE NS_IMETHOD RemoveListener(nsIXULBuilderListener *aListener) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIXULTemplateBuilder, NS_IXULTEMPLATEBUILDER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIXULTEMPLATEBUILDER \
  NS_SCRIPTABLE NS_IMETHOD GetRoot(nsIDOMElement * *aRoot); \
  NS_SCRIPTABLE NS_IMETHOD GetDatasource(nsISupports * *aDatasource); \
  NS_SCRIPTABLE NS_IMETHOD SetDatasource(nsISupports *aDatasource); \
  NS_SCRIPTABLE NS_IMETHOD GetDatabase(nsIRDFCompositeDataSource * *aDatabase); \
  NS_SCRIPTABLE NS_IMETHOD GetRootResult(nsIXULTemplateResult * *aRootResult); \
  NS_IMETHOD GetQueryProcessor(nsIXULTemplateQueryProcessor * *aQueryProcessor); \
  NS_SCRIPTABLE NS_IMETHOD Rebuild(void); \
  NS_SCRIPTABLE NS_IMETHOD Refresh(void); \
  NS_SCRIPTABLE NS_IMETHOD AddResult(nsIXULTemplateResult *aResult, nsIDOMNode *aQueryNode); \
  NS_SCRIPTABLE NS_IMETHOD RemoveResult(nsIXULTemplateResult *aResult); \
  NS_SCRIPTABLE NS_IMETHOD ReplaceResult(nsIXULTemplateResult *aOldResult, nsIXULTemplateResult *aNewResult, nsIDOMNode *aQueryNode); \
  NS_SCRIPTABLE NS_IMETHOD ResultBindingChanged(nsIXULTemplateResult *aResult); \
  NS_SCRIPTABLE NS_IMETHOD GetResultForId(const nsAString & aId, nsIXULTemplateResult * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetResultForContent(nsIDOMElement *aElement, nsIXULTemplateResult * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD HasGeneratedContent(nsIRDFResource *aNode, nsIAtom *aTag, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD AddRuleFilter(nsIDOMNode *aRule, nsIXULTemplateRuleFilter *aFilter); \
  NS_IMETHOD Init(nsIContent *aElement); \
  NS_IMETHOD CreateContents(nsIContent *aElement, PRBool aForceCreation); \
  NS_SCRIPTABLE NS_IMETHOD AddListener(nsIXULBuilderListener *aListener); \
  NS_SCRIPTABLE NS_IMETHOD RemoveListener(nsIXULBuilderListener *aListener); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIXULTEMPLATEBUILDER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetRoot(nsIDOMElement * *aRoot) { return _to GetRoot(aRoot); } \
  NS_SCRIPTABLE NS_IMETHOD GetDatasource(nsISupports * *aDatasource) { return _to GetDatasource(aDatasource); } \
  NS_SCRIPTABLE NS_IMETHOD SetDatasource(nsISupports *aDatasource) { return _to SetDatasource(aDatasource); } \
  NS_SCRIPTABLE NS_IMETHOD GetDatabase(nsIRDFCompositeDataSource * *aDatabase) { return _to GetDatabase(aDatabase); } \
  NS_SCRIPTABLE NS_IMETHOD GetRootResult(nsIXULTemplateResult * *aRootResult) { return _to GetRootResult(aRootResult); } \
  NS_IMETHOD GetQueryProcessor(nsIXULTemplateQueryProcessor * *aQueryProcessor) { return _to GetQueryProcessor(aQueryProcessor); } \
  NS_SCRIPTABLE NS_IMETHOD Rebuild(void) { return _to Rebuild(); } \
  NS_SCRIPTABLE NS_IMETHOD Refresh(void) { return _to Refresh(); } \
  NS_SCRIPTABLE NS_IMETHOD AddResult(nsIXULTemplateResult *aResult, nsIDOMNode *aQueryNode) { return _to AddResult(aResult, aQueryNode); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveResult(nsIXULTemplateResult *aResult) { return _to RemoveResult(aResult); } \
  NS_SCRIPTABLE NS_IMETHOD ReplaceResult(nsIXULTemplateResult *aOldResult, nsIXULTemplateResult *aNewResult, nsIDOMNode *aQueryNode) { return _to ReplaceResult(aOldResult, aNewResult, aQueryNode); } \
  NS_SCRIPTABLE NS_IMETHOD ResultBindingChanged(nsIXULTemplateResult *aResult) { return _to ResultBindingChanged(aResult); } \
  NS_SCRIPTABLE NS_IMETHOD GetResultForId(const nsAString & aId, nsIXULTemplateResult * *_retval NS_OUTPARAM) { return _to GetResultForId(aId, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetResultForContent(nsIDOMElement *aElement, nsIXULTemplateResult * *_retval NS_OUTPARAM) { return _to GetResultForContent(aElement, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD HasGeneratedContent(nsIRDFResource *aNode, nsIAtom *aTag, PRBool *_retval NS_OUTPARAM) { return _to HasGeneratedContent(aNode, aTag, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AddRuleFilter(nsIDOMNode *aRule, nsIXULTemplateRuleFilter *aFilter) { return _to AddRuleFilter(aRule, aFilter); } \
  NS_IMETHOD Init(nsIContent *aElement) { return _to Init(aElement); } \
  NS_IMETHOD CreateContents(nsIContent *aElement, PRBool aForceCreation) { return _to CreateContents(aElement, aForceCreation); } \
  NS_SCRIPTABLE NS_IMETHOD AddListener(nsIXULBuilderListener *aListener) { return _to AddListener(aListener); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveListener(nsIXULBuilderListener *aListener) { return _to RemoveListener(aListener); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIXULTEMPLATEBUILDER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetRoot(nsIDOMElement * *aRoot) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRoot(aRoot); } \
  NS_SCRIPTABLE NS_IMETHOD GetDatasource(nsISupports * *aDatasource) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDatasource(aDatasource); } \
  NS_SCRIPTABLE NS_IMETHOD SetDatasource(nsISupports *aDatasource) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDatasource(aDatasource); } \
  NS_SCRIPTABLE NS_IMETHOD GetDatabase(nsIRDFCompositeDataSource * *aDatabase) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDatabase(aDatabase); } \
  NS_SCRIPTABLE NS_IMETHOD GetRootResult(nsIXULTemplateResult * *aRootResult) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRootResult(aRootResult); } \
  NS_IMETHOD GetQueryProcessor(nsIXULTemplateQueryProcessor * *aQueryProcessor) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetQueryProcessor(aQueryProcessor); } \
  NS_SCRIPTABLE NS_IMETHOD Rebuild(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Rebuild(); } \
  NS_SCRIPTABLE NS_IMETHOD Refresh(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Refresh(); } \
  NS_SCRIPTABLE NS_IMETHOD AddResult(nsIXULTemplateResult *aResult, nsIDOMNode *aQueryNode) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddResult(aResult, aQueryNode); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveResult(nsIXULTemplateResult *aResult) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveResult(aResult); } \
  NS_SCRIPTABLE NS_IMETHOD ReplaceResult(nsIXULTemplateResult *aOldResult, nsIXULTemplateResult *aNewResult, nsIDOMNode *aQueryNode) { return !_to ? NS_ERROR_NULL_POINTER : _to->ReplaceResult(aOldResult, aNewResult, aQueryNode); } \
  NS_SCRIPTABLE NS_IMETHOD ResultBindingChanged(nsIXULTemplateResult *aResult) { return !_to ? NS_ERROR_NULL_POINTER : _to->ResultBindingChanged(aResult); } \
  NS_SCRIPTABLE NS_IMETHOD GetResultForId(const nsAString & aId, nsIXULTemplateResult * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResultForId(aId, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetResultForContent(nsIDOMElement *aElement, nsIXULTemplateResult * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResultForContent(aElement, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD HasGeneratedContent(nsIRDFResource *aNode, nsIAtom *aTag, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->HasGeneratedContent(aNode, aTag, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AddRuleFilter(nsIDOMNode *aRule, nsIXULTemplateRuleFilter *aFilter) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddRuleFilter(aRule, aFilter); } \
  NS_IMETHOD Init(nsIContent *aElement) { return !_to ? NS_ERROR_NULL_POINTER : _to->Init(aElement); } \
  NS_IMETHOD CreateContents(nsIContent *aElement, PRBool aForceCreation) { return !_to ? NS_ERROR_NULL_POINTER : _to->CreateContents(aElement, aForceCreation); } \
  NS_SCRIPTABLE NS_IMETHOD AddListener(nsIXULBuilderListener *aListener) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddListener(aListener); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveListener(nsIXULBuilderListener *aListener) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveListener(aListener); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsXULTemplateBuilder : public nsIXULTemplateBuilder
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIXULTEMPLATEBUILDER

  nsXULTemplateBuilder();

private:
  ~nsXULTemplateBuilder();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsXULTemplateBuilder, nsIXULTemplateBuilder)

nsXULTemplateBuilder::nsXULTemplateBuilder()
{
  /* member initializers and constructor code */
}

nsXULTemplateBuilder::~nsXULTemplateBuilder()
{
  /* destructor code */
}

/* readonly attribute nsIDOMElement root; */
NS_IMETHODIMP nsXULTemplateBuilder::GetRoot(nsIDOMElement * *aRoot)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsISupports datasource; */
NS_IMETHODIMP nsXULTemplateBuilder::GetDatasource(nsISupports * *aDatasource)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsXULTemplateBuilder::SetDatasource(nsISupports *aDatasource)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIRDFCompositeDataSource database; */
NS_IMETHODIMP nsXULTemplateBuilder::GetDatabase(nsIRDFCompositeDataSource * *aDatabase)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIXULTemplateResult rootResult; */
NS_IMETHODIMP nsXULTemplateBuilder::GetRootResult(nsIXULTemplateResult * *aRootResult)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] readonly attribute nsIXULTemplateQueryProcessor queryProcessor; */
NS_IMETHODIMP nsXULTemplateBuilder::GetQueryProcessor(nsIXULTemplateQueryProcessor * *aQueryProcessor)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void rebuild (); */
NS_IMETHODIMP nsXULTemplateBuilder::Rebuild()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void refresh (); */
NS_IMETHODIMP nsXULTemplateBuilder::Refresh()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addResult (in nsIXULTemplateResult aResult, in nsIDOMNode aQueryNode); */
NS_IMETHODIMP nsXULTemplateBuilder::AddResult(nsIXULTemplateResult *aResult, nsIDOMNode *aQueryNode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeResult (in nsIXULTemplateResult aResult); */
NS_IMETHODIMP nsXULTemplateBuilder::RemoveResult(nsIXULTemplateResult *aResult)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void replaceResult (in nsIXULTemplateResult aOldResult, in nsIXULTemplateResult aNewResult, in nsIDOMNode aQueryNode); */
NS_IMETHODIMP nsXULTemplateBuilder::ReplaceResult(nsIXULTemplateResult *aOldResult, nsIXULTemplateResult *aNewResult, nsIDOMNode *aQueryNode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void resultBindingChanged (in nsIXULTemplateResult aResult); */
NS_IMETHODIMP nsXULTemplateBuilder::ResultBindingChanged(nsIXULTemplateResult *aResult)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIXULTemplateResult getResultForId (in AString aId); */
NS_IMETHODIMP nsXULTemplateBuilder::GetResultForId(const nsAString & aId, nsIXULTemplateResult * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIXULTemplateResult getResultForContent (in nsIDOMElement aElement); */
NS_IMETHODIMP nsXULTemplateBuilder::GetResultForContent(nsIDOMElement *aElement, nsIXULTemplateResult * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean hasGeneratedContent (in nsIRDFResource aNode, in nsIAtom aTag); */
NS_IMETHODIMP nsXULTemplateBuilder::HasGeneratedContent(nsIRDFResource *aNode, nsIAtom *aTag, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addRuleFilter (in nsIDOMNode aRule, in nsIXULTemplateRuleFilter aFilter); */
NS_IMETHODIMP nsXULTemplateBuilder::AddRuleFilter(nsIDOMNode *aRule, nsIXULTemplateRuleFilter *aFilter)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void init (in nsIContent aElement); */
NS_IMETHODIMP nsXULTemplateBuilder::Init(nsIContent *aElement)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void createContents (in nsIContent aElement, in boolean aForceCreation); */
NS_IMETHODIMP nsXULTemplateBuilder::CreateContents(nsIContent *aElement, PRBool aForceCreation)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addListener (in nsIXULBuilderListener aListener); */
NS_IMETHODIMP nsXULTemplateBuilder::AddListener(nsIXULBuilderListener *aListener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeListener (in nsIXULBuilderListener aListener); */
NS_IMETHODIMP nsXULTemplateBuilder::RemoveListener(nsIXULBuilderListener *aListener)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIXULTreeBuilderObserver */
#define NS_IXULTREEBUILDEROBSERVER_IID_STR "57ced9a7-ec0b-4a0e-8aeb-5da32ebe951c"

#define NS_IXULTREEBUILDEROBSERVER_IID \
  {0x57ced9a7, 0xec0b, 0x4a0e, \
    { 0x8a, 0xeb, 0x5d, 0xa3, 0x2e, 0xbe, 0x95, 0x1c }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIXULTreeBuilderObserver : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IXULTREEBUILDEROBSERVER_IID)

  enum { DROP_BEFORE = -1 };

  enum { DROP_ON = 0 };

  enum { DROP_AFTER = 1 };

  /* boolean canDrop (in long index, in long orientation, in nsIDOMDataTransfer dataTransfer); */
  NS_SCRIPTABLE NS_IMETHOD CanDrop(PRInt32 index, PRInt32 orientation, nsIDOMDataTransfer *dataTransfer, PRBool *_retval NS_OUTPARAM) = 0;

  /* void onDrop (in long row, in long orientation, in nsIDOMDataTransfer dataTransfer); */
  NS_SCRIPTABLE NS_IMETHOD OnDrop(PRInt32 row, PRInt32 orientation, nsIDOMDataTransfer *dataTransfer) = 0;

  /* void onToggleOpenState (in long index); */
  NS_SCRIPTABLE NS_IMETHOD OnToggleOpenState(PRInt32 index) = 0;

  /* void onCycleHeader (in wstring colID, in nsIDOMElement elt); */
  NS_SCRIPTABLE NS_IMETHOD OnCycleHeader(const PRUnichar * colID, nsIDOMElement *elt) = 0;

  /* void onCycleCell (in long row, in wstring colID); */
  NS_SCRIPTABLE NS_IMETHOD OnCycleCell(PRInt32 row, const PRUnichar * colID) = 0;

  /* void onSelectionChanged (); */
  NS_SCRIPTABLE NS_IMETHOD OnSelectionChanged(void) = 0;

  /* void onPerformAction (in wstring action); */
  NS_SCRIPTABLE NS_IMETHOD OnPerformAction(const PRUnichar * action) = 0;

  /* void onPerformActionOnRow (in wstring action, in long row); */
  NS_SCRIPTABLE NS_IMETHOD OnPerformActionOnRow(const PRUnichar * action, PRInt32 row) = 0;

  /* void onPerformActionOnCell (in wstring action, in long row, in wstring colID); */
  NS_SCRIPTABLE NS_IMETHOD OnPerformActionOnCell(const PRUnichar * action, PRInt32 row, const PRUnichar * colID) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIXULTreeBuilderObserver, NS_IXULTREEBUILDEROBSERVER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIXULTREEBUILDEROBSERVER \
  NS_SCRIPTABLE NS_IMETHOD CanDrop(PRInt32 index, PRInt32 orientation, nsIDOMDataTransfer *dataTransfer, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD OnDrop(PRInt32 row, PRInt32 orientation, nsIDOMDataTransfer *dataTransfer); \
  NS_SCRIPTABLE NS_IMETHOD OnToggleOpenState(PRInt32 index); \
  NS_SCRIPTABLE NS_IMETHOD OnCycleHeader(const PRUnichar * colID, nsIDOMElement *elt); \
  NS_SCRIPTABLE NS_IMETHOD OnCycleCell(PRInt32 row, const PRUnichar * colID); \
  NS_SCRIPTABLE NS_IMETHOD OnSelectionChanged(void); \
  NS_SCRIPTABLE NS_IMETHOD OnPerformAction(const PRUnichar * action); \
  NS_SCRIPTABLE NS_IMETHOD OnPerformActionOnRow(const PRUnichar * action, PRInt32 row); \
  NS_SCRIPTABLE NS_IMETHOD OnPerformActionOnCell(const PRUnichar * action, PRInt32 row, const PRUnichar * colID); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIXULTREEBUILDEROBSERVER(_to) \
  NS_SCRIPTABLE NS_IMETHOD CanDrop(PRInt32 index, PRInt32 orientation, nsIDOMDataTransfer *dataTransfer, PRBool *_retval NS_OUTPARAM) { return _to CanDrop(index, orientation, dataTransfer, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD OnDrop(PRInt32 row, PRInt32 orientation, nsIDOMDataTransfer *dataTransfer) { return _to OnDrop(row, orientation, dataTransfer); } \
  NS_SCRIPTABLE NS_IMETHOD OnToggleOpenState(PRInt32 index) { return _to OnToggleOpenState(index); } \
  NS_SCRIPTABLE NS_IMETHOD OnCycleHeader(const PRUnichar * colID, nsIDOMElement *elt) { return _to OnCycleHeader(colID, elt); } \
  NS_SCRIPTABLE NS_IMETHOD OnCycleCell(PRInt32 row, const PRUnichar * colID) { return _to OnCycleCell(row, colID); } \
  NS_SCRIPTABLE NS_IMETHOD OnSelectionChanged(void) { return _to OnSelectionChanged(); } \
  NS_SCRIPTABLE NS_IMETHOD OnPerformAction(const PRUnichar * action) { return _to OnPerformAction(action); } \
  NS_SCRIPTABLE NS_IMETHOD OnPerformActionOnRow(const PRUnichar * action, PRInt32 row) { return _to OnPerformActionOnRow(action, row); } \
  NS_SCRIPTABLE NS_IMETHOD OnPerformActionOnCell(const PRUnichar * action, PRInt32 row, const PRUnichar * colID) { return _to OnPerformActionOnCell(action, row, colID); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIXULTREEBUILDEROBSERVER(_to) \
  NS_SCRIPTABLE NS_IMETHOD CanDrop(PRInt32 index, PRInt32 orientation, nsIDOMDataTransfer *dataTransfer, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->CanDrop(index, orientation, dataTransfer, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD OnDrop(PRInt32 row, PRInt32 orientation, nsIDOMDataTransfer *dataTransfer) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnDrop(row, orientation, dataTransfer); } \
  NS_SCRIPTABLE NS_IMETHOD OnToggleOpenState(PRInt32 index) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnToggleOpenState(index); } \
  NS_SCRIPTABLE NS_IMETHOD OnCycleHeader(const PRUnichar * colID, nsIDOMElement *elt) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnCycleHeader(colID, elt); } \
  NS_SCRIPTABLE NS_IMETHOD OnCycleCell(PRInt32 row, const PRUnichar * colID) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnCycleCell(row, colID); } \
  NS_SCRIPTABLE NS_IMETHOD OnSelectionChanged(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnSelectionChanged(); } \
  NS_SCRIPTABLE NS_IMETHOD OnPerformAction(const PRUnichar * action) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnPerformAction(action); } \
  NS_SCRIPTABLE NS_IMETHOD OnPerformActionOnRow(const PRUnichar * action, PRInt32 row) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnPerformActionOnRow(action, row); } \
  NS_SCRIPTABLE NS_IMETHOD OnPerformActionOnCell(const PRUnichar * action, PRInt32 row, const PRUnichar * colID) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnPerformActionOnCell(action, row, colID); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsXULTreeBuilderObserver : public nsIXULTreeBuilderObserver
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIXULTREEBUILDEROBSERVER

  nsXULTreeBuilderObserver();

private:
  ~nsXULTreeBuilderObserver();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsXULTreeBuilderObserver, nsIXULTreeBuilderObserver)

nsXULTreeBuilderObserver::nsXULTreeBuilderObserver()
{
  /* member initializers and constructor code */
}

nsXULTreeBuilderObserver::~nsXULTreeBuilderObserver()
{
  /* destructor code */
}

/* boolean canDrop (in long index, in long orientation, in nsIDOMDataTransfer dataTransfer); */
NS_IMETHODIMP nsXULTreeBuilderObserver::CanDrop(PRInt32 index, PRInt32 orientation, nsIDOMDataTransfer *dataTransfer, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onDrop (in long row, in long orientation, in nsIDOMDataTransfer dataTransfer); */
NS_IMETHODIMP nsXULTreeBuilderObserver::OnDrop(PRInt32 row, PRInt32 orientation, nsIDOMDataTransfer *dataTransfer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onToggleOpenState (in long index); */
NS_IMETHODIMP nsXULTreeBuilderObserver::OnToggleOpenState(PRInt32 index)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onCycleHeader (in wstring colID, in nsIDOMElement elt); */
NS_IMETHODIMP nsXULTreeBuilderObserver::OnCycleHeader(const PRUnichar * colID, nsIDOMElement *elt)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onCycleCell (in long row, in wstring colID); */
NS_IMETHODIMP nsXULTreeBuilderObserver::OnCycleCell(PRInt32 row, const PRUnichar * colID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onSelectionChanged (); */
NS_IMETHODIMP nsXULTreeBuilderObserver::OnSelectionChanged()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onPerformAction (in wstring action); */
NS_IMETHODIMP nsXULTreeBuilderObserver::OnPerformAction(const PRUnichar * action)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onPerformActionOnRow (in wstring action, in long row); */
NS_IMETHODIMP nsXULTreeBuilderObserver::OnPerformActionOnRow(const PRUnichar * action, PRInt32 row)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onPerformActionOnCell (in wstring action, in long row, in wstring colID); */
NS_IMETHODIMP nsXULTreeBuilderObserver::OnPerformActionOnCell(const PRUnichar * action, PRInt32 row, const PRUnichar * colID)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIXULTreeBuilder */
#define NS_IXULTREEBUILDER_IID_STR "06b31b15-ebf5-4e74-a0e2-6bc0a18a3969"

#define NS_IXULTREEBUILDER_IID \
  {0x06b31b15, 0xebf5, 0x4e74, \
    { 0xa0, 0xe2, 0x6b, 0xc0, 0xa1, 0x8a, 0x39, 0x69 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIXULTreeBuilder : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IXULTREEBUILDER_IID)

  /* nsIRDFResource getResourceAtIndex (in long aRowIndex); */
  NS_SCRIPTABLE NS_IMETHOD GetResourceAtIndex(PRInt32 aRowIndex, nsIRDFResource * *_retval NS_OUTPARAM) = 0;

  /* long getIndexOfResource (in nsIRDFResource resource); */
  NS_SCRIPTABLE NS_IMETHOD GetIndexOfResource(nsIRDFResource *resource, PRInt32 *_retval NS_OUTPARAM) = 0;

  /* void addObserver (in nsIXULTreeBuilderObserver aObserver); */
  NS_SCRIPTABLE NS_IMETHOD AddObserver(nsIXULTreeBuilderObserver *aObserver) = 0;

  /* void removeObserver (in nsIXULTreeBuilderObserver aObserver); */
  NS_SCRIPTABLE NS_IMETHOD RemoveObserver(nsIXULTreeBuilderObserver *aObserver) = 0;

  /* void sort (in nsIDOMElement aColumnElement); */
  NS_SCRIPTABLE NS_IMETHOD Sort(nsIDOMElement *aColumnElement) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIXULTreeBuilder, NS_IXULTREEBUILDER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIXULTREEBUILDER \
  NS_SCRIPTABLE NS_IMETHOD GetResourceAtIndex(PRInt32 aRowIndex, nsIRDFResource * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetIndexOfResource(nsIRDFResource *resource, PRInt32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD AddObserver(nsIXULTreeBuilderObserver *aObserver); \
  NS_SCRIPTABLE NS_IMETHOD RemoveObserver(nsIXULTreeBuilderObserver *aObserver); \
  NS_SCRIPTABLE NS_IMETHOD Sort(nsIDOMElement *aColumnElement); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIXULTREEBUILDER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetResourceAtIndex(PRInt32 aRowIndex, nsIRDFResource * *_retval NS_OUTPARAM) { return _to GetResourceAtIndex(aRowIndex, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetIndexOfResource(nsIRDFResource *resource, PRInt32 *_retval NS_OUTPARAM) { return _to GetIndexOfResource(resource, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AddObserver(nsIXULTreeBuilderObserver *aObserver) { return _to AddObserver(aObserver); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveObserver(nsIXULTreeBuilderObserver *aObserver) { return _to RemoveObserver(aObserver); } \
  NS_SCRIPTABLE NS_IMETHOD Sort(nsIDOMElement *aColumnElement) { return _to Sort(aColumnElement); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIXULTREEBUILDER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetResourceAtIndex(PRInt32 aRowIndex, nsIRDFResource * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetResourceAtIndex(aRowIndex, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetIndexOfResource(nsIRDFResource *resource, PRInt32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIndexOfResource(resource, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD AddObserver(nsIXULTreeBuilderObserver *aObserver) { return !_to ? NS_ERROR_NULL_POINTER : _to->AddObserver(aObserver); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveObserver(nsIXULTreeBuilderObserver *aObserver) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveObserver(aObserver); } \
  NS_SCRIPTABLE NS_IMETHOD Sort(nsIDOMElement *aColumnElement) { return !_to ? NS_ERROR_NULL_POINTER : _to->Sort(aColumnElement); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsXULTreeBuilder : public nsIXULTreeBuilder
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIXULTREEBUILDER

  nsXULTreeBuilder();

private:
  ~nsXULTreeBuilder();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsXULTreeBuilder, nsIXULTreeBuilder)

nsXULTreeBuilder::nsXULTreeBuilder()
{
  /* member initializers and constructor code */
}

nsXULTreeBuilder::~nsXULTreeBuilder()
{
  /* destructor code */
}

/* nsIRDFResource getResourceAtIndex (in long aRowIndex); */
NS_IMETHODIMP nsXULTreeBuilder::GetResourceAtIndex(PRInt32 aRowIndex, nsIRDFResource * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* long getIndexOfResource (in nsIRDFResource resource); */
NS_IMETHODIMP nsXULTreeBuilder::GetIndexOfResource(nsIRDFResource *resource, PRInt32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void addObserver (in nsIXULTreeBuilderObserver aObserver); */
NS_IMETHODIMP nsXULTreeBuilder::AddObserver(nsIXULTreeBuilderObserver *aObserver)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeObserver (in nsIXULTreeBuilderObserver aObserver); */
NS_IMETHODIMP nsXULTreeBuilder::RemoveObserver(nsIXULTreeBuilderObserver *aObserver)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void sort (in nsIDOMElement aColumnElement); */
NS_IMETHODIMP nsXULTreeBuilder::Sort(nsIDOMElement *aColumnElement)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIXULTemplateBuilder_h__ */
