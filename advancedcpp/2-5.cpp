//
//  2-5.cpp
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
//void goesWrong() {
//    bool error1Detected = false;
//    bool error2Detected = true;
//    
//    if (error1Detected) {
//        throw bad_alloc();
//    }
//    
//    if (error2Detected) {
//        throw exception();
//    }
//}
//
//
//int main(int argc, const char * argv[]) {
//    
//    try {
//        goesWrong();
//    }
//    catch(bad_alloc &e) {
//        cout << "Catching bad_alloc: " << e.what() << endl;
//    }
//    catch(exception &e) {
//        cout << "Catching exception: " << e.what() << endl;
//    }
//
//    return 0;
//}