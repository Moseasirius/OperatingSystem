cc = gcc
all:hellocpp hello main

hellocpp: hello.cpp
	g++ hello.cpp -o hellocpp

hello: hello.c
	$(cc) hello.c -o hello
main: main.c max.o min.o
	$(cc) main.c max.o min.o -o main
max.o:
	$(cc) -c max.c 
min.o: 
	$(cc) -c min.c
clean:
	rm *.o hellocpp hello main
	
