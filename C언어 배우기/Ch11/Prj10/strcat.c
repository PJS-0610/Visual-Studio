/*
	솔루션 / 프로젝트 / 소스파일: Ch11 / Prj10 / strcat.c	
	문자열 연결 함수 사용
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <string.h>

int main(void)
{
	char dest[80] = "C";

	printf("%s\n", strcat(dest, " is "));
	//함수 strcat_s()의 사용
	//printf("%d\n", strcat_s(dest, 80, " is "));
	//printf("%s\n", dest);

	printf("%s\n", strncat(dest, "a java", 2));		//2개 문자인 "a"까지만 뒤에 연결된다.
	//함수 strncat_s()의 사용
	//printf("%d\n", strncat_s(dest, 80, "a proce",2));
	//printf("%s\n", dest);

	printf("%s\n", strcat(dest, "procedural "));
	printf("%s\n", strcat(dest, "language."));

	return 0;
}