#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <stdbool.h>

int main()
{
	int num1;
	scanf_s("%d", &num1);

	while (num1 >= 1200)
	{
		num1 = num1 - 1200;
		printf("%d\n", num1);
		
	}

	return 0;
}