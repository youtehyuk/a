#include <stdio.h>

int main()
{
	int a;
	printf("���� �Է� :");
	scanf_s("%d", &a);
	if (a > 0)
		printf("%d(��)�� ����̴�.", a);
	else if (a == 0)
		printf("%d(��)�� 0�̴�.", a);
	else
		printf("%d(��)�� �����̴�.", a);
	return 0;
}