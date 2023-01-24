/*
	솔루션 / 프로젝트 / 소스파일: Ch11 / Prj13 / strarray.c
	여러 개의 문자열을 선언과 동시에 저장하고 처리하는 방법
	V 1.0 2022.
*/

#include <stdio.h>

int main(void)
{
	char* pa[] = { "JAVA","C#","C++" };
	char ca[][5] = { "JAVA","C#","C++" };

	//각각의 3개 문자열 출력
	//pa[0][2] = 'v';		//실행 오류 발생
	//ca[0][2] = 'v';		//수정 가능
	printf("%s ", pa[0]); printf("%s ", pa[1]); printf("%s\n", pa[2]);
	printf("%s ", ca[0]); printf("%s ", ca[1]); printf("%s\n", ca[2]);

	//문자 출력
	printf("%c %c %c\n", pa[0][1], pa[1][1], pa[2][1]);
	printf("%c %c %c\n", ca[0][1], ca[1][1], ca[2][1]);

	return 0;
}