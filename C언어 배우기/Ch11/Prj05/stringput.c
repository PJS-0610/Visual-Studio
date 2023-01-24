/*
	솔루션 / 프로젝트 / 소스파일: Ch11 / Prj05 / stringput.c
	scanf()와 printf()에서 문자열 입출력
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main(void)
{
	char name[20], dept[30];		//char *name, *dept; 실행 오류

	printf("학과 입력 >> ");
	scanf("%s", dept);
	printf("이름 입력 >> ");
	scanf("%s", name);
	printf("출력: %10s %10s\n", dept, name);

	return 0;
}