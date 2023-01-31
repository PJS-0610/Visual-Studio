/*
	솔루션 / 프로젝트 / 소스파일: Ch16 / Prj11 / preifdef.h
	전처리 지시자 #ifdef 이용한 디버깅 방법
	V 1.0 2022.
*/

#include <stdio.h>
#define DEBUG	
#define LIMIT 20

int main(void)
{
	long prod =1;
	for (int i = 1; i <= LIMIT; i++)
	{
		prod *= i;
#ifdef DEBUG
		if (i % 5 == 0)
			printf("DEBUG : 1부터% d까지의 곱은 %d입니다.\n", i, prod);
#endif
	}
	printf("1부터 %d까지의 곱은 %d입니다.\n", LIMIT, prod);

	return 0;
}