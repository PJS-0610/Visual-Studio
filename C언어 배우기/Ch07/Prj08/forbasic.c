/*
	솔루션 / 프로젝트 / 소스파일: Ch07 / Prj08 / forbasic.c
	for 문
	V 1.0 2022.
*/

#include <stdio.h>
#define MAX 5

int main(void)
{
	int i;

	for (i = 1; i <= MAX; i++)
	{
		printf("C 언어 재미있네요! %d\n", i);
	}
	printf("\n제어변수 i => %d\n", i);

	return 0;
}