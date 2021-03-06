//============================================================================
// Name        : Queue.h
// Author      : Daniel McDonough
// Version     :
// Copyright   : Daniel McDonough 2017
// Description : Goblet_of_Fire Assignment for MBU 2017
//============================================================================


#ifndef QUEUE_H_
#define QUEUE_H_
#include <iostream>
#include <cstdlib>
using namespace std;

// Define node pointer
class Node {
public:
	string data;
	Node* next;
};



class Queue{
public:
	int length; //counter for the length of a list
	Node* head;
	Node* tail;
	Node *prev;
	Node *temp;
	//define the functions to be done on a list
	Queue();
	~Queue();
	void print();
	void push(string data);
	void pop();
	void top();
	bool isEmpty();
	void populate();
};
// Head and tail pointers



#endif //QUEUE_H
