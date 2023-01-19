/*
	솔루션 / 프로젝트 / 소스파일: Ch07 / Prj05 / whilebasic.c
	While 문
	V 1.0 2022.
*/

#include <stdio.h>
#define Max 5

int main(void)
{
	int n = 1;

	while (n <= Max)
		printf("%d\n", n++);

	printf("\n제어변수 count =>%d\n", n);

	return 0;
}