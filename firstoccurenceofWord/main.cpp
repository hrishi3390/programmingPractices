//
//  main.cpp
//  firstoccurenceofWord
//
//  Created by Hrishikesh Chaudhari on 03/02/19.
//  Copyright © 2019 Hrishikesh Chaudhari. All rights reserved.
//

#include <iostream>
#include <sstream>
#include <set>
#include <map>

using namespace std;

int main(int argc, const char * argv[]) {
    
    string sentence = "he had had he";
    stringstream ss(sentence);
    
    set<string> wordSet;
    map<string, int> wordMap;
    
    string word;
    
    while(!ss.eof()){
        
        ss >> word;
        wordMap[word]++;
    }
    stringstream ss1(sentence);
   
    while(!ss1.eof()){
        ss1 >> word;
                if(wordMap[word] > 1)
                {
                    cout<< "first occured: "<<word<<endl;
                    return 0;
                }
        
        wordSet.insert(word);
        
    }

    
    
    
    return 0;
}
