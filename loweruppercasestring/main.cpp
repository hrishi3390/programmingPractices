//
//  main.cpp
//  loweruppercasestring
//
//  Created by Hrishikesh Chaudhari on 02/02/19.
//  Copyright © 2019 Hrishikesh Chaudhari. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

string ToUpper(const std::string &str) {
   
    string result;
    for(int i =0 ;i<str.length();i++)
        result += toupper(str[i]);
    
    return result;
    
}
string ToLower(const std::string &str) {
    
    string result;
    for(int i =0 ;i<str.length();i++)
        result += tolower(str[i]);
    
    return result;
    
}
string ToLower(const std::string &str) ;

int main(int argc, const char * argv[]) {
    
    string a = "This is a combine sentence, Make it to upper case";
    string b = "Make me lower case letter";
    
    cout<< ToUpper(a)<<endl;
    cout<< ToLower(b);
    
    
    
    return 0;
}
