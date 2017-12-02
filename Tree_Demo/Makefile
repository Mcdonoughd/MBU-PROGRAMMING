CFLAGS = -g -Wall

main: main.o Tree.o
	g++ $(CFLAGS) main.o Tree.o -o Tree_Demo -lm

main.o: main.cpp 
	g++ $(CFLAGS) -c main.cpp -lm

Tree.o: Tree.cpp Tree.h
	g++ $(CFLAGS) -c Tree.cpp -lm

all: main

clean:
	rm -f *.o Tree_Demo
