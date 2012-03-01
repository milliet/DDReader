/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/security/manager/ssl/public/nsIX509CertDB.idl
 */

#ifndef __gen_nsIX509CertDB_h__
#define __gen_nsIX509CertDB_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsIArray; /* forward declaration */

class nsIX509Cert; /* forward declaration */

class nsILocalFile; /* forward declaration */

class nsIInterfaceRequestor; /* forward declaration */

#define NS_X509CERTDB_CONTRACTID "@mozilla.org/security/x509certdb;1"

/* starting interface:    nsIX509CertDB */
#define NS_IX509CERTDB_IID_STR "da48b3c0-1284-11d5-ac67-000064657374"

#define NS_IX509CERTDB_IID \
  {0xda48b3c0, 0x1284, 0x11d5, \
    { 0xac, 0x67, 0x00, 0x00, 0x64, 0x65, 0x73, 0x74 }}

class NS_NO_VTABLE NS_SCRIPTABLE nsIX509CertDB : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_IX509CERTDB_IID)

  enum { UNTRUSTED = 0U };

  enum { TRUSTED_SSL = 1U };

  enum { TRUSTED_EMAIL = 2U };

  enum { TRUSTED_OBJSIGN = 4U };

  /* nsIX509Cert findCertByNickname (in nsISupports aToken, in AString aNickname); */
  NS_SCRIPTABLE NS_IMETHOD FindCertByNickname(nsISupports *aToken, const nsAString & aNickname, nsIX509Cert * *_retval NS_OUTPARAM) = 0;

  /* nsIX509Cert findCertByDBKey (in string aDBkey, in nsISupports aToken); */
  NS_SCRIPTABLE NS_IMETHOD FindCertByDBKey(const char * aDBkey, nsISupports *aToken, nsIX509Cert * *_retval NS_OUTPARAM) = 0;

  /* void findCertNicknames (in nsISupports aToken, in unsigned long aType, out unsigned long count, [array, size_is (count)] out wstring certNameList); */
  NS_SCRIPTABLE NS_IMETHOD FindCertNicknames(nsISupports *aToken, PRUint32 aType, PRUint32 *count NS_OUTPARAM, PRUnichar * **certNameList NS_OUTPARAM) = 0;

  /* nsIX509Cert findEmailEncryptionCert (in AString aNickname); */
  NS_SCRIPTABLE NS_IMETHOD FindEmailEncryptionCert(const nsAString & aNickname, nsIX509Cert * *_retval NS_OUTPARAM) = 0;

  /* nsIX509Cert findEmailSigningCert (in AString aNickname); */
  NS_SCRIPTABLE NS_IMETHOD FindEmailSigningCert(const nsAString & aNickname, nsIX509Cert * *_retval NS_OUTPARAM) = 0;

  /* nsIX509Cert findCertByEmailAddress (in nsISupports aToken, in string aEmailAddress); */
  NS_SCRIPTABLE NS_IMETHOD FindCertByEmailAddress(nsISupports *aToken, const char * aEmailAddress, nsIX509Cert * *_retval NS_OUTPARAM) = 0;

  /* void importCertificates ([array, size_is (length)] in octet data, in unsigned long length, in unsigned long type, in nsIInterfaceRequestor ctx); */
  NS_SCRIPTABLE NS_IMETHOD ImportCertificates(PRUint8 *data, PRUint32 length, PRUint32 type, nsIInterfaceRequestor *ctx) = 0;

  /* void importEmailCertificate ([array, size_is (length)] in octet data, in unsigned long length, in nsIInterfaceRequestor ctx); */
  NS_SCRIPTABLE NS_IMETHOD ImportEmailCertificate(PRUint8 *data, PRUint32 length, nsIInterfaceRequestor *ctx) = 0;

  /* void importServerCertificate ([array, size_is (length)] in octet data, in unsigned long length, in nsIInterfaceRequestor ctx); */
  NS_SCRIPTABLE NS_IMETHOD ImportServerCertificate(PRUint8 *data, PRUint32 length, nsIInterfaceRequestor *ctx) = 0;

  /* void importUserCertificate ([array, size_is (length)] in octet data, in unsigned long length, in nsIInterfaceRequestor ctx); */
  NS_SCRIPTABLE NS_IMETHOD ImportUserCertificate(PRUint8 *data, PRUint32 length, nsIInterfaceRequestor *ctx) = 0;

  /* void deleteCertificate (in nsIX509Cert aCert); */
  NS_SCRIPTABLE NS_IMETHOD DeleteCertificate(nsIX509Cert *aCert) = 0;

  /* void setCertTrust (in nsIX509Cert cert, in unsigned long type, in unsigned long trust); */
  NS_SCRIPTABLE NS_IMETHOD SetCertTrust(nsIX509Cert *cert, PRUint32 type, PRUint32 trust) = 0;

  /* boolean isCertTrusted (in nsIX509Cert cert, in unsigned long certType, in unsigned long trustType); */
  NS_SCRIPTABLE NS_IMETHOD IsCertTrusted(nsIX509Cert *cert, PRUint32 certType, PRUint32 trustType, PRBool *_retval NS_OUTPARAM) = 0;

  /* void importCertsFromFile (in nsISupports aToken, in nsILocalFile aFile, in unsigned long aType); */
  NS_SCRIPTABLE NS_IMETHOD ImportCertsFromFile(nsISupports *aToken, nsILocalFile *aFile, PRUint32 aType) = 0;

  /* void importPKCS12File (in nsISupports aToken, in nsILocalFile aFile); */
  NS_SCRIPTABLE NS_IMETHOD ImportPKCS12File(nsISupports *aToken, nsILocalFile *aFile) = 0;

  /* void exportPKCS12File (in nsISupports aToken, in nsILocalFile aFile, in unsigned long count, [array, size_is (count)] in nsIX509Cert aCerts); */
  NS_SCRIPTABLE NS_IMETHOD ExportPKCS12File(nsISupports *aToken, nsILocalFile *aFile, PRUint32 count, nsIX509Cert **aCerts) = 0;

  /* nsIArray getOCSPResponders (); */
  NS_SCRIPTABLE NS_IMETHOD GetOCSPResponders(nsIArray * *_retval NS_OUTPARAM) = 0;

  /* readonly attribute boolean isOcspOn; */
  NS_SCRIPTABLE NS_IMETHOD GetIsOcspOn(PRBool *aIsOcspOn) = 0;

  /* nsIX509Cert constructX509FromBase64 (in string base64); */
  NS_SCRIPTABLE NS_IMETHOD ConstructX509FromBase64(const char * base64, nsIX509Cert * *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsIX509CertDB, NS_IX509CERTDB_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSIX509CERTDB \
  NS_SCRIPTABLE NS_IMETHOD FindCertByNickname(nsISupports *aToken, const nsAString & aNickname, nsIX509Cert * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD FindCertByDBKey(const char * aDBkey, nsISupports *aToken, nsIX509Cert * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD FindCertNicknames(nsISupports *aToken, PRUint32 aType, PRUint32 *count NS_OUTPARAM, PRUnichar * **certNameList NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD FindEmailEncryptionCert(const nsAString & aNickname, nsIX509Cert * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD FindEmailSigningCert(const nsAString & aNickname, nsIX509Cert * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD FindCertByEmailAddress(nsISupports *aToken, const char * aEmailAddress, nsIX509Cert * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ImportCertificates(PRUint8 *data, PRUint32 length, PRUint32 type, nsIInterfaceRequestor *ctx); \
  NS_SCRIPTABLE NS_IMETHOD ImportEmailCertificate(PRUint8 *data, PRUint32 length, nsIInterfaceRequestor *ctx); \
  NS_SCRIPTABLE NS_IMETHOD ImportServerCertificate(PRUint8 *data, PRUint32 length, nsIInterfaceRequestor *ctx); \
  NS_SCRIPTABLE NS_IMETHOD ImportUserCertificate(PRUint8 *data, PRUint32 length, nsIInterfaceRequestor *ctx); \
  NS_SCRIPTABLE NS_IMETHOD DeleteCertificate(nsIX509Cert *aCert); \
  NS_SCRIPTABLE NS_IMETHOD SetCertTrust(nsIX509Cert *cert, PRUint32 type, PRUint32 trust); \
  NS_SCRIPTABLE NS_IMETHOD IsCertTrusted(nsIX509Cert *cert, PRUint32 certType, PRUint32 trustType, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ImportCertsFromFile(nsISupports *aToken, nsILocalFile *aFile, PRUint32 aType); \
  NS_SCRIPTABLE NS_IMETHOD ImportPKCS12File(nsISupports *aToken, nsILocalFile *aFile); \
  NS_SCRIPTABLE NS_IMETHOD ExportPKCS12File(nsISupports *aToken, nsILocalFile *aFile, PRUint32 count, nsIX509Cert **aCerts); \
  NS_SCRIPTABLE NS_IMETHOD GetOCSPResponders(nsIArray * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetIsOcspOn(PRBool *aIsOcspOn); \
  NS_SCRIPTABLE NS_IMETHOD ConstructX509FromBase64(const char * base64, nsIX509Cert * *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSIX509CERTDB(_to) \
  NS_SCRIPTABLE NS_IMETHOD FindCertByNickname(nsISupports *aToken, const nsAString & aNickname, nsIX509Cert * *_retval NS_OUTPARAM) { return _to FindCertByNickname(aToken, aNickname, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD FindCertByDBKey(const char * aDBkey, nsISupports *aToken, nsIX509Cert * *_retval NS_OUTPARAM) { return _to FindCertByDBKey(aDBkey, aToken, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD FindCertNicknames(nsISupports *aToken, PRUint32 aType, PRUint32 *count NS_OUTPARAM, PRUnichar * **certNameList NS_OUTPARAM) { return _to FindCertNicknames(aToken, aType, count, certNameList); } \
  NS_SCRIPTABLE NS_IMETHOD FindEmailEncryptionCert(const nsAString & aNickname, nsIX509Cert * *_retval NS_OUTPARAM) { return _to FindEmailEncryptionCert(aNickname, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD FindEmailSigningCert(const nsAString & aNickname, nsIX509Cert * *_retval NS_OUTPARAM) { return _to FindEmailSigningCert(aNickname, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD FindCertByEmailAddress(nsISupports *aToken, const char * aEmailAddress, nsIX509Cert * *_retval NS_OUTPARAM) { return _to FindCertByEmailAddress(aToken, aEmailAddress, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ImportCertificates(PRUint8 *data, PRUint32 length, PRUint32 type, nsIInterfaceRequestor *ctx) { return _to ImportCertificates(data, length, type, ctx); } \
  NS_SCRIPTABLE NS_IMETHOD ImportEmailCertificate(PRUint8 *data, PRUint32 length, nsIInterfaceRequestor *ctx) { return _to ImportEmailCertificate(data, length, ctx); } \
  NS_SCRIPTABLE NS_IMETHOD ImportServerCertificate(PRUint8 *data, PRUint32 length, nsIInterfaceRequestor *ctx) { return _to ImportServerCertificate(data, length, ctx); } \
  NS_SCRIPTABLE NS_IMETHOD ImportUserCertificate(PRUint8 *data, PRUint32 length, nsIInterfaceRequestor *ctx) { return _to ImportUserCertificate(data, length, ctx); } \
  NS_SCRIPTABLE NS_IMETHOD DeleteCertificate(nsIX509Cert *aCert) { return _to DeleteCertificate(aCert); } \
  NS_SCRIPTABLE NS_IMETHOD SetCertTrust(nsIX509Cert *cert, PRUint32 type, PRUint32 trust) { return _to SetCertTrust(cert, type, trust); } \
  NS_SCRIPTABLE NS_IMETHOD IsCertTrusted(nsIX509Cert *cert, PRUint32 certType, PRUint32 trustType, PRBool *_retval NS_OUTPARAM) { return _to IsCertTrusted(cert, certType, trustType, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ImportCertsFromFile(nsISupports *aToken, nsILocalFile *aFile, PRUint32 aType) { return _to ImportCertsFromFile(aToken, aFile, aType); } \
  NS_SCRIPTABLE NS_IMETHOD ImportPKCS12File(nsISupports *aToken, nsILocalFile *aFile) { return _to ImportPKCS12File(aToken, aFile); } \
  NS_SCRIPTABLE NS_IMETHOD ExportPKCS12File(nsISupports *aToken, nsILocalFile *aFile, PRUint32 count, nsIX509Cert **aCerts) { return _to ExportPKCS12File(aToken, aFile, count, aCerts); } \
  NS_SCRIPTABLE NS_IMETHOD GetOCSPResponders(nsIArray * *_retval NS_OUTPARAM) { return _to GetOCSPResponders(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsOcspOn(PRBool *aIsOcspOn) { return _to GetIsOcspOn(aIsOcspOn); } \
  NS_SCRIPTABLE NS_IMETHOD ConstructX509FromBase64(const char * base64, nsIX509Cert * *_retval NS_OUTPARAM) { return _to ConstructX509FromBase64(base64, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSIX509CERTDB(_to) \
  NS_SCRIPTABLE NS_IMETHOD FindCertByNickname(nsISupports *aToken, const nsAString & aNickname, nsIX509Cert * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->FindCertByNickname(aToken, aNickname, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD FindCertByDBKey(const char * aDBkey, nsISupports *aToken, nsIX509Cert * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->FindCertByDBKey(aDBkey, aToken, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD FindCertNicknames(nsISupports *aToken, PRUint32 aType, PRUint32 *count NS_OUTPARAM, PRUnichar * **certNameList NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->FindCertNicknames(aToken, aType, count, certNameList); } \
  NS_SCRIPTABLE NS_IMETHOD FindEmailEncryptionCert(const nsAString & aNickname, nsIX509Cert * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->FindEmailEncryptionCert(aNickname, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD FindEmailSigningCert(const nsAString & aNickname, nsIX509Cert * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->FindEmailSigningCert(aNickname, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD FindCertByEmailAddress(nsISupports *aToken, const char * aEmailAddress, nsIX509Cert * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->FindCertByEmailAddress(aToken, aEmailAddress, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ImportCertificates(PRUint8 *data, PRUint32 length, PRUint32 type, nsIInterfaceRequestor *ctx) { return !_to ? NS_ERROR_NULL_POINTER : _to->ImportCertificates(data, length, type, ctx); } \
  NS_SCRIPTABLE NS_IMETHOD ImportEmailCertificate(PRUint8 *data, PRUint32 length, nsIInterfaceRequestor *ctx) { return !_to ? NS_ERROR_NULL_POINTER : _to->ImportEmailCertificate(data, length, ctx); } \
  NS_SCRIPTABLE NS_IMETHOD ImportServerCertificate(PRUint8 *data, PRUint32 length, nsIInterfaceRequestor *ctx) { return !_to ? NS_ERROR_NULL_POINTER : _to->ImportServerCertificate(data, length, ctx); } \
  NS_SCRIPTABLE NS_IMETHOD ImportUserCertificate(PRUint8 *data, PRUint32 length, nsIInterfaceRequestor *ctx) { return !_to ? NS_ERROR_NULL_POINTER : _to->ImportUserCertificate(data, length, ctx); } \
  NS_SCRIPTABLE NS_IMETHOD DeleteCertificate(nsIX509Cert *aCert) { return !_to ? NS_ERROR_NULL_POINTER : _to->DeleteCertificate(aCert); } \
  NS_SCRIPTABLE NS_IMETHOD SetCertTrust(nsIX509Cert *cert, PRUint32 type, PRUint32 trust) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetCertTrust(cert, type, trust); } \
  NS_SCRIPTABLE NS_IMETHOD IsCertTrusted(nsIX509Cert *cert, PRUint32 certType, PRUint32 trustType, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsCertTrusted(cert, certType, trustType, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ImportCertsFromFile(nsISupports *aToken, nsILocalFile *aFile, PRUint32 aType) { return !_to ? NS_ERROR_NULL_POINTER : _to->ImportCertsFromFile(aToken, aFile, aType); } \
  NS_SCRIPTABLE NS_IMETHOD ImportPKCS12File(nsISupports *aToken, nsILocalFile *aFile) { return !_to ? NS_ERROR_NULL_POINTER : _to->ImportPKCS12File(aToken, aFile); } \
  NS_SCRIPTABLE NS_IMETHOD ExportPKCS12File(nsISupports *aToken, nsILocalFile *aFile, PRUint32 count, nsIX509Cert **aCerts) { return !_to ? NS_ERROR_NULL_POINTER : _to->ExportPKCS12File(aToken, aFile, count, aCerts); } \
  NS_SCRIPTABLE NS_IMETHOD GetOCSPResponders(nsIArray * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOCSPResponders(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsOcspOn(PRBool *aIsOcspOn) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsOcspOn(aIsOcspOn); } \
  NS_SCRIPTABLE NS_IMETHOD ConstructX509FromBase64(const char * base64, nsIX509Cert * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ConstructX509FromBase64(base64, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsX509CertDB : public nsIX509CertDB
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSIX509CERTDB

  nsX509CertDB();

private:
  ~nsX509CertDB();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsX509CertDB, nsIX509CertDB)

nsX509CertDB::nsX509CertDB()
{
  /* member initializers and constructor code */
}

nsX509CertDB::~nsX509CertDB()
{
  /* destructor code */
}

/* nsIX509Cert findCertByNickname (in nsISupports aToken, in AString aNickname); */
NS_IMETHODIMP nsX509CertDB::FindCertByNickname(nsISupports *aToken, const nsAString & aNickname, nsIX509Cert * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIX509Cert findCertByDBKey (in string aDBkey, in nsISupports aToken); */
NS_IMETHODIMP nsX509CertDB::FindCertByDBKey(const char * aDBkey, nsISupports *aToken, nsIX509Cert * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void findCertNicknames (in nsISupports aToken, in unsigned long aType, out unsigned long count, [array, size_is (count)] out wstring certNameList); */
NS_IMETHODIMP nsX509CertDB::FindCertNicknames(nsISupports *aToken, PRUint32 aType, PRUint32 *count NS_OUTPARAM, PRUnichar * **certNameList NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIX509Cert findEmailEncryptionCert (in AString aNickname); */
NS_IMETHODIMP nsX509CertDB::FindEmailEncryptionCert(const nsAString & aNickname, nsIX509Cert * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIX509Cert findEmailSigningCert (in AString aNickname); */
NS_IMETHODIMP nsX509CertDB::FindEmailSigningCert(const nsAString & aNickname, nsIX509Cert * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIX509Cert findCertByEmailAddress (in nsISupports aToken, in string aEmailAddress); */
NS_IMETHODIMP nsX509CertDB::FindCertByEmailAddress(nsISupports *aToken, const char * aEmailAddress, nsIX509Cert * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void importCertificates ([array, size_is (length)] in octet data, in unsigned long length, in unsigned long type, in nsIInterfaceRequestor ctx); */
NS_IMETHODIMP nsX509CertDB::ImportCertificates(PRUint8 *data, PRUint32 length, PRUint32 type, nsIInterfaceRequestor *ctx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void importEmailCertificate ([array, size_is (length)] in octet data, in unsigned long length, in nsIInterfaceRequestor ctx); */
NS_IMETHODIMP nsX509CertDB::ImportEmailCertificate(PRUint8 *data, PRUint32 length, nsIInterfaceRequestor *ctx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void importServerCertificate ([array, size_is (length)] in octet data, in unsigned long length, in nsIInterfaceRequestor ctx); */
NS_IMETHODIMP nsX509CertDB::ImportServerCertificate(PRUint8 *data, PRUint32 length, nsIInterfaceRequestor *ctx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void importUserCertificate ([array, size_is (length)] in octet data, in unsigned long length, in nsIInterfaceRequestor ctx); */
NS_IMETHODIMP nsX509CertDB::ImportUserCertificate(PRUint8 *data, PRUint32 length, nsIInterfaceRequestor *ctx)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void deleteCertificate (in nsIX509Cert aCert); */
NS_IMETHODIMP nsX509CertDB::DeleteCertificate(nsIX509Cert *aCert)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setCertTrust (in nsIX509Cert cert, in unsigned long type, in unsigned long trust); */
NS_IMETHODIMP nsX509CertDB::SetCertTrust(nsIX509Cert *cert, PRUint32 type, PRUint32 trust)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isCertTrusted (in nsIX509Cert cert, in unsigned long certType, in unsigned long trustType); */
NS_IMETHODIMP nsX509CertDB::IsCertTrusted(nsIX509Cert *cert, PRUint32 certType, PRUint32 trustType, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void importCertsFromFile (in nsISupports aToken, in nsILocalFile aFile, in unsigned long aType); */
NS_IMETHODIMP nsX509CertDB::ImportCertsFromFile(nsISupports *aToken, nsILocalFile *aFile, PRUint32 aType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void importPKCS12File (in nsISupports aToken, in nsILocalFile aFile); */
NS_IMETHODIMP nsX509CertDB::ImportPKCS12File(nsISupports *aToken, nsILocalFile *aFile)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void exportPKCS12File (in nsISupports aToken, in nsILocalFile aFile, in unsigned long count, [array, size_is (count)] in nsIX509Cert aCerts); */
NS_IMETHODIMP nsX509CertDB::ExportPKCS12File(nsISupports *aToken, nsILocalFile *aFile, PRUint32 count, nsIX509Cert **aCerts)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIArray getOCSPResponders (); */
NS_IMETHODIMP nsX509CertDB::GetOCSPResponders(nsIArray * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean isOcspOn; */
NS_IMETHODIMP nsX509CertDB::GetIsOcspOn(PRBool *aIsOcspOn)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* nsIX509Cert constructX509FromBase64 (in string base64); */
NS_IMETHODIMP nsX509CertDB::ConstructX509FromBase64(const char * base64, nsIX509Cert * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsIX509CertDB_h__ */
