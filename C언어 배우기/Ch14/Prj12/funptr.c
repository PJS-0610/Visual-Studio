/*
	솔루션 / 프로젝트 / 소스파일: Ch14 / Prj12 / funptr.c
	함수 주소를 저장하는 함수 포인터의 선언과 사용
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE	
#include <stdio.h>

//함수 원형
void add(double*, double, double);
void subtract(double*, double, double);

int main(void)
{
	//함수 포인터 pf을 선언
	void(*pf)(double*, double, double) = NULL;

	double m, n, result = 0;
	printf("+, -를 수행할 실수 2개를 입력하세요. >> ");
	scanf("%lf %lf", &m, &n);

	//사칙연산을 수행
	pf = add;				//add() 함수를 함수 포인터 pf에 저장
	pf(&result, m, n);		//add(&result,m,n):
	printf("pf = %p, 함수 add() 주소= %\n", pf, add);	
	printf("더하기 수행: %lf + %lf == %lf\n\n", m, n, result);

	pf = subtract;			//subtract() 함수를 함수 포인터 pf에 저장
	pf(&result, m, n);		//subtract(&result,m,n);
	printf("pf = %p, 함수 subtract() 주소= %p\n", pf, subtract);
	printf("  빼기 수행: %lf - %lf == %lf\n\n", m, n, result);
	
	return 0;
}

//x +y 연산 결과를 z가 가리키는 변수에 저장하는 함수
void add(double* z, double x, double y)
{
	*z = x + y;
}

//x - y 연산 결과를 z가 가리키는 변수에 저장하는 함수
void subtract(double* z, double x, double y)
{
	*z = x - y;
}