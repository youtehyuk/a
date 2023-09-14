#include<stdio.h>

int main()
{
	int a;

	printf("년도 입력:");
	scanf_s("%d", &a);

	if (((a % 4 == 0)&&(a % 100 != 0))||(a%400==0))
	{	
		printf("윤년 입니다.");
	}
	else
		printf("윤년이 아닙니다.");
}