#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b)
{
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
int lcm(int a, int b)
{
	return (a * b) / gcd(a, b);
}

int main() 
{
	int num1, num2;
	printf("請輸入兩個數字:");
	scanf_s("%d %d", &num1, &num2);

	int result = lcm(num1, num2);
	printf("最小公倍數為:%d\n",result);

	return 0;
}