#include <stdio.h>
#include <ctype.h>

int toggleCase(char c)
{
	return c;

}
int main()
{
	char alphabet;
	printf("�п�J�^��r��:");
	scanf_s("%c", &alphabet);
	char result = toggleCase(alphabet);
	printf("���G:%c\n", result);

	system("pause");
	return 0;
}