#include <iostream>
using namespace std;
/*
	extern ostream cout;
	extern istream cin;
	typedef basic_ostream<char> ostream;
	typedef basic_istream<char> istream;


	ios_base 

	basic_ios // �θ�Ŭ����

	basic_ostream // cout ��ü�� Ÿ��
	basic_istream // cin ��ü�� Ÿ��
*/
void main() {
	// width(), precision() ��� ������� �����Լ�

	//bool test = true;
	////cout << boolalpha;
	//cout << test << endl;
	//cout.setf(ios_base::boolalpha);
	//cout << test << endl;
	//cout.unsetf(ios_base::boolalpha);
	//cout << test << endl;


	//int a = 11;
	//cout << hex;
	//cout.setf(ios_base::hex, ios_base::basefield);
	//cout.width(5);
	//cout << a << endl;

	//float f = 0.01234f;
	//ios_base::fmtflags old; // ����� ���˰� ���õ� ����� �����ϴ� Ŭ����
	//cout << f << endl;
	//old = cout.setf(ios_base::scientific, ios_base::floatfield);
	//cout << f << endl;
	//cout.setf(old, ios_base::floatfield);
	//cout << f << endl;

	float f = 0.01234f;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.precision(3);
	cout << f << endl;
}