/*
	솔루션 / 프로젝트 / 소스파일: Ch08 / Prj05 / calcptr.c
	포인터 변수의 연산
	V 1.0 2022.
*/

#include <stdio.h>

int main(void)
{
	char* pc = (char*)100;			//가능한 식이나 잘 이용하지 않음 char형 포인터 변수 pc 선언하여 char형 포인터 주소값 100을 저장	    //교재 perfect C의 p.372 tip 부분에 자세한 설명 참고
	int* pi = (int*)100;			//가능한 식이나 잘 이용하지 않음 int형 포인터 변수 pi 선언하여 int형 포인터 주소값 100을 저장	    //교재 perfect C의 p.372 tip 부분에 자세한 설명 참고
	double* pd = (double*)100;		//가능한 식이나 잘 이용하지 않음 doublt형 포인터 변수 pd 선언하여 double형 포인터 주소값 100을 저장	//교재 perfect C의 p.372 tip 부분에 자세한 설명 참고
	pd = 100;				//경고 발생

	printf("%u %u %u\n", (int)(pc - 1), (int)pc, (int)(pc + 1));
	printf("%u %u %u\n", (int)(pi - 1), (int)pi, (int)(pi + 1));
	printf("%u %u %u\n", (int)(pd - 1), (int)pd, (int)(pd + 1));

	return 0;
}