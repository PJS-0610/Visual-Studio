/*
	솔루션 / 프로젝트 / 소스파일: Ch15 / Prj03 / mlineio.c
	여러줄에 걸쳐 이름, 성적을 입력하여 파일에 그 내용을 모두 저장
	V 1.0 2022.
*/
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char fname[] = "grade.txt";
	FILE* f;
	char names[80];
	int cnt = 0;

	if (fopen_s(&f, fname, "w") != 0)
	//if (f = fopen(fname, "w") == NULL); 과 같음
	{
		printf("파일이 열리지 않습니다.\n");
		exit(1);
	}
	printf("이름과 성적(중간, 기말)을 입력하세요.\n");
	fgets(names, 80, stdin);

	//콘솔에 이름 중간 기말 입력하고 Enter 키
	//여러 줄에 입력하다가 종료하고 싶을 때 새줄 첫 행에서 ctrl+z 누르면 됨
	while (!feof(stdin))
	{
		//파일 "grade.txt"에 쓰기
		fprintf(f, "%d ", ++cnt);
		fputs(names, f);
		fgets(names, 80, stdin);
	}
	fclose(f);

	return 0;
}