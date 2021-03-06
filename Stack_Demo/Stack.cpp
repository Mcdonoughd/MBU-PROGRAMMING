//============================================================================
// Name        : Stack.cpp
// Author      : Daniel McDonough
// Version     :
// Copyright   : Daniel McDonough 2017
// Description : C++ STACK DEMO for MBU 2017
//============================================================================


#include "Stack.h"
#include<stdio.h>

//Stack Constructor
Stack::Stack(){
	this->length = 0;
	this->head = NULL;
	this->tail = NULL;
}

//Stack destructor
Stack::~Stack(){

}
//Push element in stack
void Stack::push(int data) {
	head = this->head;
		tail = this-> tail;
	if (head == NULL) {
		Node* n= new Node;

		n->data = data;
		n->next = NULL;

		head = n;
		tail = n;

	} else {
		Node* n = new Node;
		n->data = data;
		n->next = head;
		head = n;
	}
	this->length++;
}

// Pop first element in stack
void Stack::pop() {
	head = this->head;
	tail = this-> tail;
	if (head == NULL) {
		printf("\nThe stack is empty.");
		return;
	} else if (head == tail) {
		// Case when there is only 1 element in the stack
		printf("The value %d was popped", head->data);
		delete head;
		head = NULL;
		tail = NULL;

	} else {
		Node* n = new Node;
		n = head;
		head = head->next;
		printf("\nThe value %d was popped", n->data);
		delete n;
	}
	this->length--;
}

//Show top-most element in stack
void Stack::top() {
	head = this->head;
	if (head == NULL) {
		printf("\nThe stack if empty");

	} else {
		printf("\nTop number is %d", head->data);
	}
}

// Shows if the stack is empty
bool Stack::isEmpty() {
	head = this->head;
	if(head == NULL) {
		printf("\nThe stack is empty");
		return true;

	} else {
		printf("\nThe stack is not empty");
		return false;
	}
}
