#include<stdio.h>

int main()
{
	int score[5] = { 87, 92, 89, 98, 78 };
	
	int* p_score = score;

	printf("score[5] = {87, 92, 89, 98, 78} 배열 요소 출력\n");

	for (int i = 0; i < 5; i++)
		printf("score[%d] = [%d]\n", i, score[i]);
	*p_score++;

	return 0;
}