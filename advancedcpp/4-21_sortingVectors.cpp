////
////  4-21_sortingVectors.cpp
////  advancedcpp
////
////  Created by 小林和宏 on 6/16/16.
////  Copyright © 2016 mycompany. All rights reserved.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Test {
//    int id;
//    string name;
//    
//public:
//    Test(int id, string name): id(id), name(name) {}
//    void print() {
//        cout << id << ": " << name << endl;
//    }
//    
////    bool operator<(const Test& other) const {
////        return name < other.name;
////    }
//    
//    friend bool comp(const Test &a, const Test &b);
//};
//
//bool comp(const Test &a, const Test &b) {
//    return a.name < b.name;
//}
//
//int main() {
//    
//    vector<Test> tests;
//    
//    tests.push_back(Test(5, "Mike"));
//    tests.push_back(Test(10, "Sue"));
//    tests.push_back(Test(7, "Raj"));
//    tests.push_back(Test(3, "Vicky"));
//    
//    sort(tests.begin(), tests.end(), comp);
//    
//    for(int i=0; i<tests.size(); i++) {
//        tests[i].print();
//    }
//    
//    return 0;
//}
