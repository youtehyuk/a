#include<stdio.h>

void swap(int* pa, int* pb)
{
	int c = *pa;
	*pa = *pb;
	*pb = c;
}

int main()
{
	int a = 10;
	int b = 500;

	printf("%d %d\n", a, b);
	swap(&a, &b);
	printf("%d %d\n", a, b);

	return 0;
}