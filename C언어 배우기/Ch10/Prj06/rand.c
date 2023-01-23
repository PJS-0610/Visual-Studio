/*
	솔루션 / 프로젝트 / 소스파일: Ch10 / Prj06 / rand.c
	난수를 위한 함수 rand()의 이용
	V 1.0 2022.
*/

#include <stdio.h>
#include <stdlib.h>		//rand()를 위한 헤더파일 포함

int main(void)
{
	printf("0 ~%5d 사이의 난수 5개: rand()\n", RAND_MAX);		//RAND_MAX는 32767을 의미
	for (int i = 0; i < 5; i++)
		printf("%5d ", rand());
	puts("");

	return 0;
}