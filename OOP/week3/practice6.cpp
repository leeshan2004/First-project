

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int total;
	int count;
	int grade;
	int average;
	int min;
	int max;

	total = 0;
	count = 1;
	min = 100;
	max = 0;

	while (count <= 10) {
		cout << "성적을 입력하시오: ";
		cin >> grade;
		total = total + grade;
		count = count + 1;
		if (min > grade) min = grade;
		if (max < grade) max = grade;
	}

	average = total / 10;

	cout << "평균은 " << average << "입니다." << endl;
	cout << "최소값은" << min << "입니다." << endl;
	cout << "최대값은" << max << "입니다." << endl;
	system("pause");
	
		return 0;

}


// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
