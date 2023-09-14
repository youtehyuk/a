#include <stdio.h>

int main()
{
	int a = 1, b = 2;
	while(b<=9)
	{
		while (a <= 9)
		{
			printf("%d * %d = %d\n", b, a, b * a);

			a++;
		}b++;
		if (b == 5) continue;
		a = 1;
	}
}