//
//  2-4.cpp
//  advancedcpp
//
//  Created by 小林和宏 on 6/14/16.
//  Copyright © 2016 mycompany. All rights reserved.
//

//#include <iostream>
//#include <exception>
//
//using namespace std;
//
//class MyException: public exception {
//public:
//    virtual const char* what() const throw() {
//        return "Something bad happened!";
//    }
//};
//
//class Test {
//public:
//    void goesWrong() {
//        throw MyException();
//    }
//};
//
//int main(int argc, const char * argv[]) {
//    
//    Test test;
//    
//    try {
//        test.goesWrong();
//    }
//    catch(MyException &e) {
//        cout << e.what() << endl;
//    }
//    return 0;
//}