#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int num1;
	printf("정수를 입력하시오:");
	scanf_s("%d/n", &num1);

	int num2 = num1 / 10;
	int num3 = num2 / 10;

	printf("백의자리:%d\n", num3 % 10);
	printf("십의자리:%d\n", num2 % 10);
	printf("일의자리:%d\n", num1 % 10);

	return 0;

}