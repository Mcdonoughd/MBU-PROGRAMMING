CFLAGS = -g -Wall

main: main.o
	g++ $(CFLAGS) main.o  -o C_Plus_Plus_Demo -lm

main.o: main.cpp my_h_file.h
	g++ $(CFLAGS) -c main.cpp -lm
all: main

clean:
	rm -f *.o C_Plus_Plus_Demo
