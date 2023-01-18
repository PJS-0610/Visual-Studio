/*
	솔루션 / 프로젝트 / 소스파일: Ch05 / Prj05 / relation.c
	관계연산자
	V 1.0 2022.
*/

#include <stdio.h>

int main(void)
{
	printf("(3 > 4) 결과값: %d\n", (3 > 4));
	printf("(3 < 4.0) 결과값: %d\n", (3 < 4.0));
	printf("('a' <= 'b') 결과값: %d\n", ('a' <= 'b'));
	printf("('Z' <= 'a') 결과값: %d\n", ('Z' <= 'a'));
	printf("(4.27 >= 4.35) 결과값: %d\n", (4.27 >= 4.35));
	printf("(4 != 4.0) 결과값: %d\n", (4 != 4.0));
	printf("(4.0F == 4.0) 결과값: %d\n", (4.0F == 4.0));

	return 0;

}