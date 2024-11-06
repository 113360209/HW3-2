#include <stdio.h>
#include <stdlib.h>

int power(int base, int exponent)
{
	if (exponent == 1) {
		return base;
	}
	else
	{
		return base * power(base, exponent - 1);

	}

}

int main()
{
	int base;
	int exponent;
	printf("請輸入數字和次方:");
	scanf_s("%d%d", &base, &exponent);
		printf("結果為:%d\n", power(base, exponent));

}