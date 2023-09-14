#include <stdio.h>
int main()
{
	int p;
	printf("점수 입력 : ");
	scanf_s("%d", &p);

	if (p >= 90) printf("A 학점 입니다.");
	else if (p >= 80) printf("B 학점 입니다.");
	else if (p >= 70) printf("C 학점 입니다.");
	else if (p >= 60) printf("D 학점 입니다.");
	else if (p < 60) printf("F 학점 입니다.");
	else if (p < 0 || p>100)
		printf("잘못 입력하였습니다.");

	return 0;
}