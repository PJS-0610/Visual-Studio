/*
	솔루션 / 프로젝트 / 소스파일: Ch11 / Prj12 / strfun.c
	다양한 문자열 관련 함수의 이해
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "JAVA 2017 go c#";
	printf("%d\n", strlen("java"));		//java의 길이: 4
	printf("%s, ", _strlwr(str));		//모두 소문자로 변환
	printf("%s\n", _strupr(str));		//모두 대문자로 변환

	//문자열 VA가 시작되는 포인터 반환: VA 2013 GO C#
	printf("%s, ", strstr(str, "VA"));
	
	//문자 A가 처음 나타나는 포인터 반환: AVA 2013 GO C#
	printf("%s\n", strchr(str, 'A'));

	return 0;
}