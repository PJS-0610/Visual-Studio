/*
	솔루션 / 프로젝트 / 소스파일: Ch04 / Prj11 / floatcharscan.c
	scanf()함수 실수와 문자의 입력
	V 1.0 2022.
*/

//프로젝트 -> 속성 -> C/C++ -> 전처리기 -> 전처리기 정의 -> 편집 에 들어가서 밑에 두 코드중 하나를 써도 된다

#define _CRT_SECURE_NO_DEPRECATE //scanf()오류를 방지하기 위한 상수 정의(둘 중 하나 사용)
#define _CRT_SECURE_NO_WARNINGS  //scanf()오류를 방지하기 위한 상수 정의(둘 중 하나 사용)
#include <stdio.h>

int main(void)
{
	float pi;
	printf("원주율을 입력하세요.\n");
	scanf("%f", &pi);
	printf("%f\n", pi);

	char ch1, ch2;
	printf("구분자를 공백으로 두 문자를 입력하세요.\n");

	//가장 앞에 공백을 두어 enter를 제거, 구분자로 공백(여러 개도 가능)을 사용
	scanf(" %c %c", &ch1, &ch2);
	printf("ch1=%c ch2=%c\n", ch1, ch2);

	return 0;




}



