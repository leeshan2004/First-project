// inline variable keyword (C++17)
#include <iostream>
#include "test.h"
using namespace std;
int main() {
	Test aa;
	cout << aa.a++ << endl;
	return 0;
}

//#include <iostream>
//using namespace std;
////int main() {
////	cout << "1" << endl;
////	cout << "2" << endl;
////	cout << "3" << endl;
////	return 0;
////}
//inline void Test(){
//	cout << "1" << endl;
//	cout << "2" << endl;
//	cout << "3" << endl;
//}
//int main() {
//	Test();
//	return 0;
//}



// ����(static)��� : ��� ��ü�� �����ϴ� ���.
//#include <iostream>
//#include <string>
//using namespace std;
//class Student {
//public:
//	string name;
//	int sNo;
//
//	Student(const string& name_arg, int stdNumber);
//	~Student();
//public:
//	static int student_count;
//	static void PrintStdCount();
//};
//int Student::student_count = 0;
//void Student::PrintStdCount() {
//	cout << "Student ��ü �� = " << student_count << "\n";
//}
//Student::Student(const string& name_arg, int stdNumber) {
//	student_count++;
//
//	name = name_arg;
//	sNo = stdNumber;
//}
//Student::~Student() {
//	student_count--;
//}
//void Func() {
//	Student std1("������", 20191234);//��ü ���� +1
//	Student std2("������", 20171111);//��ü ���� +1
//
//	Student::PrintStdCount(); //3�����
//	// Func�Լ� ���� �� std1, std2 ��ü�� �Ҹ�
//}
//int main() {
//	Student::PrintStdCount();
//	Student std("������", 20202323);//��ü ���� +1
//	Student::PrintStdCount();
//	Func();
//	Student::PrintStdCount();
//	return 0;
//}


// ��������
//#include <iostream>
//using namespace std;
//class AccessControl{
//public:
//	char publicData;
//	void publicFunc() {};
//protected:
//	int protectedData;
//	void protectedFunc() {};
//private:
//	float privateData;
//	void privateFunc() {};
//public:
//	void AccessAllMembers();
//};
//void AccessControl::AccessAllMembers() {
//	publicData = 'A';	// ����
//	publicFunc();		// ����
//	protectedData = 100;	// ����
//	protectedFunc();  	// ����
//	privateData = 4.5f;	// ����
//	privateFunc();		// ����
//}
//int main(){
//	AccessControl ac;
//	ac.AccessAllMembers();
//	//ac.publicData = 'A';	// ����
//	//ac.publicFunc();		// ����
//	//ac.protectedData = 100;	// ����
//	//ac.protectedFunc();  	// ����
//	//ac.privateData = 4.5f;	// ����
//	//ac.privateFunc();		// ����
//
//	return 0;
//}