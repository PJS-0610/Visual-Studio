/*
	솔루션 / 프로젝트 / 소스파일: Ch08 / Prj03 / nullpointer.c
	다양한 포인터 변수 선언과 간접연산자 *
	V 1.0 2022.
*/

#include <stdio.h>

int main(void)
{
	int *ptr1, *ptr2, data = 10;
	ptr1 = NULL;

	printf("%p\n", ptr1);
	//printf("%p\n",ptr2);    <--  ptr2의 경우는 초기값이 없기 때문에 컴파일 오류가 난다
	printf("%d\n", data);

	return 0;
}