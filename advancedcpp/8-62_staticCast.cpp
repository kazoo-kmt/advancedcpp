//#include <iostream>
//using namespace std;
//
//class Parent {
//public:
//    void speak() {
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
//    
//    float value = 3.23;
////    cout << (int)value << endl;
////    cout << int(value) << endl;
//    cout << static_cast<int>(value) << endl;
//    
//    Parent *ppb = &brother;
//    
//    Brother *pbb = static_cast<Brother *>(ppb);
//    
//////    Brother *pb = &parent;
////    Brother *pb = static_cast<Brother *>(&parent);
//    cout << pbb << endl;
//    
////    Parent &&p = Parent();
//    Parent &&p = static_cast<Parent &&>(parent);  //pass lvalue to rvalue
//    p.speak();
//    
//    
//    return 0;
//}
