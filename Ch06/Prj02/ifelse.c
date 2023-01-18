/*
	솔루션 / 프로젝트 / 소스파일: Ch06 / Prj02 / ifelse.c
	if else문
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE //scanf() 의 오류를 방지하기위한 상수 정의

#include <stdio.h>

int main(void)
{
	int n;

	printf("정수입력: ");
	scanf("%d", &n);

	if (n % 2)			//if ( n % 2 != 0 ) 이랑 같은 표현		// { } 을 사용해서 if와 else문을 묶어도 되지만 여기서는 printf()가 하나밖에 없어서 안씀
		printf("홀수");
	else
		printf("짝수");

	printf("입니다.\n");

	//조건 연산자 이용
	(n % 2) ? printf("홀수") : printf("짝수");		//(n % 2!=0) ? printf("홀수") : printf("짝수");  이랑 같은 표현
	printf("입니다.\n");

	return 0;


}