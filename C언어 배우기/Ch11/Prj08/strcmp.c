/*
	솔루션 / 프로젝트 / 소스파일: Ch11 / Prj08 / strcmp.c
	문자열 비교함수 strcmp()와 strncmp()
	V 1.0 2022.
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
	char* s1 = "java";
	char* s2 = "java";
	printf("strcmp(%s, %s) = %d\n", s1, s2, strcmp(s1, s2));

	s1 = "java";
	s2 = "jav";
	printf("strcmp(%s, %s) = %d\n", s1, s2, strcmp(s1, s2));

	s1 = "jav";
	s2 = "java";
	printf("strcmp(%s, %s) = %d\n", s1, s2, strcmp(s1, s2));
	printf("strncmp(%s, %s, %d) = %d\n", s1, s2, 3, strncmp(s1, s2, 3));

	return 0;
}