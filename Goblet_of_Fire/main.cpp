//============================================================================
// Name        : main.cpp
// Author      : Daniel McDonough
// Version     :
// Copyright   : Daniel McDonough 2017
// Description : Goblet_of_Fire Assignment for MBU 2017
//============================================================================


/*
 * You've just got your ticket to Hogwarts!
 * Enter the line to get your house assignments by the sorting hat.
 * Using the Interface, show that you know what is happening in this program,
 * and show what house YOU belong to.
 *
 */


#include<iostream>
#include<stdio.h>
using namespace std;
#include "Queue.h"
// Forward Reference of Functions
int menu();

//Main function
int main() {

	Queue my_queue;
	my_queue.populate();

	int choice;
	string data;
	do {
		choice = menu();

		switch(choice) {
		case 1:
			cout<<"Who joins the line? ";
			cin>>data;
			my_queue.push(data);
			break;
		case 2:
			my_queue.pop();
			break;
		case 3:
			my_queue.top();
			break;
		case 4:
			my_queue.isEmpty();
			break;
		case 5:
			cout<<"Queue length:"<<my_queue.length<<endl;
			break;
		case 6:
			my_queue.print();
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
	printf("\nHogwarts");
	printf("\n1.Push\n2.Pop\n3.Top element\n4.Is Empty\n5.Queue_length\n6.Print Queue\n-1.Exit");
	printf("\nEnter your Choice:");
	scanf("%d",&ch);
	return ch;
}


