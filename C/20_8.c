#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


int main()
{
	char c1;
	scanf_s("%c", &c1);

	if (c1 != 'k')
		printf("��\n");
	else
		printf("����\n");
	if (c1 > 'h')
		printf("��\n");
	else
		printf("����\n");
	if (c1 <= 'o')
		printf("��\n");
	else
		printf("����\n");

	return 0;
}
