//
//  binarySearchImpl.cpp
//  programmingPractice
//
//  Created by Hrishikesh Chaudhari on 02/10/18.
//  Copyright © 2018 Hrishikesh Chaudhari. All rights reserved.
//

#include "binarySearchImpl.hpp"


vector<int> numbers;
Node * createNode(int data)
{

    Node *node = new Node;
    
    node->left = NULL;
    node->data = data;
    node->right = NULL;
    
    return node;
}

void preorder(Node * root)
{
    if(root != NULL)
    {
        preorder(root->left);
        numbers.push_back((root->data));
        preorder(root->right);
        
    }
}

Node *createBST(Node * root, int data)
{
    
    if(root ==  NULL)
    {
        Node *temp = createNode(data);
        return temp;
    }
    
    if(root->data >= data)
    {
    
        root->left = createBST(root->left, data);
    }
    else
    {
        root->right = createBST(root->right, data);
    }
        
    
    return root;
}

bool searchBST(Node *root, int data)
{
    if(root)
    {
        if(root->data == data || searchBST(root->left, data) || searchBST(root->right, data ))
            return true;
    }
    
    
    return false;
    
        
}

int findInorderSuccessor(Node *root, int data)
{
//    vector<int> ::iterator IntIterator;
//    IntIterator = find(numbers.begin(), numbers.end(), data);
    
    for(int i = 0;i<=numbers.size();i++)
        if(numbers[i] == data)
            return numbers[i+1];

    return -1;
    
}

int minValueNode(Node *root){
    
   while(root->left)
   {
       root = root->left;
   }
    
    return root->data;
}

void deleteNode(Node * root, int data)
{
    Node * index = root;
    Node *parent=root;

    while(index)
    {
        if(index->data == data)
            break;
        
        parent = index;
        
        if(index->data > data)
            index = index->left;
        else
            index= index->right;
    }
    
    if(index->right == NULL && index->left == NULL)
        delete index;
    
    if((index->right != NULL && index->left ==NULL))
    {
        parent->right = index->right;
        delete index;

    }
    if((index->left != NULL && index->right == NULL))
    {
        parent->left = index->left;
        delete index;
        
    }
    
    
     if((index->left != NULL && index->right != NULL))
     {
        // int insucss = findInorderSuccessor(root,index->data);
         int insucss = minValueNode(root->right);
         cout<< "inscuss: "<<insucss<<endl;
     }
}


void leverOrderTraversalBST(Node *root)
{
    queue<Node *> Q;
    queue<Node *> tempQ;
    
    if(root == NULL)
        return;
    
    Q.push(root);
    
    while(!Q.empty())
    {
        tempQ = Q.front();
        
        if()
    }
    
    
    
}