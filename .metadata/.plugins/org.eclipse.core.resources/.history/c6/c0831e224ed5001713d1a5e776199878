//============================================================================
// Name        : main.cpp
// Author      : Daniel McDonough
// Version     : 1.2
// Copyright   : Daniel McDonough 2017
// Description : Santa's List Assignment for MBU 2017
//============================================================================


/*
 * Santa has a list of everyone in the world. Keeping track of it is such a hassle.
 * It takes a long time to go through all the names, just to find the one he needs.
 * Santa needs your help to develop a program that allows for quick, organized searches
 * of his list. Given a test program, add your name to the bottom of the list.
 * Then using the example data structures, implement one that allows your name to be searched
 * faster than in the regular list and compare the two.
 *
 */

//Includes
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include "List.h"
#include "Tree.h"

LinkedList old_list; //Old list is a Linked List

string YOURNAME="     "; //INPUT YOUR NAME

LinkedList new_list; //Change new_list's data type

//MAIN FUNCTION
int main(int argc, char const *argv[]){

	//Populate List With All Names
	old_list.populate();
	new_list.populate();
	//Add Your Name Into The List
	old_list.add(YOURNAME);
	new_list.add(YOURNAME);


	int old_steps = old_list.find_count_steps(old_list.head,YOURNAME,0);
	int new_steps = new_list.find_count_steps(new_list.head,YOURNAME,0);


	if(new_steps<old_steps){
		printf("Success!");
		return 0;
	}
	else{
		printf("NOPE, TRY AGAIN!");
	}
	return 0;
}

