#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1;
	int num2;
	int num3;
	int num4;

	scanf("%d %d %d %d", % num1, % num2, % num3, % num4);

	int num5 = num1 + num2 + num3 + num4;

	if (num5 / 4 >= 85)
		printf("합격\n");

	else
		printf("불합격\n");
	return 0;

}