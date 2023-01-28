/*
	솔루션 / 프로젝트 / 소스파일: Ch15 / Prj04 / fgetc.c
	여러 문자를 표준입력으로 받아 파일에 저장한 후, 다시 파일에서 문자를 읽어 표준출력
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{
	char fname[] = "char.txt";
	FILE* f;

	//쓰기모드로 파일 열기
	if (fopen_s(&f, fname, "w") != 0)
		//if (f = fopen(fname, "w") == NULL); 과 같음
	{
		printf("파일이 열리지 않습니다.\n");
		exit(1);
	}
	puts("문자를 입력하다가 종료하려면 x를 입력 >>");

	/* 표준입력으로 받은 문자를 파일에 출력하는 부분 */
	int ch;		//입력된 문자 저장
	while ((ch = _getche()) != 'x')
		fputc(ch, f);		//입력된 문자 파일에 쓰기
	fclose(f);
	puts("");

	//읽기 모드로 파일 열기
	if (fopen_s(&f, fname, "r") != 0)
	{
		printf("파일이 열리지 않습니다.\n");
		exit(1);
	}

	/* 파일에서 다시 문자를 입력받아 콘솔에 표준출력하는 부분 */
	while ((ch = fgetc(f)) != EOF)
		_putch(ch);
	fclose(f);
	puts("");

	return 0;
}