/*
	솔루션 / 프로젝트 / 소스파일: Ch05 / Prj03 / compoundassign.c
	축약 대입연산자
	V 1.0 2022.
*/


#define _CRT_SECURE_NO_DEPRECATE //scanf() 의 오류를 방지하기위한 상수 정의

#include <stdio.h>

int main(void)
{
	int x = 5, y = 10;
	printf("두 정수를 입력 >> ", &x, &y);
	scanf("%d%d", &x, &y);

	printf("The addition is: %d\n", x += y);
	printf("x = %d, y = %d\n", x, y);
	printf("The substraction is: %d\n", x -= y);
	printf("x = %d, y = %d\n", x, y);
	printf("The multiplication is: %d\n", x *= y);
	printf("x = %d, y = %d\n", x, y);
	printf("The division is: %d\n", x /= y);
	printf("x = %d, y = %d\n", x, y);
	printf("The remainder is: %d\n", x %= y);
	printf("x = %d, y = %d\n", x, y);
	printf("x *= x+ y is: %d\n", x *= x + y);
	printf("x = %d, y = %d\n", x, y);
	
	return 0;
}
