//
//  main.cpp
//  twinStrings
//
//  Created by Hrishikesh Chaudhari on 15/01/19.
//  Copyright © 2019 Hrishikesh Chaudhari. All rights reserved.
//

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
#define MAXCHAR 26

string encodingString(string a)
{
    string encoded_string = "";
    int odd[MAXCHAR] = {0};
    int even[MAXCHAR] = {0};
    
    for(int i=0 ;i<a.length();i++)
    {
        char c = a[i];
        if(i%2 == 0)
            even[c-'a']++;
        else
            odd[c-'a']++;
            
    }
    
    for(int i = 0;i<MAXCHAR ;i++)
    {
        encoded_string += to_string(odd[i]);
        encoded_string += to_string('-');
        encoded_string += to_string(even[i]);
        encoded_string += to_string('-');
    }
    
    return encoded_string;
}

string* isTwinString(string a[], string b[], int size)
{
    string *result = new string[size];
    
    for(int i=0;i<size; i++)
    {
        if(encodingString(a[i]) == encodingString(b[i]))
            result[i] = "Yes";
        else
            result[i] = "No";
    }
    return result;
}

int main(int argc, const char * argv[]) {
    
    vector<string>a = {"cdab", "dcba"};
    cout <<a[0];
    cout<<a.size();
//    string a[] = {"cdab", "dcba"};
//    string b[] = {"abcd", "abcd"};
    
    
//    int size = sizeof(a)/sizeof(a[0]);
//    
//    string *result;
//    
//    result = isTwinString(a,b,size);
//    
//    for(int i = 0; i<size ; i++)
//        cout<<result[i]<<endl;
    
//    delete []result;
    
    return 0;
}
