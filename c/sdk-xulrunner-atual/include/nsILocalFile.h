/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/xpcom/io/nsILocalFile.idl
 */

#ifndef __gen_nsILocalFile_h__
#define __gen_nsILocalFile_h__


#ifndef __gen_nsIFile_h__
#include "nsIFile.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
#include "prio.h"
#include "prlink.h"
#include <stdio.h>

/* starting interface:    nsILocalFile */
#define NS_ILOCALFILE_IID_STR "aa610f20-a889-11d3-8c81-000064657374"

#define NS_ILOCALFILE_IID \
  {0xaa610f20, 0xa889, 0x11d3, \
    { 0x8c, 0x81, 0x00, 0x00, 0x64, 0x65, 0x73, 0x74 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsILocalFile : public nsIFile {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ILOCALFILE_IID)

  /* void initWithPath (in AString filePath); */
  NS_SCRIPTABLE NS_IMETHOD InitWithPath(const nsAString & filePath) = 0;

  /* [noscript] void initWithNativePath (in ACString filePath); */
  NS_IMETHOD InitWithNativePath(const nsACString & filePath) = 0;

  /* void initWithFile (in nsILocalFile aFile); */
  NS_SCRIPTABLE NS_IMETHOD InitWithFile(nsILocalFile *aFile) = 0;

  /* attribute boolean followLinks; */
  NS_SCRIPTABLE NS_IMETHOD GetFollowLinks(PRBool *aFollowLinks) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetFollowLinks(PRBool aFollowLinks) = 0;

  enum { DELETE_ON_CLOSE = 2147483648U };

  /* [noscript] PRFileDescStar openNSPRFileDesc (in long flags, in long mode); */
  NS_IMETHOD OpenNSPRFileDesc(PRInt32 flags, PRInt32 mode, PRFileDesc **_retval NS_OUTPARAM) = 0;

  /* [noscript] FILE openANSIFileDesc (in string mode); */
  NS_IMETHOD OpenANSIFileDesc(const char * mode, FILE **_retval NS_OUTPARAM) = 0;

  /* [noscript] PRLibraryStar load (); */
  NS_IMETHOD Load(PRLibrary **_retval NS_OUTPARAM) = 0;

  /* readonly attribute PRInt64 diskSpaceAvailable; */
  NS_SCRIPTABLE NS_IMETHOD GetDiskSpaceAvailable(PRInt64 *aDiskSpaceAvailable) = 0;

  /* void appendRelativePath (in AString relativeFilePath); */
  NS_SCRIPTABLE NS_IMETHOD AppendRelativePath(const nsAString & relativeFilePath) = 0;

  /* [noscript] void appendRelativeNativePath (in ACString relativeFilePath); */
  NS_IMETHOD AppendRelativeNativePath(const nsACString & relativeFilePath) = 0;

  /* attribute ACString persistentDescriptor; */
  NS_SCRIPTABLE NS_IMETHOD GetPersistentDescriptor(nsACString & aPersistentDescriptor) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetPersistentDescriptor(const nsACString & aPersistentDescriptor) = 0;

  /* void reveal (); */
  NS_SCRIPTABLE NS_IMETHOD Reveal(void) = 0;

  /* void launch (); */
  NS_SCRIPTABLE NS_IMETHOD Launch(void) = 0;

  /* ACString getRelativeDescriptor (in nsILocalFile fromFile); */
  NS_SCRIPTABLE NS_IMETHOD GetRelativeDescriptor(nsILocalFile *fromFile, nsACString & _retval NS_OUTPARAM) = 0;

  /* void setRelativeDescriptor (in nsILocalFile fromFile, in ACString relativeDesc); */
  NS_SCRIPTABLE NS_IMETHOD SetRelativeDescriptor(nsILocalFile *fromFile, const nsACString & relativeDesc) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsILocalFile, NS_ILOCALFILE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSILOCALFILE \
  NS_SCRIPTABLE NS_IMETHOD InitWithPath(const nsAString & filePath); \
  NS_IMETHOD InitWithNativePath(const nsACString & filePath); \
  NS_SCRIPTABLE NS_IMETHOD InitWithFile(nsILocalFile *aFile); \
  NS_SCRIPTABLE NS_IMETHOD GetFollowLinks(PRBool *aFollowLinks); \
  NS_SCRIPTABLE NS_IMETHOD SetFollowLinks(PRBool aFollowLinks); \
  NS_IMETHOD OpenNSPRFileDesc(PRInt32 flags, PRInt32 mode, PRFileDesc **_retval NS_OUTPARAM); \
  NS_IMETHOD OpenANSIFileDesc(const char * mode, FILE **_retval NS_OUTPARAM); \
  NS_IMETHOD Load(PRLibrary **_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetDiskSpaceAvailable(PRInt64 *aDiskSpaceAvailable); \
  NS_SCRIPTABLE NS_IMETHOD AppendRelativePath(const nsAString & relativeFilePath); \
  NS_IMETHOD AppendRelativeNativePath(const nsACString & relativeFilePath); \
  NS_SCRIPTABLE NS_IMETHOD GetPersistentDescriptor(nsACString & aPersistentDescriptor); \
  NS_SCRIPTABLE NS_IMETHOD SetPersistentDescriptor(const nsACString & aPersistentDescriptor); \
  NS_SCRIPTABLE NS_IMETHOD Reveal(void); \
  NS_SCRIPTABLE NS_IMETHOD Launch(void); \
  NS_SCRIPTABLE NS_IMETHOD GetRelativeDescriptor(nsILocalFile *fromFile, nsACString & _retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetRelativeDescriptor(nsILocalFile *fromFile, const nsACString & relativeDesc); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSILOCALFILE(_to) \
  NS_SCRIPTABLE NS_IMETHOD InitWithPath(const nsAString & filePath) { return _to InitWithPath(filePath); } \
  NS_IMETHOD InitWithNativePath(const nsACString & filePath) { return _to InitWithNativePath(filePath); } \
  NS_SCRIPTABLE NS_IMETHOD InitWithFile(nsILocalFile *aFile) { return _to InitWithFile(aFile); } \
  NS_SCRIPTABLE NS_IMETHOD GetFollowLinks(PRBool *aFollowLinks) { return _to GetFollowLinks(aFollowLinks); } \
  NS_SCRIPTABLE NS_IMETHOD SetFollowLinks(PRBool aFollowLinks) { return _to SetFollowLinks(aFollowLinks); } \
  NS_IMETHOD OpenNSPRFileDesc(PRInt32 flags, PRInt32 mode, PRFileDesc **_retval NS_OUTPARAM) { return _to OpenNSPRFileDesc(flags, mode, _retval); } \
  NS_IMETHOD OpenANSIFileDesc(const char * mode, FILE **_retval NS_OUTPARAM) { return _to OpenANSIFileDesc(mode, _retval); } \
  NS_IMETHOD Load(PRLibrary **_retval NS_OUTPARAM) { return _to Load(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetDiskSpaceAvailable(PRInt64 *aDiskSpaceAvailable) { return _to GetDiskSpaceAvailable(aDiskSpaceAvailable); } \
  NS_SCRIPTABLE NS_IMETHOD AppendRelativePath(const nsAString & relativeFilePath) { return _to AppendRelativePath(relativeFilePath); } \
  NS_IMETHOD AppendRelativeNativePath(const nsACString & relativeFilePath) { return _to AppendRelativeNativePath(relativeFilePath); } \
  NS_SCRIPTABLE NS_IMETHOD GetPersistentDescriptor(nsACString & aPersistentDescriptor) { return _to GetPersistentDescriptor(aPersistentDescriptor); } \
  NS_SCRIPTABLE NS_IMETHOD SetPersistentDescriptor(const nsACString & aPersistentDescriptor) { return _to SetPersistentDescriptor(aPersistentDescriptor); } \
  NS_SCRIPTABLE NS_IMETHOD Reveal(void) { return _to Reveal(); } \
  NS_SCRIPTABLE NS_IMETHOD Launch(void) { return _to Launch(); } \
  NS_SCRIPTABLE NS_IMETHOD GetRelativeDescriptor(nsILocalFile *fromFile, nsACString & _retval NS_OUTPARAM) { return _to GetRelativeDescriptor(fromFile, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetRelativeDescriptor(nsILocalFile *fromFile, const nsACString & relativeDesc) { return _to SetRelativeDescriptor(fromFile, relativeDesc); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSILOCALFILE(_to) \
  NS_SCRIPTABLE NS_IMETHOD InitWithPath(const nsAString & filePath) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitWithPath(filePath); } \
  NS_IMETHOD InitWithNativePath(const nsACString & filePath) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitWithNativePath(filePath); } \
  NS_SCRIPTABLE NS_IMETHOD InitWithFile(nsILocalFile *aFile) { return !_to ? NS_ERROR_NULL_POINTER : _to->InitWithFile(aFile); } \
  NS_SCRIPTABLE NS_IMETHOD GetFollowLinks(PRBool *aFollowLinks) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFollowLinks(aFollowLinks); } \
  NS_SCRIPTABLE NS_IMETHOD SetFollowLinks(PRBool aFollowLinks) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFollowLinks(aFollowLinks); } \
  NS_IMETHOD OpenNSPRFileDesc(PRInt32 flags, PRInt32 mode, PRFileDesc **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->OpenNSPRFileDesc(flags, mode, _retval); } \
  NS_IMETHOD OpenANSIFileDesc(const char * mode, FILE **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->OpenANSIFileDesc(mode, _retval); } \
  NS_IMETHOD Load(PRLibrary **_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Load(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetDiskSpaceAvailable(PRInt64 *aDiskSpaceAvailable) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDiskSpaceAvailable(aDiskSpaceAvailable); } \
  NS_SCRIPTABLE NS_IMETHOD AppendRelativePath(const nsAString & relativeFilePath) { return !_to ? NS_ERROR_NULL_POINTER : _to->AppendRelativePath(relativeFilePath); } \
  NS_IMETHOD AppendRelativeNativePath(const nsACString & relativeFilePath) { return !_to ? NS_ERROR_NULL_POINTER : _to->AppendRelativeNativePath(relativeFilePath); } \
  NS_SCRIPTABLE NS_IMETHOD GetPersistentDescriptor(nsACString & aPersistentDescriptor) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPersistentDescriptor(aPersistentDescriptor); } \
  NS_SCRIPTABLE NS_IMETHOD SetPersistentDescriptor(const nsACString & aPersistentDescriptor) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetPersistentDescriptor(aPersistentDescriptor); } \
  NS_SCRIPTABLE NS_IMETHOD Reveal(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Reveal(); } \
  NS_SCRIPTABLE NS_IMETHOD Launch(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Launch(); } \
  NS_SCRIPTABLE NS_IMETHOD GetRelativeDescriptor(nsILocalFile *fromFile, nsACString & _retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRelativeDescriptor(fromFile, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD SetRelativeDescriptor(nsILocalFile *fromFile, const nsACString & relativeDesc) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetRelativeDescriptor(fromFile, relativeDesc); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsLocalFile : public nsILocalFile
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSILOCALFILE

  nsLocalFile();

private:
  ~nsLocalFile();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsLocalFile, nsILocalFile)

nsLocalFile::nsLocalFile()
{
  /* member initializers and constructor code */
}

nsLocalFile::~nsLocalFile()
{
  /* destructor code */
}

/* void initWithPath (in AString filePath); */
NS_IMETHODIMP nsLocalFile::InitWithPath(const nsAString & filePath)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void initWithNativePath (in ACString filePath); */
NS_IMETHODIMP nsLocalFile::InitWithNativePath(const nsACString & filePath)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void initWithFile (in nsILocalFile aFile); */
NS_IMETHODIMP nsLocalFile::InitWithFile(nsILocalFile *aFile)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean followLinks; */
NS_IMETHODIMP nsLocalFile::GetFollowLinks(PRBool *aFollowLinks)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsLocalFile::SetFollowLinks(PRBool aFollowLinks)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] PRFileDescStar openNSPRFileDesc (in long flags, in long mode); */
NS_IMETHODIMP nsLocalFile::OpenNSPRFileDesc(PRInt32 flags, PRInt32 mode, PRFileDesc **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] FILE openANSIFileDesc (in string mode); */
NS_IMETHODIMP nsLocalFile::OpenANSIFileDesc(const char * mode, FILE **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] PRLibraryStar load (); */
NS_IMETHODIMP nsLocalFile::Load(PRLibrary **_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute PRInt64 diskSpaceAvailable; */
NS_IMETHODIMP nsLocalFile::GetDiskSpaceAvailable(PRInt64 *aDiskSpaceAvailable)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void appendRelativePath (in AString relativeFilePath); */
NS_IMETHODIMP nsLocalFile::AppendRelativePath(const nsAString & relativeFilePath)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void appendRelativeNativePath (in ACString relativeFilePath); */
NS_IMETHODIMP nsLocalFile::AppendRelativeNativePath(const nsACString & relativeFilePath)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute ACString persistentDescriptor; */
NS_IMETHODIMP nsLocalFile::GetPersistentDescriptor(nsACString & aPersistentDescriptor)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsLocalFile::SetPersistentDescriptor(const nsACString & aPersistentDescriptor)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void reveal (); */
NS_IMETHODIMP nsLocalFile::Reveal()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void launch (); */
NS_IMETHODIMP nsLocalFile::Launch()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* ACString getRelativeDescriptor (in nsILocalFile fromFile); */
NS_IMETHODIMP nsLocalFile::GetRelativeDescriptor(nsILocalFile *fromFile, nsACString & _retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setRelativeDescriptor (in nsILocalFile fromFile, in ACString relativeDesc); */
NS_IMETHODIMP nsLocalFile::SetRelativeDescriptor(nsILocalFile *fromFile, const nsACString & relativeDesc)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsILocalFile_h__ */
