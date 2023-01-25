/*
	솔루션 / 프로젝트 / 소스파일: Ch11 / Prj04 / registervar.c
	레지스터 변수의 선언과 사용
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main(void)
{
	//레지스터 지역변수 선언
	register int sum = 0;

	//메모리에 저장되는 일반 지역변수 선언
	int max;
	printf("양의 정수 입력 >> ");
	scanf("%d", &max);

	//레지스터 블록 지역변수 선언
	for (register int count = 1; count <= max; count++)
		sum += count;

	printf("합: %d\n", sum);

	return 0;
}