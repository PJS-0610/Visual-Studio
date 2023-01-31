/*
	솔루션 / 프로젝트 / 소스파일: Ch07 / Prj01 / repetition.c
	반복문 개요
	V 1.0 2022.
*/

#include <stdio.h>

int main(void)
{
	//모두 동일한 문자열의 단순한 반복
	printf("C언어 재미있네요!\n");
	printf("C언어 재미있네요!\n");
	printf("C언어 재미있네요!\n");

	int n = 1;
	//정수값을 1씩 증가시키면서 출력 반복
	printf("%d\n", n++);
	printf("%d\n", n++);
	printf("%d\n", n++);
	printf("%d\n", n++);
	printf("%d\n", n++);

	return 0;
}