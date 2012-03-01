/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-m-rel-xr-w32-bld/build/js/jsd/idl/jsdIDebuggerService.idl
 */

#ifndef __gen_jsdIDebuggerService_h__
#define __gen_jsdIDebuggerService_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

#include "jspubtd.h"

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
#include "jsdebug.h"
#include "nsAString.h"
class jsdIDebuggerService; /* forward declaration */

class jsdIFilter; /* forward declaration */

class jsdINestCallback; /* forward declaration */

class jsdIFilterEnumerator; /* forward declaration */

class jsdIContextEnumerator; /* forward declaration */

class jsdIScriptEnumerator; /* forward declaration */

class jsdIScriptHook; /* forward declaration */

class jsdIErrorHook; /* forward declaration */

class jsdIExecutionHook; /* forward declaration */

class jsdICallHook; /* forward declaration */

class jsdIEphemeral; /* forward declaration */

class jsdIContext; /* forward declaration */

class jsdIStackFrame; /* forward declaration */

class jsdIScript; /* forward declaration */

class jsdIValue; /* forward declaration */

class jsdIObject; /* forward declaration */

class jsdIProperty; /* forward declaration */

class jsdIActivationCallback; /* forward declaration */


/* starting interface:    jsdIDebuggerService */
#define JSDIDEBUGGERSERVICE_IID_STR "aa232c7f-855f-4488-a92c-6f89adc668cc"

#define JSDIDEBUGGERSERVICE_IID \
  {0xaa232c7f, 0x855f, 0x4488, \
    { 0xa9, 0x2c, 0x6f, 0x89, 0xad, 0xc6, 0x68, 0xcc }}

class NS_NO_VTABLE NS_SCRIPTABLE jsdIDebuggerService : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(JSDIDEBUGGERSERVICE_IID)

  /* [noscript] readonly attribute JSDContext JSDContext; */
  NS_IMETHOD GetJSDContext(JSDContext **aJSDContext) = 0;

  /* attribute jsdIErrorHook errorHook; */
  NS_SCRIPTABLE NS_IMETHOD GetErrorHook(jsdIErrorHook * *aErrorHook) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetErrorHook(jsdIErrorHook *aErrorHook) = 0;

  /* attribute jsdIScriptHook scriptHook; */
  NS_SCRIPTABLE NS_IMETHOD GetScriptHook(jsdIScriptHook * *aScriptHook) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetScriptHook(jsdIScriptHook *aScriptHook) = 0;

  /* attribute jsdIExecutionHook breakpointHook; */
  NS_SCRIPTABLE NS_IMETHOD GetBreakpointHook(jsdIExecutionHook * *aBreakpointHook) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetBreakpointHook(jsdIExecutionHook *aBreakpointHook) = 0;

  /* attribute jsdIExecutionHook debuggerHook; */
  NS_SCRIPTABLE NS_IMETHOD GetDebuggerHook(jsdIExecutionHook * *aDebuggerHook) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetDebuggerHook(jsdIExecutionHook *aDebuggerHook) = 0;

  /* attribute jsdIExecutionHook debugHook; */
  NS_SCRIPTABLE NS_IMETHOD GetDebugHook(jsdIExecutionHook * *aDebugHook) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetDebugHook(jsdIExecutionHook *aDebugHook) = 0;

  /* attribute jsdIExecutionHook interruptHook; */
  NS_SCRIPTABLE NS_IMETHOD GetInterruptHook(jsdIExecutionHook * *aInterruptHook) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetInterruptHook(jsdIExecutionHook *aInterruptHook) = 0;

  /* attribute jsdIExecutionHook throwHook; */
  NS_SCRIPTABLE NS_IMETHOD GetThrowHook(jsdIExecutionHook * *aThrowHook) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetThrowHook(jsdIExecutionHook *aThrowHook) = 0;

  /* attribute jsdICallHook topLevelHook; */
  NS_SCRIPTABLE NS_IMETHOD GetTopLevelHook(jsdICallHook * *aTopLevelHook) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetTopLevelHook(jsdICallHook *aTopLevelHook) = 0;

  /* attribute jsdICallHook functionHook; */
  NS_SCRIPTABLE NS_IMETHOD GetFunctionHook(jsdICallHook * *aFunctionHook) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetFunctionHook(jsdICallHook *aFunctionHook) = 0;

  enum { VERSION_1_0 = 100 };

  enum { VERSION_1_1 = 110 };

  enum { VERSION_1_2 = 120 };

  enum { VERSION_1_3 = 130 };

  enum { VERSION_1_4 = 140 };

  enum { VERSION_1_5 = 150 };

  enum { VERSION_DEFAULT = 0 };

  enum { VERSION_UNKNOWN = -1 };

  enum { ENABLE_NATIVE_FRAMES = 1U };

  enum { PROFILE_WHEN_SET = 2U };

  enum { DEBUG_WHEN_SET = 4U };

  enum { COLLECT_PROFILE_DATA = 8U };

  enum { HIDE_DISABLED_FRAMES = 16U };

  enum { MASK_TOP_FRAME_ONLY = 32U };

  enum { DISABLE_OBJECT_TRACE_RETIRED = 64U };

  /* attribute unsigned long flags; */
  NS_SCRIPTABLE NS_IMETHOD GetFlags(PRUint32 *aFlags) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetFlags(PRUint32 aFlags) = 0;

  /* readonly attribute unsigned long implementationMajor; */
  NS_SCRIPTABLE NS_IMETHOD GetImplementationMajor(PRUint32 *aImplementationMajor) = 0;

  /* readonly attribute unsigned long implementationMinor; */
  NS_SCRIPTABLE NS_IMETHOD GetImplementationMinor(PRUint32 *aImplementationMinor) = 0;

  /* readonly attribute AUTF8String implementationString; */
  NS_SCRIPTABLE NS_IMETHOD GetImplementationString(nsACString & aImplementationString) = 0;

  /* readonly attribute boolean isOn; */
  NS_SCRIPTABLE NS_IMETHOD GetIsOn(PRBool *aIsOn) = 0;

  /* void on (); */
  NS_SCRIPTABLE NS_IMETHOD On(void) = 0;

  /* void asyncOn (in jsdIActivationCallback callback); */
  NS_SCRIPTABLE NS_IMETHOD AsyncOn(jsdIActivationCallback *callback) = 0;

  /* [noscript] void activateDebugger (in JSRuntime rt); */
  NS_IMETHOD ActivateDebugger(JSRuntime *rt) = 0;

  /* [noscript] void deactivateDebugger (); */
  NS_IMETHOD DeactivateDebugger(void) = 0;

  /* [noscript] void recompileForDebugMode (in JSContext cx, in JSCompartment comp, in boolean mode); */
  NS_IMETHOD RecompileForDebugMode(JSContext *cx, JSCompartment *comp, PRBool mode) = 0;

  /* void off (); */
  NS_SCRIPTABLE NS_IMETHOD Off(void) = 0;

  /* readonly attribute unsigned long pauseDepth; */
  NS_SCRIPTABLE NS_IMETHOD GetPauseDepth(PRUint32 *aPauseDepth) = 0;

  /* unsigned long pause (); */
  NS_SCRIPTABLE NS_IMETHOD Pause(PRUint32 *_retval NS_OUTPARAM) = 0;

  /* unsigned long unPause (); */
  NS_SCRIPTABLE NS_IMETHOD UnPause(PRUint32 *_retval NS_OUTPARAM) = 0;

  /* void GC (); */
  NS_SCRIPTABLE NS_IMETHOD GC(void) = 0;

  /* void clearProfileData (); */
  NS_SCRIPTABLE NS_IMETHOD ClearProfileData(void) = 0;

  /* void insertFilter (in jsdIFilter filter, in jsdIFilter after); */
  NS_SCRIPTABLE NS_IMETHOD InsertFilter(jsdIFilter *filter, jsdIFilter *after) = 0;

  /* void appendFilter (in jsdIFilter filter); */
  NS_SCRIPTABLE NS_IMETHOD AppendFilter(jsdIFilter *filter) = 0;

  /* void removeFilter (in jsdIFilter filter); */
  NS_SCRIPTABLE NS_IMETHOD RemoveFilter(jsdIFilter *filter) = 0;

  /* void swapFilters (in jsdIFilter filter_a, in jsdIFilter filter_b); */
  NS_SCRIPTABLE NS_IMETHOD SwapFilters(jsdIFilter *filter_a, jsdIFilter *filter_b) = 0;

  /* void enumerateFilters (in jsdIFilterEnumerator enumerator); */
  NS_SCRIPTABLE NS_IMETHOD EnumerateFilters(jsdIFilterEnumerator *enumerator) = 0;

  /* void refreshFilters (); */
  NS_SCRIPTABLE NS_IMETHOD RefreshFilters(void) = 0;

  /* void clearFilters (); */
  NS_SCRIPTABLE NS_IMETHOD ClearFilters(void) = 0;

  /* void enumerateContexts (in jsdIContextEnumerator enumerator); */
  NS_SCRIPTABLE NS_IMETHOD EnumerateContexts(jsdIContextEnumerator *enumerator) = 0;

  /* void enumerateScripts (in jsdIScriptEnumerator enumerator); */
  NS_SCRIPTABLE NS_IMETHOD EnumerateScripts(jsdIScriptEnumerator *enumerator) = 0;

  /* void clearAllBreakpoints (); */
  NS_SCRIPTABLE NS_IMETHOD ClearAllBreakpoints(void) = 0;

  /* jsdIValue wrapValue (); */
  NS_SCRIPTABLE NS_IMETHOD WrapValue(jsdIValue * *_retval NS_OUTPARAM) = 0;

  /* [noscript] jsdIValue wrapJSValue (in jsval value); */
  NS_IMETHOD WrapJSValue(const JS::Value & value, jsdIValue * *_retval NS_OUTPARAM) = 0;

  /* unsigned long enterNestedEventLoop (in jsdINestCallback callback); */
  NS_SCRIPTABLE NS_IMETHOD EnterNestedEventLoop(jsdINestCallback *callback, PRUint32 *_retval NS_OUTPARAM) = 0;

  /* unsigned long exitNestedEventLoop (); */
  NS_SCRIPTABLE NS_IMETHOD ExitNestedEventLoop(PRUint32 *_retval NS_OUTPARAM) = 0;

  /* void dumpHeap (in AUTF8String fileName); */
  NS_SCRIPTABLE NS_IMETHOD DumpHeap(const nsACString & fileName) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(jsdIDebuggerService, JSDIDEBUGGERSERVICE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_JSDIDEBUGGERSERVICE \
  NS_IMETHOD GetJSDContext(JSDContext **aJSDContext); \
  NS_SCRIPTABLE NS_IMETHOD GetErrorHook(jsdIErrorHook * *aErrorHook); \
  NS_SCRIPTABLE NS_IMETHOD SetErrorHook(jsdIErrorHook *aErrorHook); \
  NS_SCRIPTABLE NS_IMETHOD GetScriptHook(jsdIScriptHook * *aScriptHook); \
  NS_SCRIPTABLE NS_IMETHOD SetScriptHook(jsdIScriptHook *aScriptHook); \
  NS_SCRIPTABLE NS_IMETHOD GetBreakpointHook(jsdIExecutionHook * *aBreakpointHook); \
  NS_SCRIPTABLE NS_IMETHOD SetBreakpointHook(jsdIExecutionHook *aBreakpointHook); \
  NS_SCRIPTABLE NS_IMETHOD GetDebuggerHook(jsdIExecutionHook * *aDebuggerHook); \
  NS_SCRIPTABLE NS_IMETHOD SetDebuggerHook(jsdIExecutionHook *aDebuggerHook); \
  NS_SCRIPTABLE NS_IMETHOD GetDebugHook(jsdIExecutionHook * *aDebugHook); \
  NS_SCRIPTABLE NS_IMETHOD SetDebugHook(jsdIExecutionHook *aDebugHook); \
  NS_SCRIPTABLE NS_IMETHOD GetInterruptHook(jsdIExecutionHook * *aInterruptHook); \
  NS_SCRIPTABLE NS_IMETHOD SetInterruptHook(jsdIExecutionHook *aInterruptHook); \
  NS_SCRIPTABLE NS_IMETHOD GetThrowHook(jsdIExecutionHook * *aThrowHook); \
  NS_SCRIPTABLE NS_IMETHOD SetThrowHook(jsdIExecutionHook *aThrowHook); \
  NS_SCRIPTABLE NS_IMETHOD GetTopLevelHook(jsdICallHook * *aTopLevelHook); \
  NS_SCRIPTABLE NS_IMETHOD SetTopLevelHook(jsdICallHook *aTopLevelHook); \
  NS_SCRIPTABLE NS_IMETHOD GetFunctionHook(jsdICallHook * *aFunctionHook); \
  NS_SCRIPTABLE NS_IMETHOD SetFunctionHook(jsdICallHook *aFunctionHook); \
  NS_SCRIPTABLE NS_IMETHOD GetFlags(PRUint32 *aFlags); \
  NS_SCRIPTABLE NS_IMETHOD SetFlags(PRUint32 aFlags); \
  NS_SCRIPTABLE NS_IMETHOD GetImplementationMajor(PRUint32 *aImplementationMajor); \
  NS_SCRIPTABLE NS_IMETHOD GetImplementationMinor(PRUint32 *aImplementationMinor); \
  NS_SCRIPTABLE NS_IMETHOD GetImplementationString(nsACString & aImplementationString); \
  NS_SCRIPTABLE NS_IMETHOD GetIsOn(PRBool *aIsOn); \
  NS_SCRIPTABLE NS_IMETHOD On(void); \
  NS_SCRIPTABLE NS_IMETHOD AsyncOn(jsdIActivationCallback *callback); \
  NS_IMETHOD ActivateDebugger(JSRuntime *rt); \
  NS_IMETHOD DeactivateDebugger(void); \
  NS_IMETHOD RecompileForDebugMode(JSContext *cx, JSCompartment *comp, PRBool mode); \
  NS_SCRIPTABLE NS_IMETHOD Off(void); \
  NS_SCRIPTABLE NS_IMETHOD GetPauseDepth(PRUint32 *aPauseDepth); \
  NS_SCRIPTABLE NS_IMETHOD Pause(PRUint32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD UnPause(PRUint32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GC(void); \
  NS_SCRIPTABLE NS_IMETHOD ClearProfileData(void); \
  NS_SCRIPTABLE NS_IMETHOD InsertFilter(jsdIFilter *filter, jsdIFilter *after); \
  NS_SCRIPTABLE NS_IMETHOD AppendFilter(jsdIFilter *filter); \
  NS_SCRIPTABLE NS_IMETHOD RemoveFilter(jsdIFilter *filter); \
  NS_SCRIPTABLE NS_IMETHOD SwapFilters(jsdIFilter *filter_a, jsdIFilter *filter_b); \
  NS_SCRIPTABLE NS_IMETHOD EnumerateFilters(jsdIFilterEnumerator *enumerator); \
  NS_SCRIPTABLE NS_IMETHOD RefreshFilters(void); \
  NS_SCRIPTABLE NS_IMETHOD ClearFilters(void); \
  NS_SCRIPTABLE NS_IMETHOD EnumerateContexts(jsdIContextEnumerator *enumerator); \
  NS_SCRIPTABLE NS_IMETHOD EnumerateScripts(jsdIScriptEnumerator *enumerator); \
  NS_SCRIPTABLE NS_IMETHOD ClearAllBreakpoints(void); \
  NS_SCRIPTABLE NS_IMETHOD WrapValue(jsdIValue * *_retval NS_OUTPARAM); \
  NS_IMETHOD WrapJSValue(const JS::Value & value, jsdIValue * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD EnterNestedEventLoop(jsdINestCallback *callback, PRUint32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD ExitNestedEventLoop(PRUint32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD DumpHeap(const nsACString & fileName); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_JSDIDEBUGGERSERVICE(_to) \
  NS_IMETHOD GetJSDContext(JSDContext **aJSDContext) { return _to GetJSDContext(aJSDContext); } \
  NS_SCRIPTABLE NS_IMETHOD GetErrorHook(jsdIErrorHook * *aErrorHook) { return _to GetErrorHook(aErrorHook); } \
  NS_SCRIPTABLE NS_IMETHOD SetErrorHook(jsdIErrorHook *aErrorHook) { return _to SetErrorHook(aErrorHook); } \
  NS_SCRIPTABLE NS_IMETHOD GetScriptHook(jsdIScriptHook * *aScriptHook) { return _to GetScriptHook(aScriptHook); } \
  NS_SCRIPTABLE NS_IMETHOD SetScriptHook(jsdIScriptHook *aScriptHook) { return _to SetScriptHook(aScriptHook); } \
  NS_SCRIPTABLE NS_IMETHOD GetBreakpointHook(jsdIExecutionHook * *aBreakpointHook) { return _to GetBreakpointHook(aBreakpointHook); } \
  NS_SCRIPTABLE NS_IMETHOD SetBreakpointHook(jsdIExecutionHook *aBreakpointHook) { return _to SetBreakpointHook(aBreakpointHook); } \
  NS_SCRIPTABLE NS_IMETHOD GetDebuggerHook(jsdIExecutionHook * *aDebuggerHook) { return _to GetDebuggerHook(aDebuggerHook); } \
  NS_SCRIPTABLE NS_IMETHOD SetDebuggerHook(jsdIExecutionHook *aDebuggerHook) { return _to SetDebuggerHook(aDebuggerHook); } \
  NS_SCRIPTABLE NS_IMETHOD GetDebugHook(jsdIExecutionHook * *aDebugHook) { return _to GetDebugHook(aDebugHook); } \
  NS_SCRIPTABLE NS_IMETHOD SetDebugHook(jsdIExecutionHook *aDebugHook) { return _to SetDebugHook(aDebugHook); } \
  NS_SCRIPTABLE NS_IMETHOD GetInterruptHook(jsdIExecutionHook * *aInterruptHook) { return _to GetInterruptHook(aInterruptHook); } \
  NS_SCRIPTABLE NS_IMETHOD SetInterruptHook(jsdIExecutionHook *aInterruptHook) { return _to SetInterruptHook(aInterruptHook); } \
  NS_SCRIPTABLE NS_IMETHOD GetThrowHook(jsdIExecutionHook * *aThrowHook) { return _to GetThrowHook(aThrowHook); } \
  NS_SCRIPTABLE NS_IMETHOD SetThrowHook(jsdIExecutionHook *aThrowHook) { return _to SetThrowHook(aThrowHook); } \
  NS_SCRIPTABLE NS_IMETHOD GetTopLevelHook(jsdICallHook * *aTopLevelHook) { return _to GetTopLevelHook(aTopLevelHook); } \
  NS_SCRIPTABLE NS_IMETHOD SetTopLevelHook(jsdICallHook *aTopLevelHook) { return _to SetTopLevelHook(aTopLevelHook); } \
  NS_SCRIPTABLE NS_IMETHOD GetFunctionHook(jsdICallHook * *aFunctionHook) { return _to GetFunctionHook(aFunctionHook); } \
  NS_SCRIPTABLE NS_IMETHOD SetFunctionHook(jsdICallHook *aFunctionHook) { return _to SetFunctionHook(aFunctionHook); } \
  NS_SCRIPTABLE NS_IMETHOD GetFlags(PRUint32 *aFlags) { return _to GetFlags(aFlags); } \
  NS_SCRIPTABLE NS_IMETHOD SetFlags(PRUint32 aFlags) { return _to SetFlags(aFlags); } \
  NS_SCRIPTABLE NS_IMETHOD GetImplementationMajor(PRUint32 *aImplementationMajor) { return _to GetImplementationMajor(aImplementationMajor); } \
  NS_SCRIPTABLE NS_IMETHOD GetImplementationMinor(PRUint32 *aImplementationMinor) { return _to GetImplementationMinor(aImplementationMinor); } \
  NS_SCRIPTABLE NS_IMETHOD GetImplementationString(nsACString & aImplementationString) { return _to GetImplementationString(aImplementationString); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsOn(PRBool *aIsOn) { return _to GetIsOn(aIsOn); } \
  NS_SCRIPTABLE NS_IMETHOD On(void) { return _to On(); } \
  NS_SCRIPTABLE NS_IMETHOD AsyncOn(jsdIActivationCallback *callback) { return _to AsyncOn(callback); } \
  NS_IMETHOD ActivateDebugger(JSRuntime *rt) { return _to ActivateDebugger(rt); } \
  NS_IMETHOD DeactivateDebugger(void) { return _to DeactivateDebugger(); } \
  NS_IMETHOD RecompileForDebugMode(JSContext *cx, JSCompartment *comp, PRBool mode) { return _to RecompileForDebugMode(cx, comp, mode); } \
  NS_SCRIPTABLE NS_IMETHOD Off(void) { return _to Off(); } \
  NS_SCRIPTABLE NS_IMETHOD GetPauseDepth(PRUint32 *aPauseDepth) { return _to GetPauseDepth(aPauseDepth); } \
  NS_SCRIPTABLE NS_IMETHOD Pause(PRUint32 *_retval NS_OUTPARAM) { return _to Pause(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD UnPause(PRUint32 *_retval NS_OUTPARAM) { return _to UnPause(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GC(void) { return _to GC(); } \
  NS_SCRIPTABLE NS_IMETHOD ClearProfileData(void) { return _to ClearProfileData(); } \
  NS_SCRIPTABLE NS_IMETHOD InsertFilter(jsdIFilter *filter, jsdIFilter *after) { return _to InsertFilter(filter, after); } \
  NS_SCRIPTABLE NS_IMETHOD AppendFilter(jsdIFilter *filter) { return _to AppendFilter(filter); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveFilter(jsdIFilter *filter) { return _to RemoveFilter(filter); } \
  NS_SCRIPTABLE NS_IMETHOD SwapFilters(jsdIFilter *filter_a, jsdIFilter *filter_b) { return _to SwapFilters(filter_a, filter_b); } \
  NS_SCRIPTABLE NS_IMETHOD EnumerateFilters(jsdIFilterEnumerator *enumerator) { return _to EnumerateFilters(enumerator); } \
  NS_SCRIPTABLE NS_IMETHOD RefreshFilters(void) { return _to RefreshFilters(); } \
  NS_SCRIPTABLE NS_IMETHOD ClearFilters(void) { return _to ClearFilters(); } \
  NS_SCRIPTABLE NS_IMETHOD EnumerateContexts(jsdIContextEnumerator *enumerator) { return _to EnumerateContexts(enumerator); } \
  NS_SCRIPTABLE NS_IMETHOD EnumerateScripts(jsdIScriptEnumerator *enumerator) { return _to EnumerateScripts(enumerator); } \
  NS_SCRIPTABLE NS_IMETHOD ClearAllBreakpoints(void) { return _to ClearAllBreakpoints(); } \
  NS_SCRIPTABLE NS_IMETHOD WrapValue(jsdIValue * *_retval NS_OUTPARAM) { return _to WrapValue(_retval); } \
  NS_IMETHOD WrapJSValue(const JS::Value & value, jsdIValue * *_retval NS_OUTPARAM) { return _to WrapJSValue(value, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD EnterNestedEventLoop(jsdINestCallback *callback, PRUint32 *_retval NS_OUTPARAM) { return _to EnterNestedEventLoop(callback, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ExitNestedEventLoop(PRUint32 *_retval NS_OUTPARAM) { return _to ExitNestedEventLoop(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD DumpHeap(const nsACString & fileName) { return _to DumpHeap(fileName); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_JSDIDEBUGGERSERVICE(_to) \
  NS_IMETHOD GetJSDContext(JSDContext **aJSDContext) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetJSDContext(aJSDContext); } \
  NS_SCRIPTABLE NS_IMETHOD GetErrorHook(jsdIErrorHook * *aErrorHook) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetErrorHook(aErrorHook); } \
  NS_SCRIPTABLE NS_IMETHOD SetErrorHook(jsdIErrorHook *aErrorHook) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetErrorHook(aErrorHook); } \
  NS_SCRIPTABLE NS_IMETHOD GetScriptHook(jsdIScriptHook * *aScriptHook) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetScriptHook(aScriptHook); } \
  NS_SCRIPTABLE NS_IMETHOD SetScriptHook(jsdIScriptHook *aScriptHook) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetScriptHook(aScriptHook); } \
  NS_SCRIPTABLE NS_IMETHOD GetBreakpointHook(jsdIExecutionHook * *aBreakpointHook) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBreakpointHook(aBreakpointHook); } \
  NS_SCRIPTABLE NS_IMETHOD SetBreakpointHook(jsdIExecutionHook *aBreakpointHook) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetBreakpointHook(aBreakpointHook); } \
  NS_SCRIPTABLE NS_IMETHOD GetDebuggerHook(jsdIExecutionHook * *aDebuggerHook) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDebuggerHook(aDebuggerHook); } \
  NS_SCRIPTABLE NS_IMETHOD SetDebuggerHook(jsdIExecutionHook *aDebuggerHook) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDebuggerHook(aDebuggerHook); } \
  NS_SCRIPTABLE NS_IMETHOD GetDebugHook(jsdIExecutionHook * *aDebugHook) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDebugHook(aDebugHook); } \
  NS_SCRIPTABLE NS_IMETHOD SetDebugHook(jsdIExecutionHook *aDebugHook) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetDebugHook(aDebugHook); } \
  NS_SCRIPTABLE NS_IMETHOD GetInterruptHook(jsdIExecutionHook * *aInterruptHook) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetInterruptHook(aInterruptHook); } \
  NS_SCRIPTABLE NS_IMETHOD SetInterruptHook(jsdIExecutionHook *aInterruptHook) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetInterruptHook(aInterruptHook); } \
  NS_SCRIPTABLE NS_IMETHOD GetThrowHook(jsdIExecutionHook * *aThrowHook) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetThrowHook(aThrowHook); } \
  NS_SCRIPTABLE NS_IMETHOD SetThrowHook(jsdIExecutionHook *aThrowHook) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetThrowHook(aThrowHook); } \
  NS_SCRIPTABLE NS_IMETHOD GetTopLevelHook(jsdICallHook * *aTopLevelHook) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTopLevelHook(aTopLevelHook); } \
  NS_SCRIPTABLE NS_IMETHOD SetTopLevelHook(jsdICallHook *aTopLevelHook) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetTopLevelHook(aTopLevelHook); } \
  NS_SCRIPTABLE NS_IMETHOD GetFunctionHook(jsdICallHook * *aFunctionHook) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFunctionHook(aFunctionHook); } \
  NS_SCRIPTABLE NS_IMETHOD SetFunctionHook(jsdICallHook *aFunctionHook) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFunctionHook(aFunctionHook); } \
  NS_SCRIPTABLE NS_IMETHOD GetFlags(PRUint32 *aFlags) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFlags(aFlags); } \
  NS_SCRIPTABLE NS_IMETHOD SetFlags(PRUint32 aFlags) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFlags(aFlags); } \
  NS_SCRIPTABLE NS_IMETHOD GetImplementationMajor(PRUint32 *aImplementationMajor) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetImplementationMajor(aImplementationMajor); } \
  NS_SCRIPTABLE NS_IMETHOD GetImplementationMinor(PRUint32 *aImplementationMinor) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetImplementationMinor(aImplementationMinor); } \
  NS_SCRIPTABLE NS_IMETHOD GetImplementationString(nsACString & aImplementationString) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetImplementationString(aImplementationString); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsOn(PRBool *aIsOn) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsOn(aIsOn); } \
  NS_SCRIPTABLE NS_IMETHOD On(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->On(); } \
  NS_SCRIPTABLE NS_IMETHOD AsyncOn(jsdIActivationCallback *callback) { return !_to ? NS_ERROR_NULL_POINTER : _to->AsyncOn(callback); } \
  NS_IMETHOD ActivateDebugger(JSRuntime *rt) { return !_to ? NS_ERROR_NULL_POINTER : _to->ActivateDebugger(rt); } \
  NS_IMETHOD DeactivateDebugger(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->DeactivateDebugger(); } \
  NS_IMETHOD RecompileForDebugMode(JSContext *cx, JSCompartment *comp, PRBool mode) { return !_to ? NS_ERROR_NULL_POINTER : _to->RecompileForDebugMode(cx, comp, mode); } \
  NS_SCRIPTABLE NS_IMETHOD Off(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Off(); } \
  NS_SCRIPTABLE NS_IMETHOD GetPauseDepth(PRUint32 *aPauseDepth) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPauseDepth(aPauseDepth); } \
  NS_SCRIPTABLE NS_IMETHOD Pause(PRUint32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Pause(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD UnPause(PRUint32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->UnPause(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD GC(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->GC(); } \
  NS_SCRIPTABLE NS_IMETHOD ClearProfileData(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->ClearProfileData(); } \
  NS_SCRIPTABLE NS_IMETHOD InsertFilter(jsdIFilter *filter, jsdIFilter *after) { return !_to ? NS_ERROR_NULL_POINTER : _to->InsertFilter(filter, after); } \
  NS_SCRIPTABLE NS_IMETHOD AppendFilter(jsdIFilter *filter) { return !_to ? NS_ERROR_NULL_POINTER : _to->AppendFilter(filter); } \
  NS_SCRIPTABLE NS_IMETHOD RemoveFilter(jsdIFilter *filter) { return !_to ? NS_ERROR_NULL_POINTER : _to->RemoveFilter(filter); } \
  NS_SCRIPTABLE NS_IMETHOD SwapFilters(jsdIFilter *filter_a, jsdIFilter *filter_b) { return !_to ? NS_ERROR_NULL_POINTER : _to->SwapFilters(filter_a, filter_b); } \
  NS_SCRIPTABLE NS_IMETHOD EnumerateFilters(jsdIFilterEnumerator *enumerator) { return !_to ? NS_ERROR_NULL_POINTER : _to->EnumerateFilters(enumerator); } \
  NS_SCRIPTABLE NS_IMETHOD RefreshFilters(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->RefreshFilters(); } \
  NS_SCRIPTABLE NS_IMETHOD ClearFilters(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->ClearFilters(); } \
  NS_SCRIPTABLE NS_IMETHOD EnumerateContexts(jsdIContextEnumerator *enumerator) { return !_to ? NS_ERROR_NULL_POINTER : _to->EnumerateContexts(enumerator); } \
  NS_SCRIPTABLE NS_IMETHOD EnumerateScripts(jsdIScriptEnumerator *enumerator) { return !_to ? NS_ERROR_NULL_POINTER : _to->EnumerateScripts(enumerator); } \
  NS_SCRIPTABLE NS_IMETHOD ClearAllBreakpoints(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->ClearAllBreakpoints(); } \
  NS_SCRIPTABLE NS_IMETHOD WrapValue(jsdIValue * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->WrapValue(_retval); } \
  NS_IMETHOD WrapJSValue(const JS::Value & value, jsdIValue * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->WrapJSValue(value, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD EnterNestedEventLoop(jsdINestCallback *callback, PRUint32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->EnterNestedEventLoop(callback, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD ExitNestedEventLoop(PRUint32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->ExitNestedEventLoop(_retval); } \
  NS_SCRIPTABLE NS_IMETHOD DumpHeap(const nsACString & fileName) { return !_to ? NS_ERROR_NULL_POINTER : _to->DumpHeap(fileName); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public jsdIDebuggerService
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_JSDIDEBUGGERSERVICE

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, jsdIDebuggerService)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* [noscript] readonly attribute JSDContext JSDContext; */
NS_IMETHODIMP _MYCLASS_::GetJSDContext(JSDContext **aJSDContext)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute jsdIErrorHook errorHook; */
NS_IMETHODIMP _MYCLASS_::GetErrorHook(jsdIErrorHook * *aErrorHook)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetErrorHook(jsdIErrorHook *aErrorHook)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute jsdIScriptHook scriptHook; */
NS_IMETHODIMP _MYCLASS_::GetScriptHook(jsdIScriptHook * *aScriptHook)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetScriptHook(jsdIScriptHook *aScriptHook)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute jsdIExecutionHook breakpointHook; */
NS_IMETHODIMP _MYCLASS_::GetBreakpointHook(jsdIExecutionHook * *aBreakpointHook)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetBreakpointHook(jsdIExecutionHook *aBreakpointHook)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute jsdIExecutionHook debuggerHook; */
NS_IMETHODIMP _MYCLASS_::GetDebuggerHook(jsdIExecutionHook * *aDebuggerHook)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetDebuggerHook(jsdIExecutionHook *aDebuggerHook)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute jsdIExecutionHook debugHook; */
NS_IMETHODIMP _MYCLASS_::GetDebugHook(jsdIExecutionHook * *aDebugHook)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetDebugHook(jsdIExecutionHook *aDebugHook)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute jsdIExecutionHook interruptHook; */
NS_IMETHODIMP _MYCLASS_::GetInterruptHook(jsdIExecutionHook * *aInterruptHook)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetInterruptHook(jsdIExecutionHook *aInterruptHook)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute jsdIExecutionHook throwHook; */
NS_IMETHODIMP _MYCLASS_::GetThrowHook(jsdIExecutionHook * *aThrowHook)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetThrowHook(jsdIExecutionHook *aThrowHook)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute jsdICallHook topLevelHook; */
NS_IMETHODIMP _MYCLASS_::GetTopLevelHook(jsdICallHook * *aTopLevelHook)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetTopLevelHook(jsdICallHook *aTopLevelHook)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute jsdICallHook functionHook; */
NS_IMETHODIMP _MYCLASS_::GetFunctionHook(jsdICallHook * *aFunctionHook)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetFunctionHook(jsdICallHook *aFunctionHook)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long flags; */
NS_IMETHODIMP _MYCLASS_::GetFlags(PRUint32 *aFlags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetFlags(PRUint32 aFlags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long implementationMajor; */
NS_IMETHODIMP _MYCLASS_::GetImplementationMajor(PRUint32 *aImplementationMajor)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long implementationMinor; */
NS_IMETHODIMP _MYCLASS_::GetImplementationMinor(PRUint32 *aImplementationMinor)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AUTF8String implementationString; */
NS_IMETHODIMP _MYCLASS_::GetImplementationString(nsACString & aImplementationString)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean isOn; */
NS_IMETHODIMP _MYCLASS_::GetIsOn(PRBool *aIsOn)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void on (); */
NS_IMETHODIMP _MYCLASS_::On()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void asyncOn (in jsdIActivationCallback callback); */
NS_IMETHODIMP _MYCLASS_::AsyncOn(jsdIActivationCallback *callback)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void activateDebugger (in JSRuntime rt); */
NS_IMETHODIMP _MYCLASS_::ActivateDebugger(JSRuntime *rt)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void deactivateDebugger (); */
NS_IMETHODIMP _MYCLASS_::DeactivateDebugger()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void recompileForDebugMode (in JSContext cx, in JSCompartment comp, in boolean mode); */
NS_IMETHODIMP _MYCLASS_::RecompileForDebugMode(JSContext *cx, JSCompartment *comp, PRBool mode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void off (); */
NS_IMETHODIMP _MYCLASS_::Off()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long pauseDepth; */
NS_IMETHODIMP _MYCLASS_::GetPauseDepth(PRUint32 *aPauseDepth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* unsigned long pause (); */
NS_IMETHODIMP _MYCLASS_::Pause(PRUint32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* unsigned long unPause (); */
NS_IMETHODIMP _MYCLASS_::UnPause(PRUint32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void GC (); */
NS_IMETHODIMP _MYCLASS_::GC()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void clearProfileData (); */
NS_IMETHODIMP _MYCLASS_::ClearProfileData()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void insertFilter (in jsdIFilter filter, in jsdIFilter after); */
NS_IMETHODIMP _MYCLASS_::InsertFilter(jsdIFilter *filter, jsdIFilter *after)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void appendFilter (in jsdIFilter filter); */
NS_IMETHODIMP _MYCLASS_::AppendFilter(jsdIFilter *filter)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void removeFilter (in jsdIFilter filter); */
NS_IMETHODIMP _MYCLASS_::RemoveFilter(jsdIFilter *filter)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void swapFilters (in jsdIFilter filter_a, in jsdIFilter filter_b); */
NS_IMETHODIMP _MYCLASS_::SwapFilters(jsdIFilter *filter_a, jsdIFilter *filter_b)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void enumerateFilters (in jsdIFilterEnumerator enumerator); */
NS_IMETHODIMP _MYCLASS_::EnumerateFilters(jsdIFilterEnumerator *enumerator)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void refreshFilters (); */
NS_IMETHODIMP _MYCLASS_::RefreshFilters()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void clearFilters (); */
NS_IMETHODIMP _MYCLASS_::ClearFilters()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void enumerateContexts (in jsdIContextEnumerator enumerator); */
NS_IMETHODIMP _MYCLASS_::EnumerateContexts(jsdIContextEnumerator *enumerator)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void enumerateScripts (in jsdIScriptEnumerator enumerator); */
NS_IMETHODIMP _MYCLASS_::EnumerateScripts(jsdIScriptEnumerator *enumerator)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void clearAllBreakpoints (); */
NS_IMETHODIMP _MYCLASS_::ClearAllBreakpoints()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* jsdIValue wrapValue (); */
NS_IMETHODIMP _MYCLASS_::WrapValue(jsdIValue * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] jsdIValue wrapJSValue (in jsval value); */
NS_IMETHODIMP _MYCLASS_::WrapJSValue(const JS::Value & value, jsdIValue * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* unsigned long enterNestedEventLoop (in jsdINestCallback callback); */
NS_IMETHODIMP _MYCLASS_::EnterNestedEventLoop(jsdINestCallback *callback, PRUint32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* unsigned long exitNestedEventLoop (); */
NS_IMETHODIMP _MYCLASS_::ExitNestedEventLoop(PRUint32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void dumpHeap (in AUTF8String fileName); */
NS_IMETHODIMP _MYCLASS_::DumpHeap(const nsACString & fileName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    jsdIFilter */
#define JSDIFILTER_IID_STR "0c9189d9-4287-47a4-bca6-6ed65aaf737f"

#define JSDIFILTER_IID \
  {0x0c9189d9, 0x4287, 0x47a4, \
    { 0xbc, 0xa6, 0x6e, 0xd6, 0x5a, 0xaf, 0x73, 0x7f }}

class NS_NO_VTABLE NS_SCRIPTABLE jsdIFilter : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(JSDIFILTER_IID)

  enum { FLAG_RESERVED_MASK = 255U };

  enum { FLAG_ENABLED = 1U };

  enum { FLAG_PASS = 2U };

  /* attribute unsigned long flags; */
  NS_SCRIPTABLE NS_IMETHOD GetFlags(PRUint32 *aFlags) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetFlags(PRUint32 aFlags) = 0;

  /* attribute nsISupports globalObject; */
  NS_SCRIPTABLE NS_IMETHOD GetGlobalObject(nsISupports * *aGlobalObject) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetGlobalObject(nsISupports *aGlobalObject) = 0;

  /* attribute AUTF8String urlPattern; */
  NS_SCRIPTABLE NS_IMETHOD GetUrlPattern(nsACString & aUrlPattern) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetUrlPattern(const nsACString & aUrlPattern) = 0;

  /* attribute unsigned long startLine; */
  NS_SCRIPTABLE NS_IMETHOD GetStartLine(PRUint32 *aStartLine) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetStartLine(PRUint32 aStartLine) = 0;

  /* attribute unsigned long endLine; */
  NS_SCRIPTABLE NS_IMETHOD GetEndLine(PRUint32 *aEndLine) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetEndLine(PRUint32 aEndLine) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(jsdIFilter, JSDIFILTER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_JSDIFILTER \
  NS_SCRIPTABLE NS_IMETHOD GetFlags(PRUint32 *aFlags); \
  NS_SCRIPTABLE NS_IMETHOD SetFlags(PRUint32 aFlags); \
  NS_SCRIPTABLE NS_IMETHOD GetGlobalObject(nsISupports * *aGlobalObject); \
  NS_SCRIPTABLE NS_IMETHOD SetGlobalObject(nsISupports *aGlobalObject); \
  NS_SCRIPTABLE NS_IMETHOD GetUrlPattern(nsACString & aUrlPattern); \
  NS_SCRIPTABLE NS_IMETHOD SetUrlPattern(const nsACString & aUrlPattern); \
  NS_SCRIPTABLE NS_IMETHOD GetStartLine(PRUint32 *aStartLine); \
  NS_SCRIPTABLE NS_IMETHOD SetStartLine(PRUint32 aStartLine); \
  NS_SCRIPTABLE NS_IMETHOD GetEndLine(PRUint32 *aEndLine); \
  NS_SCRIPTABLE NS_IMETHOD SetEndLine(PRUint32 aEndLine); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_JSDIFILTER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetFlags(PRUint32 *aFlags) { return _to GetFlags(aFlags); } \
  NS_SCRIPTABLE NS_IMETHOD SetFlags(PRUint32 aFlags) { return _to SetFlags(aFlags); } \
  NS_SCRIPTABLE NS_IMETHOD GetGlobalObject(nsISupports * *aGlobalObject) { return _to GetGlobalObject(aGlobalObject); } \
  NS_SCRIPTABLE NS_IMETHOD SetGlobalObject(nsISupports *aGlobalObject) { return _to SetGlobalObject(aGlobalObject); } \
  NS_SCRIPTABLE NS_IMETHOD GetUrlPattern(nsACString & aUrlPattern) { return _to GetUrlPattern(aUrlPattern); } \
  NS_SCRIPTABLE NS_IMETHOD SetUrlPattern(const nsACString & aUrlPattern) { return _to SetUrlPattern(aUrlPattern); } \
  NS_SCRIPTABLE NS_IMETHOD GetStartLine(PRUint32 *aStartLine) { return _to GetStartLine(aStartLine); } \
  NS_SCRIPTABLE NS_IMETHOD SetStartLine(PRUint32 aStartLine) { return _to SetStartLine(aStartLine); } \
  NS_SCRIPTABLE NS_IMETHOD GetEndLine(PRUint32 *aEndLine) { return _to GetEndLine(aEndLine); } \
  NS_SCRIPTABLE NS_IMETHOD SetEndLine(PRUint32 aEndLine) { return _to SetEndLine(aEndLine); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_JSDIFILTER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetFlags(PRUint32 *aFlags) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFlags(aFlags); } \
  NS_SCRIPTABLE NS_IMETHOD SetFlags(PRUint32 aFlags) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFlags(aFlags); } \
  NS_SCRIPTABLE NS_IMETHOD GetGlobalObject(nsISupports * *aGlobalObject) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetGlobalObject(aGlobalObject); } \
  NS_SCRIPTABLE NS_IMETHOD SetGlobalObject(nsISupports *aGlobalObject) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetGlobalObject(aGlobalObject); } \
  NS_SCRIPTABLE NS_IMETHOD GetUrlPattern(nsACString & aUrlPattern) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetUrlPattern(aUrlPattern); } \
  NS_SCRIPTABLE NS_IMETHOD SetUrlPattern(const nsACString & aUrlPattern) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetUrlPattern(aUrlPattern); } \
  NS_SCRIPTABLE NS_IMETHOD GetStartLine(PRUint32 *aStartLine) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStartLine(aStartLine); } \
  NS_SCRIPTABLE NS_IMETHOD SetStartLine(PRUint32 aStartLine) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetStartLine(aStartLine); } \
  NS_SCRIPTABLE NS_IMETHOD GetEndLine(PRUint32 *aEndLine) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEndLine(aEndLine); } \
  NS_SCRIPTABLE NS_IMETHOD SetEndLine(PRUint32 aEndLine) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetEndLine(aEndLine); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public jsdIFilter
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_JSDIFILTER

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, jsdIFilter)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* attribute unsigned long flags; */
NS_IMETHODIMP _MYCLASS_::GetFlags(PRUint32 *aFlags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetFlags(PRUint32 aFlags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsISupports globalObject; */
NS_IMETHODIMP _MYCLASS_::GetGlobalObject(nsISupports * *aGlobalObject)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetGlobalObject(nsISupports *aGlobalObject)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute AUTF8String urlPattern; */
NS_IMETHODIMP _MYCLASS_::GetUrlPattern(nsACString & aUrlPattern)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetUrlPattern(const nsACString & aUrlPattern)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long startLine; */
NS_IMETHODIMP _MYCLASS_::GetStartLine(PRUint32 *aStartLine)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetStartLine(PRUint32 aStartLine)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long endLine; */
NS_IMETHODIMP _MYCLASS_::GetEndLine(PRUint32 *aEndLine)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetEndLine(PRUint32 aEndLine)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    jsdIActivationCallback */
#define JSDIACTIVATIONCALLBACK_IID_STR "6da7f5fb-3a84-4abe-9e23-8b2045960732"

#define JSDIACTIVATIONCALLBACK_IID \
  {0x6da7f5fb, 0x3a84, 0x4abe, \
    { 0x9e, 0x23, 0x8b, 0x20, 0x45, 0x96, 0x07, 0x32 }}

class NS_NO_VTABLE NS_SCRIPTABLE jsdIActivationCallback : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(JSDIACTIVATIONCALLBACK_IID)

  /* void onDebuggerActivated (); */
  NS_SCRIPTABLE NS_IMETHOD OnDebuggerActivated(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(jsdIActivationCallback, JSDIACTIVATIONCALLBACK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_JSDIACTIVATIONCALLBACK \
  NS_SCRIPTABLE NS_IMETHOD OnDebuggerActivated(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_JSDIACTIVATIONCALLBACK(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnDebuggerActivated(void) { return _to OnDebuggerActivated(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_JSDIACTIVATIONCALLBACK(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnDebuggerActivated(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnDebuggerActivated(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public jsdIActivationCallback
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_JSDIACTIVATIONCALLBACK

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, jsdIActivationCallback)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void onDebuggerActivated (); */
NS_IMETHODIMP _MYCLASS_::OnDebuggerActivated()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    jsdINestCallback */
#define JSDINESTCALLBACK_IID_STR "88bea60f-9b5d-4b39-b08b-1c3a278782c6"

#define JSDINESTCALLBACK_IID \
  {0x88bea60f, 0x9b5d, 0x4b39, \
    { 0xb0, 0x8b, 0x1c, 0x3a, 0x27, 0x87, 0x82, 0xc6 }}

class NS_NO_VTABLE NS_SCRIPTABLE jsdINestCallback : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(JSDINESTCALLBACK_IID)

  /* void onNest (); */
  NS_SCRIPTABLE NS_IMETHOD OnNest(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(jsdINestCallback, JSDINESTCALLBACK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_JSDINESTCALLBACK \
  NS_SCRIPTABLE NS_IMETHOD OnNest(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_JSDINESTCALLBACK(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnNest(void) { return _to OnNest(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_JSDINESTCALLBACK(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnNest(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnNest(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public jsdINestCallback
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_JSDINESTCALLBACK

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, jsdINestCallback)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void onNest (); */
NS_IMETHODIMP _MYCLASS_::OnNest()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    jsdIFilterEnumerator */
#define JSDIFILTERENUMERATOR_IID_STR "e391ba85-9379-4762-b387-558e38db730f"

#define JSDIFILTERENUMERATOR_IID \
  {0xe391ba85, 0x9379, 0x4762, \
    { 0xb3, 0x87, 0x55, 0x8e, 0x38, 0xdb, 0x73, 0x0f }}

class NS_NO_VTABLE NS_SCRIPTABLE jsdIFilterEnumerator : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(JSDIFILTERENUMERATOR_IID)

  /* void enumerateFilter (in jsdIFilter filter); */
  NS_SCRIPTABLE NS_IMETHOD EnumerateFilter(jsdIFilter *filter) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(jsdIFilterEnumerator, JSDIFILTERENUMERATOR_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_JSDIFILTERENUMERATOR \
  NS_SCRIPTABLE NS_IMETHOD EnumerateFilter(jsdIFilter *filter); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_JSDIFILTERENUMERATOR(_to) \
  NS_SCRIPTABLE NS_IMETHOD EnumerateFilter(jsdIFilter *filter) { return _to EnumerateFilter(filter); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_JSDIFILTERENUMERATOR(_to) \
  NS_SCRIPTABLE NS_IMETHOD EnumerateFilter(jsdIFilter *filter) { return !_to ? NS_ERROR_NULL_POINTER : _to->EnumerateFilter(filter); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public jsdIFilterEnumerator
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_JSDIFILTERENUMERATOR

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, jsdIFilterEnumerator)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void enumerateFilter (in jsdIFilter filter); */
NS_IMETHODIMP _MYCLASS_::EnumerateFilter(jsdIFilter *filter)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    jsdIScriptEnumerator */
#define JSDISCRIPTENUMERATOR_IID_STR "4eef60c2-9bbc-48fa-b196-646a832c6c81"

#define JSDISCRIPTENUMERATOR_IID \
  {0x4eef60c2, 0x9bbc, 0x48fa, \
    { 0xb1, 0x96, 0x64, 0x6a, 0x83, 0x2c, 0x6c, 0x81 }}

class NS_NO_VTABLE NS_SCRIPTABLE jsdIScriptEnumerator : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(JSDISCRIPTENUMERATOR_IID)

  /* void enumerateScript (in jsdIScript script); */
  NS_SCRIPTABLE NS_IMETHOD EnumerateScript(jsdIScript *script) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(jsdIScriptEnumerator, JSDISCRIPTENUMERATOR_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_JSDISCRIPTENUMERATOR \
  NS_SCRIPTABLE NS_IMETHOD EnumerateScript(jsdIScript *script); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_JSDISCRIPTENUMERATOR(_to) \
  NS_SCRIPTABLE NS_IMETHOD EnumerateScript(jsdIScript *script) { return _to EnumerateScript(script); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_JSDISCRIPTENUMERATOR(_to) \
  NS_SCRIPTABLE NS_IMETHOD EnumerateScript(jsdIScript *script) { return !_to ? NS_ERROR_NULL_POINTER : _to->EnumerateScript(script); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public jsdIScriptEnumerator
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_JSDISCRIPTENUMERATOR

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, jsdIScriptEnumerator)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void enumerateScript (in jsdIScript script); */
NS_IMETHODIMP _MYCLASS_::EnumerateScript(jsdIScript *script)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    jsdIContextEnumerator */
#define JSDICONTEXTENUMERATOR_IID_STR "57d18286-550c-4ca9-ac33-56f12ebba91e"

#define JSDICONTEXTENUMERATOR_IID \
  {0x57d18286, 0x550c, 0x4ca9, \
    { 0xac, 0x33, 0x56, 0xf1, 0x2e, 0xbb, 0xa9, 0x1e }}

class NS_NO_VTABLE NS_SCRIPTABLE jsdIContextEnumerator : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(JSDICONTEXTENUMERATOR_IID)

  /* void enumerateContext (in jsdIContext executionContext); */
  NS_SCRIPTABLE NS_IMETHOD EnumerateContext(jsdIContext *executionContext) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(jsdIContextEnumerator, JSDICONTEXTENUMERATOR_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_JSDICONTEXTENUMERATOR \
  NS_SCRIPTABLE NS_IMETHOD EnumerateContext(jsdIContext *executionContext); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_JSDICONTEXTENUMERATOR(_to) \
  NS_SCRIPTABLE NS_IMETHOD EnumerateContext(jsdIContext *executionContext) { return _to EnumerateContext(executionContext); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_JSDICONTEXTENUMERATOR(_to) \
  NS_SCRIPTABLE NS_IMETHOD EnumerateContext(jsdIContext *executionContext) { return !_to ? NS_ERROR_NULL_POINTER : _to->EnumerateContext(executionContext); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public jsdIContextEnumerator
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_JSDICONTEXTENUMERATOR

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, jsdIContextEnumerator)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void enumerateContext (in jsdIContext executionContext); */
NS_IMETHODIMP _MYCLASS_::EnumerateContext(jsdIContext *executionContext)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    jsdIScriptHook */
#define JSDISCRIPTHOOK_IID_STR "d030d1a2-a58a-4f19-b9e3-96da4e2cdd09"

#define JSDISCRIPTHOOK_IID \
  {0xd030d1a2, 0xa58a, 0x4f19, \
    { 0xb9, 0xe3, 0x96, 0xda, 0x4e, 0x2c, 0xdd, 0x09 }}

class NS_NO_VTABLE NS_SCRIPTABLE jsdIScriptHook : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(JSDISCRIPTHOOK_IID)

  /* void onScriptCreated (in jsdIScript script); */
  NS_SCRIPTABLE NS_IMETHOD OnScriptCreated(jsdIScript *script) = 0;

  /* void onScriptDestroyed (in jsdIScript script); */
  NS_SCRIPTABLE NS_IMETHOD OnScriptDestroyed(jsdIScript *script) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(jsdIScriptHook, JSDISCRIPTHOOK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_JSDISCRIPTHOOK \
  NS_SCRIPTABLE NS_IMETHOD OnScriptCreated(jsdIScript *script); \
  NS_SCRIPTABLE NS_IMETHOD OnScriptDestroyed(jsdIScript *script); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_JSDISCRIPTHOOK(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnScriptCreated(jsdIScript *script) { return _to OnScriptCreated(script); } \
  NS_SCRIPTABLE NS_IMETHOD OnScriptDestroyed(jsdIScript *script) { return _to OnScriptDestroyed(script); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_JSDISCRIPTHOOK(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnScriptCreated(jsdIScript *script) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnScriptCreated(script); } \
  NS_SCRIPTABLE NS_IMETHOD OnScriptDestroyed(jsdIScript *script) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnScriptDestroyed(script); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public jsdIScriptHook
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_JSDISCRIPTHOOK

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, jsdIScriptHook)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void onScriptCreated (in jsdIScript script); */
NS_IMETHODIMP _MYCLASS_::OnScriptCreated(jsdIScript *script)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void onScriptDestroyed (in jsdIScript script); */
NS_IMETHODIMP _MYCLASS_::OnScriptDestroyed(jsdIScript *script)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    jsdICallHook */
#define JSDICALLHOOK_IID_STR "3eff1314-7ae3-4cf8-833b-c33c24a55633"

#define JSDICALLHOOK_IID \
  {0x3eff1314, 0x7ae3, 0x4cf8, \
    { 0x83, 0x3b, 0xc3, 0x3c, 0x24, 0xa5, 0x56, 0x33 }}

class NS_NO_VTABLE NS_SCRIPTABLE jsdICallHook : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(JSDICALLHOOK_IID)

  enum { TYPE_TOPLEVEL_START = 0U };

  enum { TYPE_TOPLEVEL_END = 1U };

  enum { TYPE_FUNCTION_CALL = 2U };

  enum { TYPE_FUNCTION_RETURN = 3U };

  /* void onCall (in jsdIStackFrame frame, in unsigned long type); */
  NS_SCRIPTABLE NS_IMETHOD OnCall(jsdIStackFrame *frame, PRUint32 type) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(jsdICallHook, JSDICALLHOOK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_JSDICALLHOOK \
  NS_SCRIPTABLE NS_IMETHOD OnCall(jsdIStackFrame *frame, PRUint32 type); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_JSDICALLHOOK(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnCall(jsdIStackFrame *frame, PRUint32 type) { return _to OnCall(frame, type); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_JSDICALLHOOK(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnCall(jsdIStackFrame *frame, PRUint32 type) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnCall(frame, type); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public jsdICallHook
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_JSDICALLHOOK

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, jsdICallHook)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void onCall (in jsdIStackFrame frame, in unsigned long type); */
NS_IMETHODIMP _MYCLASS_::OnCall(jsdIStackFrame *frame, PRUint32 type)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    jsdIErrorHook */
#define JSDIERRORHOOK_IID_STR "e6b45eee-d974-4d85-9d9e-f5a67218deb4"

#define JSDIERRORHOOK_IID \
  {0xe6b45eee, 0xd974, 0x4d85, \
    { 0x9d, 0x9e, 0xf5, 0xa6, 0x72, 0x18, 0xde, 0xb4 }}

class NS_NO_VTABLE NS_SCRIPTABLE jsdIErrorHook : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(JSDIERRORHOOK_IID)

  enum { REPORT_ERROR = 0U };

  enum { REPORT_WARNING = 1U };

  enum { REPORT_EXCEPTION = 2U };

  enum { REPORT_STRICT = 4U };

  /* boolean onError (in AUTF8String message, in AUTF8String fileName, in unsigned long line, in unsigned long pos, in unsigned long flags, in unsigned long errnum, in jsdIValue exc); */
  NS_SCRIPTABLE NS_IMETHOD OnError(const nsACString & message, const nsACString & fileName, PRUint32 line, PRUint32 pos, PRUint32 flags, PRUint32 errnum, jsdIValue *exc, PRBool *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(jsdIErrorHook, JSDIERRORHOOK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_JSDIERRORHOOK \
  NS_SCRIPTABLE NS_IMETHOD OnError(const nsACString & message, const nsACString & fileName, PRUint32 line, PRUint32 pos, PRUint32 flags, PRUint32 errnum, jsdIValue *exc, PRBool *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_JSDIERRORHOOK(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnError(const nsACString & message, const nsACString & fileName, PRUint32 line, PRUint32 pos, PRUint32 flags, PRUint32 errnum, jsdIValue *exc, PRBool *_retval NS_OUTPARAM) { return _to OnError(message, fileName, line, pos, flags, errnum, exc, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_JSDIERRORHOOK(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnError(const nsACString & message, const nsACString & fileName, PRUint32 line, PRUint32 pos, PRUint32 flags, PRUint32 errnum, jsdIValue *exc, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnError(message, fileName, line, pos, flags, errnum, exc, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public jsdIErrorHook
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_JSDIERRORHOOK

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, jsdIErrorHook)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* boolean onError (in AUTF8String message, in AUTF8String fileName, in unsigned long line, in unsigned long pos, in unsigned long flags, in unsigned long errnum, in jsdIValue exc); */
NS_IMETHODIMP _MYCLASS_::OnError(const nsACString & message, const nsACString & fileName, PRUint32 line, PRUint32 pos, PRUint32 flags, PRUint32 errnum, jsdIValue *exc, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    jsdIExecutionHook */
#define JSDIEXECUTIONHOOK_IID_STR "3a722496-9d78-4f0a-a797-293d9e8cb8d2"

#define JSDIEXECUTIONHOOK_IID \
  {0x3a722496, 0x9d78, 0x4f0a, \
    { 0xa7, 0x97, 0x29, 0x3d, 0x9e, 0x8c, 0xb8, 0xd2 }}

class NS_NO_VTABLE NS_SCRIPTABLE jsdIExecutionHook : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(JSDIEXECUTIONHOOK_IID)

  enum { TYPE_INTERRUPTED = 0U };

  enum { TYPE_BREAKPOINT = 1U };

  enum { TYPE_DEBUG_REQUESTED = 2U };

  enum { TYPE_DEBUGGER_KEYWORD = 3U };

  enum { TYPE_THROW = 4U };

  enum { RETURN_HOOK_ERROR = 0U };

  enum { RETURN_CONTINUE = 1U };

  enum { RETURN_ABORT = 2U };

  enum { RETURN_RET_WITH_VAL = 3U };

  enum { RETURN_THROW_WITH_VAL = 4U };

  enum { RETURN_CONTINUE_THROW = 5U };

  /* unsigned long onExecute (in jsdIStackFrame frame, in unsigned long type, inout jsdIValue val); */
  NS_SCRIPTABLE NS_IMETHOD OnExecute(jsdIStackFrame *frame, PRUint32 type, jsdIValue * *val NS_INOUTPARAM, PRUint32 *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(jsdIExecutionHook, JSDIEXECUTIONHOOK_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_JSDIEXECUTIONHOOK \
  NS_SCRIPTABLE NS_IMETHOD OnExecute(jsdIStackFrame *frame, PRUint32 type, jsdIValue * *val NS_INOUTPARAM, PRUint32 *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_JSDIEXECUTIONHOOK(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnExecute(jsdIStackFrame *frame, PRUint32 type, jsdIValue * *val NS_INOUTPARAM, PRUint32 *_retval NS_OUTPARAM) { return _to OnExecute(frame, type, val, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_JSDIEXECUTIONHOOK(_to) \
  NS_SCRIPTABLE NS_IMETHOD OnExecute(jsdIStackFrame *frame, PRUint32 type, jsdIValue * *val NS_INOUTPARAM, PRUint32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->OnExecute(frame, type, val, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public jsdIExecutionHook
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_JSDIEXECUTIONHOOK

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, jsdIExecutionHook)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* unsigned long onExecute (in jsdIStackFrame frame, in unsigned long type, inout jsdIValue val); */
NS_IMETHODIMP _MYCLASS_::OnExecute(jsdIStackFrame *frame, PRUint32 type, jsdIValue * *val NS_INOUTPARAM, PRUint32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    jsdIEphemeral */
#define JSDIEPHEMERAL_IID_STR "46f1e23e-1dd2-11b2-9ceb-8285f2e95e69"

#define JSDIEPHEMERAL_IID \
  {0x46f1e23e, 0x1dd2, 0x11b2, \
    { 0x9c, 0xeb, 0x82, 0x85, 0xf2, 0xe9, 0x5e, 0x69 }}

class NS_NO_VTABLE NS_SCRIPTABLE jsdIEphemeral : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(JSDIEPHEMERAL_IID)

  /* readonly attribute boolean isValid; */
  NS_SCRIPTABLE NS_IMETHOD GetIsValid(PRBool *aIsValid) = 0;

  /* [noscript] void invalidate (); */
  NS_IMETHOD Invalidate(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(jsdIEphemeral, JSDIEPHEMERAL_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_JSDIEPHEMERAL \
  NS_SCRIPTABLE NS_IMETHOD GetIsValid(PRBool *aIsValid); \
  NS_IMETHOD Invalidate(void); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_JSDIEPHEMERAL(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetIsValid(PRBool *aIsValid) { return _to GetIsValid(aIsValid); } \
  NS_IMETHOD Invalidate(void) { return _to Invalidate(); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_JSDIEPHEMERAL(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetIsValid(PRBool *aIsValid) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsValid(aIsValid); } \
  NS_IMETHOD Invalidate(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Invalidate(); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public jsdIEphemeral
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_JSDIEPHEMERAL

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, jsdIEphemeral)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* readonly attribute boolean isValid; */
NS_IMETHODIMP _MYCLASS_::GetIsValid(PRBool *aIsValid)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void invalidate (); */
NS_IMETHODIMP _MYCLASS_::Invalidate()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    jsdIContext */
#define JSDICONTEXT_IID_STR "3e5c934d-6863-4d81-96f5-76a3b962fc2b"

#define JSDICONTEXT_IID \
  {0x3e5c934d, 0x6863, 0x4d81, \
    { 0x96, 0xf5, 0x76, 0xa3, 0xb9, 0x62, 0xfc, 0x2b }}

class NS_NO_VTABLE NS_SCRIPTABLE jsdIContext : public jsdIEphemeral {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(JSDICONTEXT_IID)

  /* [noscript] readonly attribute JSContext JSContext; */
  NS_IMETHOD GetJSContext(JSContext **aJSContext) = 0;

  enum { OPT_STRICT = 1 };

  enum { OPT_WERR = 2 };

  enum { OPT_VAROBJFIX = 4 };

  enum { OPT_ISUPPORTS = 8 };

  /* attribute unsigned long options; */
  NS_SCRIPTABLE NS_IMETHOD GetOptions(PRUint32 *aOptions) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetOptions(PRUint32 aOptions) = 0;

  /* attribute long version; */
  NS_SCRIPTABLE NS_IMETHOD GetVersion(PRInt32 *aVersion) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetVersion(PRInt32 aVersion) = 0;

  /* readonly attribute unsigned long tag; */
  NS_SCRIPTABLE NS_IMETHOD GetTag(PRUint32 *aTag) = 0;

  /* readonly attribute nsISupports privateData; */
  NS_SCRIPTABLE NS_IMETHOD GetPrivateData(nsISupports * *aPrivateData) = 0;

  /* readonly attribute nsISupports wrappedContext; */
  NS_SCRIPTABLE NS_IMETHOD GetWrappedContext(nsISupports * *aWrappedContext) = 0;

  /* readonly attribute jsdIValue globalObject; */
  NS_SCRIPTABLE NS_IMETHOD GetGlobalObject(jsdIValue * *aGlobalObject) = 0;

  /* attribute boolean scriptsEnabled; */
  NS_SCRIPTABLE NS_IMETHOD GetScriptsEnabled(PRBool *aScriptsEnabled) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetScriptsEnabled(PRBool aScriptsEnabled) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(jsdIContext, JSDICONTEXT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_JSDICONTEXT \
  NS_IMETHOD GetJSContext(JSContext **aJSContext); \
  NS_SCRIPTABLE NS_IMETHOD GetOptions(PRUint32 *aOptions); \
  NS_SCRIPTABLE NS_IMETHOD SetOptions(PRUint32 aOptions); \
  NS_SCRIPTABLE NS_IMETHOD GetVersion(PRInt32 *aVersion); \
  NS_SCRIPTABLE NS_IMETHOD SetVersion(PRInt32 aVersion); \
  NS_SCRIPTABLE NS_IMETHOD GetTag(PRUint32 *aTag); \
  NS_SCRIPTABLE NS_IMETHOD GetPrivateData(nsISupports * *aPrivateData); \
  NS_SCRIPTABLE NS_IMETHOD GetWrappedContext(nsISupports * *aWrappedContext); \
  NS_SCRIPTABLE NS_IMETHOD GetGlobalObject(jsdIValue * *aGlobalObject); \
  NS_SCRIPTABLE NS_IMETHOD GetScriptsEnabled(PRBool *aScriptsEnabled); \
  NS_SCRIPTABLE NS_IMETHOD SetScriptsEnabled(PRBool aScriptsEnabled); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_JSDICONTEXT(_to) \
  NS_IMETHOD GetJSContext(JSContext **aJSContext) { return _to GetJSContext(aJSContext); } \
  NS_SCRIPTABLE NS_IMETHOD GetOptions(PRUint32 *aOptions) { return _to GetOptions(aOptions); } \
  NS_SCRIPTABLE NS_IMETHOD SetOptions(PRUint32 aOptions) { return _to SetOptions(aOptions); } \
  NS_SCRIPTABLE NS_IMETHOD GetVersion(PRInt32 *aVersion) { return _to GetVersion(aVersion); } \
  NS_SCRIPTABLE NS_IMETHOD SetVersion(PRInt32 aVersion) { return _to SetVersion(aVersion); } \
  NS_SCRIPTABLE NS_IMETHOD GetTag(PRUint32 *aTag) { return _to GetTag(aTag); } \
  NS_SCRIPTABLE NS_IMETHOD GetPrivateData(nsISupports * *aPrivateData) { return _to GetPrivateData(aPrivateData); } \
  NS_SCRIPTABLE NS_IMETHOD GetWrappedContext(nsISupports * *aWrappedContext) { return _to GetWrappedContext(aWrappedContext); } \
  NS_SCRIPTABLE NS_IMETHOD GetGlobalObject(jsdIValue * *aGlobalObject) { return _to GetGlobalObject(aGlobalObject); } \
  NS_SCRIPTABLE NS_IMETHOD GetScriptsEnabled(PRBool *aScriptsEnabled) { return _to GetScriptsEnabled(aScriptsEnabled); } \
  NS_SCRIPTABLE NS_IMETHOD SetScriptsEnabled(PRBool aScriptsEnabled) { return _to SetScriptsEnabled(aScriptsEnabled); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_JSDICONTEXT(_to) \
  NS_IMETHOD GetJSContext(JSContext **aJSContext) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetJSContext(aJSContext); } \
  NS_SCRIPTABLE NS_IMETHOD GetOptions(PRUint32 *aOptions) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetOptions(aOptions); } \
  NS_SCRIPTABLE NS_IMETHOD SetOptions(PRUint32 aOptions) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetOptions(aOptions); } \
  NS_SCRIPTABLE NS_IMETHOD GetVersion(PRInt32 *aVersion) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVersion(aVersion); } \
  NS_SCRIPTABLE NS_IMETHOD SetVersion(PRInt32 aVersion) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetVersion(aVersion); } \
  NS_SCRIPTABLE NS_IMETHOD GetTag(PRUint32 *aTag) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTag(aTag); } \
  NS_SCRIPTABLE NS_IMETHOD GetPrivateData(nsISupports * *aPrivateData) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPrivateData(aPrivateData); } \
  NS_SCRIPTABLE NS_IMETHOD GetWrappedContext(nsISupports * *aWrappedContext) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWrappedContext(aWrappedContext); } \
  NS_SCRIPTABLE NS_IMETHOD GetGlobalObject(jsdIValue * *aGlobalObject) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetGlobalObject(aGlobalObject); } \
  NS_SCRIPTABLE NS_IMETHOD GetScriptsEnabled(PRBool *aScriptsEnabled) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetScriptsEnabled(aScriptsEnabled); } \
  NS_SCRIPTABLE NS_IMETHOD SetScriptsEnabled(PRBool aScriptsEnabled) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetScriptsEnabled(aScriptsEnabled); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public jsdIContext
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_JSDICONTEXT

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, jsdIContext)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* [noscript] readonly attribute JSContext JSContext; */
NS_IMETHODIMP _MYCLASS_::GetJSContext(JSContext **aJSContext)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long options; */
NS_IMETHODIMP _MYCLASS_::GetOptions(PRUint32 *aOptions)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetOptions(PRUint32 aOptions)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute long version; */
NS_IMETHODIMP _MYCLASS_::GetVersion(PRInt32 *aVersion)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetVersion(PRInt32 aVersion)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long tag; */
NS_IMETHODIMP _MYCLASS_::GetTag(PRUint32 *aTag)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsISupports privateData; */
NS_IMETHODIMP _MYCLASS_::GetPrivateData(nsISupports * *aPrivateData)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute nsISupports wrappedContext; */
NS_IMETHODIMP _MYCLASS_::GetWrappedContext(nsISupports * *aWrappedContext)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute jsdIValue globalObject; */
NS_IMETHODIMP _MYCLASS_::GetGlobalObject(jsdIValue * *aGlobalObject)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean scriptsEnabled; */
NS_IMETHODIMP _MYCLASS_::GetScriptsEnabled(PRBool *aScriptsEnabled)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetScriptsEnabled(PRBool aScriptsEnabled)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    jsdIStackFrame */
#define JSDISTACKFRAME_IID_STR "7c95422c-7579-4a6f-8ef7-e5b391552ee5"

#define JSDISTACKFRAME_IID \
  {0x7c95422c, 0x7579, 0x4a6f, \
    { 0x8e, 0xf7, 0xe5, 0xb3, 0x91, 0x55, 0x2e, 0xe5 }}

class NS_NO_VTABLE NS_SCRIPTABLE jsdIStackFrame : public jsdIEphemeral {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(JSDISTACKFRAME_IID)

  /* [noscript] readonly attribute JSDContext JSDContext; */
  NS_IMETHOD GetJSDContext(JSDContext **aJSDContext) = 0;

  /* [noscript] readonly attribute JSDThreadState JSDThreadState; */
  NS_IMETHOD GetJSDThreadState(JSDThreadState **aJSDThreadState) = 0;

  /* [noscript] readonly attribute JSDStackFrameInfo JSDStackFrameInfo; */
  NS_IMETHOD GetJSDStackFrameInfo(JSDStackFrameInfo **aJSDStackFrameInfo) = 0;

  /* readonly attribute boolean isDebugger; */
  NS_SCRIPTABLE NS_IMETHOD GetIsDebugger(PRBool *aIsDebugger) = 0;

  /* readonly attribute boolean isConstructing; */
  NS_SCRIPTABLE NS_IMETHOD GetIsConstructing(PRBool *aIsConstructing) = 0;

  /* readonly attribute jsdIStackFrame callingFrame; */
  NS_SCRIPTABLE NS_IMETHOD GetCallingFrame(jsdIStackFrame * *aCallingFrame) = 0;

  /* readonly attribute jsdIContext executionContext; */
  NS_SCRIPTABLE NS_IMETHOD GetExecutionContext(jsdIContext * *aExecutionContext) = 0;

  /* readonly attribute AUTF8String functionName; */
  NS_SCRIPTABLE NS_IMETHOD GetFunctionName(nsACString & aFunctionName) = 0;

  /* readonly attribute jsdIScript script; */
  NS_SCRIPTABLE NS_IMETHOD GetScript(jsdIScript * *aScript) = 0;

  /* readonly attribute unsigned long pc; */
  NS_SCRIPTABLE NS_IMETHOD GetPc(PRUint32 *aPc) = 0;

  /* readonly attribute unsigned long line; */
  NS_SCRIPTABLE NS_IMETHOD GetLine(PRUint32 *aLine) = 0;

  /* readonly attribute jsdIValue callee; */
  NS_SCRIPTABLE NS_IMETHOD GetCallee(jsdIValue * *aCallee) = 0;

  /* readonly attribute jsdIValue scope; */
  NS_SCRIPTABLE NS_IMETHOD GetScope(jsdIValue * *aScope) = 0;

  /* readonly attribute jsdIValue thisValue; */
  NS_SCRIPTABLE NS_IMETHOD GetThisValue(jsdIValue * *aThisValue) = 0;

  /* boolean eval (in AString bytes, in AUTF8String fileName, in unsigned long line, out jsdIValue result); */
  NS_SCRIPTABLE NS_IMETHOD Eval(const nsAString & bytes, const nsACString & fileName, PRUint32 line, jsdIValue * *result NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(jsdIStackFrame, JSDISTACKFRAME_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_JSDISTACKFRAME \
  NS_IMETHOD GetJSDContext(JSDContext **aJSDContext); \
  NS_IMETHOD GetJSDThreadState(JSDThreadState **aJSDThreadState); \
  NS_IMETHOD GetJSDStackFrameInfo(JSDStackFrameInfo **aJSDStackFrameInfo); \
  NS_SCRIPTABLE NS_IMETHOD GetIsDebugger(PRBool *aIsDebugger); \
  NS_SCRIPTABLE NS_IMETHOD GetIsConstructing(PRBool *aIsConstructing); \
  NS_SCRIPTABLE NS_IMETHOD GetCallingFrame(jsdIStackFrame * *aCallingFrame); \
  NS_SCRIPTABLE NS_IMETHOD GetExecutionContext(jsdIContext * *aExecutionContext); \
  NS_SCRIPTABLE NS_IMETHOD GetFunctionName(nsACString & aFunctionName); \
  NS_SCRIPTABLE NS_IMETHOD GetScript(jsdIScript * *aScript); \
  NS_SCRIPTABLE NS_IMETHOD GetPc(PRUint32 *aPc); \
  NS_SCRIPTABLE NS_IMETHOD GetLine(PRUint32 *aLine); \
  NS_SCRIPTABLE NS_IMETHOD GetCallee(jsdIValue * *aCallee); \
  NS_SCRIPTABLE NS_IMETHOD GetScope(jsdIValue * *aScope); \
  NS_SCRIPTABLE NS_IMETHOD GetThisValue(jsdIValue * *aThisValue); \
  NS_SCRIPTABLE NS_IMETHOD Eval(const nsAString & bytes, const nsACString & fileName, PRUint32 line, jsdIValue * *result NS_OUTPARAM, PRBool *_retval NS_OUTPARAM); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_JSDISTACKFRAME(_to) \
  NS_IMETHOD GetJSDContext(JSDContext **aJSDContext) { return _to GetJSDContext(aJSDContext); } \
  NS_IMETHOD GetJSDThreadState(JSDThreadState **aJSDThreadState) { return _to GetJSDThreadState(aJSDThreadState); } \
  NS_IMETHOD GetJSDStackFrameInfo(JSDStackFrameInfo **aJSDStackFrameInfo) { return _to GetJSDStackFrameInfo(aJSDStackFrameInfo); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsDebugger(PRBool *aIsDebugger) { return _to GetIsDebugger(aIsDebugger); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsConstructing(PRBool *aIsConstructing) { return _to GetIsConstructing(aIsConstructing); } \
  NS_SCRIPTABLE NS_IMETHOD GetCallingFrame(jsdIStackFrame * *aCallingFrame) { return _to GetCallingFrame(aCallingFrame); } \
  NS_SCRIPTABLE NS_IMETHOD GetExecutionContext(jsdIContext * *aExecutionContext) { return _to GetExecutionContext(aExecutionContext); } \
  NS_SCRIPTABLE NS_IMETHOD GetFunctionName(nsACString & aFunctionName) { return _to GetFunctionName(aFunctionName); } \
  NS_SCRIPTABLE NS_IMETHOD GetScript(jsdIScript * *aScript) { return _to GetScript(aScript); } \
  NS_SCRIPTABLE NS_IMETHOD GetPc(PRUint32 *aPc) { return _to GetPc(aPc); } \
  NS_SCRIPTABLE NS_IMETHOD GetLine(PRUint32 *aLine) { return _to GetLine(aLine); } \
  NS_SCRIPTABLE NS_IMETHOD GetCallee(jsdIValue * *aCallee) { return _to GetCallee(aCallee); } \
  NS_SCRIPTABLE NS_IMETHOD GetScope(jsdIValue * *aScope) { return _to GetScope(aScope); } \
  NS_SCRIPTABLE NS_IMETHOD GetThisValue(jsdIValue * *aThisValue) { return _to GetThisValue(aThisValue); } \
  NS_SCRIPTABLE NS_IMETHOD Eval(const nsAString & bytes, const nsACString & fileName, PRUint32 line, jsdIValue * *result NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return _to Eval(bytes, fileName, line, result, _retval); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_JSDISTACKFRAME(_to) \
  NS_IMETHOD GetJSDContext(JSDContext **aJSDContext) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetJSDContext(aJSDContext); } \
  NS_IMETHOD GetJSDThreadState(JSDThreadState **aJSDThreadState) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetJSDThreadState(aJSDThreadState); } \
  NS_IMETHOD GetJSDStackFrameInfo(JSDStackFrameInfo **aJSDStackFrameInfo) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetJSDStackFrameInfo(aJSDStackFrameInfo); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsDebugger(PRBool *aIsDebugger) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsDebugger(aIsDebugger); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsConstructing(PRBool *aIsConstructing) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsConstructing(aIsConstructing); } \
  NS_SCRIPTABLE NS_IMETHOD GetCallingFrame(jsdIStackFrame * *aCallingFrame) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCallingFrame(aCallingFrame); } \
  NS_SCRIPTABLE NS_IMETHOD GetExecutionContext(jsdIContext * *aExecutionContext) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetExecutionContext(aExecutionContext); } \
  NS_SCRIPTABLE NS_IMETHOD GetFunctionName(nsACString & aFunctionName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFunctionName(aFunctionName); } \
  NS_SCRIPTABLE NS_IMETHOD GetScript(jsdIScript * *aScript) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetScript(aScript); } \
  NS_SCRIPTABLE NS_IMETHOD GetPc(PRUint32 *aPc) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPc(aPc); } \
  NS_SCRIPTABLE NS_IMETHOD GetLine(PRUint32 *aLine) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLine(aLine); } \
  NS_SCRIPTABLE NS_IMETHOD GetCallee(jsdIValue * *aCallee) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCallee(aCallee); } \
  NS_SCRIPTABLE NS_IMETHOD GetScope(jsdIValue * *aScope) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetScope(aScope); } \
  NS_SCRIPTABLE NS_IMETHOD GetThisValue(jsdIValue * *aThisValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetThisValue(aThisValue); } \
  NS_SCRIPTABLE NS_IMETHOD Eval(const nsAString & bytes, const nsACString & fileName, PRUint32 line, jsdIValue * *result NS_OUTPARAM, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->Eval(bytes, fileName, line, result, _retval); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public jsdIStackFrame
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_JSDISTACKFRAME

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, jsdIStackFrame)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* [noscript] readonly attribute JSDContext JSDContext; */
NS_IMETHODIMP _MYCLASS_::GetJSDContext(JSDContext **aJSDContext)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] readonly attribute JSDThreadState JSDThreadState; */
NS_IMETHODIMP _MYCLASS_::GetJSDThreadState(JSDThreadState **aJSDThreadState)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] readonly attribute JSDStackFrameInfo JSDStackFrameInfo; */
NS_IMETHODIMP _MYCLASS_::GetJSDStackFrameInfo(JSDStackFrameInfo **aJSDStackFrameInfo)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean isDebugger; */
NS_IMETHODIMP _MYCLASS_::GetIsDebugger(PRBool *aIsDebugger)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean isConstructing; */
NS_IMETHODIMP _MYCLASS_::GetIsConstructing(PRBool *aIsConstructing)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute jsdIStackFrame callingFrame; */
NS_IMETHODIMP _MYCLASS_::GetCallingFrame(jsdIStackFrame * *aCallingFrame)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute jsdIContext executionContext; */
NS_IMETHODIMP _MYCLASS_::GetExecutionContext(jsdIContext * *aExecutionContext)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AUTF8String functionName; */
NS_IMETHODIMP _MYCLASS_::GetFunctionName(nsACString & aFunctionName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute jsdIScript script; */
NS_IMETHODIMP _MYCLASS_::GetScript(jsdIScript * *aScript)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long pc; */
NS_IMETHODIMP _MYCLASS_::GetPc(PRUint32 *aPc)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long line; */
NS_IMETHODIMP _MYCLASS_::GetLine(PRUint32 *aLine)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute jsdIValue callee; */
NS_IMETHODIMP _MYCLASS_::GetCallee(jsdIValue * *aCallee)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute jsdIValue scope; */
NS_IMETHODIMP _MYCLASS_::GetScope(jsdIValue * *aScope)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute jsdIValue thisValue; */
NS_IMETHODIMP _MYCLASS_::GetThisValue(jsdIValue * *aThisValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean eval (in AString bytes, in AUTF8String fileName, in unsigned long line, out jsdIValue result); */
NS_IMETHODIMP _MYCLASS_::Eval(const nsAString & bytes, const nsACString & fileName, PRUint32 line, jsdIValue * *result NS_OUTPARAM, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    jsdIScript */
#define JSDISCRIPT_IID_STR "721724e0-7716-4bf4-b48f-92b78d056141"

#define JSDISCRIPT_IID \
  {0x721724e0, 0x7716, 0x4bf4, \
    { 0xb4, 0x8f, 0x92, 0xb7, 0x8d, 0x05, 0x61, 0x41 }}

class NS_NO_VTABLE NS_SCRIPTABLE jsdIScript : public jsdIEphemeral {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(JSDISCRIPT_IID)

  /* [noscript] readonly attribute JSDContext JSDContext; */
  NS_IMETHOD GetJSDContext(JSDContext **aJSDContext) = 0;

  /* [noscript] readonly attribute JSDScript JSDScript; */
  NS_IMETHOD GetJSDScript(JSDScript **aJSDScript) = 0;

  /* readonly attribute long version; */
  NS_SCRIPTABLE NS_IMETHOD GetVersion(PRInt32 *aVersion) = 0;

  /* readonly attribute unsigned long tag; */
  NS_SCRIPTABLE NS_IMETHOD GetTag(PRUint32 *aTag) = 0;

  enum { FLAG_PROFILE = 1U };

  enum { FLAG_DEBUG = 2U };

  /* attribute unsigned long flags; */
  NS_SCRIPTABLE NS_IMETHOD GetFlags(PRUint32 *aFlags) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetFlags(PRUint32 aFlags) = 0;

  /* readonly attribute AUTF8String fileName; */
  NS_SCRIPTABLE NS_IMETHOD GetFileName(nsACString & aFileName) = 0;

  /* readonly attribute AUTF8String functionName; */
  NS_SCRIPTABLE NS_IMETHOD GetFunctionName(nsACString & aFunctionName) = 0;

  /* void getParameterNames ([optional] out unsigned long count, [array, size_is (count), retval] out wstring paramNames); */
  NS_SCRIPTABLE NS_IMETHOD GetParameterNames(PRUint32 *count NS_OUTPARAM, PRUnichar * **paramNames NS_OUTPARAM) = 0;

  /* readonly attribute jsdIValue functionObject; */
  NS_SCRIPTABLE NS_IMETHOD GetFunctionObject(jsdIValue * *aFunctionObject) = 0;

  /* readonly attribute AString functionSource; */
  NS_SCRIPTABLE NS_IMETHOD GetFunctionSource(nsAString & aFunctionSource) = 0;

  /* readonly attribute unsigned long baseLineNumber; */
  NS_SCRIPTABLE NS_IMETHOD GetBaseLineNumber(PRUint32 *aBaseLineNumber) = 0;

  /* readonly attribute unsigned long lineExtent; */
  NS_SCRIPTABLE NS_IMETHOD GetLineExtent(PRUint32 *aLineExtent) = 0;

  /* readonly attribute unsigned long callCount; */
  NS_SCRIPTABLE NS_IMETHOD GetCallCount(PRUint32 *aCallCount) = 0;

  /* readonly attribute unsigned long maxRecurseDepth; */
  NS_SCRIPTABLE NS_IMETHOD GetMaxRecurseDepth(PRUint32 *aMaxRecurseDepth) = 0;

  /* readonly attribute double minExecutionTime; */
  NS_SCRIPTABLE NS_IMETHOD GetMinExecutionTime(double *aMinExecutionTime) = 0;

  /* readonly attribute double maxExecutionTime; */
  NS_SCRIPTABLE NS_IMETHOD GetMaxExecutionTime(double *aMaxExecutionTime) = 0;

  /* readonly attribute double totalExecutionTime; */
  NS_SCRIPTABLE NS_IMETHOD GetTotalExecutionTime(double *aTotalExecutionTime) = 0;

  /* readonly attribute double minOwnExecutionTime; */
  NS_SCRIPTABLE NS_IMETHOD GetMinOwnExecutionTime(double *aMinOwnExecutionTime) = 0;

  /* readonly attribute double maxOwnExecutionTime; */
  NS_SCRIPTABLE NS_IMETHOD GetMaxOwnExecutionTime(double *aMaxOwnExecutionTime) = 0;

  /* readonly attribute double totalOwnExecutionTime; */
  NS_SCRIPTABLE NS_IMETHOD GetTotalOwnExecutionTime(double *aTotalOwnExecutionTime) = 0;

  /* void clearProfileData (); */
  NS_SCRIPTABLE NS_IMETHOD ClearProfileData(void) = 0;

  enum { PCMAP_SOURCETEXT = 1U };

  enum { PCMAP_PRETTYPRINT = 2U };

  /* unsigned long pcToLine (in unsigned long pc, in unsigned long pcmap); */
  NS_SCRIPTABLE NS_IMETHOD PcToLine(PRUint32 pc, PRUint32 pcmap, PRUint32 *_retval NS_OUTPARAM) = 0;

  /* unsigned long lineToPc (in unsigned long line, in unsigned long pcmap); */
  NS_SCRIPTABLE NS_IMETHOD LineToPc(PRUint32 line, PRUint32 pcmap, PRUint32 *_retval NS_OUTPARAM) = 0;

  /* boolean isLineExecutable (in unsigned long line, in unsigned long pcmap); */
  NS_SCRIPTABLE NS_IMETHOD IsLineExecutable(PRUint32 line, PRUint32 pcmap, PRBool *_retval NS_OUTPARAM) = 0;

  /* void getExecutableLines (in unsigned long pcmap, in unsigned long startLine, in unsigned long maxLines, [optional] out unsigned long count, [array, size_is (count), retval] out unsigned long executableLines); */
  NS_SCRIPTABLE NS_IMETHOD GetExecutableLines(PRUint32 pcmap, PRUint32 startLine, PRUint32 maxLines, PRUint32 *count NS_OUTPARAM, PRUint32 **executableLines NS_OUTPARAM) = 0;

  /* void setBreakpoint (in unsigned long pc); */
  NS_SCRIPTABLE NS_IMETHOD SetBreakpoint(PRUint32 pc) = 0;

  /* void clearBreakpoint (in unsigned long pc); */
  NS_SCRIPTABLE NS_IMETHOD ClearBreakpoint(PRUint32 pc) = 0;

  /* void clearAllBreakpoints (); */
  NS_SCRIPTABLE NS_IMETHOD ClearAllBreakpoints(void) = 0;

  /* void enableSingleStepInterrupts (in boolean mode); */
  NS_SCRIPTABLE NS_IMETHOD EnableSingleStepInterrupts(PRBool mode) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(jsdIScript, JSDISCRIPT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_JSDISCRIPT \
  NS_IMETHOD GetJSDContext(JSDContext **aJSDContext); \
  NS_IMETHOD GetJSDScript(JSDScript **aJSDScript); \
  NS_SCRIPTABLE NS_IMETHOD GetVersion(PRInt32 *aVersion); \
  NS_SCRIPTABLE NS_IMETHOD GetTag(PRUint32 *aTag); \
  NS_SCRIPTABLE NS_IMETHOD GetFlags(PRUint32 *aFlags); \
  NS_SCRIPTABLE NS_IMETHOD SetFlags(PRUint32 aFlags); \
  NS_SCRIPTABLE NS_IMETHOD GetFileName(nsACString & aFileName); \
  NS_SCRIPTABLE NS_IMETHOD GetFunctionName(nsACString & aFunctionName); \
  NS_SCRIPTABLE NS_IMETHOD GetParameterNames(PRUint32 *count NS_OUTPARAM, PRUnichar * **paramNames NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetFunctionObject(jsdIValue * *aFunctionObject); \
  NS_SCRIPTABLE NS_IMETHOD GetFunctionSource(nsAString & aFunctionSource); \
  NS_SCRIPTABLE NS_IMETHOD GetBaseLineNumber(PRUint32 *aBaseLineNumber); \
  NS_SCRIPTABLE NS_IMETHOD GetLineExtent(PRUint32 *aLineExtent); \
  NS_SCRIPTABLE NS_IMETHOD GetCallCount(PRUint32 *aCallCount); \
  NS_SCRIPTABLE NS_IMETHOD GetMaxRecurseDepth(PRUint32 *aMaxRecurseDepth); \
  NS_SCRIPTABLE NS_IMETHOD GetMinExecutionTime(double *aMinExecutionTime); \
  NS_SCRIPTABLE NS_IMETHOD GetMaxExecutionTime(double *aMaxExecutionTime); \
  NS_SCRIPTABLE NS_IMETHOD GetTotalExecutionTime(double *aTotalExecutionTime); \
  NS_SCRIPTABLE NS_IMETHOD GetMinOwnExecutionTime(double *aMinOwnExecutionTime); \
  NS_SCRIPTABLE NS_IMETHOD GetMaxOwnExecutionTime(double *aMaxOwnExecutionTime); \
  NS_SCRIPTABLE NS_IMETHOD GetTotalOwnExecutionTime(double *aTotalOwnExecutionTime); \
  NS_SCRIPTABLE NS_IMETHOD ClearProfileData(void); \
  NS_SCRIPTABLE NS_IMETHOD PcToLine(PRUint32 pc, PRUint32 pcmap, PRUint32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD LineToPc(PRUint32 line, PRUint32 pcmap, PRUint32 *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD IsLineExecutable(PRUint32 line, PRUint32 pcmap, PRBool *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetExecutableLines(PRUint32 pcmap, PRUint32 startLine, PRUint32 maxLines, PRUint32 *count NS_OUTPARAM, PRUint32 **executableLines NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD SetBreakpoint(PRUint32 pc); \
  NS_SCRIPTABLE NS_IMETHOD ClearBreakpoint(PRUint32 pc); \
  NS_SCRIPTABLE NS_IMETHOD ClearAllBreakpoints(void); \
  NS_SCRIPTABLE NS_IMETHOD EnableSingleStepInterrupts(PRBool mode); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_JSDISCRIPT(_to) \
  NS_IMETHOD GetJSDContext(JSDContext **aJSDContext) { return _to GetJSDContext(aJSDContext); } \
  NS_IMETHOD GetJSDScript(JSDScript **aJSDScript) { return _to GetJSDScript(aJSDScript); } \
  NS_SCRIPTABLE NS_IMETHOD GetVersion(PRInt32 *aVersion) { return _to GetVersion(aVersion); } \
  NS_SCRIPTABLE NS_IMETHOD GetTag(PRUint32 *aTag) { return _to GetTag(aTag); } \
  NS_SCRIPTABLE NS_IMETHOD GetFlags(PRUint32 *aFlags) { return _to GetFlags(aFlags); } \
  NS_SCRIPTABLE NS_IMETHOD SetFlags(PRUint32 aFlags) { return _to SetFlags(aFlags); } \
  NS_SCRIPTABLE NS_IMETHOD GetFileName(nsACString & aFileName) { return _to GetFileName(aFileName); } \
  NS_SCRIPTABLE NS_IMETHOD GetFunctionName(nsACString & aFunctionName) { return _to GetFunctionName(aFunctionName); } \
  NS_SCRIPTABLE NS_IMETHOD GetParameterNames(PRUint32 *count NS_OUTPARAM, PRUnichar * **paramNames NS_OUTPARAM) { return _to GetParameterNames(count, paramNames); } \
  NS_SCRIPTABLE NS_IMETHOD GetFunctionObject(jsdIValue * *aFunctionObject) { return _to GetFunctionObject(aFunctionObject); } \
  NS_SCRIPTABLE NS_IMETHOD GetFunctionSource(nsAString & aFunctionSource) { return _to GetFunctionSource(aFunctionSource); } \
  NS_SCRIPTABLE NS_IMETHOD GetBaseLineNumber(PRUint32 *aBaseLineNumber) { return _to GetBaseLineNumber(aBaseLineNumber); } \
  NS_SCRIPTABLE NS_IMETHOD GetLineExtent(PRUint32 *aLineExtent) { return _to GetLineExtent(aLineExtent); } \
  NS_SCRIPTABLE NS_IMETHOD GetCallCount(PRUint32 *aCallCount) { return _to GetCallCount(aCallCount); } \
  NS_SCRIPTABLE NS_IMETHOD GetMaxRecurseDepth(PRUint32 *aMaxRecurseDepth) { return _to GetMaxRecurseDepth(aMaxRecurseDepth); } \
  NS_SCRIPTABLE NS_IMETHOD GetMinExecutionTime(double *aMinExecutionTime) { return _to GetMinExecutionTime(aMinExecutionTime); } \
  NS_SCRIPTABLE NS_IMETHOD GetMaxExecutionTime(double *aMaxExecutionTime) { return _to GetMaxExecutionTime(aMaxExecutionTime); } \
  NS_SCRIPTABLE NS_IMETHOD GetTotalExecutionTime(double *aTotalExecutionTime) { return _to GetTotalExecutionTime(aTotalExecutionTime); } \
  NS_SCRIPTABLE NS_IMETHOD GetMinOwnExecutionTime(double *aMinOwnExecutionTime) { return _to GetMinOwnExecutionTime(aMinOwnExecutionTime); } \
  NS_SCRIPTABLE NS_IMETHOD GetMaxOwnExecutionTime(double *aMaxOwnExecutionTime) { return _to GetMaxOwnExecutionTime(aMaxOwnExecutionTime); } \
  NS_SCRIPTABLE NS_IMETHOD GetTotalOwnExecutionTime(double *aTotalOwnExecutionTime) { return _to GetTotalOwnExecutionTime(aTotalOwnExecutionTime); } \
  NS_SCRIPTABLE NS_IMETHOD ClearProfileData(void) { return _to ClearProfileData(); } \
  NS_SCRIPTABLE NS_IMETHOD PcToLine(PRUint32 pc, PRUint32 pcmap, PRUint32 *_retval NS_OUTPARAM) { return _to PcToLine(pc, pcmap, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD LineToPc(PRUint32 line, PRUint32 pcmap, PRUint32 *_retval NS_OUTPARAM) { return _to LineToPc(line, pcmap, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsLineExecutable(PRUint32 line, PRUint32 pcmap, PRBool *_retval NS_OUTPARAM) { return _to IsLineExecutable(line, pcmap, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetExecutableLines(PRUint32 pcmap, PRUint32 startLine, PRUint32 maxLines, PRUint32 *count NS_OUTPARAM, PRUint32 **executableLines NS_OUTPARAM) { return _to GetExecutableLines(pcmap, startLine, maxLines, count, executableLines); } \
  NS_SCRIPTABLE NS_IMETHOD SetBreakpoint(PRUint32 pc) { return _to SetBreakpoint(pc); } \
  NS_SCRIPTABLE NS_IMETHOD ClearBreakpoint(PRUint32 pc) { return _to ClearBreakpoint(pc); } \
  NS_SCRIPTABLE NS_IMETHOD ClearAllBreakpoints(void) { return _to ClearAllBreakpoints(); } \
  NS_SCRIPTABLE NS_IMETHOD EnableSingleStepInterrupts(PRBool mode) { return _to EnableSingleStepInterrupts(mode); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_JSDISCRIPT(_to) \
  NS_IMETHOD GetJSDContext(JSDContext **aJSDContext) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetJSDContext(aJSDContext); } \
  NS_IMETHOD GetJSDScript(JSDScript **aJSDScript) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetJSDScript(aJSDScript); } \
  NS_SCRIPTABLE NS_IMETHOD GetVersion(PRInt32 *aVersion) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVersion(aVersion); } \
  NS_SCRIPTABLE NS_IMETHOD GetTag(PRUint32 *aTag) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTag(aTag); } \
  NS_SCRIPTABLE NS_IMETHOD GetFlags(PRUint32 *aFlags) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFlags(aFlags); } \
  NS_SCRIPTABLE NS_IMETHOD SetFlags(PRUint32 aFlags) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetFlags(aFlags); } \
  NS_SCRIPTABLE NS_IMETHOD GetFileName(nsACString & aFileName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFileName(aFileName); } \
  NS_SCRIPTABLE NS_IMETHOD GetFunctionName(nsACString & aFunctionName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFunctionName(aFunctionName); } \
  NS_SCRIPTABLE NS_IMETHOD GetParameterNames(PRUint32 *count NS_OUTPARAM, PRUnichar * **paramNames NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetParameterNames(count, paramNames); } \
  NS_SCRIPTABLE NS_IMETHOD GetFunctionObject(jsdIValue * *aFunctionObject) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFunctionObject(aFunctionObject); } \
  NS_SCRIPTABLE NS_IMETHOD GetFunctionSource(nsAString & aFunctionSource) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFunctionSource(aFunctionSource); } \
  NS_SCRIPTABLE NS_IMETHOD GetBaseLineNumber(PRUint32 *aBaseLineNumber) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBaseLineNumber(aBaseLineNumber); } \
  NS_SCRIPTABLE NS_IMETHOD GetLineExtent(PRUint32 *aLineExtent) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetLineExtent(aLineExtent); } \
  NS_SCRIPTABLE NS_IMETHOD GetCallCount(PRUint32 *aCallCount) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCallCount(aCallCount); } \
  NS_SCRIPTABLE NS_IMETHOD GetMaxRecurseDepth(PRUint32 *aMaxRecurseDepth) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMaxRecurseDepth(aMaxRecurseDepth); } \
  NS_SCRIPTABLE NS_IMETHOD GetMinExecutionTime(double *aMinExecutionTime) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMinExecutionTime(aMinExecutionTime); } \
  NS_SCRIPTABLE NS_IMETHOD GetMaxExecutionTime(double *aMaxExecutionTime) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMaxExecutionTime(aMaxExecutionTime); } \
  NS_SCRIPTABLE NS_IMETHOD GetTotalExecutionTime(double *aTotalExecutionTime) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTotalExecutionTime(aTotalExecutionTime); } \
  NS_SCRIPTABLE NS_IMETHOD GetMinOwnExecutionTime(double *aMinOwnExecutionTime) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMinOwnExecutionTime(aMinOwnExecutionTime); } \
  NS_SCRIPTABLE NS_IMETHOD GetMaxOwnExecutionTime(double *aMaxOwnExecutionTime) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMaxOwnExecutionTime(aMaxOwnExecutionTime); } \
  NS_SCRIPTABLE NS_IMETHOD GetTotalOwnExecutionTime(double *aTotalOwnExecutionTime) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetTotalOwnExecutionTime(aTotalOwnExecutionTime); } \
  NS_SCRIPTABLE NS_IMETHOD ClearProfileData(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->ClearProfileData(); } \
  NS_SCRIPTABLE NS_IMETHOD PcToLine(PRUint32 pc, PRUint32 pcmap, PRUint32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->PcToLine(pc, pcmap, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD LineToPc(PRUint32 line, PRUint32 pcmap, PRUint32 *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->LineToPc(line, pcmap, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD IsLineExecutable(PRUint32 line, PRUint32 pcmap, PRBool *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->IsLineExecutable(line, pcmap, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD GetExecutableLines(PRUint32 pcmap, PRUint32 startLine, PRUint32 maxLines, PRUint32 *count NS_OUTPARAM, PRUint32 **executableLines NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetExecutableLines(pcmap, startLine, maxLines, count, executableLines); } \
  NS_SCRIPTABLE NS_IMETHOD SetBreakpoint(PRUint32 pc) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetBreakpoint(pc); } \
  NS_SCRIPTABLE NS_IMETHOD ClearBreakpoint(PRUint32 pc) { return !_to ? NS_ERROR_NULL_POINTER : _to->ClearBreakpoint(pc); } \
  NS_SCRIPTABLE NS_IMETHOD ClearAllBreakpoints(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->ClearAllBreakpoints(); } \
  NS_SCRIPTABLE NS_IMETHOD EnableSingleStepInterrupts(PRBool mode) { return !_to ? NS_ERROR_NULL_POINTER : _to->EnableSingleStepInterrupts(mode); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public jsdIScript
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_JSDISCRIPT

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, jsdIScript)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* [noscript] readonly attribute JSDContext JSDContext; */
NS_IMETHODIMP _MYCLASS_::GetJSDContext(JSDContext **aJSDContext)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] readonly attribute JSDScript JSDScript; */
NS_IMETHODIMP _MYCLASS_::GetJSDScript(JSDScript **aJSDScript)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long version; */
NS_IMETHODIMP _MYCLASS_::GetVersion(PRInt32 *aVersion)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long tag; */
NS_IMETHODIMP _MYCLASS_::GetTag(PRUint32 *aTag)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute unsigned long flags; */
NS_IMETHODIMP _MYCLASS_::GetFlags(PRUint32 *aFlags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP _MYCLASS_::SetFlags(PRUint32 aFlags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AUTF8String fileName; */
NS_IMETHODIMP _MYCLASS_::GetFileName(nsACString & aFileName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AUTF8String functionName; */
NS_IMETHODIMP _MYCLASS_::GetFunctionName(nsACString & aFunctionName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getParameterNames ([optional] out unsigned long count, [array, size_is (count), retval] out wstring paramNames); */
NS_IMETHODIMP _MYCLASS_::GetParameterNames(PRUint32 *count NS_OUTPARAM, PRUnichar * **paramNames NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute jsdIValue functionObject; */
NS_IMETHODIMP _MYCLASS_::GetFunctionObject(jsdIValue * *aFunctionObject)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AString functionSource; */
NS_IMETHODIMP _MYCLASS_::GetFunctionSource(nsAString & aFunctionSource)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long baseLineNumber; */
NS_IMETHODIMP _MYCLASS_::GetBaseLineNumber(PRUint32 *aBaseLineNumber)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long lineExtent; */
NS_IMETHODIMP _MYCLASS_::GetLineExtent(PRUint32 *aLineExtent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long callCount; */
NS_IMETHODIMP _MYCLASS_::GetCallCount(PRUint32 *aCallCount)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long maxRecurseDepth; */
NS_IMETHODIMP _MYCLASS_::GetMaxRecurseDepth(PRUint32 *aMaxRecurseDepth)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute double minExecutionTime; */
NS_IMETHODIMP _MYCLASS_::GetMinExecutionTime(double *aMinExecutionTime)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute double maxExecutionTime; */
NS_IMETHODIMP _MYCLASS_::GetMaxExecutionTime(double *aMaxExecutionTime)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute double totalExecutionTime; */
NS_IMETHODIMP _MYCLASS_::GetTotalExecutionTime(double *aTotalExecutionTime)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute double minOwnExecutionTime; */
NS_IMETHODIMP _MYCLASS_::GetMinOwnExecutionTime(double *aMinOwnExecutionTime)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute double maxOwnExecutionTime; */
NS_IMETHODIMP _MYCLASS_::GetMaxOwnExecutionTime(double *aMaxOwnExecutionTime)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute double totalOwnExecutionTime; */
NS_IMETHODIMP _MYCLASS_::GetTotalOwnExecutionTime(double *aTotalOwnExecutionTime)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void clearProfileData (); */
NS_IMETHODIMP _MYCLASS_::ClearProfileData()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* unsigned long pcToLine (in unsigned long pc, in unsigned long pcmap); */
NS_IMETHODIMP _MYCLASS_::PcToLine(PRUint32 pc, PRUint32 pcmap, PRUint32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* unsigned long lineToPc (in unsigned long line, in unsigned long pcmap); */
NS_IMETHODIMP _MYCLASS_::LineToPc(PRUint32 line, PRUint32 pcmap, PRUint32 *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* boolean isLineExecutable (in unsigned long line, in unsigned long pcmap); */
NS_IMETHODIMP _MYCLASS_::IsLineExecutable(PRUint32 line, PRUint32 pcmap, PRBool *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getExecutableLines (in unsigned long pcmap, in unsigned long startLine, in unsigned long maxLines, [optional] out unsigned long count, [array, size_is (count), retval] out unsigned long executableLines); */
NS_IMETHODIMP _MYCLASS_::GetExecutableLines(PRUint32 pcmap, PRUint32 startLine, PRUint32 maxLines, PRUint32 *count NS_OUTPARAM, PRUint32 **executableLines NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void setBreakpoint (in unsigned long pc); */
NS_IMETHODIMP _MYCLASS_::SetBreakpoint(PRUint32 pc)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void clearBreakpoint (in unsigned long pc); */
NS_IMETHODIMP _MYCLASS_::ClearBreakpoint(PRUint32 pc)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void clearAllBreakpoints (); */
NS_IMETHODIMP _MYCLASS_::ClearAllBreakpoints()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void enableSingleStepInterrupts (in boolean mode); */
NS_IMETHODIMP _MYCLASS_::EnableSingleStepInterrupts(PRBool mode)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    jsdIValue */
#define JSDIVALUE_IID_STR "861c4d37-e115-4a52-9f76-273cb6b21c3b"

#define JSDIVALUE_IID \
  {0x861c4d37, 0xe115, 0x4a52, \
    { 0x9f, 0x76, 0x27, 0x3c, 0xb6, 0xb2, 0x1c, 0x3b }}

class NS_NO_VTABLE NS_SCRIPTABLE jsdIValue : public jsdIEphemeral {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(JSDIVALUE_IID)

  /* [noscript] readonly attribute JSDContext JSDContext; */
  NS_IMETHOD GetJSDContext(JSDContext **aJSDContext) = 0;

  /* [noscript] readonly attribute JSDValue JSDValue; */
  NS_IMETHOD GetJSDValue(JSDValue **aJSDValue) = 0;

  /* readonly attribute boolean isNative; */
  NS_SCRIPTABLE NS_IMETHOD GetIsNative(PRBool *aIsNative) = 0;

  /* readonly attribute boolean isNumber; */
  NS_SCRIPTABLE NS_IMETHOD GetIsNumber(PRBool *aIsNumber) = 0;

  /* readonly attribute boolean isPrimitive; */
  NS_SCRIPTABLE NS_IMETHOD GetIsPrimitive(PRBool *aIsPrimitive) = 0;

  enum { TYPE_BOOLEAN = 0U };

  enum { TYPE_DOUBLE = 1U };

  enum { TYPE_INT = 2U };

  enum { TYPE_FUNCTION = 3U };

  enum { TYPE_NULL = 4U };

  enum { TYPE_OBJECT = 5U };

  enum { TYPE_STRING = 6U };

  enum { TYPE_VOID = 7U };

  /* readonly attribute unsigned long jsType; */
  NS_SCRIPTABLE NS_IMETHOD GetJsType(PRUint32 *aJsType) = 0;

  /* readonly attribute jsdIValue jsPrototype; */
  NS_SCRIPTABLE NS_IMETHOD GetJsPrototype(jsdIValue * *aJsPrototype) = 0;

  /* readonly attribute jsdIValue jsParent; */
  NS_SCRIPTABLE NS_IMETHOD GetJsParent(jsdIValue * *aJsParent) = 0;

  /* readonly attribute AUTF8String jsClassName; */
  NS_SCRIPTABLE NS_IMETHOD GetJsClassName(nsACString & aJsClassName) = 0;

  /* readonly attribute jsdIValue jsConstructor; */
  NS_SCRIPTABLE NS_IMETHOD GetJsConstructor(jsdIValue * *aJsConstructor) = 0;

  /* readonly attribute AUTF8String jsFunctionName; */
  NS_SCRIPTABLE NS_IMETHOD GetJsFunctionName(nsACString & aJsFunctionName) = 0;

  /* readonly attribute boolean booleanValue; */
  NS_SCRIPTABLE NS_IMETHOD GetBooleanValue(PRBool *aBooleanValue) = 0;

  /* readonly attribute double doubleValue; */
  NS_SCRIPTABLE NS_IMETHOD GetDoubleValue(double *aDoubleValue) = 0;

  /* readonly attribute long intValue; */
  NS_SCRIPTABLE NS_IMETHOD GetIntValue(PRInt32 *aIntValue) = 0;

  /* readonly attribute jsdIObject objectValue; */
  NS_SCRIPTABLE NS_IMETHOD GetObjectValue(jsdIObject * *aObjectValue) = 0;

  /* readonly attribute AUTF8String stringValue; */
  NS_SCRIPTABLE NS_IMETHOD GetStringValue(nsACString & aStringValue) = 0;

  /* readonly attribute long propertyCount; */
  NS_SCRIPTABLE NS_IMETHOD GetPropertyCount(PRInt32 *aPropertyCount) = 0;

  /* void getProperties ([array, size_is (length)] out jsdIProperty propArray, out unsigned long length); */
  NS_SCRIPTABLE NS_IMETHOD GetProperties(jsdIProperty * **propArray NS_OUTPARAM, PRUint32 *length NS_OUTPARAM) = 0;

  /* jsdIProperty getProperty (in AUTF8String name); */
  NS_SCRIPTABLE NS_IMETHOD GetProperty(const nsACString & name, jsdIProperty * *_retval NS_OUTPARAM) = 0;

  /* void refresh (); */
  NS_SCRIPTABLE NS_IMETHOD Refresh(void) = 0;

  /* void getWrappedValue (); */
  NS_SCRIPTABLE NS_IMETHOD GetWrappedValue(void) = 0;

  /* readonly attribute jsdIScript script; */
  NS_SCRIPTABLE NS_IMETHOD GetScript(jsdIScript * *aScript) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(jsdIValue, JSDIVALUE_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_JSDIVALUE \
  NS_IMETHOD GetJSDContext(JSDContext **aJSDContext); \
  NS_IMETHOD GetJSDValue(JSDValue **aJSDValue); \
  NS_SCRIPTABLE NS_IMETHOD GetIsNative(PRBool *aIsNative); \
  NS_SCRIPTABLE NS_IMETHOD GetIsNumber(PRBool *aIsNumber); \
  NS_SCRIPTABLE NS_IMETHOD GetIsPrimitive(PRBool *aIsPrimitive); \
  NS_SCRIPTABLE NS_IMETHOD GetJsType(PRUint32 *aJsType); \
  NS_SCRIPTABLE NS_IMETHOD GetJsPrototype(jsdIValue * *aJsPrototype); \
  NS_SCRIPTABLE NS_IMETHOD GetJsParent(jsdIValue * *aJsParent); \
  NS_SCRIPTABLE NS_IMETHOD GetJsClassName(nsACString & aJsClassName); \
  NS_SCRIPTABLE NS_IMETHOD GetJsConstructor(jsdIValue * *aJsConstructor); \
  NS_SCRIPTABLE NS_IMETHOD GetJsFunctionName(nsACString & aJsFunctionName); \
  NS_SCRIPTABLE NS_IMETHOD GetBooleanValue(PRBool *aBooleanValue); \
  NS_SCRIPTABLE NS_IMETHOD GetDoubleValue(double *aDoubleValue); \
  NS_SCRIPTABLE NS_IMETHOD GetIntValue(PRInt32 *aIntValue); \
  NS_SCRIPTABLE NS_IMETHOD GetObjectValue(jsdIObject * *aObjectValue); \
  NS_SCRIPTABLE NS_IMETHOD GetStringValue(nsACString & aStringValue); \
  NS_SCRIPTABLE NS_IMETHOD GetPropertyCount(PRInt32 *aPropertyCount); \
  NS_SCRIPTABLE NS_IMETHOD GetProperties(jsdIProperty * **propArray NS_OUTPARAM, PRUint32 *length NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD GetProperty(const nsACString & name, jsdIProperty * *_retval NS_OUTPARAM); \
  NS_SCRIPTABLE NS_IMETHOD Refresh(void); \
  NS_SCRIPTABLE NS_IMETHOD GetWrappedValue(void); \
  NS_SCRIPTABLE NS_IMETHOD GetScript(jsdIScript * *aScript); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_JSDIVALUE(_to) \
  NS_IMETHOD GetJSDContext(JSDContext **aJSDContext) { return _to GetJSDContext(aJSDContext); } \
  NS_IMETHOD GetJSDValue(JSDValue **aJSDValue) { return _to GetJSDValue(aJSDValue); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsNative(PRBool *aIsNative) { return _to GetIsNative(aIsNative); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsNumber(PRBool *aIsNumber) { return _to GetIsNumber(aIsNumber); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsPrimitive(PRBool *aIsPrimitive) { return _to GetIsPrimitive(aIsPrimitive); } \
  NS_SCRIPTABLE NS_IMETHOD GetJsType(PRUint32 *aJsType) { return _to GetJsType(aJsType); } \
  NS_SCRIPTABLE NS_IMETHOD GetJsPrototype(jsdIValue * *aJsPrototype) { return _to GetJsPrototype(aJsPrototype); } \
  NS_SCRIPTABLE NS_IMETHOD GetJsParent(jsdIValue * *aJsParent) { return _to GetJsParent(aJsParent); } \
  NS_SCRIPTABLE NS_IMETHOD GetJsClassName(nsACString & aJsClassName) { return _to GetJsClassName(aJsClassName); } \
  NS_SCRIPTABLE NS_IMETHOD GetJsConstructor(jsdIValue * *aJsConstructor) { return _to GetJsConstructor(aJsConstructor); } \
  NS_SCRIPTABLE NS_IMETHOD GetJsFunctionName(nsACString & aJsFunctionName) { return _to GetJsFunctionName(aJsFunctionName); } \
  NS_SCRIPTABLE NS_IMETHOD GetBooleanValue(PRBool *aBooleanValue) { return _to GetBooleanValue(aBooleanValue); } \
  NS_SCRIPTABLE NS_IMETHOD GetDoubleValue(double *aDoubleValue) { return _to GetDoubleValue(aDoubleValue); } \
  NS_SCRIPTABLE NS_IMETHOD GetIntValue(PRInt32 *aIntValue) { return _to GetIntValue(aIntValue); } \
  NS_SCRIPTABLE NS_IMETHOD GetObjectValue(jsdIObject * *aObjectValue) { return _to GetObjectValue(aObjectValue); } \
  NS_SCRIPTABLE NS_IMETHOD GetStringValue(nsACString & aStringValue) { return _to GetStringValue(aStringValue); } \
  NS_SCRIPTABLE NS_IMETHOD GetPropertyCount(PRInt32 *aPropertyCount) { return _to GetPropertyCount(aPropertyCount); } \
  NS_SCRIPTABLE NS_IMETHOD GetProperties(jsdIProperty * **propArray NS_OUTPARAM, PRUint32 *length NS_OUTPARAM) { return _to GetProperties(propArray, length); } \
  NS_SCRIPTABLE NS_IMETHOD GetProperty(const nsACString & name, jsdIProperty * *_retval NS_OUTPARAM) { return _to GetProperty(name, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Refresh(void) { return _to Refresh(); } \
  NS_SCRIPTABLE NS_IMETHOD GetWrappedValue(void) { return _to GetWrappedValue(); } \
  NS_SCRIPTABLE NS_IMETHOD GetScript(jsdIScript * *aScript) { return _to GetScript(aScript); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_JSDIVALUE(_to) \
  NS_IMETHOD GetJSDContext(JSDContext **aJSDContext) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetJSDContext(aJSDContext); } \
  NS_IMETHOD GetJSDValue(JSDValue **aJSDValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetJSDValue(aJSDValue); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsNative(PRBool *aIsNative) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsNative(aIsNative); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsNumber(PRBool *aIsNumber) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsNumber(aIsNumber); } \
  NS_SCRIPTABLE NS_IMETHOD GetIsPrimitive(PRBool *aIsPrimitive) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIsPrimitive(aIsPrimitive); } \
  NS_SCRIPTABLE NS_IMETHOD GetJsType(PRUint32 *aJsType) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetJsType(aJsType); } \
  NS_SCRIPTABLE NS_IMETHOD GetJsPrototype(jsdIValue * *aJsPrototype) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetJsPrototype(aJsPrototype); } \
  NS_SCRIPTABLE NS_IMETHOD GetJsParent(jsdIValue * *aJsParent) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetJsParent(aJsParent); } \
  NS_SCRIPTABLE NS_IMETHOD GetJsClassName(nsACString & aJsClassName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetJsClassName(aJsClassName); } \
  NS_SCRIPTABLE NS_IMETHOD GetJsConstructor(jsdIValue * *aJsConstructor) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetJsConstructor(aJsConstructor); } \
  NS_SCRIPTABLE NS_IMETHOD GetJsFunctionName(nsACString & aJsFunctionName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetJsFunctionName(aJsFunctionName); } \
  NS_SCRIPTABLE NS_IMETHOD GetBooleanValue(PRBool *aBooleanValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetBooleanValue(aBooleanValue); } \
  NS_SCRIPTABLE NS_IMETHOD GetDoubleValue(double *aDoubleValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetDoubleValue(aDoubleValue); } \
  NS_SCRIPTABLE NS_IMETHOD GetIntValue(PRInt32 *aIntValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetIntValue(aIntValue); } \
  NS_SCRIPTABLE NS_IMETHOD GetObjectValue(jsdIObject * *aObjectValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetObjectValue(aObjectValue); } \
  NS_SCRIPTABLE NS_IMETHOD GetStringValue(nsACString & aStringValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetStringValue(aStringValue); } \
  NS_SCRIPTABLE NS_IMETHOD GetPropertyCount(PRInt32 *aPropertyCount) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetPropertyCount(aPropertyCount); } \
  NS_SCRIPTABLE NS_IMETHOD GetProperties(jsdIProperty * **propArray NS_OUTPARAM, PRUint32 *length NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetProperties(propArray, length); } \
  NS_SCRIPTABLE NS_IMETHOD GetProperty(const nsACString & name, jsdIProperty * *_retval NS_OUTPARAM) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetProperty(name, _retval); } \
  NS_SCRIPTABLE NS_IMETHOD Refresh(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Refresh(); } \
  NS_SCRIPTABLE NS_IMETHOD GetWrappedValue(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetWrappedValue(); } \
  NS_SCRIPTABLE NS_IMETHOD GetScript(jsdIScript * *aScript) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetScript(aScript); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public jsdIValue
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_JSDIVALUE

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, jsdIValue)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* [noscript] readonly attribute JSDContext JSDContext; */
NS_IMETHODIMP _MYCLASS_::GetJSDContext(JSDContext **aJSDContext)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] readonly attribute JSDValue JSDValue; */
NS_IMETHODIMP _MYCLASS_::GetJSDValue(JSDValue **aJSDValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean isNative; */
NS_IMETHODIMP _MYCLASS_::GetIsNative(PRBool *aIsNative)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean isNumber; */
NS_IMETHODIMP _MYCLASS_::GetIsNumber(PRBool *aIsNumber)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean isPrimitive; */
NS_IMETHODIMP _MYCLASS_::GetIsPrimitive(PRBool *aIsPrimitive)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long jsType; */
NS_IMETHODIMP _MYCLASS_::GetJsType(PRUint32 *aJsType)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute jsdIValue jsPrototype; */
NS_IMETHODIMP _MYCLASS_::GetJsPrototype(jsdIValue * *aJsPrototype)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute jsdIValue jsParent; */
NS_IMETHODIMP _MYCLASS_::GetJsParent(jsdIValue * *aJsParent)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AUTF8String jsClassName; */
NS_IMETHODIMP _MYCLASS_::GetJsClassName(nsACString & aJsClassName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute jsdIValue jsConstructor; */
NS_IMETHODIMP _MYCLASS_::GetJsConstructor(jsdIValue * *aJsConstructor)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AUTF8String jsFunctionName; */
NS_IMETHODIMP _MYCLASS_::GetJsFunctionName(nsACString & aJsFunctionName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute boolean booleanValue; */
NS_IMETHODIMP _MYCLASS_::GetBooleanValue(PRBool *aBooleanValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute double doubleValue; */
NS_IMETHODIMP _MYCLASS_::GetDoubleValue(double *aDoubleValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long intValue; */
NS_IMETHODIMP _MYCLASS_::GetIntValue(PRInt32 *aIntValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute jsdIObject objectValue; */
NS_IMETHODIMP _MYCLASS_::GetObjectValue(jsdIObject * *aObjectValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AUTF8String stringValue; */
NS_IMETHODIMP _MYCLASS_::GetStringValue(nsACString & aStringValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute long propertyCount; */
NS_IMETHODIMP _MYCLASS_::GetPropertyCount(PRInt32 *aPropertyCount)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getProperties ([array, size_is (length)] out jsdIProperty propArray, out unsigned long length); */
NS_IMETHODIMP _MYCLASS_::GetProperties(jsdIProperty * **propArray NS_OUTPARAM, PRUint32 *length NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* jsdIProperty getProperty (in AUTF8String name); */
NS_IMETHODIMP _MYCLASS_::GetProperty(const nsACString & name, jsdIProperty * *_retval NS_OUTPARAM)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void refresh (); */
NS_IMETHODIMP _MYCLASS_::Refresh()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void getWrappedValue (); */
NS_IMETHODIMP _MYCLASS_::GetWrappedValue()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute jsdIScript script; */
NS_IMETHODIMP _MYCLASS_::GetScript(jsdIScript * *aScript)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    jsdIObject */
#define JSDIOBJECT_IID_STR "87d86308-7a27-4255-b23c-ce2394f02473"

#define JSDIOBJECT_IID \
  {0x87d86308, 0x7a27, 0x4255, \
    { 0xb2, 0x3c, 0xce, 0x23, 0x94, 0xf0, 0x24, 0x73 }}

class NS_NO_VTABLE NS_SCRIPTABLE jsdIObject : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(JSDIOBJECT_IID)

  /* [noscript] readonly attribute JSDContext JSDContext; */
  NS_IMETHOD GetJSDContext(JSDContext **aJSDContext) = 0;

  /* [noscript] readonly attribute JSDObject JSDObject; */
  NS_IMETHOD GetJSDObject(JSDObject **aJSDObject) = 0;

  /* readonly attribute AUTF8String creatorURL; */
  NS_SCRIPTABLE NS_IMETHOD GetCreatorURL(nsACString & aCreatorURL) = 0;

  /* readonly attribute unsigned long creatorLine; */
  NS_SCRIPTABLE NS_IMETHOD GetCreatorLine(PRUint32 *aCreatorLine) = 0;

  /* readonly attribute AUTF8String constructorURL; */
  NS_SCRIPTABLE NS_IMETHOD GetConstructorURL(nsACString & aConstructorURL) = 0;

  /* readonly attribute unsigned long constructorLine; */
  NS_SCRIPTABLE NS_IMETHOD GetConstructorLine(PRUint32 *aConstructorLine) = 0;

  /* readonly attribute jsdIValue value; */
  NS_SCRIPTABLE NS_IMETHOD GetValue(jsdIValue * *aValue) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(jsdIObject, JSDIOBJECT_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_JSDIOBJECT \
  NS_IMETHOD GetJSDContext(JSDContext **aJSDContext); \
  NS_IMETHOD GetJSDObject(JSDObject **aJSDObject); \
  NS_SCRIPTABLE NS_IMETHOD GetCreatorURL(nsACString & aCreatorURL); \
  NS_SCRIPTABLE NS_IMETHOD GetCreatorLine(PRUint32 *aCreatorLine); \
  NS_SCRIPTABLE NS_IMETHOD GetConstructorURL(nsACString & aConstructorURL); \
  NS_SCRIPTABLE NS_IMETHOD GetConstructorLine(PRUint32 *aConstructorLine); \
  NS_SCRIPTABLE NS_IMETHOD GetValue(jsdIValue * *aValue); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_JSDIOBJECT(_to) \
  NS_IMETHOD GetJSDContext(JSDContext **aJSDContext) { return _to GetJSDContext(aJSDContext); } \
  NS_IMETHOD GetJSDObject(JSDObject **aJSDObject) { return _to GetJSDObject(aJSDObject); } \
  NS_SCRIPTABLE NS_IMETHOD GetCreatorURL(nsACString & aCreatorURL) { return _to GetCreatorURL(aCreatorURL); } \
  NS_SCRIPTABLE NS_IMETHOD GetCreatorLine(PRUint32 *aCreatorLine) { return _to GetCreatorLine(aCreatorLine); } \
  NS_SCRIPTABLE NS_IMETHOD GetConstructorURL(nsACString & aConstructorURL) { return _to GetConstructorURL(aConstructorURL); } \
  NS_SCRIPTABLE NS_IMETHOD GetConstructorLine(PRUint32 *aConstructorLine) { return _to GetConstructorLine(aConstructorLine); } \
  NS_SCRIPTABLE NS_IMETHOD GetValue(jsdIValue * *aValue) { return _to GetValue(aValue); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_JSDIOBJECT(_to) \
  NS_IMETHOD GetJSDContext(JSDContext **aJSDContext) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetJSDContext(aJSDContext); } \
  NS_IMETHOD GetJSDObject(JSDObject **aJSDObject) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetJSDObject(aJSDObject); } \
  NS_SCRIPTABLE NS_IMETHOD GetCreatorURL(nsACString & aCreatorURL) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCreatorURL(aCreatorURL); } \
  NS_SCRIPTABLE NS_IMETHOD GetCreatorLine(PRUint32 *aCreatorLine) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetCreatorLine(aCreatorLine); } \
  NS_SCRIPTABLE NS_IMETHOD GetConstructorURL(nsACString & aConstructorURL) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetConstructorURL(aConstructorURL); } \
  NS_SCRIPTABLE NS_IMETHOD GetConstructorLine(PRUint32 *aConstructorLine) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetConstructorLine(aConstructorLine); } \
  NS_SCRIPTABLE NS_IMETHOD GetValue(jsdIValue * *aValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetValue(aValue); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public jsdIObject
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_JSDIOBJECT

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, jsdIObject)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* [noscript] readonly attribute JSDContext JSDContext; */
NS_IMETHODIMP _MYCLASS_::GetJSDContext(JSDContext **aJSDContext)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] readonly attribute JSDObject JSDObject; */
NS_IMETHODIMP _MYCLASS_::GetJSDObject(JSDObject **aJSDObject)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AUTF8String creatorURL; */
NS_IMETHODIMP _MYCLASS_::GetCreatorURL(nsACString & aCreatorURL)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long creatorLine; */
NS_IMETHODIMP _MYCLASS_::GetCreatorLine(PRUint32 *aCreatorLine)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute AUTF8String constructorURL; */
NS_IMETHODIMP _MYCLASS_::GetConstructorURL(nsACString & aConstructorURL)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long constructorLine; */
NS_IMETHODIMP _MYCLASS_::GetConstructorLine(PRUint32 *aConstructorLine)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute jsdIValue value; */
NS_IMETHODIMP _MYCLASS_::GetValue(jsdIValue * *aValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


/* starting interface:    jsdIProperty */
#define JSDIPROPERTY_IID_STR "09332485-1419-42bc-ba1f-070815ed4b82"

#define JSDIPROPERTY_IID \
  {0x09332485, 0x1419, 0x42bc, \
    { 0xba, 0x1f, 0x07, 0x08, 0x15, 0xed, 0x4b, 0x82 }}

class NS_NO_VTABLE NS_SCRIPTABLE jsdIProperty : public jsdIEphemeral {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(JSDIPROPERTY_IID)

  /* [noscript] readonly attribute JSDContext JSDContext; */
  NS_IMETHOD GetJSDContext(JSDContext **aJSDContext) = 0;

  /* [noscript] readonly attribute JSDProperty JSDProperty; */
  NS_IMETHOD GetJSDProperty(JSDProperty **aJSDProperty) = 0;

  enum { FLAG_ENUMERATE = 1U };

  enum { FLAG_READONLY = 2U };

  enum { FLAG_PERMANENT = 4U };

  enum { FLAG_ALIAS = 8U };

  enum { FLAG_ARGUMENT = 16U };

  enum { FLAG_VARIABLE = 32U };

  enum { FLAG_EXCEPTION = 64U };

  enum { FLAG_ERROR = 128U };

  enum { FLAG_HINTED = 2048U };

  /* readonly attribute unsigned long flags; */
  NS_SCRIPTABLE NS_IMETHOD GetFlags(PRUint32 *aFlags) = 0;

  /* readonly attribute jsdIValue alias; */
  NS_SCRIPTABLE NS_IMETHOD GetAlias(jsdIValue * *aAlias) = 0;

  /* readonly attribute jsdIValue name; */
  NS_SCRIPTABLE NS_IMETHOD GetName(jsdIValue * *aName) = 0;

  /* readonly attribute jsdIValue value; */
  NS_SCRIPTABLE NS_IMETHOD GetValue(jsdIValue * *aValue) = 0;

  /* readonly attribute unsigned long varArgSlot; */
  NS_SCRIPTABLE NS_IMETHOD GetVarArgSlot(PRUint32 *aVarArgSlot) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(jsdIProperty, JSDIPROPERTY_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_JSDIPROPERTY \
  NS_IMETHOD GetJSDContext(JSDContext **aJSDContext); \
  NS_IMETHOD GetJSDProperty(JSDProperty **aJSDProperty); \
  NS_SCRIPTABLE NS_IMETHOD GetFlags(PRUint32 *aFlags); \
  NS_SCRIPTABLE NS_IMETHOD GetAlias(jsdIValue * *aAlias); \
  NS_SCRIPTABLE NS_IMETHOD GetName(jsdIValue * *aName); \
  NS_SCRIPTABLE NS_IMETHOD GetValue(jsdIValue * *aValue); \
  NS_SCRIPTABLE NS_IMETHOD GetVarArgSlot(PRUint32 *aVarArgSlot); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_JSDIPROPERTY(_to) \
  NS_IMETHOD GetJSDContext(JSDContext **aJSDContext) { return _to GetJSDContext(aJSDContext); } \
  NS_IMETHOD GetJSDProperty(JSDProperty **aJSDProperty) { return _to GetJSDProperty(aJSDProperty); } \
  NS_SCRIPTABLE NS_IMETHOD GetFlags(PRUint32 *aFlags) { return _to GetFlags(aFlags); } \
  NS_SCRIPTABLE NS_IMETHOD GetAlias(jsdIValue * *aAlias) { return _to GetAlias(aAlias); } \
  NS_SCRIPTABLE NS_IMETHOD GetName(jsdIValue * *aName) { return _to GetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD GetValue(jsdIValue * *aValue) { return _to GetValue(aValue); } \
  NS_SCRIPTABLE NS_IMETHOD GetVarArgSlot(PRUint32 *aVarArgSlot) { return _to GetVarArgSlot(aVarArgSlot); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_JSDIPROPERTY(_to) \
  NS_IMETHOD GetJSDContext(JSDContext **aJSDContext) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetJSDContext(aJSDContext); } \
  NS_IMETHOD GetJSDProperty(JSDProperty **aJSDProperty) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetJSDProperty(aJSDProperty); } \
  NS_SCRIPTABLE NS_IMETHOD GetFlags(PRUint32 *aFlags) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetFlags(aFlags); } \
  NS_SCRIPTABLE NS_IMETHOD GetAlias(jsdIValue * *aAlias) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetAlias(aAlias); } \
  NS_SCRIPTABLE NS_IMETHOD GetName(jsdIValue * *aName) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetName(aName); } \
  NS_SCRIPTABLE NS_IMETHOD GetValue(jsdIValue * *aValue) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetValue(aValue); } \
  NS_SCRIPTABLE NS_IMETHOD GetVarArgSlot(PRUint32 *aVarArgSlot) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetVarArgSlot(aVarArgSlot); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public jsdIProperty
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_JSDIPROPERTY

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, jsdIProperty)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* [noscript] readonly attribute JSDContext JSDContext; */
NS_IMETHODIMP _MYCLASS_::GetJSDContext(JSDContext **aJSDContext)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] readonly attribute JSDProperty JSDProperty; */
NS_IMETHODIMP _MYCLASS_::GetJSDProperty(JSDProperty **aJSDProperty)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long flags; */
NS_IMETHODIMP _MYCLASS_::GetFlags(PRUint32 *aFlags)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute jsdIValue alias; */
NS_IMETHODIMP _MYCLASS_::GetAlias(jsdIValue * *aAlias)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute jsdIValue name; */
NS_IMETHODIMP _MYCLASS_::GetName(jsdIValue * *aName)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute jsdIValue value; */
NS_IMETHODIMP _MYCLASS_::GetValue(jsdIValue * *aValue)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* readonly attribute unsigned long varArgSlot; */
NS_IMETHODIMP _MYCLASS_::GetVarArgSlot(PRUint32 *aVarArgSlot)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_jsdIDebuggerService_h__ */
