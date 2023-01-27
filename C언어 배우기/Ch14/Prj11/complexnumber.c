/*
	솔루션 / 프로젝트 / 소스파일: Ch14 / Prj11 / complexnumber.c
	구조체를 사용하여 복소수를 표현, 함수의 인자와 반환형으로 사용	
	V 1.0 2022.
*/

#include <stdio.h>

//복소수를 위한 구조체
struct complex
{
	double real;	//실수
	double img;		//허수
};

//complex를 자료형으로 정의
typedef struct complex complex;

void printcomplex(complex com);
complex paircomplex1(complex com);
void paircomplex2(complex* com);

int main(void)
{
	complex comp = { 3.4,4.8 };
	complex pcomp;

	printcomplex(comp);
	pcomp = paircomplex1(comp);
	printcomplex(pcomp);
	paircomplex2(&pcomp);
	printcomplex(pcomp);

	return 0;
}

//구조체 자체를 인자로 사용
void printcomplex(complex com)
{
	printf("복소수(a +bi) = %5.1f + %5.1fi \n", com.real, com.img);
}

//구조체 자체를 인자로 사용하여 처리된 구조체를 다시 반환
complex paircomplex1(complex com)
{
	com.img = -com.img;
	return com;
}

//구조체 포인터를 인자로 사용
void paircomplex2(complex* com)
{
	com->img = -com->img;	
}