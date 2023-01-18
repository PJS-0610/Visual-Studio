/*
	솔루션 / 프로젝트 / 소스파일: Ch05 / Prj04 / increment.c
	증감연산자
	V 1.0 2022.
*/


#include <stdio.h>

int main(void)
{
	int m = 10, n = 5;
	int result;

	result = m++ + --n;
	printf("m=%d n=%d result=%d\n", m, n, result);

	result = ++m - n--;
	printf("m=%d n=%d result=%d\n", m, n, result);


	return 0;

}