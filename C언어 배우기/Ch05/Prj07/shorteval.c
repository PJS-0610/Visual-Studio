/*
	솔루션 / 프로젝트 / 소스파일: Ch05 / Prj07 / shorteval.c
	논리연산자 &&와 ||는 피연산자 두 개중에서 왼쪽 피연산자만으로 논리연산 결과가 결정된다면 오른쪽 피연산자는 평가하지 않는다. 이것을 단축평가라 한다
	V 1.0 2022.
*/

#include <stdio.h>


int main(void)
{
	int a = 10, b = 5, m = 1;
	int result;

	result = (a < b) && (m++ == 1);
	printf("m=%d result=%d\n", m, result);

	result = (a > b) || (--m == 0);
	printf("m=%d result=%d\n", m, result);

	return 0;



}