/*
	솔루션 / 프로젝트 / 소스파일: Ch14 / Prj03 / arrayparameter.c
	배열을 매개변수로 하는 함수정의와 호출
	V 1.0 2022.
*/

#include <stdio.h>
#define ARYSIZE 5
double sum(double g[], int n);		//배열 원소 값을 모두 더하는 함수원형	

int main(void)
{
	//배열 초기화
	double data[] = { 2.3,3.4,4.5,6.7,9.2 };

	//배열원소 출력
	for (int i = 0; i < ARYSIZE; i++)
		printf("%5.1f", data[i]);
	puts("");

	//배열 원소값을 모두 더하는 함수호출
	printf("합: %5.1f\n", sum(data, ARYSIZE));

	return 0;
}

//배열 원소값을 모두 더하는 함수정의
double sum(double ary[], int n)
{
	double total = 0.0;
	for (int i = 0; i < n; i++)
		total += ary[i];

	return total;
}