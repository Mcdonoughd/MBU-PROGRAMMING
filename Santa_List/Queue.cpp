//============================================================================
// Name        : Queue.cpp
// Author      : Daniel McDonough
// Version     :
// Copyright   : Daniel McDonough 2017
// Description : Santa's List Assignment for MBU 2017
//============================================================================

#include "Queue.h"
#include<stdio.h>

Queue::Queue(){
	this->length = 0;
	this->head = NULL;
	this->tail = NULL;
	this->prev=NULL;
	this->temp =NULL;
}

Queue::~Queue(){

}
//Push element in Queue
void Queue::add(string Name) {
	Node* temp = new Node;
	temp->Name = Name;
	temp->next = NULL;
	if(head == NULL)
	{
		head = temp;
		tail = temp;
	}
	else
	{
		prev = tail;
		tail->next = temp;
		tail = temp;
	}
	this->length++;
}

// Pop first element in Queue
void Queue::pop() {
	if (head == NULL) {
		printf("\nThe stack is empty.");
		return;

	}
	printf("The value %d was popped", head->Name);
	temp = head;
	head = head->next;
	delete temp;
	this->length--;
}

//Show top-most element in Queue
void Queue::top() {
	head = this->head;
	if (head == NULL) {
		printf("\nThe Queue is empty");

	} else {
		printf("\nTop number is %d", head->Name);
	}
}

// Shows if the Queue is empty
bool Queue::isEmpty() {
	head = this->head;
	if(head == NULL) {
		printf("\nThe Queue is empty");
		return true;

	} else {
		printf("\nThe Queue is not empty");
		return false;
	}
}

//Populate the Queue with Names
void Queue::populate(){
	this->add("MAGGY");
	this->add("BOB");
	this->add("BILLY");
	this->add("SARAH");
	this->add("WILLIAM");
	this->add("MARGE");
	this->add("BETTY");
	this->add("ALISE");
	this->add("KAT");
	this->add("JON");
	this->add("SURYA");
	this->add("DAVID");
	this->add("DORY");
	this->add("NEMO");
	this->add("SANCHEZ");
	this->add("FRANCA");
	this->add("DANNY");
	this->add("DANI");
	this->add("LILY");
	this->add("GEORGE");
	this->add("RICARDO");
	this->add("ALEX");
	this->add("TRISTAN");
	this->add("SABASTIAN");
	this->add("ANDREW");
	this->add("JASON");
	this->add("CHRIS");
	this->add("ZACH");
	this->add("MADDY");
	this->add("MARTY");
	this->add("SAM");
	this->add("ARNOLD");
}
