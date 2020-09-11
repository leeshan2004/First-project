#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	int balance = 10000;
	int age;

	scanf("%d", &age);

	if (7 <= age && age <= 12)
	{
		balance = balance - 450;
	}
	

	else if (13 <= age && age <= 18)
	{
		balance = balance - 720;
	}

	else if (age >= 19)
	{
		balance = balance - 1200;
	}
	printf("%d\n", balance);

	return 0;
}