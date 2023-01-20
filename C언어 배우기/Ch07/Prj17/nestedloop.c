/*
	솔루션 / 프로젝트 / 소스파일: Ch07 / Prj17 / nestedloop.c
	for 문 중첩
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE	//scanf() 오류를 방지하기 위한 상수 정의

#include <stdio.h>

int main(void)
{
	int m, n;

	for (m = 1; m <= 5; m++)
	{
		printf("m = %-2d\n", m);
		for (n = 1; n <= 7; n++)
			printf("n = %-3d", n);
			puts("");
	}
	return 0;
}