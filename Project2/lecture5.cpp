#include <stdio.h>

int main()
{

	int a;
	printf("���� �Է� :");
	scanf_s("%d", &a);
	if (a%2==0)
		printf("%d(��)�� ¦���̴�.", a);
	else
		printf("%d(��)�� Ȧ���̴�.", a);
	return 0;
}