/*
	솔루션 / 프로젝트 / 소스파일: Ch14 / Prj15 / voidptr.c
	void *로 다양한 자료의 참조
	V 1.0 2022.
*/

#include <stdio.h>

void myprint(void)
{
	printf("void 포인터, 신기하네요!\n");
}

int main(void)
{
	int m = 10;
	double d = 3.98;
	char str[][20] = { {"C 언어,"},{"재미있네요!"} };

	void* p = &m;
	printf("p 참조 정수: %d\n", *(int*)p);			//int *로 변환

	p = &d;
	printf("p 참조 실수: %.2f\n", *(double*)p);		//double *로 변환

	p = myprint;
	printf("p 참조 함수 실행 : ");
	((void(*)(void))p)();		//함수 포인터인 void(*)(void)로 변환하여 호출

	p = str;

	//열이 20인 이차원 배열로 변환하여 1행과 1행의 문자열 출력
	printf("p 참조 2차원 배열: %s %s\n", (char(*)[20])p, (char(*)[20])p + 1);
	printf("str 참조 2차원 배열: %s %s\n", str, str + 1);

	return 0;
}