#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, d;

	printf("이차방정식 ax^2+bx+c의 근을 판별하시오.\n");

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
			printf("근이 없습니다.\n");
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
			printf("순허수입니다.\n");
			printf("%f\n", -sqrt(c / a));

		}
		else if (d < 0)
		{
			printf("두 허수입니다.\n");
			printf("%f %f\n", (-b - sqrt(-d)) / (2 * a), (-b + sqrt(-d)) / (2 * a));
		}

		else if (d > 0)
		{
			printf("두 실수입니다.\n");
			printf("%f %f \n", (-b - sqrt(+d)) / (2 * a), (-b + sqrt(+d)) / (2 * a));

		}
		else if (d == 0)
		{
			printf("중근입니다.\n");
			printf("%f\n", (-1 * c) / (2 * a));
		}
	}

	return 0;
}