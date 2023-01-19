/*
	솔루션 / 프로젝트 / 소스파일: Ch06 / Prj05 / nestedif.c
	if else문 활용 중첩된 if
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE //scanf() 의 오류를 방지하기위한 상수 정의

#include <stdio.h>

int main(void)
{
	int type, point;

	printf("번호를 선택: 1(1종면허), 2(2종면허): ");
	scanf("%d", &type);
	printf("필기시험 점수 입력: ");
	scanf("%d", &point);

	if (type == 1)
	{
		if (point >= 70)
			printf("1종면허 합격\n");
		else
			printf("1종면허 불합격\n");
	}
	else if (type == 2)
	{
		if (point >= 60)
			printf("2종면허 합격\n");
		else
			printf("2종면허 불합격\n");
	}

	return 0;
}