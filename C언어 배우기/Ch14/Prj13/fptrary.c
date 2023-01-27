/*
	솔루션 / 프로젝트 / 소스파일: Ch14 / Prj13 / fptrary.c
	여러 함수 주소를 저장하는 함수 포인터 배열의 선언과 사용
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

//함수 원형
void add(double*, double, double);
void subtract(double*, double, double);
void multiply(double*, double, double);
void devide(double*, double, double);

int main(void)
{
	char op[4] = { '+','-','*','/' };

	//함수 포인터 선언하면서 초기화 과정
	void(*fpary[4])(double*, double, double) = { add,subtract,multiply,devide };

	double m, n, result;
	printf("사칙연산을 수행할 실수 2개를 입력하세요. >> ");
	scanf("%lf %lf", &m, &n);

	//사칙연산을 배열의 첨자를 이용하여 수행
	for (int i = 0; i < 4; i++)
	{
		fpary[i](&result, m, n);
		printf("%.2lf %c %.2lf == %.2lf\n", m, op[i], n, result);
	}
	return 0;
}

void add(double* z, double x, double y)
{
	*z = x + y;
}

void subtract(double* z, double x, double y)
{
	*z = x - y;
}

void multiply(double* z, double x, double y)
{
	*z = x * y;
}

void devide(double* z, double x, double y)
{
	*z = x / y;
}