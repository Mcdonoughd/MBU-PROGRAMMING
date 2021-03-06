//============================================================================
// Name        : Queue.cpp
// Author      : Daniel McDonough
// Version     :
// Copyright   : Daniel McDonough 2017
// Description : Santa's List Assignment for MBU 2017
//============================================================================

#include "Queue.h"
#include <stdio.h>
#include <iostream>
//Queue Constructor
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
void Queue::push(string Name){
	Queue_Node* temp = new Queue_Node;
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

//Push element in Queue
void Queue::add(string Name) {
	this->push(Name);
}

// Pop first element in Queue
void Queue::pop() {
	if (head == NULL) {
		std::cout<<"Old list must be a LinkedList! \n"<< endl;
		std::cout<<"\nThe stack is empty." <<endl;
		return;
	}
	std::cout<<"The value "<< head->Name <<" was popped" << endl;
	temp = head;
	head = head->next;
	delete temp;
	this->length--;
}

//Show top-most element in Queue
void Queue::top() {
	head = this->head;
	if (head == NULL) {
		std::cout<<"\nThe Queue is empty"<< endl;

	} else {
		std::cout<<"\nTop number is " << head->Name << endl;
	}
}

// Shows if the Queue is empty
bool Queue::isEmpty() {
	head = this->head;
	if(head == NULL) {
		std::cout<<"\nThe Queue is empty"<< endl;
		return true;

	} else {
		std::cout<<"\nThe Queue is not empty"<< endl;
		return false;
	}
}

//Counts the number of steps to find the given name
int Queue::find_count_steps(Queue_Node* t, string x, int count){
	if(t == NULL){
		std::cout<<"Could Not Find What You're Looking For!\n"<< endl;
		return 0;
	}
	else if(x != t->Name){
		return find_count_steps(t->next, x,count+1);
	}
	else
		return count+1;
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
