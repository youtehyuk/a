#include <stdio.h>
int main()
{
	int p;
	printf("���� �Է� : ");
	scanf_s("%d", &p);

	if (p >= 90) printf("A ���� �Դϴ�.");
	else if (p >= 80) printf("B ���� �Դϴ�.");
	else if (p >= 70) printf("C ���� �Դϴ�.");
	else if (p >= 60) printf("D ���� �Դϴ�.");
	else if (p < 60) printf("F ���� �Դϴ�.");
	else if (p < 0 || p>100)
		printf("�߸� �Է��Ͽ����ϴ�.");

	return 0;
}