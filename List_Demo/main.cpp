//============================================================================
// Name        : main.cpp
// Author      : Daniel McDonough
// Version     :
// Copyright   : Daniel McDonough 2017
// Description : C++ LIST DEMO for MBU 2017
//============================================================================

#include <iostream>
#include <cstdlib>
#include "List.h"

int main(int argc, char const *argv[])
{
	//Here we create a new Linked List
    LinkedList list;

    //We populate the list with 100 items containing random values
    for (int i = 0; i < 100; ++i)
    {
        list.add(rand() % 100);
    }

    //Print the list
    list.print();

    //print List Length
    std::cout << "List Length: " << list.length << std::endl;

    return 0;
}
