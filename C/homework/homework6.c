#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int num1;
	printf("������ �Է��Ͻÿ�:");
	scanf_s("%d/n", &num1);

	int num2 = num1 / 10;
	int num3 = num2 / 10;

	printf("�����ڸ�:%d\n", num3 % 10);
	printf("�����ڸ�:%d\n", num2 % 10);
	printf("�����ڸ�:%d\n", num1 % 10);

	return 0;

}