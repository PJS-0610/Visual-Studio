/*
	솔루션 / 프로젝트 / 소스파일: Ch16 / Prj04 / realloc.c
	함수 realloc()를 이용해서 이미 할당된 메모리를 변경
	V 1.0 2022.
*/

#include <stdio.h>
#include <stdlib.h>

void myprintf(int* ary, int n);

int main(void)
{
	int* reary, * cary;
	if ((cary = (int*)calloc(3, sizeof(int))) == NULL)
	{
		printf("메모리 할당이 문제가 있습니다.\n");
		exit(EXIT_FAILURE);
	}
	if ((reary = (int*)realloc(cary, 4 * sizeof(int))) == NULL)
	{
		printf("메모리 할당이 문제가 있습니다.\n");
		exit(EXIT_FAILURE);
	}
	myprintf(reary, 4);
	free(reary);
	
	return 0;
}

void myprintf(int* ary, int n)
{
	for (int i = 0; i < n; i++)
		printf("ary[%d] = %d ", i, *(ary + i));
	printf("\n");
}