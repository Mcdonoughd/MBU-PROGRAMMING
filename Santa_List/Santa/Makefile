CFLAGS = -g -Wall

main: main.o List.o Tree.o Stack.o Queue.o
	g++ $(CFLAGS) main.o List.o Tree.o Stack.o Queue.o -o Santa_List -lm

main.o: main.cpp 
	g++ $(CFLAGS) -c main.cpp -lm

List.o: List.cpp List.h
	g++ $(CFLAGS) -c List.cpp -lm
Stack.o: Stack.cpp Stack.h
	g++ $(CFLAGS) -c Stack.cpp -lm
Queue.o: Queue.cpp Queue.h
	g++ $(CFLAGS) -c Queue.cpp -lm
Tree.o: Tree.cpp Tree.h
	g++ $(CFLAGS) -c Tree.cpp -lm

all: main

clean:
	rm -f *.o Santa_List
