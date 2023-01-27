/*
	솔루션 / 프로젝트 / 소스파일: Ch14 / Prj05 / arrayfunction.c
	배열을 인자로 하는 여러함수의 구현
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

void readarray(double[], int);		//배열 원소값을 모두 표준입력을 받는 함수원형
void printarray(double[], int);		//배열 원소값을 모두 출력하는 함수원형
double sum(double[], int);		//배열 원소값을 모두 더하는 함수원형

int main(void)
{
	double data[5];
	int arraysize = sizeof(data) / sizeof(data[0]);

	printf("실수 5개의 값을 입력하세요. \n");
	readarray(data, arraysize);
	printf("\n입력한 자료값은 다음과 같습니다.\n");
	printarray(data, arraysize);
	printf("함수에서 구한 합은 %.3f 입니다.\n", sum(data, arraysize));

	return 0;
}

//배열 원소값을 모두 표준입력 받는 함수
void readarray(double data[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("data[%d] = ", i);
		scanf("%lf", &data[i]);		//(data + i)로도 가능
	}
	return;
}

//배열 원소값을 모두 출력하는 함수
void printarray(double data[], int n)
{
	for (int i = 0; i < n; i++)
		printf("data[%d] = %.2lf ", i, *(data + i));
	printf("\n");
	return;
}

//배열 원소값을 모두 더하는 함수
double sum(double data[], int n)
{
	double total = 0;
	for (int i = 0; i < n; i++)
		total += data[i];
	return total;
}