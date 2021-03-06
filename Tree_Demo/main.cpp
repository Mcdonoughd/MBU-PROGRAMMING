//============================================================================
// Name        : main.cpp
// Author      : Daniel McDonough
// Version     :
// Copyright   : Daniel McDonough 2017
// Description : C++ TREE DEMO for MBU 2017
//============================================================================

#include<iostream>
#include <stdio.h>
#include"Tree.h"
using namespace std;


//main fuction
int main(){

    BST t;
    //add items into the tree
    t.insert(20);
    t.insert(25);
    t.insert(15);
    t.insert(10);
    t.insert(30);

    //print tree (note how it looks)
    t.display();

    //remove element from tree
    t.remove(20);
    //print tree (how about now)
    t.display();

    //remove element from tree
    t.remove(25);
    t.display();

    //remove element from tree
    t.remove(30);

    //display final result
    t.display();
}
