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
	printf("�п�J�Ʀr�M����:");
	scanf_s("%d%d", &base, &exponent);
		printf("���G��:%d\n", power(base, exponent));

}