/*
	솔루션 / 프로젝트 / 소스파일: Ch09 / Prj13 / pointerarray.c
	배열을 가리키는 배열 포인터의 선언과 이용
	V 1.0 2022.
*/

#include <stdio.h>

int main(void)
{
	int data[] = { 3,4,5,7,9 };
	printf("%d %d\n", sizeof(data), sizeof(data[0]));
	printf("일차원 배열: 배열 크기 == %d\n", sizeof(data) / sizeof(data[0]));

	//4 x 3 행렬
	double x[][3] = { {1,2,3},{7,8,9},{4,5,6},{10,11,12} };

	printf("%d %d %d\n", sizeof(x), sizeof(x[0]), sizeof(x[1]), sizeof(x[0][0]));

	int rowsize = sizeof(x) / sizeof(x[0]);
	int colsize = sizeof(x[0]) / sizeof(x[0][0]);
	printf("이차원 배열: 행수 == %d  열수 == %d\n", rowsize, colsize);
	printf("이차원 배열: 전체 원소 수 == %d\n", sizeof(x) / sizeof(x[0][0]));

	return 0;
}