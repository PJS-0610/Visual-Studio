/*
	솔루션 / 프로젝트 / 소스파일: Ch10 / Prj02 / fuctioncall.c
	함수 정의와 호출
	V 1.0 2022.
*/

#include <stdio.h>

int add2(int a, int b);
int findMax2(int, int);
void printMin(int, int);

int main(void)
{
	int a = 3, b = 5;

	int max = findMax2(a, b);
	printf("최대: %d\n", max);
	printf("합: %d\n", add2(a, b));

	//반환값이 없는 함수호출은 일반 문장처럼 사용
	printMin(2, 5);

	return 0;
}

//이하 함수 add2, findMax2, findMin printMin구현
int add2(int a, int b)
{
	int sum = a + b;
	return sum;
}
int findMax2(int a, int b)
{
	int max = a > b ? a : b;
	return max;
}
int findMin2(int a, int b)
{
	int min = a < b ? a : b;
	return min;
}
void printMin(int a, int b)
{
	int min = a < b ? a : b;
	printf("최소: %d\n", min);
	return;
}