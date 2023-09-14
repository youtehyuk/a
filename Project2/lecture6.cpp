#include <stdio.h>

int main()
{
	int a;
	printf("정수 입력 :");
	scanf_s("%d", &a);
	if (a%2==0)
		printf("%d(은)는 짝수이다.", a);
	else
		printf("%d(은)는 홀수이다.", a);
	return 0;
}