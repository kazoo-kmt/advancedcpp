//#include <iostream>
//using namespace std;
//
//class Parent {
//public:
//    virtual void speak() {
//        cout << "parent!" << endl;
//    }
//    
//};
//
//class Brother: public Parent {
//    
//};
//
//class Sister: public Parent {
//    
//};
//
//
//int main() {
//    
//    Parent parent;
//    Brother brother;
//    Sister sister;
//    
//    float value = 3.23;
//    
//    cout << static_cast<int>(value) << endl;
//    
//    Parent *ppb = &brother;
//    
//    Sister *pbb = reinterpret_cast<Sister *>(ppb);  //runtime checking
//    
//    if(pbb == nullptr) {
//        cout << "Invalid cast" << endl;
//    }
//    else {
//        cout << pbb << endl;
//    }
//    
//    
//    
//    
//    
//    return 0;
//}
