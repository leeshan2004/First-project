//#include <iostream>
//using namespace std;
//class SmartPointer {
//public:
//	SmartPointer(char* p) : ptr(p) {
//	}
//	~SmartPointer() {
//		cout << "�Ҹ��� ���� : �޸� ����~\n";
//		delete[] ptr;
//	}
//	char* const ptr;
//};
//void B() {
//	throw "Exception!!";
//}
//void A() {
//	char* p = new char[100]; //���� �޸� �Ҵ�
//	SmartPointer sp(p);
//	cout << "���ܰ� �߻��ϱ� ��\n";
//	B();
//	cout << "���ܰ� �߻��� ��\n";
//	//delete[] p;
//	//p = NULL;
//}
//void main(){
//	try{
//		A();
//	}catch (const char* ex){
//		cout << "���� ���� : " << ex << "\n";
//	}
//}