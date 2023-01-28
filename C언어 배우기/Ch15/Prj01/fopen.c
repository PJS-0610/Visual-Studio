/*
	솔루션 / 프로젝트 / 소스파일: Ch15 / Prj01 / fopen.c
	이름과 성적 정보를 입력하여 간단한 파일을 생성
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char* fname = "basic.txt";		//파일 이름
	FILE* f;						//파일 포인터

	//파일에 쓰려는 자료
	char name[30] = "강미정";
	int point = 99;

	//파일 열기 함수 fopen()과 fopen_s()
	if ((f = fopen(fname, "w")) == NULL)
	{
		printf("파일이 열리지 않습니다.\n");
		exit(1);
	}

	//파일 "basix.txt"에 쓰기
	fprintf(f, "이름이 %s인 학생의 성적은 %d 입니다.\n",name,point);			//지정한 파일 f에 출력하는 기능을 수행한다.
	fclose(f);

	//표준출력 콘솔에 쓰기
	printf("이름이 %s인 학생의 성적은 %d 입니다.\n", name, point);
	puts("프로젝트 폴더에서 파일 basic.txt를 메모장을 열어 보세요.");
	
	return 0;
}