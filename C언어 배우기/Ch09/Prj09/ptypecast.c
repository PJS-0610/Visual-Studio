/*
	솔루션 / 프로젝트 / 소스파일: Ch09 / Prj09 / ptypecast.c
	포인터 자료형의 변환
	V 1.0 2022.
*/

#include <stdio.h>

int main(void)
{
	char c[4] = { 'A','\0','\0','\0' };		//문자'A' 코드값: 65

	//int *pi = &c[0]   //경고 발생
	int* pi = (int*)&c[0];

	printf("%d %c\n", (int)c[0], c[0]);
	printf("%d %c\n", *pi, (char)*pi);

	return 0;
}