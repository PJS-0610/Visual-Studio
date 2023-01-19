/*
	솔루션 / 프로젝트 / 소스파일: Ch06 / Prj04 / ifelseif.c
	if else문 활용
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE //scanf() 의 오류를 방지하기위한 상수 정의

#include <stdio.h>

int main(void)
{
	double gpa;

	printf("평균평점 입력: ");
	scanf("%lf", &gpa);

	if (gpa >= 4.3)
		printf("성적이 최고 우수한 학생입니다.\n");

	else if (gpa >= 3.8)
		printf("성적이 매우 우수한 학생입니다.\n");
	else if (gpa >= 3.0)
		printf("성적이 우수한 학생입니다.\n");
	else
		printf("성적이 3.0 미만인 학생입니다.\n");

	return 0;


}