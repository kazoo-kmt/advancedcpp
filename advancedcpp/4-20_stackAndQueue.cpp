////
////  4-20_stackAndQueue.cpp
////  advancedcpp
////
////  Created by 小林和宏 on 6/16/16.
////  Copyright © 2016 mycompany. All rights reserved.
////
//
//#include <iostream>
//#include <stack>
//#include <queue>
//using namespace std;
//
//class Test {
//private:
//    string name;
//    
//public:
//    Test(string name) : name(name) {
//        cout << "Object created" << endl;
//
//    }
//    
//    ~Test() {
//        cout << "Object destroyed" << endl;
//    }
//    
//    void print() {
//        cout << name << endl;
//    }
//};
//
//
//int main() {
//    
//    //LIFO
//    stack<Test> testStack;
//    
//    testStack.push(Test("Mike"));
////    testStack.push(Test("John"));
////    testStack.push(Test("Sue"));
//    
////    while(testStack.size() > 0) {
//////        Test test = testStack.top();
////        Test &test = testStack.top();
////        test.print();
////        testStack.pop();
////    }
//
////
//    cout << endl;
//    Test &test1 = testStack.top();
//    testStack.pop();
//    test1.print();
//
//    testStack.pop();
//    Test test2 = testStack.top();
//    test2.print();
//    
//    //FIFO
//    queue<Test> testQueue;
//    
//    testQueue.push(Test("Mike"));
//    testQueue.push(Test("John"));
//    testQueue.push(Test("Sue"));
//    
//    testQueue.back().print();
//    cout << endl;
//    
//    while(testQueue.size() > 0) {
//        Test &test = testQueue.front();
//        test.print();
//        testQueue.pop();
//    }
//
//    return 0;
//}
