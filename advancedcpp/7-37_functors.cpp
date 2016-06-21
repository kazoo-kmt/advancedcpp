////
////  7-37_functors.cpp
////  advancedcpp
////
////  Created by 小林和宏 on 6/18/16.
////  Copyright © 2016 mycompany. All rights reserved.
////
//
//#include <iostream>
//using namespace std;
//
//struct Test {
//    virtual bool operator()(string &text)=0;  // Overloading parenthis to make Fanctor
//    
//    virtual ~Test() {}
//
//};
//
//struct MatchTest: public Test {
//    virtual bool operator()(string &text) {
//        return text == "lion";
//    }
//};
//
//void check(string text, Test &test) {
//    if(test(text)) {
//        cout << "Text matches!" << endl;
//    }
//    else {
//        cout << "No match." << endl;
//    }
//}
//
//
//int main() {
//    
//    MatchTest pred;
//    
//    string value = "liond";
//    
//    cout << pred(value) << endl;
//    
//    MatchTest m;
//    
//    check("lion", m);
//    
//    return 0;
//}
