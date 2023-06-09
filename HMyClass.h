#ifndef MA_HMYCLASS
#define MA_HMYCLASS

struct HMyClass; // An opaque type that we'll use as a handle
typedef struct HMyClass HMyClass;

typedef void(*MyClassErrorHandlerFn)(const char * error_message, void * user_data);

typedef struct MyClassEH {
  MyClassErrorHandlerFn eh;
  void * user_data;
} MyClassEH;

HMyClass * myClass_create( const char * s, MyClassEH * eh );
void myClass_destroy( HMyClass * v, MyClassEH * eh );
int myClass_doSomething( HMyClass * v, int i, MyClassEH * eh );
int myClass_toplam(HMyClass* v, int a, int b, MyClassEH * eh);
void myClass_iCouldThrow( HMyClass * v, int i, MyClassEH * eh );

#endif
