/*
	솔루션 / 프로젝트 / 소스파일: Ch11 / Prj03 / string.c
	문자 포인터로 문자열 처리
	V 1.0 2022.
*/

#include <stdio.h>

int main(void)
{
	char c[] = "C C++ Java";
	printf("%s\n", c);
	c[5] = '\0';	//NULL문자에 의해 문자열 분리
	printf("%s\n%s\n", c, (c + 6));

	//문자 배열의 각 원소를 하나 하나 출력하는 방법
	c[5] = ' ';		//NULL문자를 빈 문자로 바꾸어 문자열 복원
	char* p = c;
	while (*p != '\0')
		printf("%c", *p++);
	printf("\n");

	return 0;
}