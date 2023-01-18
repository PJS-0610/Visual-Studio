/*
	솔루션 / 프로젝트 / 소스파일: Ch05 / Prj08 / condition.c
	조건연산자(삼항연산자) 조건에 따라 주어진 피연산자가 결과값이 되는 삼항연산자이다
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE //scanf() 의 오류를 방지하기위한 상수 정의

#include <stdio.h>

int main(void)
{
	int a = 0, b = 0;
	printf("두 정수를 입력 >> ");
	scanf("%d%d", &a, &b);

	printf("최댓값: %d ", (a > b) ? a : b);
	printf("최솟값: %d\n", (a < b) ? a : b);
	printf("절댓값: %d ", (a > 0) ? a : -a);
	printf("절댓값: %d\n", (b > 0) ? b : -b);

	((a % 2) == 0) ? printf("짝수 ") : printf("홀수 ");
	printf("%s\n", ((b % 2) == 0) ? "짝수" : "홀수");

	return 0;










}