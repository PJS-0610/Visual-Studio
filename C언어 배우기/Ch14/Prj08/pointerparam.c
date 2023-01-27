/*
	솔루션 / 프로젝트 / 소스파일: Ch14 / Prj08 / pointerparam.c
	함수에서의 포인터 전달(참조에 의한 호출)
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

void add(int*, int, int);

int main(void)
{
	int m = 0, n = 0, sum = 0;

	printf("두 정수 입력: ");
	scanf("%d %d", &m, &n);
	add(&sum, m, n);
	printf("두 정수의 합: %d\n", sum);

	return 0;
}

void add(int* psum, int a, int b)
{
	*psum=a+b;
}