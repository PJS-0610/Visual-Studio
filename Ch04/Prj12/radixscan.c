/*
	솔루션 / 프로젝트 / 소스파일: Ch04 / Prj12 / radixscan.c
	scanf()함수 다양한 형식 지정자
	V 1.0 2022.
*/

//프로젝트 -> 속성 -> C/C++ -> 전처리기 -> 전처리기 정의 -> 편집 에 들어가서 밑에 두 코드중 하나를 써도 된다
#define _CRT_SECURE_NO_DEPRECATE //scanf()오류를 방지하기 위한 상수 정의(둘 중 하나 사용)
#define _CRT_SECURE_NO_WARNINGS  //scanf()오류를 방지하기 위한 상수 정의(둘 중 하나 사용)

#include <stdio.h>

int main(void)
{
	
	int a, b, c;
	printf("십진수, 팔진수, 십육진수를 각각 입력하세요.\n");
	scanf("%d %o %x", &a, &b, &c);
	printf("%d %#o %#x\n\n", a, b, c);

	printf("십진수, 팔진수(0리딩 표현), 십육진수(0x리딩 표현)를 각각 입력하세요.\n");
	scanf("%i %i %i", &a, &b, &c);
	printf("%d %d %d\n", a, b, c);

	return 0;


}




