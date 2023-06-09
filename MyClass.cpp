#include "MyClass.h"
#include <iostream>

MyClass::MyClass( const std::string & s ) {
  std::cout<<__func__<<" : Creating MyClass["<<this<<"]"<<std::endl;
}

MyClass::~MyClass() {
  std::cout<<__func__<<" : Destroying MyClass["<<this<<"]"<<std::endl;
}

int MyClass::doSomething( int j ) {
  std::cout<<__func__<<" : doing something with "<<j<<std::endl;
  return j+1;
}

int MyClass::toplam(int a, int b) {
	
	std::cout << __func__ << (a + b) << " : toplam " << (a+b) << std::endl;
	return a + b;
}

void MyClass::iCouldThrow( int idx ) {
  std::cout<<__func__<<" : called with "<<idx<<std::endl;
  if( idx < 0 ) throw MyClassException("I hate negative numbers");
  if( idx == 13 ) throw MyClassException("Unlucky 13");
}

