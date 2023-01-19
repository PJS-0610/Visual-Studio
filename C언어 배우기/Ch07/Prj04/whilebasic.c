/*
	솔루션 / 프로젝트 / 소스파일: Ch07 / Prj04 / whilebasic.c
	While 문
	V 1.0 2022.
*/

#include <stdio.h>

int main(void)
{
	int count = 1;

	while (count <= 3)
	{
		printf("C언어 재미있네요!\n");
		count++;
	};
	printf("\n제어변수 count => %d", count);

	return 0;
}