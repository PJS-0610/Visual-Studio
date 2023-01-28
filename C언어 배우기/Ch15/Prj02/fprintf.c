/*
	솔루션 / 프로젝트 / 소스파일: Ch15 / Prj02 / fprintf.c
	이름과 성적 정보를 입력하여 간단한 파일을 생성 후 다시 읽어보는 프로그램
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char fname[] = "grade.txt";
	FILE* f;
	char name[30];
	int point1, point2, cnt = 0;

	if (fopen_s(&f, fname, "w") != 0)
	//if (f=fopen(fname, "w") ==NULL) 과 같음
	{
		printf("파일이 열리지 않습니다.\n");
		exit(1);
	}

	printf("이름과 성적(중간, 기말)을 입력하세요.\n");
	scanf("%s %d %d", name, &point1, &point2);
	//scanf_s("%s %d %d", name, 30,&point1, &point2);	와 동일

	//파일 "grade.txt"에 쓰기
	fprintf(f, "%d %s %d %d\n", ++cnt, name, point1, point2);
	fclose(f);

	if (fopen_s(&f, fname, "r") != 0)
	//if (f=fopen(fname, "r") ==NULL)	과 같음
	{
		printf("파일이 열리지 않습니다.\n");
		exit(1);
	}

	//파일 "grade.txt"에서 읽기
	fscanf(f, "%d %s %d %d\n", &cnt, name, &point1, &point2);
	//fscanf(f, "%d %s %d %d\n", &cnt, name,30, &point1, &point2); 와 같음

	//표준 출력에 쓰기
	fprintf(stdout, "\n%6s%16s%10s%8s\n", "번호", "이름", "중간", "기말");
	fprintf(stdout, "\n%5d%18s%8d%8d\n", cnt, name, point1, point2);
	fclose(f);

	return 0;



}