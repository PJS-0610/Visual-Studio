/*
	솔루션 / 프로젝트 / 소스파일: Ch10 / Prj01 / functionadd2.c
	함수 정의와 호출
	V 1.0 2022.
*/
#include <stdio.h>

//int add2(int a, int b);		//이 위치도 가능

int main(void)
{
	int a = 3, b = 5;
	int add2(int a, int b);		//int add2(int,int)도 가능

	//위 함수원형이 없으면 오류 발생
	int sum = add2(a, b);
	printf("합: %d\n", sum);

	return 0;
}

//함수 add2의 함수구현 또는 함수정의 부분
int add2(int a, int b)
{
	int sum = a + b;

	return (sum);	//괄호 생략 가능
}

//위 main함수에서 호출이 없으므로 이 함수구현은 실행되지 않음
int findMin2(int x, int y)
{
	int min = x < y ? x : y;

	return min;
}