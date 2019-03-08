//
//  main.cpp
//  srytrlrn
//
//  Created by Hrishikesh Chaudhari on 19/02/19.
//  Copyright © 2019 Hrishikesh Chaudhari. All rights reserved.
//

#include <iostream>
using namespace std;
int mystrlen(char *a){
    int len = 0 ;
    
    while(*a != '\0')
    {
        len++;
        *++a;
    }
    return len;
}

int main(int argc, const char * argv[]) {
    
    char * a = "hrishikesh";
    
    cout<<mystrlen(a);
    return 0;
}
