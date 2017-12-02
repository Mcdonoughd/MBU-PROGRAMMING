//============================================================================
// Name        : Queue.h
// Author      : Daniel McDonough
// Version     :
// Copyright   : Daniel McDonough 2017
// Description : Santa's List Assignment for MBU 2017
//============================================================================


#ifndef QUEUE_H_
#define QUEUE_H_
#include <iostream>
#include <cstdlib>
using namespace std;

// Define Queue_Node pointer
class Queue_Node {
public:
    string Name;
    Queue_Node* next;
};



class Queue{
public:
    int length; //counter for the length of a Queue
    Queue_Node* head;
    Queue_Node* tail;
    Queue_Node *prev;
    Queue_Node *temp;
//define the functions to be done on a Queue
    Queue();
    ~Queue();
    void print();
    void add(string Name); //added add for easy implementation of assignment does same thing as push
    void push(string Name);
    void pop();
    void top();
    bool isEmpty();
    void populate();
    int find_count_steps(Queue_Node* t, string x, int count);
};
// Head and tail pointers



#endif //QUEUE_H
