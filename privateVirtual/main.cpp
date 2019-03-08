//
//  main.cpp
//  privateVirtual
//
//  Created by Hrishikesh Chaudhari on 05/02/19.
//  Copyright © 2019 Hrishikesh Chaudhari. All rights reserved.
//

//#include <iostream>
//using namespace std;
//
//class A{
//    virtual void print(){
//        cout<<"This is private virtual method"<<endl;
//    }
//    
//public:
//    void print1(){
//        cout<<"This is print 1"<<endl;
//    }
//    
//};
//
//class B : public A{
//    int a;
//    
//public:
//    
//    void print(){
//        cout<<"THis is priint in B"<<endl;
//    }
//    
//};
//
//int main(int argc, const char * argv[]) {
//    
//    
//        A *a = new B;
//       // B b;
//      //  b.print();
//    
//  //  A a;
//   a->print1();
//     a->print();
//    return 0;
//}

#include <iostream>

class Engine
{
public:
    void SetState( int var, bool val )
    {
        SetStateBool( var, val );
    }
    
    void SetState( int var, int val )
    {
        SetStateInt( var, val );
    }
    
private:
    
    virtual void SetStateBool(int var, bool val ) = 0;
    virtual void SetStateInt(int var, int val ) = 0;
    
};

class DerivedEngine : public Engine
{
private:
    virtual void SetStateBool(int var, bool val )
    {
        std::cout << "DerivedEngine::SetStateBool() called" << std::endl;
    }
    
    virtual void SetStateInt(int var, int val )
    {
        std::cout << "DerivedEngine::SetStateInt() called" << std::endl;
    }
};


int main()
{
    DerivedEngine e;
    Engine * be = &e;
    
    be->SetState(4, true);
    be->SetState(2, 1000);
}