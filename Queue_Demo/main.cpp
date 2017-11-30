//============================================================================
// Name        : main.cpp
// Author      : Daniel McDonough
// Version     :
// Copyright   : Daniel McDonough 2017
// Description : C++ QUEUE DEMO for MBU 2017
//============================================================================


#include<iostream>
#include<stdio.h>
using namespace std;
#include "Queue.h"

// Forward Reference of Functions
int menu();

//Main function
int main() {

	Queue my_queue;

	int choice;
//This DEMO is interactive and is best explained by fooling around with the options
	do {
		choice = menu();

		switch(choice) {
		case 1:
			//add value
			int data;
			cout<<"Enter value to be stored in Queue:";
			cin>>data;
			my_queue.push(data);
			break;
		case 2:
			//remove value from queue
			my_queue.pop();
			break;
		case 3:
			//look at the top of the queue
			my_queue.top();
			break;
		case 4:
			//check if the queue is empty
			my_queue.isEmpty();
			break;
		case 5:
			//print the length of the queue
			cout<<"Queue length:"<<my_queue.length<<endl;
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
	printf("\nQueue");
	printf("\n1.Push\n2.Pop\n3.Top element\n4.Is Empty\n5.Queue_length\n-1.Exit");
	printf("\nEnter your Choice:");
	scanf("%d",&ch);
	return ch;
}



