/*
	솔루션 / 프로젝트 / 소스파일: Ch07 / Prj10 / forbit.c
	for 문
	V 1.0 2022.
*/

#include <stdio.h>

#define TOTAL_BIT 32

int main(void)
{
	int num = 13;
	printf("정수 %d의 %d비트 내부값:\n", num, TOTAL_BIT);

	for (int i = TOTAL_BIT - 1; i >= 0; i--)
		printf("%d", num >> i & 1);
	
	printf("\n");
	return 0;
}