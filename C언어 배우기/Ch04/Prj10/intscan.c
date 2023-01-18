/*
	솔루션 / 프로젝트 / 소스파일: Ch04 / Prj10 / intscan.c
	scanf()함수
	V 1.0 2022.
*/
//프로젝트 -> 속성 -> C/C++ -> 전처리기 -> 전처리기 정의 -> 편집 에 들어가서 밑에 두 코드중 하나를 써도 된다
#define _CRT_SECURE_NO_DEPRECATE //scanf()오류를 방지하기 위한 상수 정의(둘 중 하나 사용)
#define _CRT_SECURE_NO_WARNINGS  //scanf()오류를 방지하기 위한 상수 정의(둘 중 하나 사용)
#include <stdio.h>

int main(void)
{

	int snum, credit;

	printf("당신의 학번과 신청학점은? ");
	scanf("%d%d", &snum, &credit);
	printf("학번: %d 신청학점: %d\n", snum, credit);


	return 0;
	







}
