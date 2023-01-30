/*
	솔루션 / 프로젝트 / 소스파일: Ch15 / Prj09 / rename.c
	함수 rename()을 사용해서 파일 이름을 수정하는 프로그램
	V 1.0 2022.
*/


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	if (argc < 3)
	{
		printf("사용법: rename from to");
		exit(1);
	}
	//파일 이름 수정 함수 호출
	rename(argv[1], argv[2]);
	printf("파일 %s가 %s로 수정되었습니다.\n", argv[1], argv[2]);

	return 0;
}