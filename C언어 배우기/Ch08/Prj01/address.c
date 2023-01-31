/*
	솔루션 / 프로젝트 / 소스파일: Ch08 / Prj01 / address.c
	메모리 주소와 주소연산자 &
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE	//scanf() 오류를 방지하기 위한 상수 정의

#include <stdio.h>

int main(void)
{
	int input;

	printf("정수 입력: ");
	scanf("%d", &input);
	printf("입력값: %d\n", input);
	printf("주소값: %u(10진수), %p(16진수)\n", (int)&input, &input);
	printf("주소값: %d(10진수), %#X(16진수)\n", (unsigned)&input, (int)&input);
	printf("주소값 크기: %d\n", sizeof(&input));

	return 0;
}