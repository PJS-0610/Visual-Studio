/*
	솔루션 / 프로젝트 / 소스파일: Ch06 / Prj06 / danglingelse.c
	if else문 활용
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE //scanf() 의 오류를 방지하기위한 상수 정의

#include <stdio.h>

int main(void)
{
	int age = 0;

	printf("당신의 나이는? ");
	scanf("%d", &age);

	if (age >= 20)
	{
		if (age >= 65)
			printf("당신은 어르신입니다.\n");
		else printf("당신은 성인입니다.\n");
	}
	else
	{
		printf("당신은 미성년자입니다.\n");
	}

	return 0;
}