/*
	솔루션 / 프로젝트 / 소스파일: Ch04 / Prj01 / macro.c
	#define을 이용하여 만든 이름이 붙여진 매크로 상수의 이해
	V 1.0 2022.
*/

#include <stdio.h>

#define KPOP 50000000
#define PI 3.14
#define PRT printf("매크로 상수 예제 종료\n")

int main(void)
{

	double radius = 2.83;

	printf("한국인구: %d명\n", KPOP);
	printf("원면적: %f\n", radius*radius*PI);
	PRT;

	return 0;

}