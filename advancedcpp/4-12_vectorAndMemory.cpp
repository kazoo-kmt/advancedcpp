//
//  4-12_vectorAndMemory.cpp
//  advancedcpp
//
//  Created by 小林和宏 on 6/15/16.
//  Copyright © 2016 mycompany. All rights reserved.
//

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//    
//    vector<double> numbers(20, 1);
//    cout << "Size: " << numbers.size() << endl;
//    
//    int capacity = numbers.capacity();
//    cout << "Capacity: " << capacity << endl;
//    
//    for(int i=0; i<10000; i++) {
//        if(numbers.capacity() != capacity) {
//            capacity = numbers.capacity();
//            cout << "Capacity: " << capacity << endl;
//        }
//        numbers.push_back(i);
//    }
//    
//    numbers.clear();
//    cout << "Size: " << numbers.size() << endl;
//    cout << "Capacity: " << numbers.capacity() << endl;
//
//    numbers.resize(100);
//    cout << "Size: " << numbers.size() << endl;
//    cout << "Capacity: " << numbers.capacity() << endl;
//
//    numbers.reserve(100000);
//    cout << "Size: " << numbers.size() << endl;
//    cout << "Capacity: " << numbers.capacity() << endl;
//    
//    return 0;
//}
