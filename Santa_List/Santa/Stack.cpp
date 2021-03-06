//============================================================================
// Name        : Stack.cpp
// Author      : Daniel McDonough
// Version     :
// Copyright   : Daniel McDonough 2017
// Description : Santa's List Assignment for MBU 2017
//============================================================================


#include "Stack.h"
#include<stdio.h>
#include <iostream>

//Stack Constructor
Stack::Stack(){
	this->length = 0;
	this->head = NULL;
	this->tail = NULL;
}

//Stack destructor
Stack::~Stack(){

}

//Push element of the stack
void Stack::add(string name){
	this->push(name);
}

//Push element in stack
void Stack::push(string data) {
	head = this->head;
		tail = this-> tail;
	if (head == NULL) {
		Stack_Node* n= new Stack_Node;

		n->data = data;
		n->next = NULL;

		head = n;
		tail = n;

	} else {
		Stack_Node* n = new Stack_Node;
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
		std::cout << "\nThe stack is empty." << endl;
		return;
	} else if (head == tail) {
		// Case when there is only 1 element in the stack
		std::cout << "The value " <<head->data<< " was popped" <<endl;
		delete head;
		head = NULL;
		tail = NULL;

	} else {
		Stack_Node* n = new Stack_Node;
		n = head;
		head = head->next;
		std::cout << "\nThe value" << n->data << " was popped" << endl;
		delete n;
	}
	this->length--;
}

//Show top-most element in stack
void Stack::top() {
	head = this->head;
	if (head == NULL) {
		std::cout << "\nThe stack if empty" << endl;

	} else {
		std::cout << "\nTop is " << head->data<< endl;
	}
}

// Shows if the stack is empty
bool Stack::isEmpty() {
	head = this->head;
	if(head == NULL) {
		std::cout <<"\nThe stack is empty"<< endl;
		return true;

	} else {
		std::cout <<"\nThe stack is not empty"<< endl;
		return false;
	}
}

//Counts the number of steps to find the given name
int Stack::find_count_steps(Stack_Node* t, string x, int count){
	if(t == NULL){
		std::cout <<"Could Not Find What You're Looking For!\n"<< endl;
		return 0;
	}
	else if(x != t->data){
		return find_count_steps(t->next, x,count+1);
	}
	else
		return count+1;
}

//Populate the Stack with Names
void Stack::populate(){
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






