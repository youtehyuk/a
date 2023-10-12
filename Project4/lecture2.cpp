#include<stdio.h>
int main()
{
	int num = 10;
	int* ptr1 = &num;
	int* ptr2 = ptr1;

	printf("%d\n", num);
	(*ptr1)++;
	printf("%d\n", num);
	(*ptr2)++;
	printf("%d\n", num);
}