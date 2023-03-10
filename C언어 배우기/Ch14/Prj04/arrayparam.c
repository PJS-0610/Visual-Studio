/*
	솔루션 / 프로젝트 / 소스파일: Ch14 / Prj04 / arrayparam.c
	함수에서 배열인자의 사용
	V 1.0 2022.
*/

#include <stdio.h>

int sumary(int* ary, int SIZE);		//int sumary(int ary[],int SIZE)도 가능

int main(void)
{
	int point[] = { 95,88,76,54,85,33,65,78,99,82 };

	//배열크기 구하기
	int aryLength = sizeof(point) / sizeof(int);

	//address는 포인터 변수이며 point는 배열 상수
	int* address = point;

	//메인에서 직접 배열합 구하기
	int sum = 0;

	for (int i = 0; i < aryLength; i++)
		sum += *(point + i);
		//sum += *(point++);	오류발생
		//sum += *(address++);	가능
	printf("메인에서 구한 합은 %d\n", sum);

	//함수호출하여 합 구하기
	printf("합수sumary() 호출로 구한 합은 %d\n", sumary(point, aryLength));
	printf("합수sumary() 호출로 구한 합은 %d\n", sumary(&point[0], aryLength));			//&point로 써도 가능
	printf("합수sumary() 호출로 구한 합은 %d\n", sumary(address, aryLength));
	
	return 0;
}

int sumary(int* ary, int SIZE)		//int sumary(int ary[],int SIZE)도 가능
{
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
		sum += ary[i];
		//sum += *(ary + i);	가능
		//sum += *ary++;		가능	
		//sum += *(ary++);		가능


	return sum;
}