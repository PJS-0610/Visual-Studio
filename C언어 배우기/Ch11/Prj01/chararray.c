/*
	솔루션 / 프로젝트 / 소스파일: Ch11 / Prj01 / chararray.c
	문자열 저장을 위한 문자열 배열처리와 문자열 출력	
	V 1.0 2022.
*/

#include <stdio.h>

int main(void)
{
	//문자 선언과 출력
	char ch = 'A';
	printf("%c %d\n", ch, ch);

	//문자열 선언 방법1
	char java[] = { 'J','A','V','A','\0' };
	printf("%s\n", java);

	//문자열 선언 방법2
	char c[] = "C language";		//크기는 생략하는것이 편함
	printf("%s\n", c);

	//문자열 선언 방법3
	char csharp[5] = "C#";
	printf("%s\n", csharp);

	//문자 배열에서 문자 출력
	printf("%c%c\n", csharp[0], csharp[1]);

	return 0;
}