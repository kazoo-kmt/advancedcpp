////
////  7-34_functionPointer.cpp
////  advancedcpp
////
////  Created by 小林和宏 on 6/18/16.
////  Copyright © 2016 mycompany. All rights reserved.
////
//
//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//bool match(string test) {
//    // return test = "two";
//    return test.size() == 3;
//}
//
//int countStrings(vector<string> &texts, bool (*match)(string text)) {
//    
//    int tally = 0;
//    for(int i=0; i<texts.size(); i++) {
//        if(match(texts[i])) {
//            tally++;
//        }
//    }
//    
//    return tally;
//}
//
//
//int main() {
//    vector<string> texts;
//    texts.push_back("one");
//    texts.push_back("two");
//    texts.push_back("three");
//    texts.push_back("two");
//    texts.push_back("four");
//    texts.push_back("two");
//    texts.push_back("three");
//    
//    cout << match("three") << endl;
//    
//    cout << count_if(texts.begin(), texts.end(), match) << endl;
//    
//    cout << countStrings(texts, match) << endl;
//    
//    return 0;
//    
//}
//
