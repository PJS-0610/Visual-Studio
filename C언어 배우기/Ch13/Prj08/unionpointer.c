/*
	솔루션 / 프로젝트 / 소스파일: Ch13 / Prj08 / unionpointer.c
	공용체 정의와 변수 선언 및 사용
	V 1.0 2022.
*/

#include <stdio.h>

int main(void)
{
	//공용체 union data 정의
	union data
	{
		char ch;
		int cnt;
		double real;
	};

	//유니온 union data를 다시 자료형 udata로 정의
	typedef union data udata;

	//udata 형으로 value와 포인터 p 선언
	udata value, * p;

	p = &value;
	p->ch = 'a';
	printf("%c %c\n", p->ch, (*p).ch);
	p->cnt = 100;	
	printf("%d ", p->cnt);
	p->real = 3.14;
	printf("%.2f \n", p->real);

	return 0;
}