#include "rr.h"

extern "C" {
  void Init_init();
}

using namespace rr;

extern "C" {
  void Init_init() {
    GC::Init();
    V8::Init();
    Handles::Init();
    Accessor::Init();
    Context::Init();
    Invocation::Init();
    Signature::Init();
    Value::Init();
    String::Init();
    Object::Init();
    Array::Init();
    Function::Init();
    External::Init();
    Script::Init();
    Template::Init();
  }
}