
Demo.x : MyClass.o Demo.o HMyClass.o
	g++ Demo.o MyClass.o HMyClass.o -o Demo.x

MyClass.o : MyClass.h MyClass.cpp
	g++ -Wall -c MyClass.cpp -o MyClass.o

Demo.o : HMyClass.h Demo.c
	gcc -Wall -c Demo.c -o Demo.o

HMyClass.o : HMyClass.h HMyClass.cpp MyClass.h
	g++ -Wall -c HMyClass.cpp -o HMyClass.o
