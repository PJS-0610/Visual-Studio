/*
	솔루션 / 프로젝트 / 소스파일: Ch08 / Prj10 / constptr.c
	const를 이용한 포인터 상수
	V 1.0 2022.
*/

#include <stdio.h>

int main(void)
{
	int i = 10, j = 20;
	const int* p = &i;		//*p가 상수로 *p로 수정할 수 없음

	// *p = 20;	//오류 발생함
	p = &j;
	printf("%d\n", *p);

	double d = 7.8, e = 2.7;
	double* const pd = &d;

	// pd = &e;	//pd가 상수로 다른 주소값을 저장할 수 없음
	*pd = 4.4;
	printf("%f\n", *pd);

	return 0;
}