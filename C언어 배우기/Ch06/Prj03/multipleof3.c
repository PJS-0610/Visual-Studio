/*
	솔루션 / 프로젝트 / 소스파일: Ch06 / Prj03 / multipleof3.c
	if else문 활용
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE //scanf() 의 오류를 방지하기위한 상수 정의

#include <stdio.h>

int main(void)
{
	int n;

	printf("정수 입력: ");
	scanf("%d", &n);

	if (n % 3)		//if (n % 3 != 0) 이랑 같은 표현
	{
		printf("입력된 %d는 3의 배수가 아닙니다.\n", n);
	}
	else
	{
		printf("입력된 %d는 3의 배수입니다.\n", n);
	}
	printf("조건식 %d %% 3의 결과는 %d입니다.\n", n, n % 3);

	return 0;


}