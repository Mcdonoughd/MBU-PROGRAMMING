CFLAGS = -g -Wall

main: main.o Stack.o
	g++ $(CFLAGS) main.o Stack.o -o LordofTheRings -lm

main.o: main.cpp 
	g++ $(CFLAGS) -c main.cpp -lm

Stack.o: Stack.cpp Stack.h
	g++ $(CFLAGS) -c Stack.cpp -lm

all: main

clean:
	rm -f *.o LordofTheRings
