//#include <iostream>
//#include <memory>
//using namespace std;
//class Test {
//    int* data;
//public:
//    Test() {
//        cout << "������!" << endl;
//        data = new int[100];
//    }
//    ~Test() {
//        cout << "�Ҹ���!" << endl;
//        delete[] data;
//    }
//    void t() { cout << "�׽�Ʈ ��..." << endl; }
//};
//void testing(){
//    //Test* t1 = new Test();
//    //Test* t2 = t1;
//    unique_ptr<Test> up1(new Test()); // C++11 (������ auto_ptr�� ���� ��ü)
//    // Test* up1 = new Test();
//
//    //unique_ptr<Test> up2 = up1;
//    //up1->t();
//}
//void main() { 
//    testing(); 
//}