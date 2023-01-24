/*
	솔루션 / 프로젝트 / 소스파일: Ch11 / Prj09 / strcpy.c
	문자열 복사함수 strcpy()와 strncpy()
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <string.h>

int main(void)
{
	char dest[80] = "Java";
	char source[80] = "C is a languange.";

	printf("%s\n", strcpy(dest, source));
	//함수 strcpy_s()의 사용
	//printf("%d\n", strcpy_s(dest,80,source));
	//printf("%s\n", dest);

	printf("%s\n", strncpy(dest, "C#", 2));

	printf("%s\n", strncpy(dest, "C#", 3));
	//함수 strncpy_s()의 사용
	//printf("%d\n", strncpy_s(dest,80,"source,"C#",3));
	//printf("%s\n", dest);

	return 0;


}