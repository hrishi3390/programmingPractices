//
//  main.cpp
//  removeDuplicate
//
//  Created by Hrishikesh Chaudhari on 02/02/19.
//  Copyright © 2019 Hrishikesh Chaudhari. All rights reserved.
//

#include <iostream>


void removeDuplicate(int *a, int size){
    for(int i = 0; i< size; i++)
    {
        for(int j = i; j<size ;j++)
        {
            if(a[i] == a[j])
            {
                for(int k = j+1; k<size-1; k++){
                    
                }
            }
        }
    }
}

int main(int argc, const char * argv[]) {
   
    int arr[] = {2,2,2,2,2,2};
    
    int size = sizeof(arr)/sizeof(arr[0]);
    
    removeDuplicate(arr,size);
    
    for(auto i : arr)
        std:: cout<<i<<"\t";
    return 0;
}
