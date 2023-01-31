/*
	솔루션 / 프로젝트 / 소스파일: Ch12 / Prj08 / storageclass.c
	전역변수와 지역변수의 선언과 참조
	V 1.0 2022.
*/

#include <stdio.h>

void infunction(void);
void outfunction(void);

/* 전역변수 */
int global = 10;
/* 정적 전역변수 */
static int sglobal = 20;

int main(void)
{
	auto int x = 100;

	printf("%d, %d, %d\n", global, sglobal, x);
	infunction(); outfunction();
	infunction(); outfunction();
	infunction(); outfunction();
	printf("%d, %d, %d\n", global, sglobal, x);

	return 0;
}

void infunction(void)
{
	auto int fa = 1;
	static int fs;

	printf("\t%d, %d, %d, %d\n", ++global, ++sglobal, fa, ++fs);
}