#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, d;

	printf("���������� ax^2+bx+c�� ���� �Ǻ��Ͻÿ�.\n");

	printf("a: ");

	scanf_s("%f", &a);



	printf("b: ");

	scanf_s("%f", &b);



	printf("c: ");

	scanf_s("%f", &c);

	if (a == 0)
	{
		if (b == 0)
		{
			printf("���� �����ϴ�.\n");
		}
		else
		{
			printf("%f", ((-1 * c) / b));
		}
	}

	else
	{
		float d = b * b - 4.0 * a * c;

		if (b == 0)
		{
			printf("������Դϴ�.\n");
			printf("%f\n", -sqrt(c / a));

		}
		else if (d < 0)
		{
			printf("�� ����Դϴ�.\n");
			printf("%f %f\n", (-b - sqrt(-d)) / (2 * a), (-b + sqrt(-d)) / (2 * a));
		}

		else if (d > 0)
		{
			printf("�� �Ǽ��Դϴ�.\n");
			printf("%f %f \n", (-b - sqrt(+d)) / (2 * a), (-b + sqrt(+d)) / (2 * a));

		}
		else if (d == 0)
		{
			printf("�߱��Դϴ�.\n");
			printf("%f\n", (-1 * c) / (2 * a));
		}
	}

	return 0;
}