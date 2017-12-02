CFLAGS = -g -Wall

main: main.o Queue.o
	g++ $(CFLAGS) main.o Queue.o -o Goblet_of_Fire -lm

main.o: main.cpp 
	g++ $(CFLAGS) -c main.cpp -lm

Queue.o: Queue.cpp Queue.h
	g++ $(CFLAGS) -c Queue.cpp -lm

all: main

clean:
	rm -f *.o Goblet_of_fire
