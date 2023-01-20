/*
	솔루션 / 프로젝트 / 소스파일: Ch07 / Prj18 / triangle.c
	for 문 중첩으로 삼각형만들기
	V 1.0 2022.
*/

#include <stdio.h>

int main(void)
{
	const int MAX = 5;
	int i, j;

	for (i = 1; i <= MAX; i++)
	{
		for (j = 1; j <= i; j++)
			printf("*");
		puts("");
	}
	return 0;
}
