/*
	솔루션 / 프로젝트 / 소스파일: Ch12 / Prj09 / out.c
	외부 파일의 전역변수 활용
	V 1.0 2022.
*/
#include <stdio.h>

void outfunction()
{
	extern int global, sglobal;

	printf("\t\t%d\n", ++global);

	//외부 파일에서 선언된 정적 전역변수이므로 실행시 오류
	//printf("%d\n", ++sglobal);

}