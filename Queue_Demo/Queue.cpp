//============================================================================
// Name        : Queue.cpp
// Author      : Daniel McDonough
// Version     :
// Copyright   : Daniel McDonough 2017
// Description : C++ QUEUE DEMO for MBU 2017
//============================================================================

#include "Queue.h"
#include<stdio.h>

//Queue constructor
Queue::Queue(){
	this->length = 0;
	this->head = NULL;
	this->tail = NULL;
	this->prev=NULL;
	this->temp =NULL;
}

//Queue Destructor
Queue::~Queue(){

}
//Push element in Queue
void Queue::push(int data) {
	Node* temp = new Node;
	temp->data = data;
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
	printf("The value %d was popped", head->data);
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
		printf("\nTop number is %d", head->data);
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

