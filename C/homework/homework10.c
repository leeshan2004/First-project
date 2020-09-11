#include <stdio.h>
int main()
{
	int num1, num2;

	printf("자연수를 입력하세요.\n");
	scanf_s("%d", &num1);

	for (num2 = 2; num2 < num1; num2++)
	{
		if (num1 % num2 == 0)

			break;

	}





	if (num2 == num1)

		printf("소수\n");

	else

		printf("합성수\n");

	return 0;
}