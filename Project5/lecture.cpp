#include<stdio.h>
#include<stdlib.h>

struct Student {
	int sno;
	char name[10];
	int score;
};
int main() 
{
	int a;

	printf("�л��� �Է�: ");
	scanf_s("%d", &a);

	struct Student* std;
	std = (struct Student*)malloc(sizeof(struct Student) * a);

	for (int i = 0; i < a; i++) {
		printf("�л� # %d-%d  �й� �Է� : ", a, i + 1);
		scanf_s("%d", &(std[i].sno));

		printf("�л� # %d-%d �̸� �Է� : ", a, i + 1);
		scanf_s("%s", std[i].name, 10);

		printf("�л� # %d-%d ���� �Է� : ", a, i + 1);
		scanf_s("%d", &(std[i].score));
	}

	for (int i = 0; i < a; i++) {
		printf("�л� # %d-%d ���� �Է� : ", a, i + 1);
		scanf_s("%d", std + i);
	}

	int sum = 0;
	for (int i = 0; i < a; i++) {
		sum += std[i];
	}

}