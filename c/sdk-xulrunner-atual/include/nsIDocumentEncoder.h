/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/content/base/public/nsIDocumentEncoder.idl
 */

#ifndef __gen_nsIDocumentEncoder_h__
#define __gen_nsIDocumentEncoder_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIDOMDocument; /* forward declaration */

class nsIDOMRange; /* forward declaration */

class nsISelection; /* forward declaration */

class nsIDOMNode; /* forward declaration */

class nsIOutputStream; /* forward declaration */

class nsINode;
class nsIDocument;

/* starting interface:    nsIDocumentEncoderNodeFixup */
#define NS_IDOCUMENTENCODERNODEFIXUP_IID_STR "c0da5b87-0ba7-4d7c-8cb3-fcb02af4253d"

#define NS_IDOCUMENTENCODERNODEFIXUP_IID \
  {0xc0da5b87, 0x0ba7, 0x4d7c, \
    { 0x8c, 0xb3, 0xfc, 0xb0, 0x2a, 0xf4, 0x25, 0x3d }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDocumentEncoderNodeFixup : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOCUMENTENCODERNODEFIXUP_IID)

  /* nsIDOMNode fixupNode (in nsIDOMNode aNode, out boolean aSerializeCloneKids); */
  NS_SCRIPTABLE NS_IMETHOD FixupNode(nsIDOMNode *aNode, PRBool *aSerializeCloneKids NS_OUTPARAM, nsIDOMNode * *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDocumentEncoderNodeFixup, NS_IDOCUMENTENCODERNODEFIXUP_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOCUMENTENCODERNODEFIXUP \
  NS_SCRIPTABLE NS_IMETHOD FixupNode(nsIDOMNode *aNode, PRBool *aSerializeCloneKids NS_OUTPARAM, nsIDOMNode * *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOCUMENTENCODERNODEFIXUP(_to) \
  NS_SCRIPTABLE NS_IMETHOD FixupNode(nsIDOMNode *aNode, PRBool *aSerializeCloneKids NS_OUTPARAM, nsIDOMNode * *_retval NS_OUTPARAM) { return _to FixupNode(aNode, aSerializeCloneKids, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOCUMENTENCODERNODEFIXUP(_to) \
  NS_SCRIPTABLE NS_IMETHOD FixupNode(nsIDOMNode *aNode, PRBool *aSerializeCloneKids NS_OUTPARAM, nsIDOMNode * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->FixupNode(aNode, aSerializeCloneKids, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDocumentEncoderNodeFixup : public nsIDocumentEncoderNodeFixup
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOCUMENTENCODERNODEFIXUP

  nsDocumentEncoderNodeFixup();

private:
  ~nsDocumentEncoderNodeFixup();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDocumentEncoderNodeFixup, nsIDocumentEncoderNodeFixup)

nsDocumentEncoderNodeFixup::nsDocumentEncoderNodeFixup()
{
  /* member initializers and constructor code */
}

nsDocumentEncoderNodeFixup::~nsDocumentEncoderNodeFixup()
{
  /* destructor code */
}

/* nsIDOMNode fixupNode (in nsIDOMNode aNode, out boolean aSerializeCloneKids); */
NS_IMETHODIMP nsDocumentEncoderNodeFixup::FixupNode(nsIDOMNode *aNode, PRBool *aSerializeCloneKids NS_OUTPARAM, nsIDOMNode * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIDocumentEncoder */
#define NS_IDOCUMENTENCODER_IID_STR "7222bdf1-c2b9-41f1-a40a-a3d65283a95b"

#define NS_IDOCUMENTENCODER_IID \
  {0x7222bdf1, 0xc2b9, 0x41f1, \
    { 0xa4, 0x0a, 0xa3, 0xd6, 0x52, 0x83, 0xa9, 0x5b }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIDocumentEncoder : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IDOCUMENTENCODER_IID)

  enum { OutputSelectionOnly = 1U };

  enum { OutputFormatted = 2U };

  enum { OutputRaw = 4U };

  enum { OutputBodyOnly = 8U };

  enum { OutputPreformatted = 16U };

  enum { OutputWrap = 32U };

  enum { OutputFormatFlowed = 64U };

  enum { OutputAbsoluteLinks = 128U };

  enum { OutputEncodeW3CEntities = 256U };

  enum { OutputCRLineBreak = 512U };

  enum { OutputLFLineBreak = 1024U };

  enum { OutputNoScriptContent = 2048U };

  enum { OutputNoFramesContent = 4096U };

  enum { OutputNoFormattingInPre = 8192U };

  enum { OutputEncodeBasicEntities = 16384U };

  enum { OutputEncodeLatin1Entities = 32768U };

  enum { OutputEncodeHTMLEntities = 65536U };

  enum { OutputPersistNBSP = 131072U };

  enum { OutputDontRewriteEncodingDeclaration = 262144U };

  enum { SkipInvisibleContent = 524288U };

  enum { OutputFormatDelSp = 1048576U };

  /* void init (in nsIDOMDocument aDocument, in AString aMimeType, in unsigned long aFlags); */
  NS_SCRIPTABLE NS_IMETHOD Init(nsIDOMDocument *aDocument, const nsAString & aMimeType, PRUint32 aFlags) = 0;

  /* [noscript] void nativeInit (in nsIDocumentPtr aDocument, in AString aMimeType, in unsigned long aFlags); */
  NS_IMETHOD NativeInit(nsIDocument *aDocument, const nsAString & aMimeType, PRUint32 aFlags) = 0;

  /* void setSelection (in nsISelection aSelection); */
  NS_SCRIPTABLE NS_IMETHOD SetSelection(nsISelection *aSelection) = 0;

  /* void setRange (in nsIDOMRange aRange); */
  NS_SCRIPTABLE NS_IMETHOD SetRange(nsIDOMRange *aRange) = 0;

  /* void setNode (in nsIDOMNode aNode); */
  NS_SCRIPTABLE NS_IMETHOD SetNode(nsIDOMNode *aNode) = 0;

  /* void setContainerNode (in nsIDOMNode aContainer); */
  NS_SCRIPTABLE NS_IMETHOD SetContainerNode(nsIDOMNode *aContainer) = 0;

  /* [noscript] void setNativeContainerNode (in nsINodePtr aContainer); */
  NS_IMETHOD SetNativeContainerNode(nsINode *aContainer) = 0;

  /* void setCharset (in ACString aCharset); */
  NS_SCRIPTABLE NS_IMETHOD SetCharset(const nsACString & aCharset) = 0;

  /* void setWrapColumn (in unsigned long aWrapColumn); */
  NS_SCRIPTABLE NS_IMETHOD SetWrapColumn(PRUint32 aWrapColumn) = 0;

  /* readonly attribute AString mimeType; */
  NS_SCRIPTABLE NS_IMETHOD GetMimeType(nsAString & aMimeType) = 0;

  /* void encodeToStream (in nsIOutputStream aStream); */
  NS_SCRIPTABLE NS_IMETHOD EncodeToStream(nsIOutputStream *aStream) = 0;

  /* AString encodeToString (); */
  NS_SCRIPTABLE NS_IMETHOD EncodeToString(nsAString & _retval NS_OUTPARAM) = 0;

  /* AString encodeToStringWithContext (out AString aContextString, out AString aInfoString); */
  NS_SCRIPTABLE NS_IMETHOD EncodeToStringWithContext(nsAString & aContextString NS_OUTPARAM, nsAString & aInfoString NS_OUTPARAM, nsAString & _retval NS_OUTPARAM) = 0;

  /* void setNodeFixup (in nsIDocumentEncoderNodeFixup aFixup); */
  NS_SCRIPTABLE NS_IMETHOD SetNodeFixup(nsIDocumentEncoderNodeFixup *aFixup) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIDocumentEncoder, NS_IDOCUMENTENCODER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIDOCUMENTENCODER \
  NS_SCRIPTABLE NS_IMETHOD Init(nsIDOMDocument *aDocument, const nsAString & aMimeType, PRUint32 aFlags); \
  NS_IMETHOD NativeInit(nsIDocument *aDocument, const nsAString & aMimeType, PRUint32 aFlags); \
  NS_SCRIPTABLE NS_IMETHOD SetSelection(nsISelection *aSelection); \
  NS_SCRIPTABLE NS_IMETHOD SetRange(nsIDOMRange *aRange); \
  NS_SCRIPTABLE NS_IMETHOD SetNode(nsIDOMNode *aNode); \
  NS_SCRIPTABLE NS_IMETHOD SetContainerNode(nsIDOMNode *aContainer); \
  NS_IMETHOD SetNativeContainerNode(nsINode *aContainer); \
  NS_SCRIPTABLE NS_IMETHOD SetCharset(const nsACString & aCharset); \
  NS_SCRIPTABLE NS_IMETHOD SetWrapColumn(PRUint32 aWrapColumn); \
  NS_SCRIPTABLE NS_IMETHOD GetMimeType(nsAString & aMimeType); \
  NS_SCRIPTABLE NS_IMETHOD EncodeToStream(nsIOutputStream *aStream); \
  NS_SCRIPTABLE NS_IMETHOD EncodeToString(nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD EncodeToStringWithContext(nsAString & aContextString NS_OUTPARAM, nsAString & aInfoString NS_OUTPARAM, nsAString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetNodeFixup(nsIDocumentEncoderNodeFixup *aFixup); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIDOCUMENTENCODER(_to) \
  NS_SCRIPTABLE NS_IMETHOD Init(nsIDOMDocument *aDocument, const nsAString & aMimeType, PRUint32 aFlags) { return _to Init(aDocument, aMimeType, aFlags); } \
  NS_IMETHOD NativeInit(nsIDocument *aDocument, const nsAString & aMimeType, PRUint32 aFlags) { return _to NativeInit(aDocument, aMimeType, aFlags); } \
  NS_SCRIPTABLE NS_IMETHOD SetSelection(nsISelection *aSelection) { return _to SetSelection(aSelection); } \
  NS_SCRIPTABLE NS_IMETHOD SetRange(nsIDOMRange *aRange) { return _to SetRange(aRange); } \
  NS_SCRIPTABLE NS_IMETHOD SetNode(nsIDOMNode *aNode) { return _to SetNode(aNode); } \
  NS_SCRIPTABLE NS_IMETHOD SetContainerNode(nsIDOMNode *aContainer) { return _to SetContainerNode(aContainer); } \
  NS_IMETHOD SetNativeContainerNode(nsINode *aContainer) { return _to SetNativeContainerNode(aContainer); } \
  NS_SCRIPTABLE NS_IMETHOD SetCharset(const nsACString & aCharset) { return _to SetCharset(aCharset); } \
  NS_SCRIPTABLE NS_IMETHOD SetWrapColumn(PRUint32 aWrapColumn) { return _to SetWrapColumn(aWrapColumn); } \
  NS_SCRIPTABLE NS_IMETHOD GetMimeType(nsAString & aMimeType) { return _to GetMimeType(aMimeType); } \
  NS_SCRIPTABLE NS_IMETHOD EncodeToStream(nsIOutputStream *aStream) { return _to EncodeToStream(aStream); } \
  NS_SCRIPTABLE NS_IMETHOD EncodeToString(nsAString & _retval NS_OUTPARAM) { return _to EncodeToString(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD EncodeToStringWithContext(nsAString & aContextString NS_OUTPARAM, nsAString & aInfoString NS_OUTPARAM, nsAString & _retval NS_OUTPARAM) { return _to EncodeToStringWithContext(aContextString, aInfoString, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetNodeFixup(nsIDocumentEncoderNodeFixup *aFixup) { return _to SetNodeFixup(aFixup); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIDOCUMENTENCODER(_to) \
  NS_SCRIPTABLE NS_IMETHOD Init(nsIDOMDocument *aDocument, const nsAString & aMimeType, PRUint32 aFlags) { return !_to ? NS_ERROR_NULL_POINTER : _to->Init(aDocument, aMimeType, aFlags); } \
  NS_IMETHOD NativeInit(nsIDocument *aDocument, const nsAString & aMimeType, PRUint32 aFlags) { return !_to ? NS_ERROR_NULL_POINTER : _to->NativeInit(aDocument, aMimeType, aFlags); } \
  NS_SCRIPTABLE NS_IMETHOD SetSelection(nsISelection *aSelection) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSelection(aSelection); } \
  NS_SCRIPTABLE NS_IMETHOD SetRange(nsIDOMRange *aRange) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetRange(aRange); } \
  NS_SCRIPTABLE NS_IMETHOD SetNode(nsIDOMNode *aNode) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetNode(aNode); } \
  NS_SCRIPTABLE NS_IMETHOD SetContainerNode(nsIDOMNode *aContainer) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetContainerNode(aContainer); } \
  NS_IMETHOD SetNativeContainerNode(nsINode *aContainer) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetNativeContainerNode(aContainer); } \
  NS_SCRIPTABLE NS_IMETHOD SetCharset(const nsACString & aCharset) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCharset(aCharset); } \
  NS_SCRIPTABLE NS_IMETHOD SetWrapColumn(PRUint32 aWrapColumn) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetWrapColumn(aWrapColumn); } \
  NS_SCRIPTABLE NS_IMETHOD GetMimeType(nsAString & aMimeType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMimeType(aMimeType); } \
  NS_SCRIPTABLE NS_IMETHOD EncodeToStream(nsIOutputStream *aStream) { return !_to ? NS_ERROR_NULL_POINTER : _to->EncodeToStream(aStream); } \
  NS_SCRIPTABLE NS_IMETHOD EncodeToString(nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->EncodeToString(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD EncodeToStringWithContext(nsAString & aContextString NS_OUTPARAM, nsAString & aInfoString NS_OUTPARAM, nsAString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->EncodeToStringWithContext(aContextString, aInfoString, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetNodeFixup(nsIDocumentEncoderNodeFixup *aFixup) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetNodeFixup(aFixup); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsDocumentEncoder : public nsIDocumentEncoder
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIDOCUMENTENCODER

  nsDocumentEncoder();

private:
  ~nsDocumentEncoder();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsDocumentEncoder, nsIDocumentEncoder)

nsDocumentEncoder::nsDocumentEncoder()
{
  /* member initializers and constructor code */
}

nsDocumentEncoder::~nsDocumentEncoder()
{
  /* destructor code */
}

/* void init (in nsIDOMDocument aDocument, in AString aMimeType, in unsigned long aFlags); */
NS_IMETHODIMP nsDocumentEncoder::Init(nsIDOMDocument *aDocument, const nsAString & aMimeType, PRUint32 aFlags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void nativeInit (in nsIDocumentPtr aDocument, in AString aMimeType, in unsigned long aFlags); */
NS_IMETHODIMP nsDocumentEncoder::NativeInit(nsIDocument *aDocument, const nsAString & aMimeType, PRUint32 aFlags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setSelection (in nsISelection aSelection); */
NS_IMETHODIMP nsDocumentEncoder::SetSelection(nsISelection *aSelection)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setRange (in nsIDOMRange aRange); */
NS_IMETHODIMP nsDocumentEncoder::SetRange(nsIDOMRange *aRange)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setNode (in nsIDOMNode aNode); */
NS_IMETHODIMP nsDocumentEncoder::SetNode(nsIDOMNode *aNode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setContainerNode (in nsIDOMNode aContainer); */
NS_IMETHODIMP nsDocumentEncoder::SetContainerNode(nsIDOMNode *aContainer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void setNativeContainerNode (in nsINodePtr aContainer); */
NS_IMETHODIMP nsDocumentEncoder::SetNativeContainerNode(nsINode *aContainer)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setCharset (in ACString aCharset); */
NS_IMETHODIMP nsDocumentEncoder::SetCharset(const nsACString & aCharset)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setWrapColumn (in unsigned long aWrapColumn); */
NS_IMETHODIMP nsDocumentEncoder::SetWrapColumn(PRUint32 aWrapColumn)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString mimeType; */
NS_IMETHODIMP nsDocumentEncoder::GetMimeType(nsAString & aMimeType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void encodeToStream (in nsIOutputStream aStream); */
NS_IMETHODIMP nsDocumentEncoder::EncodeToStream(nsIOutputStream *aStream)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString encodeToString (); */
NS_IMETHODIMP nsDocumentEncoder::EncodeToString(nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* AString encodeToStringWithContext (out AString aContextString, out AString aInfoString); */
NS_IMETHODIMP nsDocumentEncoder::EncodeToStringWithContext(nsAString & aContextString NS_OUTPARAM, nsAString & aInfoString NS_OUTPARAM, nsAString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setNodeFixup (in nsIDocumentEncoderNodeFixup aFixup); */
NS_IMETHODIMP nsDocumentEncoder::SetNodeFixup(nsIDocumentEncoderNodeFixup *aFixup)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIDocumentEncoder_h__ */
