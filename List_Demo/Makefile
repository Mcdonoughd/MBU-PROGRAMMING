CFLAGS = -g -Wall

main: main.o List.o
	g++ $(CFLAGS) main.o List.o -o List_Demo -lm

main.o: main.cpp 
	g++ $(CFLAGS) -c main.cpp -lm

List.o: List.cpp List.h
	g++ $(CFLAGS) -c List.cpp -lm

all: main

clean:
	rm -f *.o List_Demo
