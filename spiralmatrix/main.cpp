//
//  main.cpp
//  spiralmatrix
//
//  Created by Hrishikesh Chaudhari on 07/03/19.
//  Copyright © 2019 Hrishikesh Chaudhari. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;
#define ROW 1
#define COLUMN 1

vector<int> spiralOrder(const vector<vector<int> > &A) {
    
    int row = A.size();
    int col = A[0].size();
    int top=0;
    int bottom = row-1;
    int left = 0;
    int right = col-1;
    int dir = 0;
    int total = row*col;
    vector<int> result;
    
    while(left <= right && top <= bottom)
    {
        if(dir == 0){
            //top to right
            for(int i = left ; i<=right ; i++)
                result.push_back(A[top][i]);
            top++;
            dir = 1;
            //continue;
        }
        
        if(dir == 1){
            //right to bottom
            for(int i = top ; i<= bottom ; i++)
                result.push_back(A[i][right]);
            right--;
            dir = 2;
           // continue;
        }
        
        if(dir == 2){
            // bottom to left
            for(int i = right ; i>= left ; i--)
                result.push_back(A[bottom][i]);
            bottom--;
            dir = 3;
           // continue;
        }
        
        if(dir == 3){
            for(int i = bottom ; i>= top ; i--)
                result.push_back(A[i][left]);
            left++;
            dir = 0;
            //continue;
        }
        
    }
    return result;
}

int main(int argc, const char * argv[]) {
   

    
    vector<vector<int> > A =
    {
        {3,2,1},
        {4,3,2},
    };
    
    vector<int> result;
    result = spiralOrder(A);
    for(auto x : result)
        cout<<x<<"\t";
    return 0;
}
