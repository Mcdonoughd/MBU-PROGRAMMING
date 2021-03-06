//============================================================================
// Name        : Tree.h
// Author      : Daniel McDonough
// Version     :
// Copyright   : Daniel McDonough 2017
// Description : C++ TREE DEMO for MBU 2017
//============================================================================

#ifndef TREE_H_
#define TREE_H_
#include<iostream>
#include<stdio.h>
using namespace std;

class Node{
public:
	int data;
	Node* left;
	Node* right;

};

class BST{
	Node* root;
private:
	Node* makeEmpty(Node* t);

	Node* insert(int x, Node* t);

	Node* findMin(Node* t);

	Node* findMax(Node* t);

	Node* remove(int x, Node* t);

	void inorder(Node* t);

	Node* find(Node* t, int x);

	int find_count_steps(Node* t, int x, int count);

public:
	BST();

	~BST();

	void insert(int x);

	void remove(int x);

	void display();

	int search(int x);

	int search_and_checksteps(int x);
};
#endif //TREE_H
