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

	printf("소수인지 확인할 수를 입력하세요 : ");
	scanf_s("%d", &a);

	printf("%d\n", isPrime(a));
}