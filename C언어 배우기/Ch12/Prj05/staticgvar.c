/*
	솔루션 / 프로젝트 / 소스파일: Ch12 / Prj06 / staticgvar.c
	정적 전역변수 선언과 사용
	V 1.0 2022.
*/

#include <stdio.h>

//정적 전역변수 선언
static int svar;

//전역변수 선언
int gvar;

//함수 원형
void increment();
void testglobal();

int main(void)
{
	for (int count = 1; count <= 5; count++)
		increment();
	printf("함수 increment()가 총 %d번 호출되었습니다.\n", svar);

	testglobal();
	printf("전역 변수: %d\n", gvar);
}

void increment()
{
	svar++;
}