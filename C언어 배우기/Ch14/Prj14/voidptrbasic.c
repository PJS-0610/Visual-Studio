/*
	솔루션 / 프로젝트 / 소스파일: Ch14 / Prj14 / voidptrbasic.c
	주소만 저장하는 void 포인터
	V 1.0 2022.
*/

#include <stdio.h>

void myprint(void)
{
	printf("void 포인터 신기하네요!\n");
}

int main(void)
{
	int m = 10;
	double d = 3.98;

	void* p = &m;
	printf("%d\n", p);
	//printf("%d", *p); 오류 발생

	p = &d;
	printf("%d\n", p);

	p = myprint;
	printf("%d\n", p);

	return 0;
}