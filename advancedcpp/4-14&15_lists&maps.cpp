//
//  4-14_lists.cpp
//  advancedcpp
//
//  Created by 小林和宏 on 6/15/16.
//  Copyright © 2016 mycompany. All rights reserved.
//
//
//#include <iostream>
//#include <map>
//
//using namespace std;
//
//int main() {
//    
//    map<string, int> ages;
//    
//    ages["Mike"] = 40;
//    ages["Raj"] = 20;
//    ages["Vicky"] = 30;
//    
//    ages["Mike"] = 70;
//    
//    ages.insert(pair<string, int>("Peter", 100));
//    ages.insert(make_pair("Peterson", 110));
//
//    cout << ages["Raj"] << endl;
//    
////    //// This is bad because this adds new key to map
////    // cout << ages["Sue"] << endl;
//    
//    if(ages.find("Vicky") != ages.end()) {
//        cout << "Found" << endl;
//    }
//    else {
//        cout << "Key not found" << endl;
//    }
//    
//    for(map<string, int>::iterator it=ages.begin(); it!=ages.end(); it++){
//        pair<string, int> age = *it;
//        cout << age.first << ": " << age.second << endl;
//    }
//
//    for(map<string, int>::iterator it=ages.begin(); it!=ages.end(); it++) {
//        cout << it->first << ": " << it->second << endl;
//    }
//
//    
//
//    return 0;
//}
