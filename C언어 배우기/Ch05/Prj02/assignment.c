/*
	솔루션 / 프로젝트 / 소스파일: Ch05 / Prj02 / assignment.c
	대입연산자와 증감연산자
	V 1.0 2022.
*/


#include <stdio.h>


int main(void)
{
	int a, b, c;
	a = b = c = 5;

	printf("a = a + 2 ==> %d\n", a = a + 2);
	printf("a ==> %d\n", a);
	printf("a = b + c ==> %d\n", a = b + c);
	printf("a ==> %d\n", a);

	return 0;
}