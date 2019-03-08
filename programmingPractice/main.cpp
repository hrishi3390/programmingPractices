//
//  main.cpp
//  programmingPractice
//
//  Created by Hrishikesh Chaudhari on 02/10/18.
//  Copyright © 2018 Hrishikesh Chaudhari. All rights reserved.
//

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node * next;
};

Node *createNode(int data){
    
    Node *newNode = new Node;
   
    newNode->data = data;
    newNode->next = NULL;
    
    return newNode;
}

int main(int argc, const char * argv[]) {
    
    Node *head;
    
    head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    next->next->next->next = createNode(4);
    
    while(head)
    {
        cout<< head->data;
        head = head->next;
    }
    
    
    
    return 0;
}
