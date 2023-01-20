/*
	솔루션 / 프로젝트 / 소스파일: Ch07 / Prj16 / menu.c
	menu 사용 
	while 문과 do while 문에는 조건을 1로 해두면 무한반복, for 문에는 조건을 안붙여도 무한반복이 가능하다.
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE	//scanf() 오류를 방지하기 위한 상수 정의

#include <stdio.h>

int main(void)
{
	int input;

	do
	{
		printf("\t [1] 한식\n");
		printf("\t [2] 양식\n");
		printf("\t [3] 분식\n");
		printf("\t [4] 기타\n");
		printf("메뉴 번호 선택 후 [ENTER] : ");
		scanf("%d", &input);
		printf("선택 메뉴 %d\n", input);

		if (1 <= input && input <= 4)
			break;
	} while (1);

	return 0;
}