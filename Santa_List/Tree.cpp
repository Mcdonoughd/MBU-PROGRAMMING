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

    Node* BST::add(string x, Node* t){
        if(t == NULL)
        {
            t = new Node;
            t->Name = x;
            t->left = t->right = NULL;
        }
        else if(x < t->Name)
            t->left = add(x, t->left);
        else if(x > t->Name)
            t->right = add(x, t->right);
        return t;
    }

    Node* BST::findMin(Node* t){
        if(t == NULL)
            return NULL;
        else if(t->left == NULL)
            return t;
        else
            return findMin(t->left);
    }

    Node* BST::findMax(Node* t){
        if(t == NULL)
            return NULL;
        else if(t->right == NULL)
            return t;
        else
            return findMax(t->right);
    }

    Node* BST::remove(string x, Node* t){
        Node* temp;
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

    void BST::inorder(Node* t){
        if(t == NULL)
            return;
        inorder(t->left);
        cout << t->Name << " ";
        inorder(t->right);
    }

    Node* BST::find(Node* t, string x){
        if(t == NULL)
            return NULL;
        else if(x < t->Name)
            return find(t->left, x);
        else if(x > t->Name)
            return find(t->right, x);
        else
            return t;
    }

    int BST::find_count_steps(Node* t, string x, int count){
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

    BST::BST(){
        root = NULL;
    }

    BST::~BST(){
        root = makeEmpty(root);
    }

    void BST::add(string x){
        root = add(x, root);
    }

    void BST::remove(string x){
        root = remove(x, root);
    }

    void BST::display(){
        inorder(root);
        cout << endl;
    }

    int BST::search(string x){
    	int y = find(root, x)->Name;
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
