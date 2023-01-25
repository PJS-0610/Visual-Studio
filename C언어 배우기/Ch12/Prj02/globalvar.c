/*
	솔루션 / 프로젝트 / 소스파일: Ch12 / Prj02 / globalvar.c
	전역변수 PI의 선언과 사용
	V 1.0 2022.
*/

#include <stdio.h>

double getArea(double);
double getCircum(double);

//전역변수 선언
double PI = 3.14;
int gi;

int main(void)
{
	//지역변수 선언
	double r = 5.87;

	//전역변수 PI와 같은 이름의 지역변수 선언
	const double PI = 3.141592;

	printf("면적: %.2f\n", getArea(r));
	printf("둘레1: %.2f\n", 2*PI*r);
	printf("둘레2: %.2f\n", getCircum(r));
	printf("PI: %f\n", PI);
	printf("gi: %d\n", gi);

	return 0;
}

double getArea(double r)
{
	return r * r * PI;
}