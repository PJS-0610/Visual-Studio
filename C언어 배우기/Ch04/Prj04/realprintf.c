/*
	솔루션 / 프로젝트 / 소스파일: Ch04 / Prj04 / realprintf.c
	형식지정자의 이해
	V 1.0 2022.
*/

#include <stdio.h>

int main(void)
{
	float f = 3.1415F;
	double d = 42.3876547;

	printf("%f %lf\n", f, f);
	printf("%f %lf\n", d, d);

	return 0;
}