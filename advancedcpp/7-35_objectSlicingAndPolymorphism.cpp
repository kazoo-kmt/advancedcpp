////
////  7-35_objectSlicingAndPolymorphism.cpp
////  advancedcpp
////
////  Created by 小林和宏 on 6/18/16.
////  Copyright © 2016 mycompany. All rights reserved.
////
//
//#include <iostream>
//using namespace std;
//
//class Parent {
//private:
//    int one;
//    
//public:
//    Parent(): one(0) {
//        
//    }
//    
//    Parent(const Parent &other): one(0) {
//        
//        one = other.one;
//        cout << "copy parent" << endl;
//    }
//    
//    virtual void print() {
//        cout << "parent" << endl;
//    }
//    
//    virtual ~Parent() {
//        
//    }
//};
//
//class Child: public Parent {
//private:
//    int two;
//    
//public:
//    Child(): two(0){
//        
//    }
//    
//    void print() {
//        cout << "child" << endl;
//    }
//};
//
//int main() {
//    
//    Child c1;
//    Parent &p1 = c1;
//    p1.print();
//    
//    Parent p2 = Child(); // Slicing. Upcasting.
//    p2.print();
//    
//    return 0;
//}
