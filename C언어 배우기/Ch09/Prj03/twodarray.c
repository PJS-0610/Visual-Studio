/*
	솔루션 / 프로젝트 / 소스파일: Ch09 / Prj03 / twodarray.c
	이차원 배열선언과 초기값 저장 후 출력
	V 1.0 2022.
*/

#include <stdio.h>

#define ROWSIZE 2
#define COLSIZE 3

int main(void)
{

	//2차원 배열선언
	int td[ROWSIZE][COLSIZE];

	//2차원 배열원소에 값 저장
	td[0][0] = 1;	td[0][1] = 2; td[0][2] = 3;
	td[1][0] = 4;	td[1][1] = 5; td[1][2] = 6;

	 /*  위 선언문과 같은 의미

	for (int i = 0; i < ROWSIZE; i++)
		for (int j = 0; j < COLSIZE; j++)
			td[i][j] = i * COLSIZE + j + 1;
	*/

	printf("반복문 for를 이용해서 출력\n");
	for (int i = 0; i < ROWSIZE; i++)
	{
		for (int j = 0; j < COLSIZE; j++)
			printf("td[%d][%d] == %d ", i, j, td[i][j]);
		printf("\n");
	}
	return 0;
}