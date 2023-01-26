/*
	솔루션 / 프로젝트 / 소스파일: Ch13 / Prj05 / typedef.c
	자료형 재정의 이용
	V 1.0 2022.
*/

#include <stdio.h>

//함수 외부에서 정의된 자료형은 이후 파일에서 사용 가능
typedef unsigned int budget;

int main(void) {
	//새로운 자료형 budget 사용
	budget year = 24500000;

	//함수 내부에서 정의된 자료형은 이후 함수 내부에서만 사용 가능
	typedef int profit;

	profit month = 4600000;

	printf("올 예산은 %d, 이달의 이익은 %d 입니다.\n", year, month);

	return 0;
}

