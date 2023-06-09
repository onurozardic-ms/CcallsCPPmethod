#include "MyClass.h"

extern "C" {
  #include "HMyClass.h"
}


HMyClass * myClass_create( const char * s, MyClassEH * eh  ) {
  try {
    return reinterpret_cast<HMyClass*>(new MyClass(s));
  } catch ( MyClassException e ) {
    if(!eh) throw;
    eh->eh(e.mesg_.c_str(), eh->user_data);
    return NULL;
  }
}

void myClass_destroy( HMyClass * h, MyClassEH * eh  ) {
  try {
    delete reinterpret_cast<MyClass*>(h);
  } catch ( MyClassException e ) {
    if(!eh) throw;
    eh->eh(e.mesg_.c_str(), eh->user_data);
  }
}

int myClass_doSomething( HMyClass * h, int j, MyClassEH * eh  ) {
  try {
    return reinterpret_cast<MyClass*>(h)->doSomething(j);
  } catch ( MyClassException e ) {
    if(!eh) throw;
    eh->eh(e.mesg_.c_str(), eh->user_data);
    return 0;
  }
}

void myClass_iCouldThrow( HMyClass * h, int j, MyClassEH * eh  ) {
  try {
    reinterpret_cast<MyClass*>(h)->iCouldThrow(j);
  } catch ( MyClassException e ) {
    if(!eh) throw;
    eh->eh(e.mesg_.c_str(), eh->user_data);
  }
}




