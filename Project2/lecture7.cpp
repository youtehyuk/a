#include <stdio.h>

int main(void)
{
	char season;

	printf("�� : A �Ǵ� a\n");
	printf("���� : S �Ǵ� s\n");
	printf("���� : D �Ǵ� d\n");
	printf("�ܿ� : F �Ǵ� f\n");
	printf("�����ϴ� ������ �ش��ϴ� ���ĺ� �Է� : ");
	scanf_s("%c", &season, sizeof(season));

	switch (season)
	{
	case 'A':
	case 'a':
		printf("������ ���� : �� \n");
		break;

	case 'S':
	case 's':
		printf("������ ���� : ���� \n");
		break;

	case 'D':
	case 'd':
		printf("������ ���� : ���� \n");
		break;

	case 'F':
	case 'f':
		printf("������ ���� : �ܿ� \n");
		break;

	default:
		printf("������ ���� : ���� \n");
		break;
	}
	return 0;
}