//
//  3-10.cpp
//  advancedcpp
//
//  Created by 小林和宏 on 6/14/16.
//  Copyright © 2016 mycompany. All rights reserved.
//

//#include <iostream>
//#include <fstream>
//using namespace std;
//
//#pragma pack(push, 1)
//struct Person {
//    //    string name; // this is bad because it use heap
//    char name[50];
//    int age;
//    double height;
//};
//#pragma pack(pop)
//
//
//int main(int argc, const char * argv[]) {
//    
//    Person someone = {"Frodo", 220, 0.8};  // easy way to initialize
//    
//    string fileName = "test.bin";
//    
//    
//    ///// Write binary file /////
//    ofstream outputFile;
//    
//    outputFile.open(fileName, ios::binary);
//    
//    if(outputFile.is_open()) {
//        
//        outputFile.write(reinterpret_cast<char *>(&someone), sizeof(Person));
////        outputFile.write((char *)&someone, sizeof(Person));  //this works too
//        
//        outputFile.close();
//    }
//    else {
//        cout << "Could not create file " + fileName;
//    }
//    
//    
//    ///// Read binary file /////
//    
//    Person someoneElse = {};
//    
//    ifstream inputFile;
//    
//    inputFile.open(fileName, ios::binary);
//    
//    if(inputFile.is_open()) {
//        
//        inputFile.read(reinterpret_cast<char *>(&someoneElse), sizeof(Person));
//        
//        inputFile.close();
//    }
//    else {
//        cout << "Could not read file " + fileName;
//    }
//    
//    cout << someoneElse.name << ", " << someoneElse.age << ", " << someoneElse.height << endl;
//    
//
//    
//    
//    return 0;
//}