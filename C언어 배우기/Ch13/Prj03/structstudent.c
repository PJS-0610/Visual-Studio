/*
	솔루션 / 프로젝트 / 소스파일: Ch13 / Prj03 / structstudent.c
	구조체 변수 대입과 비교
	V 1.0 2022.
*/

//구조체 정의는 변수의 선언처럼 그 정의 위치에 따라 유효범위가 결정된다. 
//즉 구조체의 정의도 변수 선언처럼 유효범위는 전역(global) 또는 지역(local)으로 모두 가능하다
//교재 Perfect C p.588 tip 부분 참고





#define _CRT_SECURE_NO_DEPRECATE	
#include <stdio.h>
#include <string.h>

int main(void)
{
	//학생을 위한 구조체
	struct student
	{
		int snum;
		char* dept;
		char name[12];
	};
	struct student hong = { 201800001,"컴퓨터정보공학과","홍길동" };
	struct student na = { 201800002 };
	struct student bae = { 201800003 };

	//학생이름 입력
	scanf("%s", na.name);
	//na.name = "나한국";	//오류
	//scanf("%s", na.dept); //오류	

	na.dept = "컴퓨터정보공학과";
	bae.dept = "기계공학과";
	memcpy(bae.name, "배상문", 7);
	strcpy(bae.name, "배상문");
	strcpy_s(bae.name, 7, "배상문");

	printf("[%d, %s, %s]\n", hong.snum, hong.dept, hong.name);
	printf("[%d, %s, %s]\n", na.snum, na.dept, na.name);
	printf("[%d, %s, %s]\n", bae.snum, bae.dept, bae.name);

	struct student one;
	one = bae;

	if (one.snum == bae.snum)
		printf("학번이 %d으로 동일합니다.\n", one.snum);

	//if ( one == bae ) //오류
	if (one.snum == bae.snum && !strcmp(one.name, bae.name) && !strcmp(one.dept, bae.dept))
		printf("내용이 같은 구조체입니다.\n");

	return 0;
}