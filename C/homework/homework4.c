#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


int main()
{
	int num1;
	int num2;

	printf("������ �Է��ϼ���:");
	scanf_s("%d %d", &num1, &num2);

	printf("%d+ %d= %d\n", num1, num2, num1 + num2);
	printf("%d- %d= %d\n", num1, num2, num1 - num2);
	printf("%d* %d= %d\n", num1, num2, num1 * num2);
	printf("%d/ %d= %d\n", num1, num2, num1 / num2);

	num1++;
	num2++;

	printf("%d+ %d= %d\n", num1, num2, num1 + num2);
	printf("%d- %d= %d\n", num1, num2, num1 - num2);
	printf("%d* %d= %d\n", num1, num2, num1 * num2);
	printf("%d/ %d= %d\n", num1, num2, num1 / num2);

	num1--;
	num2--;

	printf("%d+ %d= %d\n", num1, num2, num1 + num2);
	printf("%d- %d= %d\n", num1, num2, num1 - num2);
	printf("%d* %d= %d\n", num1, num2, num1 * num2);
	printf("%d/ %d= %d\n", num1, num2, num1 / num2);

	return 0;
}