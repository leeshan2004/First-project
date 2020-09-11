#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <stdbool.h>

int main()
{
	char c1;
	scanf_s("%c", &c1);

	for (; c1 <= 'z'; c1++)
		printf("%c", c1);
	return 0;
}