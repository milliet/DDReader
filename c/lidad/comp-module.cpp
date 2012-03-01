/*
antigo, do firefox 3:

#include "nsIGenericFactory.h"
#include "CLidaAudio.h"

NS_GENERIC_FACTORY_CONSTRUCTOR(CLidaAudio)

static nsModuleComponentInfo components[] =
{
    {
       LIDAAUDIO_CLASSNAME, 
       LIDAAUDIO_CID,
       LIDAAUDIO_CONTRACTID,
       CLidaAudioConstructor,
    }
};

NS_IMPL_NSGETMODULE("LidaAudioModule", components) 

*/



/*
as libs que usamos:
xpcomglue_s_nomozalloc.lib nss3.lib nspr4.lib xpcom.lib kernel32.lib ole32.lib user32.lib 
*/

#include "stdafx_xmlsec.h"
#include "mozilla-config.h"

#include "CLidaAudio.h"

//este include foi removido no ff4
//#include "nsIGenericFactory.h"
#include "mozilla/ModuleUtils.h"
#include "nsIClassInfoImpl.h"


NS_GENERIC_FACTORY_CONSTRUCTOR(CLidaAudio)
// The following line defines a kNS_SAMPLE_CID CID variable.
//NS_DEFINE_NAMED_CID(NS_SAMPLE_CID);
NS_DEFINE_NAMED_CID(ILIDAAUDIO_IID);


// Build a table of ClassIDs (CIDs) which are implemented by this module. CIDs
// should be completely unique UUIDs.
// each entry has the form { CID, service, factoryproc, constructorproc }
// where factoryproc is usually NULL.
static const mozilla::Module::CIDEntry kSampleCIDs[] = {
    { &kILIDAAUDIO_IID, false, NULL, CLidaAudioConstructor },
    { NULL }
};

// Build a table which maps contract IDs to CIDs.
// A contract is a string which identifies a particular set of functionality. In some
// cases an extension component may override the contract ID of a builtin gecko component
// to modify or extend functionality.
static const mozilla::Module::ContractIDEntry kSampleContracts[] = {
    { LIDAAUDIO_CONTRACTID, &kILIDAAUDIO_IID },
    { NULL }
};


 // Category entries are category/key/value triples which can be used
// to register contract ID as content handlers or to observe certain
// notifications. Most modules do not need to register any category
// entries: this is just a sample of how you'd do it.
// @see nsICategoryManager for information on retrieving category data.
/*
static const mozilla::Module::CategoryEntry kSampleCategories[] = {
    { "lidad.dll/lidaaudio", "lidad.dll/lidaaudio", LIDAAUDIO_CONTRACTID },
    { NULL }
};
*/

static const mozilla::Module kSampleModule = {
    //tentando fazer o FF5 compilar
	//1, //mozilla::Module::kVersion, //  static const int kVersion = 1;
	//para o FF 5 precisa ousar o valor 2 (logico, no sdk do gecko 5 a versão é 2.....
	//no ff5 deve ser 2
	//no ff6 deve ser 6
	//no ff7 deve ser 7
	//no ff8 deve ser 8
	//no ff9 deve ser 9
	mozilla::Module::kVersion,
    kSampleCIDs,
    kSampleContracts,
    NULL	//kSampleCategories
};


// The following line implements the one-and-only "NSModule" symbol exported from this
// shared library.
NSMODULE_DEFN(nsSampleModule) = &kSampleModule;

// The following line implements the one-and-only "NSGetModule" symbol
// for compatibility with mozilla 1.9.2. You should only use this
// if you need a binary which is backwards-compatible and if you use
// interfaces carefully across multiple versions.
NS_IMPL_MOZILLA192_NSGETMODULE(&kSampleModule)



