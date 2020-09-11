#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <stdbool.h>

int main()
{
	int num1, num2;
	scanf_s("%d %d", &num1, &num2);

	for (; num1 <= num2; num1++)
	{
		if (num1 % 55 == 0)
			printf("FizzBuzz\n");
		else if (num1 % 5 == 0)
			printf("Fizz\n");
		else if (num1 % 11 == 0)
			printf("Buzz\n");
		else
			printf("%d\n", num1);
	}

	return 0;
}