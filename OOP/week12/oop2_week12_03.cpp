//#include <iostream>
//using namespace std;
///*
//const_cast : const, volatile ���� �Ӽ��� ����
//dynamic_cast : ��� ������ Ŭ���� ������ �� ���۷��� Ÿ�� üũ
//static_cast : �������� ��ȯ ������ Ÿ�Ը� ��ȯ. �� ���� ��ȯ�� ������ ó��.
//reinterpret_cast : �����ͳ���, �����Ϳ� ��ġ�� ���� ��ȯ
//*/
//class A {
//public:
//	virtual void Func() { }
//};
//class B : public A { };
//class C : public B { };
//int main() {
//	A* pa1 = new C;
//	A* pa2 = new A;
//	C* pc1 = dynamic_cast<C*>(pa1);
//	C* pc2 = dynamic_cast<C*>(pa2); // ĳ���� ����, NULL ����
//	try {
//		C& rc1 = dynamic_cast<C&>(*pa2); // ĳ���� ����, bad_cast ���� �߻�
//	}
//	catch (bad_cast & e) {
//		cout << "bad_cast~~" << endl; 
//	}
//	return 0;
//}
//
//
////void main() {
////	char univ[] = "Inha";
////	const char* c1 = univ;
////	char* c2;
////	float f;
////	c2 = const_cast<char*>(c1);
////	//int* pi = const_cast<int*>(c1);
////	//f = const_cast<float>(c1);
////	c2[0] = 'i';
////	cout << c2 << endl;
////}