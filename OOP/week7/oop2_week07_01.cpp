//#include <iostream>
//using namespace std;
//class DynamicArray {
//public:
//	int* arr;
//
//	DynamicArray(int arraySize);
//	~DynamicArray();
//};
//DynamicArray::DynamicArray(int arraySize) {
//	arr = new int[arraySize];// ���� �޸� �Ҵ�
//}
//DynamicArray::~DynamicArray() {
//	cout << "�Ҹ��� ����" << endl;
//	delete[] arr;
//	arr = NULL;
//}
//int main() {
//	int size;
//	cout << "�� ���� ������ �Է��Ͻðڼ�? ";
//	cin >> size;
//
//	DynamicArray da(size);
//
//	for (int i = 0; i < size; ++i)
//		cin >> da.arr[i];
//
//	for (int i = size - 1; i >= 0; --i)
//		cout << da.arr[i] << " ";
//	cout << "\n";
//
//	return 0;
//}


//#include <iostream>
//using namespace std;
//class NeedConstructor {
//public:
//	const int max;
//	int& ref;
//	int temp;
//
//	NeedConstructor();
//	NeedConstructor(int cnt, int& number);
//};
//NeedConstructor::NeedConstructor()
//	:max(100),ref(temp) {
//	temp = 10;
//}
//NeedConstructor::NeedConstructor(int cnt, int& number)
//	: max(cnt), ref(number) {
//	temp = 10;
//}
//int main(){
//	//NeedConstructor cr;
//	int num = 400;
//	NeedConstructor cr(500, num);
//
//	cout << cr.max << endl;
//	cout << cr.ref << endl;
//}


//#include <iostream>
//using namespace std;
//// 1. class Ű���带 ���
//// 2. public�� ���� ��������� ���õ� Ű���� ���
//// 3. ��� �Լ�(�޼���)�� ������ �� �ִ�
//
//// ������ : ��ü�� ������ �� �ڵ������� ȣ��Ǵ� �Լ�
//// �Ҹ��� : ��ü�� �Ҹ�� �� �ڵ����� ȣ��Ǵ� �Լ�
//class Point {
//public:
//	int x, y;
//
//	// �����ڵ�
//	Point(); // �����ڴ� ����Ÿ���� ����, Ŭ������ �̸��� ����
//	Point(int _x, int _y);
//	// ���� ������
//	// �ڽŰ� ������ Ÿ���� ��ü�� ���� ���۷����� ���ڷ� �޴� ������
//	//Point(Point& pt);
//	Point(const Point& pt);
//
//	// �޼���
//	void Print();
//};
//// 1. Ŭ���� ���� �ȿ��� �޼����� ������Ÿ�Ը� ���ܵд�
//// 2. Ŭ���� ���� �ۿ����� ���� ���� �����ڸ� ����ؼ� �Լ��� ����
//Point::Point() {
//	x = 0;
//	y = 0;
//}
//Point::Point(int _x, int _y) {
//	x = _x;
//	y = _y;
//}
//Point::Point(const Point& pt) {
//	cout << "Copy constructor!" << endl;
//	x = pt.x;
//	y = 0;
//}
//
//void Point::Print() {
//	cout << x << ", " << y << endl;
//};
//
//int main() {
//	Point p1, p2, p4, p5(200,150);
//	p1.x = 10;
//	p1.y = 10;
//	p2.x = 20;
//	p2.y = 20;
//
//	Point p6(p1);
//	p5.Print();
//	p4.Print();
//
//	Point p3 = p2; // �ʱ�ȭ
//	p3.Print();
//	p3 = p1; // ����
//	p3.Print();
//
//	p1.Print();
//	p2.Print();
//	return 0;
//}