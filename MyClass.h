#ifndef MA_MYCLASS
#define MA_MYCLASS

#include <string>

class MyClassException {
  public:
    explicit MyClassException( const std::string & mesg ) : mesg_(mesg) {}
    std::string mesg_;
};

class MyClass
{
  public:
    explicit MyClass( const std::string & s );
    ~MyClass();
    int doSomething( int j );

    void iCouldThrow( int idx );

    int toplam(int a, int b);

};

#endif
