//#include <algorithm> // ����, �˻���� ���� �˰����� �����س��� �Լ���
//#include <iostream>
//#include <list> // ��ũ�� ����Ʈ (����, ������ ����)
//#include <vector> // ���� �迭 (�˻� ���ֿ� ����)
//using namespace std;
//
//bool myfunc(int i, int j) { return i > j; }
//struct mystruct {
//	bool operator() (int i, int j) { return (i > j); }
//} myobj1;
//class myclass {
//public:
//	bool operator() (int i, int j) { return (i > j); }
//} myobj2;
//void main() {
//	vector<char> vec;
//	vec.push_back('e');
//	vec.push_back('b');
//	vec.push_back('a');
//	vec.push_back('d');
//	vec.push_back('c');
//
//	//sort(vec.begin(), vec.end()); // ��������
//	//sort(vec.begin(), vec.end(), myfunc); // �������� (i > j), �Լ��̿�
//	//sort(vec.begin(), vec.end(), myobj1); // �������� (i > j), ����ü���� �̿�
//	sort(vec.begin(), vec.end(), myobj2); // �������� (i > j), ��ü�̿�
//
//	// Modern (c++11)
//	for (auto v : vec)
//		cout << v;
//	cout << endl;
//}
