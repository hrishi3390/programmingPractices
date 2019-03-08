//
//  main.cpp
//  small
//
//  Created by Hrishikesh Chaudhari on 08/02/19.
//  Copyright © 2019 Hrishikesh Chaudhari. All rights reserved.
//

#include <iostream>
#include <queue>

using namespace std;

struct Node {
    int data;
    Node *right;
    Node* left;
};
int main(int argc, const char * argv[]) {
    
    
    std::queue<Node *>q;
    
    q.push(NULL);
    
    int count = 10;
    while(count--)
    {
        if(count == 5)
            continue;
       
        std::cout<<count<<std::endl;
    }
    return 0;
}
