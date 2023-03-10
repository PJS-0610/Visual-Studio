/*
	솔루션 / 프로젝트 / 소스파일: Ch14 / Prj10 / constreference.c
	함수 매개변수에서 const의 사용
	방법과 의미
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE	
#include <stdio.h>

void multiply(double*, const double*, const double*);
void devideandincrement(double*, double*, double*);

int main(void)
{
	double m = 0, n = 0, mult = 0, dev = 0;

	printf("두 실수 입력: ");
	scanf("%lf %lf", &m, &n);
	multiply(&mult, &m, &n);
	devideandincrement(&dev, &m, &n);
	printf("두 실수 곱: %.2f, 나눔: %.2f\n", mult, dev);
	printf("연산 후 두 실수: %.2f, %.2f\n", m, n);

	return 0;
}

//매개변수 포인터 a, b,가 가리키는 변수의 내용을 곱해 result가 가리키는 변수에 저장
//매개변수 포인터a, b가 가리키는 변수의 내용은 수정하지 못함
void multiply(double* result, const double* a, const double* b)
{
	*result = *a * *b;
	//오류 발생
	//*a = *a + 1;
	//*b = *b + !;
}

//매개변수 포인터 a, b가 가리키는 변수의 내용을 나누어 result가 가리키는 변수에 저장한 후
//a, b가 가리키는 변수의 내용을 모두 1 증가시킴
void devideandincrement(double* result, double* a, double* b)
{
	*result = *a / *b;
	++* a;		//++(*a)이므로 a가 가리키는 변수의 값을 1 증가
	(*b)++;		//b가 가리키는 변수의 값을 1 증가,*b++와는 다름
}