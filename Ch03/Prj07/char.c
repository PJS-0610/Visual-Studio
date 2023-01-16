/*
	솔루션 / 프로젝트 / 소스파일: Ch03 / Prj07 / char.c
	문자형 변수의 선언과 이용
	V 1.0 2022.
	*/

#include <stdio.h>

int main(void)
{
	char c1 = 'a';
	char c2 = 65;
	char c3 = '\132';
	char c4 = '\x5A';
	printf("저장값(문자): %c %c %c %c\n", c1, c2, c3, c4);
	printf("저장값(정수): %d %d %d %d\n", c1, c2, c3, c4);
	
	return 0;
}