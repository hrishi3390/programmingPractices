//
//  main.cpp
//  BinarySearchTree
//
//  Created by Hrishikesh Chaudhari on 02/10/18.
//  Copyright © 2018 Hrishikesh Chaudhari. All rights reserved.
//

#include <iostream>
#include "binarySearchImpl.hpp"

int main(int argc, const char * argv[]) {
    
    Node *root = NULL;
    
//    root = createNode(8);
//    root->left = createNode(2);
//    root->right = createNode(3);
    
    root = createBST(root, 50);
    createBST(root, 30);
    createBST(root, 20);
    createBST(root, 40);
    createBST(root, 70);
    createBST(root, 60);
    createBST(root, 80);
    
    if(searchBST(root,77))
        cout<<"Element found"<<endl;
    else
        cout<<"Element not found"<<endl;
    
    preorder(root);
    cout<<endl;
    deleteNode(root, 50);
    
    delete root;
    return 0;
}
