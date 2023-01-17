/*
	솔루션 / 프로젝트 / 소스파일: Ch04 / Prj09 / scanf.c
	scanf()함수
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE //scanf()오류를 방지하기 위한 상수 정의(둘 중 하나 사용)
#define _CRT_SECURE_NO_WARNINGS  //scanf()오류를 방지하기 위한 상수 정의(둘 중 하나 사용)

#include< stdio.h>
int main(void)
{
	int year = 0;
	printf("당신의 입학년도는? ");
	scanf("%d", &year);
	printf("입학년도: %d\n\n", year);

	int month, day;
	printf("당신의 생년월일은? ");
	scanf("%d-%d-%d", &year, &month, &day);
	printf("생년월일: %d-%d-%d\n", year, month, day);
	

	return 0;
}