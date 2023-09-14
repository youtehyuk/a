#include <stdio.h>

int main()
{
	int a;
	printf("정수 입력 :");
	scanf_s("%d", &a);
	if (a > 0)
		printf("%d(은)는 양수이다.", a);
	else if (a == 0)
		printf("%d(은)는 0이다.", a);
	else
		printf("%d(은)는 음수이다.", a);
	return 0;
}