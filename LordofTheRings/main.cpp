//============================================================================
// Name        : main.cpp
// Author      : Daniel McDonough
// Version     :
// Copyright   : Daniel McDonough 2017
// Description : LordofTheRings Assignment for MBU 2017
//============================================================================

/*
 * Surya's favorite book is somewhere in the pile of books.
 * Help him go through it to find his favorite book "Lord of the Rings"
 *
 * NOTE: Show the instructor by showing them the top of the pile AND the length of the pile.
 */

#include<iostream>
#include<stdio.h>
using namespace std;
#include "Stack.h"
// Forward Reference of Functions
int menu();

//Main function
int main() {

	Stack my_stack;
	my_stack.populate();
	int choice;
	string data;
	do {
		choice = menu();

		switch(choice) {
		case 1:

			cout<<"What book should go on the stack? ";
			cin>>data;
			my_stack.push(data);
			break;
		case 2:
			my_stack.pop();
			break;
		case 3:
			my_stack.top();
			break;
		case 4:
			my_stack.isEmpty();
			break;
		case 5:
			cout<< "The length of the Stack is: "<< my_stack.length<<endl;
			break;
		case 6:
			my_stack.print();
			break;
		case -1:
			choice = -1;
			break;

		default: printf("\nEnter a valid choice!!");
		}
	} while(choice != -1);

	return 0;
}

//Menu function for demo
int menu() {
	int ch;
	printf("\nBook Pile");
	printf("\n1.Push\n2.Pop\n3.Top element\n4.Is Empty\n5.Stack Length\n6.Print Stack\n-1Exit");
	printf("\nEnter your Choice:");
	scanf("%d",&ch);
	return ch;
}

