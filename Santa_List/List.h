//============================================================================
// Name        : List.h
// Author      : Daniel McDonough
// Version     :
// Copyright   : Daniel McDonough 2017
// Description : Santa's List Assignment for MBU 2017
//============================================================================

#ifndef LIST_H_
#define LIST_H_
#include <iostream>
#include <cstdlib>
using namespace std;


//Example of class creation in C++
class List_Node{
public:
    List_Node* next; //pointer to the next List_Node
    string data; //the data in a List_Node
};


class LinkedList{
public:
    int length; //counter for the length of a list
    List_Node* head; //A pointer to the 1st List_Node

    //define the functions to be done on a list

    LinkedList();
    ~LinkedList();
    void add(string data);
    void print();
    int find_count_steps(List_Node* t, string x, int count);
    void populate();
};
#endif /* LIST_H_ */
