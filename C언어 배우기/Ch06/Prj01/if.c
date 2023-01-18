/*
	솔루션 / 프로젝트 / 소스파일: Ch06 / Prj01 / if.c
	if문
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE //scanf() 의 오류를 방지하기위한 상수 정의

#include <stdio.h>

int main(void)
{
	double temperature;

	printf("현재 온도 입력: ");
	scanf("%lf", &temperature);


	if (temperature >= 32.0) {
		printf("폭염 주의보를 발령합니다.\n");
		printf("건강에 유의하세요.\n");

	}
	printf("현재 온도는 섭씨 %.2f입니다.\n", temperature);

	return 0;


}