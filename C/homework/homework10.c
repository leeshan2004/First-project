#include <stdio.h>
int main()
{
	int num1, num2;

	printf("�ڿ����� �Է��ϼ���.\n");
	scanf_s("%d", &num1);

	for (num2 = 2; num2 < num1; num2++)
	{
		if (num1 % num2 == 0)

			break;

	}





	if (num2 == num1)

		printf("�Ҽ�\n");

	else

		printf("�ռ���\n");

	return 0;
}