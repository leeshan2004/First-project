#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int kor;
	int eng;
	int math;
	int sci;

	scanf("%d %d %d %d", &kor, &eng, &math, &sci);

	if (kor >= 0 && kor <= 100 && eng >= 0 && eng <= 100 && math >= 0 && math <= 100 && sci >= 0 && sci <= 100)
	{
		if ((kor + eng + math + sci) / 4 >= 85)
			printf("�հ�");3
		else
			printf("���հ�");
	}
	else
		printf("�߸��� ����");

	return 0;

}