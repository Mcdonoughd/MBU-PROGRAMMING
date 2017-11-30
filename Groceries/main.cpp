//============================================================================
// Name        : main.cpp
// Author      : Daniel McDonough
// Version     :
// Copyright   : Daniel McDonough 2017
// Description : Groceries assignment for MBU 2017
//============================================================================


/*
 * Dan is trying an app to keep track of his groceries. But he didn't add a remove function!
 * He needs you to now add a remove function when he get items. So lazy! But because we are so nice,
 * let's help him.
 *
 *
 * NOTE: Do not remove nodes themselves (if you do you'll have a bad time). Instead,
 * subtract the amount of items taken from a list, when it's collected.
 *
 *	It should not matter what the name of data is.
 *
 */


#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include "List.h"

LinkedList grocery_list;
int main(int argc, char const *argv[]){

	grocery_list.populate(); //Populate List with example DATA

	Node* Item = grocery_list.head; //First item in the list


	/*
	 * Tips:
	 * 		Item amount = Item->amount
	 * 		Next Item = Item->next
	 * 		Remember How a For Loop Works! (What should you do to your upper bound?)
	 */

	while(Item){ //While an Item exists..

		//Your Code

		for(int j = 0; j < /*Item_amount*/ ;j++){

			//Your Code

		}

		//Your Code
	}

	grocery_list.print(); //Should output all items with all zeroes
	return 0;
}
