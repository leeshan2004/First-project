#include <iostream>
#include <functional>
#include<cstring>
#include<string>
#include "소스.h"
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
		cout << "이름 =" << name << ", 나이 =" << age << "\n";
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
		cout << "미공시 : " << subject << "(담당교수 : " << name << ")\n";
	}
	void talk() {
		cout << "한 잔 하겠나!\n";
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
		cout << id << "학번 " << name << "입니다.\n";
	}
	void study() {
		cout << "캐스팅, 접근제어, 다중상속, 다형성, 가상함수, 순수가상함수\n";
	}
};
void main() {
	Human h("트레버필립스", 10);
	Student s("송하나", 21, 20191234);
	Prof p("신지드", 40, "OOP2");
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