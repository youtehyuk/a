#include <stdio.h>

int main()
{
	int var1, a, b;

	printf("a = 10, b = 15ÀÏ ¶§\n");

	a = 10, b = 15;
	var1 = ++a + b--;

	printf("1.var1 = ++a + b-- = %d, a = %d, b = %d", var1, a, b);
	return 0;
}