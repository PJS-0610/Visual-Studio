/*
	솔루션 / 프로젝트 / 소스파일: Ch07 / Prj07 / dowhilenumber.c
	Do While 문
	V 1.0 2022.
*/
#include <stdio.h>
#define MAX 5

int main(void)
{
	int n = 1;

	do
	{
		printf("%d\n", n++);
	} while (n <= MAX);
	
	printf("\n제어변수 n => %d\n", n);

	return 0;
}