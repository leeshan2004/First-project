#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
	char num1 = CHAR_MIN;
	short num2 = SHRT_MIN;
	int num3 = INT_MIN;
	long num4 = LONG_MIN;
	long long num5 = LLONG_MIN;
	unsigned char num6 = 0;
	unsigned short num7 = 0;
	unsigned int num8 = 0;
	unsigned long num9 = 0;
	unsigned long long num10 = 0;
	float num11 = FLT_MIN;
	double num12 = DBL_MIN;
	long double num13 = LDBL_MIN;

	printf("%d %d %d %ld %lld %u %u %u %lu %llu %e %e %Le\n", num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12, num13);

	num1 = CHAR_MAX;
	num2 = SHRT_MAX;
	num3 = INT_MAX;
	num4 = LONG_MAX;
	num5 = LLONG_MAX;
	num6 = UCHAR_MAX;
	num7 = USHRT_MAX;
	num8 = UINT_MAX;
	num9 = ULONG_MAX;
	num10 = ULLONG_MAX;
	num11 = FLT_MAX;
	num12 = DBL_MAX;
	num13 = LDBL_MAX;

	printf("%d %d %d %ld %lld %u %u %u %lu %llu %e %e %Le\n", num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12, num13);

	const int con1;

	printf("%d\n", 12174806);
	
	return 0;

}