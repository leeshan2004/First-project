//#include <iostream>
//using namespace std;
//void C() {
//	//throw 123;
//	//throw "Hell";
//	throw 2.71f;
//}
//void B() {
//	C();
//}
//void A() {
//	try {
//		B();
//	}
//	catch (int ex) {
//		cout << "����(A�Լ�/����ó��) = " << ex << "\n";
//		throw; // ���� �ٽ� ������
//	}
//}
//int main() {
//	try {
//		A();
//	}catch (int ex) {
//		cout << "����(Main�Լ�/����ó��) = " << ex << "\n";
//	}catch (const char* ex) {
//		cout << "����(Main�Լ�/���ڿ�ó��) = " << ex << "\n";
//	}catch (...) {
//		cout << "��Ÿ ����\n";
//	}
//	return 0;
//}
//
