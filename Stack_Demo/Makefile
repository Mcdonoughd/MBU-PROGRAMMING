CFLAGS = -g -Wall

main: main.o Stack.o
	g++ $(CFLAGS) main.o Stack.o -o Stack_Demo -lm

main.o: main.cpp 
	g++ $(CFLAGS) -c main.cpp -lm

Stack.o: Stack.cpp Stack.h
	g++ $(CFLAGS) -c Stack.cpp -lm

all: main

clean:
	rm -f *.o Stack_Demo
