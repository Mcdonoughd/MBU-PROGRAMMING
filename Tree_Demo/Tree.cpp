//============================================================================
// Name        : TREE.cpp
// Author      : Daniel McDonough
// Version     :
// Copyright   : Daniel McDonough 2017
// Description : C++ TREE DEMO for MBU 2017
//============================================================================

#include<iostream>
#include <stdio.h>
#include"Tree.h"
using namespace std;

//Make Tree an empty tree
Node* BST::makeEmpty(Node* t){
        if(t == NULL)
            return NULL;
        {
            makeEmpty(t->left);
            makeEmpty(t->right);
            delete t;
        }
        return NULL;
    }

//Add element to the tree
    Node* BST::insert(int x, Node* t){
        if(t == NULL)
        {
            t = new Node;
            t->data = x;
            t->left = t->right = NULL;
        }
        else if(x < t->data)
            t->left = insert(x, t->left);
        else if(x > t->data)
            t->right = insert(x, t->right);
        return t;
    }

//find the leftmost node in the tree
    Node* BST::findMin(Node* t){
        if(t == NULL)
            return NULL;
        else if(t->left == NULL)
            return t;
        else
            return findMin(t->left);
    }

//find the rightmost node in the tree
    Node* BST::findMax(Node* t){
        if(t == NULL)
            return NULL;
        else if(t->right == NULL)
            return t;
        else
            return findMax(t->right);
    }

//Remove element from the Tree
    Node* BST::remove(int x, Node* t){
        Node* temp;
        if(t == NULL)
            return NULL;
        else if(x < t->data)
            t->left = remove(x, t->left);
        else if(x > t->data)
            t->right = remove(x, t->right);
        else if(t->left && t->right)
        {
            temp = findMin(t->right);
            t->data = temp->data;
            t->right = remove(t->data, t->right);
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

    //print elements in order
    void BST::inorder(Node* t){
        if(t == NULL)
            return;
        inorder(t->left);
        cout << t->data << " ";
        inorder(t->right);
    }

    //find a node in the tree
    Node* BST::find(Node* t, int x){
        if(t == NULL)
            return NULL;
        else if(x < t->data)
            return find(t->left, x);
        else if(x > t->data)
            return find(t->right, x);
        else
            return t;
    }

    //find a node and count the steps
    int BST::find_count_steps(Node* t, int x, int count){
    		if(t == NULL){
    			printf("THE TREE IS EMPTY\n");
    			return 0;
    		}
    		else if(x < t->data){

    			return find_count_steps(t->left, x,count+1);
    		}
    		else if(x > t->data){
    			return find_count_steps(t->right, x,count+1);
    		}
    		else
    			return count;
    	}

    //Tree constructor
    BST::BST(){
        root = NULL;
    }
    //tree destructor
    BST::~BST(){
        root = makeEmpty(root);
    }

    //add element to tree
    void BST::insert(int x){
        root = insert(x, root);
    }

    //remove element from tree
    void BST::remove(int x){
        root = remove(x, root);
    }
    //print tree
    void BST::display(){
        inorder(root);
        cout << endl;
    }

    //find node in tree
    int BST::search(int x){
    	int y = find(root, x)->data;
    			return y;
    }
