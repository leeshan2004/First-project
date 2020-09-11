#include <iostream>
#include <functional>
#include<cstring>
#include<string>
#include "�ҽ�.h"
#pragma warning(disable:4996)

using namespace std;
class Human {
protected:
	char name[20];
	int age;
public:
	Human(const char* aname, int aage) {
		strcpy(name, aname);
		age = aage;
	}
	void intro() {
		cout << "�̸� =" << name << ", ���� =" << age << "\n";
	}
};
class Prof : public Human {
protected:
	char subject[20];
public:
	Prof(const char* aname, int aage, const char* asubject)
		: Human(aname, aage) {
		strcpy(subject, asubject);
	}
	void intro() {
		cout << "�̰��� : " << subject << "(��米�� : " << name << ")\n";
	}
	void talk() {
		cout << "�� �� �ϰڳ�!\n";
	}
};
class Student : public Human {
protected:
	int id;
public:
	Student(const char* aname, int aage, int aid) : Human(aname, aage) {
		id = aid;
	}
	void intro() {
		cout << id << "�й� " << name << "�Դϴ�.\n";
	}
	void study() {
		cout << "ĳ����, ��������, ���߻��, ������, �����Լ�, ���������Լ�\n";
	}
};
void main() {
	Human h("Ʈ�����ʸ���", 10);
	Student s("���ϳ�", 21, 20191234);
	Prof p("������", 40, "OOP2");
	Human* pH;
	Student* pS;
	Prof* pP;
	pP = &p;
	pH = &h;
	pS = &s;
	pH = &s;

	pS = (Student*)&h;
	pH->intro();
	pS->intro();
	(*pP).intro();
	pP->talk();
	pS->study();
	
}