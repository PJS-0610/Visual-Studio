/*
	솔루션 / 프로젝트 / 소스파일: Ch07 / Prj06 / dowhile.c
	Do While 문
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE //scanf() 오류를 방지하기 위한 상수 정의

#include <stdio.h>
int main(void)
{
	int input;

	do
	{
		printf("정수 또는 0(종료)을 입력: ");
		scanf("%d", &input);
	} while (input != 0);		//while (input);
	
	puts("종료합니다.");
		
	
	return 0;
}