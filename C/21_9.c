#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


int main()
{
	int num1, num2;
	scanf_s("%d %d", &num1, &num2);

	if (num1 && num2)
		printf("��\n");
	else
		printf("����\n");

	if (num1 || num2)
		printf("��\n");
	else
		printf("����\n");

	if (!num1)
		printf("��\n");
	else
		printf("����\n");

	return 0;
}
