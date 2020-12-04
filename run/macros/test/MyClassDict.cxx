// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME MyClassDict

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "include/EventHandler.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_EventHandler(void *p);
   static void deleteArray_EventHandler(void *p);
   static void destruct_EventHandler(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EventHandler*)
   {
      ::EventHandler *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EventHandler >(0);
      static ::ROOT::TGenericClassInfo 
         instance("EventHandler", ::EventHandler::Class_Version(), "include/EventHandler.h", 12,
                  typeid(::EventHandler), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EventHandler::Dictionary, isa_proxy, 4,
                  sizeof(::EventHandler) );
      instance.SetDelete(&delete_EventHandler);
      instance.SetDeleteArray(&deleteArray_EventHandler);
      instance.SetDestructor(&destruct_EventHandler);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EventHandler*)
   {
      return GenerateInitInstanceLocal((::EventHandler*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::EventHandler*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr EventHandler::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *EventHandler::Class_Name()
{
   return "EventHandler";
}

//______________________________________________________________________________
const char *EventHandler::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EventHandler*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int EventHandler::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EventHandler*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EventHandler::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EventHandler*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EventHandler::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EventHandler*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void EventHandler::Streamer(TBuffer &R__b)
{
   // Stream an object of class EventHandler.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(EventHandler::Class(),this);
   } else {
      R__b.WriteClassBuffer(EventHandler::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_EventHandler(void *p) {
      delete ((::EventHandler*)p);
   }
   static void deleteArray_EventHandler(void *p) {
      delete [] ((::EventHandler*)p);
   }
   static void destruct_EventHandler(void *p) {
      typedef ::EventHandler current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::EventHandler

namespace {
  void TriggerDictionaryInitialization_MyClassDict_Impl() {
    static const char* headers[] = {
"include/EventHandler.h",
0
    };
    static const char* includePaths[] = {
"/cvmfs/ilc.desy.de/sw/x86_64_gcc49_sl6/root/6.08.06/include",
"/gpfs/home/ilc/yokugawa/work/MonoPhoton/run/macros/test/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "MyClassDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$include/EventHandler.h")))  EventHandler;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "MyClassDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "include/EventHandler.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"EventHandler", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("MyClassDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_MyClassDict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_MyClassDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_MyClassDict() {
  TriggerDictionaryInitialization_MyClassDict_Impl();
}
