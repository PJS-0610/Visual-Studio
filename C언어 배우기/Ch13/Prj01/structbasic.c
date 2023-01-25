/*
	솔루션 / 프로젝트 / 소스파일: Ch13 / Prj01 / strucbasic.c
	외부 파일의 전역변수 활용
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <string.h>

//구조체 정의
struct account
{
	char name[12];		//계좌주 이름
	int actnum;			//계좌번호
	double balance;		//잔고
};

int main(void)
{
	//구조체 변수 선언 및 초기화
	struct account mine = { "홍길동",1001,300000 };
	struct account yours;

	strcpy(yours.name, "이동원");
	//strcpy_s(yours.name, 12, "이동원");	//가능
	//yours.name = "이동원";				//오류		char 배열인 name으로는 바로 문자열 상수 "이동원" 대입 불가능
	yours.actnum = 1002;
	yours.balance = 50000;

	printf("구조체크기: %d\n", sizeof(mine));
	printf("%s %d %.2f\n", mine.name, mine.actnum, mine.balance);
	printf("%s %d %.2f\n", yours.name, yours.actnum, yours.balance);

	return 0;
}