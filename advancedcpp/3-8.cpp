//
//  3-8.cpp
//  advancedcpp
//
//  Created by 小林和宏 on 6/14/16.
//  Copyright © 2016 mycompany. All rights reserved.
//

//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int main(int argc, const char * argv[]) {
//    string filename = "stats.txt";
//    ifstream input;
//    
//    input.open(filename);
//    
//    if(!input.is_open()) {
//        return 1;  //return error
//    }
//    
//    while(input) {
//        string line;
//        
//        getline(input, line, ':');
//        
//        int population;
//        input >> population;
//        
////        input.get();
//        input >> ws;
//        
//        if(!input) {
//            break;
//        }
//        
//        cout << line << " -- " << population << endl;
//    }
//    
//    input.close();
//    
//    return 0;
//}