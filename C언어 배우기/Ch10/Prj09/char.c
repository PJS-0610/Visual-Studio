/*
	솔루션 / 프로젝트 / 소스파일: Ch10 / Prj09 / char.c
	문자관련 함수 이용
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <ctype.h>	//문자관련 함수는 헤더파일 ctype.h에 매크로 정의

void print2char(char);

int main(void)
{
	char ch;		

	printf("알파벳(종료x) 또는 다른 문자 입력하세요.\n");

	do
	{
		printf("문자 입력 후 ENTER: ");
		scanf("%c", &ch);
		getchar();		//문자 하나 입력후 enter키를 반드시 누르도록 해서 enter키를 하나 받아들이는 기능
		if (isalpha(ch))
			print2char(ch);
		else printf("입력: %c\n", ch);
	} while (ch != 'x' && ch != 'X');		//입력이 x또는 X이면 종료
	return 0;
}

void print2char(char ch)
{
	if (isupper(ch))
		printf("입력: %c, 변환: %c\n", ch, tolower(ch));
	else
		printf("입력: %c, 변환: %c\n", ch, toupper(ch));

	return;
}
