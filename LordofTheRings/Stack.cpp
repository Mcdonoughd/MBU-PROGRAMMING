//============================================================================
// Name        : Stack.cpp
// Author      : Daniel McDonough
// Version     :
// Copyright   : Daniel McDonough 2017
// Description : LordofTheRings Assignment for MBU 2017
//============================================================================


#include "Stack.h"
#include<stdio.h>

Stack::Stack(){
	this->length = 0;
	this->head = NULL;
	this->tail = NULL;
}
Stack::~Stack(){

}
//Push element in stack
void Stack::push(string data) {
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
		cout<<head->data<<" was removed"<<endl;

		delete head;
		head = NULL;
		tail = NULL;

	} else {
		Node* n = new Node;
		n = head;
		head = head->next;
		cout<<n->data<<" was removed"<<endl;
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
		cout<<head->data<<" is on top"<<endl;
		if(head->data == "Lord of The Rings"){
			cout<<" There it is!"<<endl;
			if(this->length!=1){
				cout<<"YOU CHEATED!"<<endl;
			}
		}
		else{
			cout<<"that's not what I want!"<<endl;
		}
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

//print the stack
void Stack::print(){
	Node* head = this->head;
	int i = 1;
	while(head){
		std::cout << i << ": " << head->data << std::endl;
		head = head->next;
		i++;
	}
}
void Stack::populate(){
	this->push("Lord of The Rings");
	this->push("The Hobbit");
	this->push("Harry Potter");
	this->push("Game of Thrones");
	this->push("Pokemon");
	this->push("Adventure Time");
	this->push("Star Wars");
	this->push("Star Trek");
	this->push("1984");
	this->push("Lord of the Flies");
	this->push("James and the Giant Peach");
	this->push("Charolette's Web");
	this->push("The Hungry Caterpillar");
}
