#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


int main()
{
	char c1;
	scanf_s("%c", &c1);

	if (c1 != 'k')
		printf("Âü\n");
	else
		printf("°ÅÁş\n");
	if (c1 > 'h')
		printf("Âü\n");
	else
		printf("°ÅÁş\n");
	if (c1 <= 'o')
		printf("Âü\n");
	else
		printf("°ÅÁş\n");

	return 0;
}
