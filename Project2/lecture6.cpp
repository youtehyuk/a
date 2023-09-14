#include <stdio.h>

int main()
{
	int a;
	printf("정수 입력해 :");
	scanf_s("%d", &a);
	if (a > 0)
		printf("%d(은)는 양수임", a);
	else if (a == 0)
		printf("%d(은)는0임", a);
	else
		printf("%d(은)는 음수임", a);
	return 0;
}