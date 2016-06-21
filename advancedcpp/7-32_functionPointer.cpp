////
////  7-32_functionPointer.cpp
////  advancedcpp
////
////  Created by 小林和宏 on 6/17/16.
////  Copyright © 2016 mycompany. All rights reserved.
////
//
//#include <iostream>
//using namespace std;
//
//void test(int value) {
//    cout << "Hello: " << value << endl;
//}
//
//int main() {
//    test(7);
//    
//    void (*pTest)(int);
//    
////    pTest = &test();  // This doesn't work. You don't need parenthesis when you don't call the function
////    pTest = &test; // This works
//    pTest = test;  // This also works because function name will return pointer
//    
//    (*pTest)(8);  // This works
//    pTest(9);  // This also works
//    
//    return 0;
//}
