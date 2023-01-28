/*
	솔루션 / 프로젝트 / 소스파일: Ch15 / Prj06 / fwrite.c
	여러 줄에 걸쳐 학생 구조체의 정보를 입력하여 파일을 생성하는 프로그램
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct personscore
{
	int number;
	char name[40];
	int mid;
	int final;
	int quiz;
};
typedef struct personscore pscore;

int main(void)
{
	char fname[]= "score.bin";
	FILE* f;

	//쓰기 모드로 파일 열기
	if (fopen_s(&f, fname, "wb") != 0)						//if (f=fopen(&f,fname,"wb") == NULL) 와 같음
	{
		printf("파일이 열리지 않습니다.\n");
		exit(1);
	}

	//표준입력으로 행을 저장하기 위한 변수
	char line[80];
	int cnt = 0;		//입력 학생 번호 (자동생성) 변수
	pscore score;		//구조체 변수 선언
	printf("이름과 성적(중간, 기말, 퀴즈)을 입력하세요.\n");

	fgets(line, 80, stdin);
	while (!feof(stdin))
	{
		//표준입력의 한줄을 구조체의 멤버 별로 자료를 입력
		//sscanf(line, "%s %d %d %d", score.name, &score.mid, &score.final, &score.quiz);
		sscanf_s(line, "%s %d %d %d", score.name, 40, &score.mid, &score.final, &score.quiz);
		score.number = ++cnt;
		fwrite(&score, sizeof(pscore), 1, f);
		fgets(line, 80, stdin);
	}
	fclose(f);

	return 0;
}