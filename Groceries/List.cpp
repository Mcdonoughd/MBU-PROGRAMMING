//============================================================================
// Name        : List.cpp
// Author      : Daniel McDonough
// Version     :
// Copyright   : Daniel McDonough 2017
// Description : Groceries assignment for MBU 2017
//============================================================================

#include<stdio.h>
#include "List.h"

//YOU DO NOT HAVE TO KNOW HOW THESE FUNCTIONS WORK
//BUT YOU SHOULD KNOW WHAT THEY DO

//List constructor
LinkedList::LinkedList(){
	this->length = 0;
	this->head = NULL;
}

//list destructor
LinkedList::~LinkedList(){
	std::cout << "LIST DELETED";
}

//Add element to List
void LinkedList::add(int data, string name){
	Node* head = this->head;
	int i = 1;
	//check if node exists
	while(head){
		if(head->item_name == name){
			head->amount+=data;
			return;
		}
		head = head->next;
		i++;
	}
	//if node doesnt exist already
	Node* node = new Node();
	node->item_name = name;
	node->amount = data;
	node->next = this->head;
	this->head = node;
	this->length++;
}

//print List
void LinkedList::print(){
	Node* head = this->head;
	int i = 1;
	while(head){
		std::cout << head->item_name << ": " << head->amount << std::endl;
		head = head->next;
		i++;
	}
}

//populate the list
void LinkedList::populate(){
	this->add(3,"Apples");
	this->add(5,"Bananas");
	this->add(4,"Twix");
	this->add(1,"Milk");
	this->add(12,"Eggs");
	this->add(2,"Watermelon");
}






