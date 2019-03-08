//
//  main.cpp
//  SortLinkedList
//
//  Created by Hrishikesh Chaudhari on 07/01/19.
//  Copyright © 2019 Hrishikesh Chaudhari. All rights reserved.
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
int getSizeOfLinkedList(Node * head)
{
    int size = 0;
    while(head)
    {
        size++;
        head = head->next;
    }
    
    return size;
    
}

void sortLinkedList(Node *head)
{
    int size = getSizeOfLinkedList(head);
    Node *it = head;
    
    while(it)
    {
        Node *temp1 = it;
        while(temp1)
        {
            if(temp1->data > temp1->next->data)
            {
                int temp = temp1->data;
                temp1->data = temp1->next->data;
                temp1->next->data = temp;
                temp1 = temp1->next;
            }
        }
        it = it->next;
    }
    
    while (head) {
        cout<< head->data<<"\t";
        head = head->next;
    }
   }

int main(int argc, const char * argv[]) {
    
    Node *head;
    
    head = createNode(4);
    head->next = createNode(3);
    head->next->next = createNode(2);
    head->next->next->next = createNode(1);
    
    
    sortLinkedList(head);
    
//    while (head) {
//        cout<< head->data<<"\t";
//        head = head->next;
//    }
    
    
    return 0;
}