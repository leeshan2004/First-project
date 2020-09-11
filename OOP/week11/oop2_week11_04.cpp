//#include <iostream>
//#include "myexception.h"
//using namespace std;
//
//class DynamicArray {
//public:
//	DynamicArray(int arraySize);
//	~DynamicArray();
//
//	void SetAt(int index, int value);
//	int GetAt(int index) const;
//	int GetSize() const;
//
//protected:
//	int* arr;
//	int size;
//};
//DynamicArray::DynamicArray(int arraySize) {
//	try{
//		arr = new int[arraySize];
//		size = arraySize;
//
//		throw MyException(this, "Constructor Inside Exception", 100);
//	}
//	catch (...) {
//		cout << "������ ���� ĳġ ����!!!" << endl;
//		delete[] arr; // �޸� ����
//
//		throw; // ���� ���ܸ� �ٽ� ����
//	}
//}
//DynamicArray::~DynamicArray() {
//	try {
//		cout << "�Ҹ��� ����!" << endl;
//		delete[] arr;
//		arr = 0;
//	}
//	catch (...) {
//	}
//}
//void DynamicArray::SetAt(int index, int value) {
//	if (index < 0 || index > GetSize())
//		throw MyException(this, "Out of Range!!", index);
//	arr[index] = value;
//}
//int DynamicArray::GetAt(int index) const {
//	return arr[index];
//}
//int DynamicArray::GetSize() const {
//	return size;
//}
//void UseArray(DynamicArray& a, DynamicArray& b) {
//	try {
//		a.SetAt(3, 29);
//		b.SetAt(3, 29);
//
//		a.SetAt(9, -17);
//		b.SetAt(9, -17);
//
//		a.SetAt(20, 7); // ���ܹ߻�
//		b.SetAt(20, 7); // ���ܹ߻�
//	}
//	catch (MyException& e) {
//		cout << &a << ", " << &b << endl;
//
//		cout << e.sender << endl;
//		cout << e.description << endl;
//		cout << e.info << endl;
//	}
//	catch (const char* e) {
//		cout << "���� : " << e << endl;
//	}
//}
//int main() {
//	try {
//		DynamicArray arr1(100);
//		//DynamicArray arr2(10);
//		//UseArray(arr1, arr2);
//	}catch (MyException & e){
//		cout << e.description << endl;
//	}
//	return 0;
//}