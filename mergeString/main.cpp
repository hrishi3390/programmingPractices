////
////  main.cpp
////  mergeString
////
////  Created by Hrishikesh Chaudhari on 04/02/19.
////  Copyright © 2019 Hrishikesh Chaudhari. All rights reserved.
////
//
#include <iostream>
#include <stdlib.h>
#include <algorithm>
using namespace std;


//char * mergedStrings(char *a , char *b){
//    
//    
//    int lenA = (int)strlen(a);
//    int lenB = (int)strlen(b);
//    
//    char *result = (char*)malloc(lenA + lenB +1);
//
//    while(*a != '\0' && *b != '\0'){
//        *result++ = *a++;
//        *result++ = *b++;
//        
//    }
//    
//    while(*a != '\0')
//        *result++ = *a++;
//    
//    while(*b != '\0')
//        *result++ = *b++;
//   
//    *result = '\0';
//    
//    if(lenA > lenB)
//    {
//         loopTime = lenB;
//    }
//    int j = 0, k = 0,i;
//    
//    for(i =0 ; i< loopTime*2 ; i++)
//    {
//        if(i%2 == 0)
//        {
//            result[i] = a[j++];
//        }
//        else
//            result[i] = b[k++];
//    }
//    
//    int diff = abs(lenB- lenA);
//
//    for(int m =0 ; m< diff ; m++)
//    {
//        if(lenA > lenB)
//            result[i++] = a[j++];
//        else
//            result[i++] = b[k++];
//    }
//    
//    result[lenA + lenB +1] = '\0';
//    return result;
//}
//int main(int argc, const char * argv[]) {
//    
//    char a[] = "xxcfabsec";
//    char b[] = "zx";
//  
//    
//    cout<<mergedStrings(a,b);
//    
////    int n = strlen(a);
////    
////    sort(a, a+n);
////    
////    cout<< a <<endl;
//    
//    
//
//    return 0;
//}


void strMerge(const char *s1, const char *s2, char *output)
{
    printf("address in strMerge s1 %p\n",&s1);
    printf("address in strMerge s2 %p\n",&s2);
    printf("address in strMerge output %p\n",&output);
//    printf("string1 is %s\n", s1);
//    printf("string2 is %s\n", s2);
    while (*s1 != '\0' && *s2 != '\0')
    {
        *++output= *++s1;
        *++output = *++s2;
    }
    while (*s1 != '\0')
        *output++=*s1++;
    while (*s2 != '\0')
        *output++ = *s2++;
    *output='\0';
}

int main()
{
    char *s1="abcdefg";
    char *s2="1234";
    printf("address in main s1 %p\n",&s1);
    printf("address in main s2 %p\n",&s2);
    char *output=(char *)malloc(strlen(s1)+strlen(s2)+1); //allocate memory 7+4+1 = 12 in this case
    printf("address in main output %p\n",&output);
    // strMerge(s1,s2,output);
    char *rem;
//    printf("string1 is %s\n", s1);
//    printf("string2 is %s\n", s2);
//    while (*s1 != '\0' && *s2 != '\0')
//    {
//        *output++= *s1++;
//        *output++ = *s2++;
//    }
//    while (*s1 != '\0')
//        *output++=*s1++;
//    while (*s2 != '\0')
//        *output++ = *s2++;
//    *output='\0';
    rem= output;
    *output++= *s1++;
    
    
    printf("%s",rem);
    return 0;
}
