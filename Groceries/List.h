//============================================================================
// Name        : List.h
// Author      : Daniel McDonough
// Version     :
// Copyright   : Daniel McDonough 2017
// Description : Groceries assignment for MBU 2017
//============================================================================

#ifndef LIST_H_
#define LIST_H_
#include <iostream>
#include <cstdlib>
using namespace std;


//Example of class creation in C++
class Node{
public:
    Node* next; //pointer to the next node
    int amount; //the data in a node
    string item_name; //name of node
};


class LinkedList{
public:
    int length; //counter for the length of a list
    Node* head; //A pointer to the 1st node

//define the functions to be done on a list

    LinkedList();
    ~LinkedList();
    void add(int data,string name);
    void remove(int data);
    void print();
    void populate();
};
#endif /* LIST_H_ */
