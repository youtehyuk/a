#include<stdio.h>

void sum(int a, int b)
{
	printf("%d+%d=%d", a, b, a + b);
}
void sub(int a, int b)
{
	printf("%d-%d=%d", a, b, a - b);
}
void mul(int a, int b)
{
	printf("%d*%d=%d", a, b, a * b);
}
void div(int a, int b)
{
	printf("%d/%d=%d", a, b, a / b);
}

void a(int s)
{
	double num1, num2;

	printf("���� 1�� �Է��Ͻÿ� : ");
	scanf_s("%lf", &num1);

	printf("���� 2�� �Է��Ͻÿ� : ");
	scanf_s("%lf", &num2);

	

	if (s == 1) sum(num1, num2);
	else if (s == 2) sub(num1, num2);
	else if (s == 3) mul(num1, num2);
	else if (s == 4) div(num1, num2);
}

int main()
{
	int sel;

	printf("1.���ϱ� 2. ���� 3.���ϱ� 4.������ : ");
	scanf_s("%d", &sel);

	a(sel);

	return 0;
}