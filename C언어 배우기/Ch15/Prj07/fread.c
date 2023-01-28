/*
	솔루션 / 프로젝트 / 소스파일: Ch15 / Prj07 / fread.c
	학생 성적 구조체 정보가 저장된 파일을 읽어 표준출력에 출력
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
void printhead();

int main(void)
{
	char fname[] = "score.bin";
	FILE* f;

	if ((f = fopen(fname, "rb")) == NULL)			//	if (fopen_s(&f,fname, "rb") != 0)
	{
		printf("파일이 열리지 않습니다.\n");
		exit(1);
	}
	printhead();

	//이진모드로 파일 f에서 구조체 pscore 자료 읽기
	pscore score;
	fread(&score, sizeof(pscore), 1, f);
	while (!feof(f))
	{
		fprintf(stdout, "%6d%18s%8d%8d%8d\n",score.number,score.name,score.mid,score.final,score.quiz);
		fread(&score, sizeof(pscore), 1, f);
	}

	printf("%s\n", "--------------------------------------------------");
	fclose(f);

	return 0;
}


void printhead()
{
	printf("%s\n", "__________________________________________________");
	printf("%8s%15s%10s%8s%8s\n", "번호", "이름", "중간", "기말", "퀴즈");
	printf("%s\n", "--------------------------------------------------");

	return;
}