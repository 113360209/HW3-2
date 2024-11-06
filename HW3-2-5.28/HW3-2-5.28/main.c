#include <stdio.h>
#include <ctype.h>

int toggleCase(char c)
{
	return c;

}
int main()
{
	char alphabet;
	printf("請輸入英文字母:");
	scanf_s("%c", &alphabet);
	char result = toggleCase(alphabet);
	printf("結果:%c\n", result);

	system("pause");
	return 0;
}