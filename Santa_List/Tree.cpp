//============================================================================
// Name        : TREE.cpp
// Author      : Daniel McDonough
// Version     :
// Copyright   : Daniel McDonough 2017
// Description : Santa's List Assignment for MBU 2017
//============================================================================

#include<iostream>
#include <stdio.h>
#include"Tree.h"
using namespace std;

//Make Tree empty
Tree_Node* BST::makeEmpty(Tree_Node* t){
	if(t == NULL)
		return NULL;
	{
		makeEmpty(t->left);
		makeEmpty(t->right);
		delete t;
	}
	return NULL;
}

//Add string to Tree
Tree_Node* BST::add(string x, Tree_Node* t){
	if(t == NULL)
	{
		t = new Tree_Node;
		t->Name = x;
		t->left = t->right = NULL;
	}
	else if(x < t->Name)
		t->left = add(x, t->left);
	else if(x > t->Name)
		t->right = add(x, t->right);
	return t;
}

//Find the absolute left Tree_Node in tree
Tree_Node* BST::findMin(Tree_Node* t){
	if(t == NULL)
		return NULL;
	else if(t->left == NULL)
		return t;
	else
		return findMin(t->left);
}

//Find the absolute right Tree_Node in tree
Tree_Node* BST::findMax(Tree_Node* t){
	if(t == NULL)
		return NULL;
	else if(t->right == NULL)
		return t;
	else
		return findMax(t->right);
}

//Remove a Tree_Node from a tree
Tree_Node* BST::remove(string x, Tree_Node* t){
	Tree_Node* temp;
	if(t == NULL)
		return NULL;
	else if(x < t->Name)
		t->left = remove(x, t->left);
	else if(x > t->Name)
		t->right = remove(x, t->right);
	else if(t->left && t->right)
	{
		temp = findMin(t->right);
		t->Name = temp->Name;
		t->right = remove(t->Name, t->right);
	}
	else
	{
		temp = t;
		if(t->left == NULL)
			t = t->right;
		else if(t->right == NULL)
			t = t->left;
		delete temp;
	}

	return t;
}

//Print Tree in order
void BST::inorder(Tree_Node* t){
	if(t == NULL)
		return;
	inorder(t->left);
	cout << t->Name << " ";
	inorder(t->right);
}


//Find a given string in the tree
Tree_Node* BST::find(Tree_Node* t, string x){
	if(t == NULL)
		return NULL;
	else if(x < t->Name)
		return find(t->left, x);
	else if(x > t->Name)
		return find(t->right, x);
	else
		return t;
}

//Find a given name in the tree and count the steps it takes to find them
int BST::find_count_steps(Tree_Node* t, string x, int count){
	if(t == NULL){
		printf("THE TREE IS EMPTY\n");
		return 0;
	}
	else if(x < t->Name){

		return find_count_steps(t->left, x,count+1);
	}
	else if(x > t->Name){
		return find_count_steps(t->right, x,count+1);
	}
	else
		return count;
}

//Tree constructor
BST::BST(){
	head = NULL;
}

//Tree destructor
BST::~BST(){
	head = makeEmpty(head);
}

//Add element to tree
void BST::add(string x){
	head = add(x, head);
}

//remove element from tree
void BST::remove(string x){
	head = remove(x, head);
}

//print tree
void BST::display(){
	inorder(head);
	cout << endl;
}

//find tree
string BST::search(string x){
	string y = find(head, x)->Name;
	return y;
}


//Populate the Tree with Names
void BST::populate(){
	this->add("MAGGY");
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
}
