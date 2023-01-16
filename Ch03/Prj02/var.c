/*
	솔루션 / 프로젝트 / 소스파일: Ch03 / Prj02 / var.c
	C 프로그램의 기초를 다지기 변수선언 이해
	V 1.0 2022.
	*/
#include <stdio.h>
int main(void)
{
	int snum;
	int credits;
	
	snum = 20163021;
	credits = 18;

	printf("학번: %d\n", snum);
	printf("신청학점: %d\n", credits);

	return 0;
}