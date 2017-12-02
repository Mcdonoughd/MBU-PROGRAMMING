CFLAGS = -g -Wall

main: main.o Queue.o
	g++ $(CFLAGS) main.o Queue.o -o Queue_Demo -lm

main.o: main.cpp 
	g++ $(CFLAGS) -c main.cpp -lm

Queue.o: Queue.cpp Queue.h
	g++ $(CFLAGS) -c Queue.cpp -lm

all: main

clean:
	rm -f *.o Queue_Demo
