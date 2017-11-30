//============================================================================
// Name        : Tree.h
// Author      : Daniel McDonough
// Version     :
// Copyright   : Daniel McDonough 2017
// Description : Santa's List Assignment for MBU 2017
//============================================================================

#ifndef TREE_H_
#define TREE_H_
#include<iostream>
#include<stdio.h>
using namespace std;

class Tree_Node{
public:
	string Name;
	Tree_Node* left;
	Tree_Node* right;

};

class BST{

private:
	Tree_Node* makeEmpty(Tree_Node* t);

	Tree_Node* add(string x, Tree_Node* t);

	Tree_Node* findMin(Tree_Node* t);

	Tree_Node* findMax(Tree_Node* t);

	Tree_Node* remove(string x, Tree_Node* t);

	void inorder(Tree_Node* t);

	Tree_Node* find(Tree_Node* t, string x);



public:
	BST();
	Tree_Node* head;

	~BST();

	void add(string x);

	void remove(string x);

	void display();

	string search(string x);

	int find_count_steps(Tree_Node* t, string x, int count);

	int search_and_checksteps(string x);

	void populate();
};
#endif //TREE_H
