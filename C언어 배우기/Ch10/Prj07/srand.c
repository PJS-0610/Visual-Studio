/*
	솔루션 / 프로젝트 / 소스파일: Ch10 / Prj07 / srand.c
	srand()로 시드값을 먼저 지정한 후 1에서 100사이의 난수를 생성
	V 1.0 2022.
*/

#include <stdio.h>
#include <stdlib.h>		//rand(), srand()를 위한 헤더파일 포함
#include <time.h>		//time()을 위한 헤더파일 포함

#define MAX 100

int main(void)
{
	long seconds = (long) time(NULL);
	srand(seconds);

	printf("1 ~ %5d 사이의 난수 5개:\n", MAX);
	for (int i = 0; i < 5; i++)
		printf("%5d ", rand() % MAX + 1);
	puts("");

	return 0;
}