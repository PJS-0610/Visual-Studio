/*
	솔루션 / 프로젝트 / 소스파일: Ch14 / Prj07 / vararg.c
	가변인자 처리 함수의 정의와 호출
	V 1.0 2022.
*/

#include <stdio.h>
#include <stdarg.h>

double avg(int count, ...);			//int count 이후는 가변인자 ...

int main(void)
{
	printf("평균 %.2f\n", avg(5, 1.2, 2.1, 3.6, 4.3, 5.8));

	return 0;
}

//가변인자 ... 시작 전 첫 고정 매개변수는 이후의 가변인자를 처리하는데 필요한 정보를 지정
//여기에서는 가변이자의 수를 지정
double avg(int numagrs, ...)
{
	//가변 인자 변수 선언
	va_list argp;

	//numargs 이후의 가변인자 처리 시작
	va_start(argp, numagrs);

	double total = 0;
	for (int i = 0; i < numagrs; i++)
		//지정하는 double 형으로 가변인자 하나 하나를 반환
		total += va_arg(argp, double);

	//가변인자 처리 종료	
	va_end(argp);

	return total / numagrs;
}