#include<stdio.h>

int isPrime(int a)
{
	for (int div = a - 1; div > 1; div--)
	{
		if (a % div == 0)
			return 0;
	}
	return 1;
}

int main()
{
	int a;

	printf("�Ҽ����� Ȯ���� ���� �Է��ϼ��� : ");
	scanf_s("%d", &a);

	printf("%d\n", isPrime(a));
}