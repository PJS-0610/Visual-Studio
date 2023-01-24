/*
	솔루션 / 프로젝트 / 소스파일: Ch11 / Prj06 / gets.c
	gets()와 puts() 기능을 알아보는 예제
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main(void)
{
	char line[101];		//char *line으로는 오류 발생

	printf("입력을 종료하려면 새로운 행에서 (ctrl + Z)를 누르십시오.\n");
	while (gets(line))
		puts(line);
	printf("\n");

	while (gets_s(line, 101))
		puts(line);
	printf("\n");

	return 0;
}