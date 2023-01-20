/*
	솔루션 / 프로젝트 / 소스파일: Ch07 / Prj15 / goto.c
	goto 사용
	V 1.0 2022.
*/

#include <stdio.h>

int main(void)
{
	int count = 1;

loop:
	printf("%3d", count);
	if (++count <= 10)
		goto loop;

	printf("\n프로그램을 종료합니다.\n");

	return 0;
}