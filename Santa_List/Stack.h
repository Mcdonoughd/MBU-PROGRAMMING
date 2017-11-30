//============================================================================
// Name        : Stack.h
// Author      : Daniel McDonough
// Version     :
// Copyright   : Daniel McDonough 2017
// Description : Santa's List Assignment for MBU 2017
//============================================================================


#ifndef STACK_H_
#define STACK_H_
#include <iostream>
#include <cstdlib>
using namespace std;

// Define Stack_Node pointer
class Stack_Node {
public:
    string data;
    Stack_Node* next;
};


class Stack{
public:
    int length; //counter for the length of a stack
    Stack_Node* head;
    Stack_Node* tail;
//define the functions to be done on a stack
    Stack();
    ~Stack();
    void print();
    void push(string Name);
    void pop();
    void top();
    bool isEmpty();
    void populate();
    void add(string Name);
    int find_count_steps(Stack_Node* t, string x, int count);
};
// Head and tail pointers



#endif //STACK_H
