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

	printf("학생수 입력: ");
	scanf_s("%d", &a);

	struct Student* std;
	std = (struct Student*)malloc(sizeof(struct Student) * a);

	for (int i = 0; i < a; i++) {
		printf("학생 # %d-%d  학번 입력 : ", a, i + 1);
		scanf_s("%d", &(std[i].sno));

		printf("학생 # %d-%d 이름 입력 : ", a, i + 1);
		scanf_s("%s", std[i].name, 10);

		printf("학생 # %d-%d 점수 입력 : ", a, i + 1);
		scanf_s("%d", &(std[i].score));
	}

	for (int i = 0; i < a; i++) {
		printf("학생 # %d-%d 성적 입력 : ", a, i + 1);
		scanf_s("%d", std + i);
	}

	int sum = 0;
	for (int i = 0; i < a; i++) {
		sum += std[i];
	}

}