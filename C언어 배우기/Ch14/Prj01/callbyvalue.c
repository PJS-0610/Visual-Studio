/*
	솔루션 / 프로젝트 / 소스파일: Ch14 / Prj01 / callbyvalue.c
	값에 의한 호출로 실인자의 값이 증가하지 않음
	V 1.0 2022.
*/

#include <stdio.h>

void increase(int origin, int incremnet);

int main(void)
{
	int amount = 10;

	//amount 가 20 증가하지 않음
	increase(amount, 20);
	printf("%d\n", amount);

	return 0;
}

void increase(int origin, int increment)
{
	origin += increment;

	return;
}