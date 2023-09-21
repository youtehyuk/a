#include<stdio.h>

int fact(int num)
{
	if (num == 0) return 1;

	return num * fact(num - 1);
}

int main()
{
	int num;
	scanf_s("%d", &num);
	printf("%d", fact(num));
}