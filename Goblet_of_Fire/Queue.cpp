//============================================================================
// Name        : Queue.cpp
// Author      : Daniel McDonough
// Version     :
// Copyright   : Daniel McDonough 2017
// Description : Goblet_of_Fire Assignment for MBU 2017
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
void Queue::push(string data) {
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
	srand ( time(NULL) ); //initialize the random seed
	int RandIndex = rand() % 4; //generates a random number between 0 and 3
	string arrayNum[4] = {"Gryffindor", "Hufflepuff", "Ravenclaw", "Slytherin"};
	cout<<head->data << " is a "<<arrayNum[RandIndex] << endl;
	temp = head;
	head = head->next;
	delete temp;
	this->length--;
}

//Show top-most element in Queue
void Queue::top() {
	head = this->head;
	if (head == NULL) {
		printf("\nThe Queue if empty");

	} else {
		cout<<"The next person in line is "<< head->data << endl;
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
void Queue::print(){
	Node* head = this->head;
	int i = 1;
	while(head){
		std::cout << i << ": " << head->data << std::endl;
		head = head->next;
		i++;
	}
}
void Queue::populate(){
	this->push("Harry");
	this->push("Arin");
	this->push("Ron");
	this->push("Gandalf"); //What is he doing here?
	this->push("Jon");
	this->push("MoldyWart");
	this->push("Snape");
	this->push("Dumbledore");
	this->push("Malfoy");
}
