#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


int main()
{
	int num1, num2;
	scanf_s("%d %d", &num1, &num2);

	if (num1 && num2)
		printf("Âü\n");
	else
		printf("°ÅÁş\n");

	if (num1 || num2)
		printf("Âü\n");
	else
		printf("°ÅÁş\n");

	if (!num1)
		printf("Âü\n");
	else
		printf("°ÅÁş\n");

	return 0;
}
