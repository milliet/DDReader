/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/modules/libjar/nsIZipReader.idl
 */

#ifndef __gen_nsIZipReader_h__
#define __gen_nsIZipReader_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIUTF8StringEnumerator; /* forward declaration */

class nsIInputStream; /* forward declaration */

class nsIFile; /* forward declaration */

class nsIPrincipal; /* forward declaration */


/* starting interface:    nsIZipEntry */
#define NS_IZIPENTRY_IID_STR "e1c028bc-c478-11da-95a8-00e08161165f"

#define NS_IZIPENTRY_IID \
  {0xe1c028bc, 0xc478, 0x11da, \
    { 0x95, 0xa8, 0x00, 0xe0, 0x81, 0x61, 0x16, 0x5f }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIZipEntry : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IZIPENTRY_IID)

  /* readonly attribute unsigned short compression; */
  NS_SCRIPTABLE NS_IMETHOD GetCompression(PRUint16 *aCompression) = 0;

  /* readonly attribute unsigned long size; */
  NS_SCRIPTABLE NS_IMETHOD GetSize(PRUint32 *aSize) = 0;

  /* readonly attribute unsigned long realSize; */
  NS_SCRIPTABLE NS_IMETHOD GetRealSize(PRUint32 *aRealSize) = 0;

  /* readonly attribute unsigned long CRC32; */
  NS_SCRIPTABLE NS_IMETHOD GetCRC32(PRUint32 *aCRC32) = 0;

  /* readonly attribute boolean isDirectory; */
  NS_SCRIPTABLE NS_IMETHOD GetIsDirectory(PRBool *aIsDirectory) = 0;

  /* readonly attribute PRTime lastModifiedTime; */
  NS_SCRIPTABLE NS_IMETHOD GetLastModifiedTime(PRTime *aLastModifiedTime) = 0;

  /* readonly attribute boolean isSynthetic; */
  NS_SCRIPTABLE NS_IMETHOD GetIsSynthetic(PRBool *aIsSynthetic) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIZipEntry, NS_IZIPENTRY_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIZIPENTRY \
  NS_SCRIPTABLE NS_IMETHOD GetCompression(PRUint16 *aCompression); \
  NS_SCRIPTABLE NS_IMETHOD GetSize(PRUint32 *aSize); \
  NS_SCRIPTABLE NS_IMETHOD GetRealSize(PRUint32 *aRealSize); \
  NS_SCRIPTABLE NS_IMETHOD GetCRC32(PRUint32 *aCRC32); \
  NS_SCRIPTABLE NS_IMETHOD GetIsDirectory(PRBool *aIsDirectory); \
  NS_SCRIPTABLE NS_IMETHOD GetLastModifiedTime(PRTime *aLastModifiedTime); \
  NS_SCRIPTABLE NS_IMETHOD GetIsSynthetic(PRBool *aIsSynthetic); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIZIPENTRY(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetCompression(PRUint16 *aCompression) { return _to GetCompression(aCompression); } \
  NS_SCRIPTABLE NS_IMETHOD GetSize(PRUint32 *aSize) { return _to GetSize(aSize); } \
  NS_SCRIPTABLE NS_IMETHOD GetRealSize(PRUint32 *aRealSize) { return _to GetRealSize(aRealSize); } \
  NS_SCRIPTABLE NS_IMETHOD GetCRC32(PRUint32 *aCRC32) { return _to GetCRC32(aCRC32); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsDirectory(PRBool *aIsDirectory) { return _to GetIsDirectory(aIsDirectory); } \
  NS_SCRIPTABLE NS_IMETHOD GetLastModifiedTime(PRTime *aLastModifiedTime) { return _to GetLastModifiedTime(aLastModifiedTime); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsSynthetic(PRBool *aIsSynthetic) { return _to GetIsSynthetic(aIsSynthetic); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIZIPENTRY(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetCompression(PRUint16 *aCompression) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCompression(aCompression); } \
  NS_SCRIPTABLE NS_IMETHOD GetSize(PRUint32 *aSize) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSize(aSize); } \
  NS_SCRIPTABLE NS_IMETHOD GetRealSize(PRUint32 *aRealSize) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetRealSize(aRealSize); } \
  NS_SCRIPTABLE NS_IMETHOD GetCRC32(PRUint32 *aCRC32) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCRC32(aCRC32); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsDirectory(PRBool *aIsDirectory) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsDirectory(aIsDirectory); } \
  NS_SCRIPTABLE NS_IMETHOD GetLastModifiedTime(PRTime *aLastModifiedTime) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLastModifiedTime(aLastModifiedTime); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsSynthetic(PRBool *aIsSynthetic) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsSynthetic(aIsSynthetic); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsZipEntry : public nsIZipEntry
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIZIPENTRY

  nsZipEntry();

private:
  ~nsZipEntry();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsZipEntry, nsIZipEntry)

nsZipEntry::nsZipEntry()
{
  /* member initializers and constructor code */
}

nsZipEntry::~nsZipEntry()
{
  /* destructor code */
}

/* readonly attribute unsigned short compression; */
NS_IMETHODIMP nsZipEntry::GetCompression(PRUint16 *aCompression)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long size; */
NS_IMETHODIMP nsZipEntry::GetSize(PRUint32 *aSize)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long realSize; */
NS_IMETHODIMP nsZipEntry::GetRealSize(PRUint32 *aRealSize)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long CRC32; */
NS_IMETHODIMP nsZipEntry::GetCRC32(PRUint32 *aCRC32)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean isDirectory; */
NS_IMETHODIMP nsZipEntry::GetIsDirectory(PRBool *aIsDirectory)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute PRTime lastModifiedTime; */
NS_IMETHODIMP nsZipEntry::GetLastModifiedTime(PRTime *aLastModifiedTime)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean isSynthetic; */
NS_IMETHODIMP nsZipEntry::GetIsSynthetic(PRBool *aIsSynthetic)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIZipReader */
#define NS_IZIPREADER_IID_STR "7bb925d6-833a-486c-8ef2-9bc15c670a60"

#define NS_IZIPREADER_IID \
  {0x7bb925d6, 0x833a, 0x486c, \
    { 0x8e, 0xf2, 0x9b, 0xc1, 0x5c, 0x67, 0x0a, 0x60 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIZipReader : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IZIPREADER_IID)

  /* void open (in nsIFile zipFile); */
  NS_SCRIPTABLE NS_IMETHOD Open(nsIFile *zipFile) = 0;

  /* void openInner (in nsIZipReader zipReader, in string zipEntry); */
  NS_SCRIPTABLE NS_IMETHOD OpenInner(nsIZipReader *zipReader, const char * zipEntry) = 0;

  /* readonly attribute nsIFile file; */
  NS_SCRIPTABLE NS_IMETHOD GetFile(nsIFile * *aFile) = 0;

  /* void close (); */
  NS_SCRIPTABLE NS_IMETHOD Close(void) = 0;

  /* void test (in string aEntryName); */
  NS_SCRIPTABLE NS_IMETHOD Test(const char * aEntryName) = 0;

  /* void extract (in string zipEntry, in nsIFile outFile); */
  NS_SCRIPTABLE NS_IMETHOD Extract(const char * zipEntry, nsIFile *outFile) = 0;

  /* nsIZipEntry getEntry (in string zipEntry); */
  NS_SCRIPTABLE NS_IMETHOD GetEntry(const char * zipEntry, nsIZipEntry * *_retval NS_OUTPARAM) = 0;

  /* boolean hasEntry (in AUTF8String zipEntry); */
  NS_SCRIPTABLE NS_IMETHOD HasEntry(const nsACString & zipEntry, PRBool *_retval NS_OUTPARAM) = 0;

  /* nsIUTF8StringEnumerator findEntries (in string aPattern); */
  NS_SCRIPTABLE NS_IMETHOD FindEntries(const char * aPattern, nsIUTF8StringEnumerator * *_retval NS_OUTPARAM) = 0;

  /* nsIInputStream getInputStream (in string zipEntry); */
  NS_SCRIPTABLE NS_IMETHOD GetInputStream(const char * zipEntry, nsIInputStream * *_retval NS_OUTPARAM) = 0;

  /* nsIInputStream getInputStreamWithSpec (in AUTF8String aJarSpec, in string zipEntry); */
  NS_SCRIPTABLE NS_IMETHOD GetInputStreamWithSpec(const nsACString & aJarSpec, const char * zipEntry, nsIInputStream * *_retval NS_OUTPARAM) = 0;

  /* nsIPrincipal getCertificatePrincipal (in string aEntryName); */
  NS_SCRIPTABLE NS_IMETHOD GetCertificatePrincipal(const char * aEntryName, nsIPrincipal * *_retval NS_OUTPARAM) = 0;

  /* readonly attribute PRUint32 manifestEntriesCount; */
  NS_SCRIPTABLE NS_IMETHOD GetManifestEntriesCount(PRUint32 *aManifestEntriesCount) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIZipReader, NS_IZIPREADER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIZIPREADER \
  NS_SCRIPTABLE NS_IMETHOD Open(nsIFile *zipFile); \
  NS_SCRIPTABLE NS_IMETHOD OpenInner(nsIZipReader *zipReader, const char * zipEntry); \
  NS_SCRIPTABLE NS_IMETHOD GetFile(nsIFile * *aFile); \
  NS_SCRIPTABLE NS_IMETHOD Close(void); \
  NS_SCRIPTABLE NS_IMETHOD Test(const char * aEntryName); \
  NS_SCRIPTABLE NS_IMETHOD Extract(const char * zipEntry, nsIFile *outFile); \
  NS_SCRIPTABLE NS_IMETHOD GetEntry(const char * zipEntry, nsIZipEntry * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD HasEntry(const nsACString & zipEntry, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD FindEntries(const char * aPattern, nsIUTF8StringEnumerator * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetInputStream(const char * zipEntry, nsIInputStream * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetInputStreamWithSpec(const nsACString & aJarSpec, const char * zipEntry, nsIInputStream * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetCertificatePrincipal(const char * aEntryName, nsIPrincipal * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetManifestEntriesCount(PRUint32 *aManifestEntriesCount); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIZIPREADER(_to) \
  NS_SCRIPTABLE NS_IMETHOD Open(nsIFile *zipFile) { return _to Open(zipFile); } \
  NS_SCRIPTABLE NS_IMETHOD OpenInner(nsIZipReader *zipReader, const char * zipEntry) { return _to OpenInner(zipReader, zipEntry); } \
  NS_SCRIPTABLE NS_IMETHOD GetFile(nsIFile * *aFile) { return _to GetFile(aFile); } \
  NS_SCRIPTABLE NS_IMETHOD Close(void) { return _to Close(); } \
  NS_SCRIPTABLE NS_IMETHOD Test(const char * aEntryName) { return _to Test(aEntryName); } \
  NS_SCRIPTABLE NS_IMETHOD Extract(const char * zipEntry, nsIFile *outFile) { return _to Extract(zipEntry, outFile); } \
  NS_SCRIPTABLE NS_IMETHOD GetEntry(const char * zipEntry, nsIZipEntry * *_retval NS_OUTPARAM) { return _to GetEntry(zipEntry, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD HasEntry(const nsACString & zipEntry, PRBool *_retval NS_OUTPARAM) { return _to HasEntry(zipEntry, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD FindEntries(const char * aPattern, nsIUTF8StringEnumerator * *_retval NS_OUTPARAM) { return _to FindEntries(aPattern, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetInputStream(const char * zipEntry, nsIInputStream * *_retval NS_OUTPARAM) { return _to GetInputStream(zipEntry, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetInputStreamWithSpec(const nsACString & aJarSpec, const char * zipEntry, nsIInputStream * *_retval NS_OUTPARAM) { return _to GetInputStreamWithSpec(aJarSpec, zipEntry, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCertificatePrincipal(const char * aEntryName, nsIPrincipal * *_retval NS_OUTPARAM) { return _to GetCertificatePrincipal(aEntryName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetManifestEntriesCount(PRUint32 *aManifestEntriesCount) { return _to GetManifestEntriesCount(aManifestEntriesCount); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIZIPREADER(_to) \
  NS_SCRIPTABLE NS_IMETHOD Open(nsIFile *zipFile) { return !_to ? NS_ERROR_NULL_POINTER : _to->Open(zipFile); } \
  NS_SCRIPTABLE NS_IMETHOD OpenInner(nsIZipReader *zipReader, const char * zipEntry) { return !_to ? NS_ERROR_NULL_POINTER : _to->OpenInner(zipReader, zipEntry); } \
  NS_SCRIPTABLE NS_IMETHOD GetFile(nsIFile * *aFile) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFile(aFile); } \
  NS_SCRIPTABLE NS_IMETHOD Close(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Close(); } \
  NS_SCRIPTABLE NS_IMETHOD Test(const char * aEntryName) { return !_to ? NS_ERROR_NULL_POINTER : _to->Test(aEntryName); } \
  NS_SCRIPTABLE NS_IMETHOD Extract(const char * zipEntry, nsIFile *outFile) { return !_to ? NS_ERROR_NULL_POINTER : _to->Extract(zipEntry, outFile); } \
  NS_SCRIPTABLE NS_IMETHOD GetEntry(const char * zipEntry, nsIZipEntry * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEntry(zipEntry, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD HasEntry(const nsACString & zipEntry, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->HasEntry(zipEntry, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD FindEntries(const char * aPattern, nsIUTF8StringEnumerator * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->FindEntries(aPattern, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetInputStream(const char * zipEntry, nsIInputStream * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInputStream(zipEntry, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetInputStreamWithSpec(const nsACString & aJarSpec, const char * zipEntry, nsIInputStream * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInputStreamWithSpec(aJarSpec, zipEntry, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetCertificatePrincipal(const char * aEntryName, nsIPrincipal * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCertificatePrincipal(aEntryName, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetManifestEntriesCount(PRUint32 *aManifestEntriesCount) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetManifestEntriesCount(aManifestEntriesCount); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsZipReader : public nsIZipReader
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIZIPREADER

  nsZipReader();

private:
  ~nsZipReader();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsZipReader, nsIZipReader)

nsZipReader::nsZipReader()
{
  /* member initializers and constructor code */
}

nsZipReader::~nsZipReader()
{
  /* destructor code */
}

/* void open (in nsIFile zipFile); */
NS_IMETHODIMP nsZipReader::Open(nsIFile *zipFile)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void openInner (in nsIZipReader zipReader, in string zipEntry); */
NS_IMETHODIMP nsZipReader::OpenInner(nsIZipReader *zipReader, const char * zipEntry)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsIFile file; */
NS_IMETHODIMP nsZipReader::GetFile(nsIFile * *aFile)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void close (); */
NS_IMETHODIMP nsZipReader::Close()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void test (in string aEntryName); */
NS_IMETHODIMP nsZipReader::Test(const char * aEntryName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void extract (in string zipEntry, in nsIFile outFile); */
NS_IMETHODIMP nsZipReader::Extract(const char * zipEntry, nsIFile *outFile)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIZipEntry getEntry (in string zipEntry); */
NS_IMETHODIMP nsZipReader::GetEntry(const char * zipEntry, nsIZipEntry * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean hasEntry (in AUTF8String zipEntry); */
NS_IMETHODIMP nsZipReader::HasEntry(const nsACString & zipEntry, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIUTF8StringEnumerator findEntries (in string aPattern); */
NS_IMETHODIMP nsZipReader::FindEntries(const char * aPattern, nsIUTF8StringEnumerator * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIInputStream getInputStream (in string zipEntry); */
NS_IMETHODIMP nsZipReader::GetInputStream(const char * zipEntry, nsIInputStream * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIInputStream getInputStreamWithSpec (in AUTF8String aJarSpec, in string zipEntry); */
NS_IMETHODIMP nsZipReader::GetInputStreamWithSpec(const nsACString & aJarSpec, const char * zipEntry, nsIInputStream * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIPrincipal getCertificatePrincipal (in string aEntryName); */
NS_IMETHODIMP nsZipReader::GetCertificatePrincipal(const char * aEntryName, nsIPrincipal * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute PRUint32 manifestEntriesCount; */
NS_IMETHODIMP nsZipReader::GetManifestEntriesCount(PRUint32 *aManifestEntriesCount)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    nsIZipReaderCache */
#define NS_IZIPREADERCACHE_IID_STR "52c45d86-0cc3-11d4-986e-00c04fa0cf4a"

#define NS_IZIPREADERCACHE_IID \
  {0x52c45d86, 0x0cc3, 0x11d4, \
    { 0x98, 0x6e, 0x00, 0xc0, 0x4f, 0xa0, 0xcf, 0x4a }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIZipReaderCache : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IZIPREADERCACHE_IID)

  /* void init (in unsigned long cacheSize); */
  NS_SCRIPTABLE NS_IMETHOD Init(PRUint32 cacheSize) = 0;

  /* nsIZipReader getZip (in nsIFile zipFile); */
  NS_SCRIPTABLE NS_IMETHOD GetZip(nsIFile *zipFile, nsIZipReader * *_retval NS_OUTPARAM) = 0;

  /* nsIZipReader getInnerZip (in nsIFile zipFile, in string zipEntry); */
  NS_SCRIPTABLE NS_IMETHOD GetInnerZip(nsIFile *zipFile, const char * zipEntry, nsIZipReader * *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIZipReaderCache, NS_IZIPREADERCACHE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIZIPREADERCACHE \
  NS_SCRIPTABLE NS_IMETHOD Init(PRUint32 cacheSize); \
  NS_SCRIPTABLE NS_IMETHOD GetZip(nsIFile *zipFile, nsIZipReader * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetInnerZip(nsIFile *zipFile, const char * zipEntry, nsIZipReader * *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIZIPREADERCACHE(_to) \
  NS_SCRIPTABLE NS_IMETHOD Init(PRUint32 cacheSize) { return _to Init(cacheSize); } \
  NS_SCRIPTABLE NS_IMETHOD GetZip(nsIFile *zipFile, nsIZipReader * *_retval NS_OUTPARAM) { return _to GetZip(zipFile, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetInnerZip(nsIFile *zipFile, const char * zipEntry, nsIZipReader * *_retval NS_OUTPARAM) { return _to GetInnerZip(zipFile, zipEntry, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIZIPREADERCACHE(_to) \
  NS_SCRIPTABLE NS_IMETHOD Init(PRUint32 cacheSize) { return !_to ? NS_ERROR_NULL_POINTER : _to->Init(cacheSize); } \
  NS_SCRIPTABLE NS_IMETHOD GetZip(nsIFile *zipFile, nsIZipReader * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetZip(zipFile, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetInnerZip(nsIFile *zipFile, const char * zipEntry, nsIZipReader * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInnerZip(zipFile, zipEntry, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsZipReaderCache : public nsIZipReaderCache
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIZIPREADERCACHE

  nsZipReaderCache();

private:
  ~nsZipReaderCache();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsZipReaderCache, nsIZipReaderCache)

nsZipReaderCache::nsZipReaderCache()
{
  /* member initializers and constructor code */
}

nsZipReaderCache::~nsZipReaderCache()
{
  /* destructor code */
}

/* void init (in unsigned long cacheSize); */
NS_IMETHODIMP nsZipReaderCache::Init(PRUint32 cacheSize)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIZipReader getZip (in nsIFile zipFile); */
NS_IMETHODIMP nsZipReaderCache::GetZip(nsIFile *zipFile, nsIZipReader * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIZipReader getInnerZip (in nsIFile zipFile, in string zipEntry); */
NS_IMETHODIMP nsZipReaderCache::GetInnerZip(nsIFile *zipFile, const char * zipEntry, nsIZipReader * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#define NS_ZIPREADER_CID                             \
{ /* 7526a738-9632-11d3-8cd9-0060b0fc14a3 */         \
    0x7526a738,                                      \
    0x9632,                                          \
    0x11d3,                                          \
    {0x8c, 0xd9, 0x00, 0x60, 0xb0, 0xfc, 0x14, 0xa3} \
}
#define NS_ZIPREADERCACHE_CID                        \
{ /* 1b117e16-0cad-11d4-986e-00c04fa0cf4a */         \
    0x1b117e16,                                      \
    0x0cad,                                          \
    0x11d4,                                          \
    {0x98, 0x6e, 0x00, 0xc0, 0x4f, 0xa0, 0xcf, 0x4a} \
}

#endif /* __gen_nsIZipReader_h__ */
