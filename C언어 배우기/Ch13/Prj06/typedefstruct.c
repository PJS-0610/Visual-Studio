/*
	솔루션 / 프로젝트 / 소스파일: Ch13 / Prj06 / typedefstruct.c
	문장 typedef을 이용하여 구조체의 자료유형을 다른 이름으로 재정의하여 이용
	V 1.0 2022.
*/

#include <stdio.h>

struct date
{
	int year;
	int month;
	int day;
};

//struct date 유형을 간단히 date 형으로 사용하기 위한 구문
typedef struct date date;

int main(void)
{
	//구조체를 정의하면서 바로 자료형 software로 정의하기 위한 구문
	typedef struct
	{
		char title[30];
		char company[30];
		char kinds[30];
		date release;
	} software;

	software vs = { "비주얼스튜디어 커뮤니티","MS","통합개발환경",{2018,8,29} };

	printf("제품명: %s\n", vs.title);
	printf("회사: %s\n", vs.company);
	printf("종류: %s\n", vs.kinds);
	printf("출시일: %d. %d. %d\n", vs.release.year,vs.release.month,vs.release.day);
	
	return 0;
}