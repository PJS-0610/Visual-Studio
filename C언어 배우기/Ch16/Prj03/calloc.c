/*
	솔루션 / 프로젝트 / 소스파일: Ch16 / Prj03 / calloc.c
	함수 calloc()을 이용해서 int형 원소 3개를 할당
	V 1.0 2022.
*/

#include <stdio.h>
#include <stdlib.h>
void myprintf(int* ary, int n);

int main(void)
{
	int* ary = NULL;

	//동적메모리 할당
	if ((ary = (int*)calloc(3, sizeof(int))) == NULL)
	{
		printf("메모리 할당에 문제가 있습니다.\n");
		exit(EXIT_FAILURE);			//EXIT_fAILURE는 정수 1로서 헤더파일 stdlib.h에 정의되어있는 상수이다.
	}
	myprintf(ary, 3);

	//동적메모리 해제
	free(ary);
	myprintf(ary, 3);	//모두 쓰레기값 출력

	return 0;
}

void myprintf(int *ary, int n)
{
	for (int i = 0; i < n; i++)
		printf("ary[%d] = %d\n", i, *(ary + i));
	
}