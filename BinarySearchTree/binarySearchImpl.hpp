//
//  binarySearchImpl.hpp
//  programmingPractice
//
//  Created by Hrishikesh Chaudhari on 02/10/18.
//  Copyright © 2018 Hrishikesh Chaudhari. All rights reserved.
//

#ifndef binarySearchImpl_hpp
#define binarySearchImpl_hpp

#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>

using namespace std;

struct Node{
    Node *left;
    int data;
    Node *right;
};

Node * createNode(int);

Node * createBST(Node *, int);

bool searchBST(Node *, int);

void deleteNode(Node * , int);
void preorder(Node *);
int minValueNode(Node *);
void leverOrderTraversalBST(Node *);

#endif /* binarySearchImpl_hpp */
