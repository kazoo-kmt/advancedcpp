////
////  7-36_abstractClassesAndPureVirtualFunctions.cpp
////  advancedcpp
////
////  Created by 小林和宏 on 6/18/16.
////  Copyright © 2016 mycompany. All rights reserved.
////
//
//#include <iostream>
//using namespace std;
//
//class Animal {
//public:
//    virtual void run()=0;
//    virtual void speak() = 0;  //pure virtual function
//    
//};
//
//class Dog: public Animal {
//public:
//    virtual void speak() {
//        cout << "Woof!" << endl;
//    }
//};
//
//class Labrador: public Dog {
//public:
//    Labrador() {
//        cout << "new labrador" << endl;
//    }
//    
//    virtual void run() {
//        cout << "Labrador running" << endl;
//    }
//};
//
//void test(Animal &a) {
//    a.run();
//}
//
//int main() {
//    
////    Animal animal;
//    
////    Dog dog;
////    dog.speak();
//    
//    Labrador lab;
//    lab.run();
//    lab.speak();
//    
////    Labrador animals[5];
//    Animal *animals[5];
//    animals[0] = &lab;
//    animals[0]->speak();
//    
//    test(lab);
//    
//    
//    return 0;
//}
