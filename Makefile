
Demo.exe : MyClass.o Demo.o HMyClass.o
	   link *.obj

MyClass.o : MyClass.h MyClass.cpp
	cl -Wall -c MyClass.cpp -o MyClass.o

Demo.o : HMyClass.h Demo.c
	cl -Wall -c Demo.c -o Demo.o

HMyClass.o : HMyClass.h HMyClass.cpp MyClass.h
	cl -Wall -c HMyClass.cpp -o HMyClass.o

clean : 
	del *.exe *.obj
