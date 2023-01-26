main: main.o
	g++ -o main main.o

tests: tests.o
	g++ -o tests tests.o


main.o: main.cpp MyVector.cxx MyVector.h

tests.o: tests.cpp doctest.h
	g++ -c -std=c++11 -Wall tests.cpp

clean:
	rm *.o
