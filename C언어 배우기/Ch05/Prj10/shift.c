/*
	솔루션 / 프로젝트 / 소스파일: Ch05 / Prj10 / shift.c
	비트 이동 연산자
	V 1.0 2022.
*/

#include <stdio.h>

int main(void)
{

	int x = 16391;

	printf("%6d --> %08x\n", x, x);
	printf("x >> 1 --> %d, %08x\n", x >> 1, x >> 1);
	printf("x >> 2 --> %d, %08x\n", x >> 2, x >> 2);
	printf("x >> 2 --> %d, %08x\n", x >> 3, x >> 3);
	printf("x << 2 --> %d, %08x\n", x << 2, x << 2);
	printf("x << 2 --> %d, %08x\n", x << 3, x << 3);


	return 0;

}