/*
	솔루션 / 프로젝트 / 소스파일: Ch08 / Prj02 / pointer.c
	포인터 변수선언과 주소값 대입
	V 1.0 2022.
*/

#include <stdio.h>

int main(void)
{

	int data = 100;
	int *ptrint;
	ptrint = &data;

	printf("변수명       주소값              저장값\n");
	printf("-------------------------------------------\n");
	printf("   data  %p   %8d\n", &data, data);
	printf("ptrint   %p   %p\n", &ptrint, ptrint);

	return 0;
}