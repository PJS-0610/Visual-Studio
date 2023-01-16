/*
	솔루션 / 프로젝트 / 소스파일: Ch03 / Prj10 / charliteral.c
	이스케이프 문자를 비롯해서 다양한 문자 리터럴의 표현
	V 1.0 2022.
	*/

#include <stdio.h>

int main(void)
{
	printf("%casic", 'B');		printf("%c", '\n');

	char sq = '\'';
	printf("BCPL\tB\tC\tJava\n");				   //문자열 내부에서 \t(탭) 문자 사용						
	printf("%C\7\n", '\a');					       //알람 문자를 2번 출력하고 공백줄
	printf("%c자바언어'\n", sq);				   //문자열 내부에서는 '(작은따옴표) 그대로 사용가능

	//문자열 내부에서는 "(큰따옴표) 반드시 \"로 사용
	printf("\"C언어\" 정말 재미있다!\n");

	return 0;
}	