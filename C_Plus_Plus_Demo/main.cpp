//============================================================================
// Name        : main.cpp
// Author      : Daniel McDonough
// Version     :
// Copyright   : Daniel McDonough 2017
// Description : C++ DEMO for MBU 2017
//============================================================================


/*
 * Welcome to C++! Now that you're experts at Java and Python, you are ready for C++. C++ unlike Java and Python
 * doesn't do certain things for you as we'll see later.
 */

/*
 * These are in include files, similar to import in java
 */
#include <iostream> //note how these do not end in a ;
#include <stdio.h>
#include "my_h_file.h" //This is the format to import your own file
//YOU DO NOT INCLUDE OTHER CPP FILES

using namespace std; // you dont need to know what this is but feel free to look up what namespaces are in your free time.


/*
 * int argc is the number of arguments passed with the program
 * char* argv[] are the arguments themselves
 */
int main(int argc,char* argv[]) {

	cout << "The Arguments given were:" << endl; //this is a way to print in C++

	//This is a for loop that prints all the arguments given
	//a For loop does all the commands inside the block until the condition is satisfied

	for(int i = 0; i<=argc-1; i++){ //here, our condition is that i is <= to the number of arguments minus one.

		cout << argv[i] << endl;//Note how the first argument (0th element) is the file path for the program

	//when the loop reaches the end of the block, the computer checks if the condition is satisfied. if not it does i++ (or i= i+1)
	}
	//Once the condition is satisfied, the for loop exits the block

	printf("The for-loop was exited \n"); //another way to print in C++

	printf("The GLOBAL VARIABLE IS %d \n",globalvar); //how to print variables

	//main should ALWAYS return 0, if not it's considered an error!
	return 0;
	// Thats all you need to know about C++ (in a general sense)
}
