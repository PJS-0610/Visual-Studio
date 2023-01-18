/*
	솔루션 / 프로젝트 / 소스파일: Ch05 / Prj09 / bitlogic.c
	비트연산자
	V 1.0 2022.
*/

#include <stdio.h>

int main(void)
{

	int x = 127;

	printf("%5d -> %08x\n", x, x);
	printf("x & 1 -> %08x\n", x & 1);
	printf("x | 1 -> %08x\n", x | 1);
	printf("x ^ 1 -> %08x\n", x ^ 1);
	printf("~(-1) -> %08x\n", ~(-1));
	printf("~1    -> %08x\n", ~1);

	return 0;
}