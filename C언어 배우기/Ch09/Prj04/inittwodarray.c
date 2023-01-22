/*
	솔루션 / 프로젝트 / 소스파일: Ch09 / Prj04 / inittwodarray.c
	이차원 배열초기화와 원소 출력
	V 1.0 2022.
*/

#include <stdio.h>
#define ROWSIZE 2
#define COLSIZE 3

int main(void)
{
	//2차원 배열 초기화
	int td[][3] = { {1},{1,2,3} };

	printf("반복문 forf문 이용하여 출력\n");
	for (int i = 0; i < ROWSIZE; i++)
	{
		for (int j = 0; j < COLSIZE; j++)
			printf("%d ", td[i][j]);
		printf("\n");	
	}
	return 0;
}