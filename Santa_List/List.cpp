//============================================================================
// Name        : List.cpp
// Author      : Daniel McDonough
// Version     :
// Copyright   : Daniel McDonough 2017
// Description : Santa's List Assignment for MBU 2017
//============================================================================

#include<stdio.h>
#include "List.h"

//YOU DO NOT HAVE TO KNOW HOW THESE FUNCTIONS WORK
//BUT YOU SHOULD KNOW WHAT THEY DO
LinkedList::LinkedList(){
	this->length = 0;
	this->head = NULL;
}

LinkedList::~LinkedList(){
	std::cout << "LIST DELETED";
}

void LinkedList::add(string data){
	Node* node = new Node();
	node->data = data;
	node->next = this->head;
	this->head = node;
	this->length++;
}

void LinkedList::print(){
	Node* head = this->head;
	int i = 1;
	while(head){
		std::cout << i << ": " << head->data << std::endl;
		head = head->next;
		i++;
	}
}

int LinkedList::find_count_steps(Node* t, string x, int count){
	if(t == NULL){
		printf("THE TREE IS EMPTY\n");
		return 0;
	}
	else if(x != t->data){
		return find_count_steps(t->next, x,count+1);
	}
	else
		return count+1;
}

//Populate the List with Names
void LinkedList::populate(){
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
	this->add("MAGGY");
}

