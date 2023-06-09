#include "HMyClass.h"
#include <stdio.h>

void my_eh( const char * error_message, void * unused)
{
  printf("my_eh: %s\n", error_message);
}

int main()
{
  MyClassEH eh = { &my_eh, NULL };

  HMyClass * h = myClass_create("hello", &eh);
  int j = myClass_doSomething(h, 3, &eh);
  printf("myClass_doSomething returned %d\n", j);
  printf("MyClass::toplam=%d\n",myClass_toplam(h,3,5,&eh));
  myClass_iCouldThrow(h, -1, &eh);
  myClass_destroy(h, &eh);
  printf("DONE...\n");
  return 1;
}
