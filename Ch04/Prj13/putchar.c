/*
	솔루션 / 프로젝트 / 소스파일: Ch04 / Prj13 / putchar.c
	문자의 입출력함수 getchar()와 putchar()
	V 1.0 2022.
*/


#include <stdio.h>
int main(void)
{
	char a = '\0';
	puts("문자 하나 입력:");
	a = getchar();
	putchar(a);
	putchar('\n');

	return 0;


}

