//============================================================================
// Name        : List.cpp
// Author      : Daniel McDonough
// Version     :
// Copyright   : Daniel McDonough 2017
// Description : C++ LIST DEMO for MBU 2017
//============================================================================

#include<stdio.h>
#include "List.h"

//YOU DO NOT HAVE TO KNOW HOW THESE FUNCTIONS WORK
//BUT YOU SHOULD KNOW WHAT THEY DO

//List Constructor
LinkedList::LinkedList(){
    this->length = 0;
    this->head = NULL;
}

//List Destructor
LinkedList::~LinkedList(){
    std::cout << "LIST DELETED";
}

//Add element to the list
void LinkedList::add(int data){
	if (head == NULL) {
		Node* n= new Node;
		this->head = n;
		n->next = NULL;
	}
	else {
		Node* node = new Node();
		node->data = data;
		node->next = this->head;
		this->head = node;
	}
	this->length++;

}

//Print List
void LinkedList::print(){
    Node* head = this->head;
    int i = 1;
    while(head){
        std::cout << i << ": " << head->data << std::endl;
        head = head->next;
        i++;
    }
}
