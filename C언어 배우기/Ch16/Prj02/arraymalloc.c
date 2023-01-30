/*
	솔루션 / 프로젝트 / 소스파일: Ch16 / Prj02 / arraymalloc.c
	함수 malloc()를 이용해서 int 형 저장공간을 확보하여 처리
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n = 0;
	printf("입력할 점수의 개수를 입력 >> ");
	scanf("%d", &n);

	int* ary = NULL;
	//동적 메모리 할당
	if ((ary = (int*)malloc(sizeof(int) * n)) == NULL)
	{
		printf("메모리 할당에 문제가 있습니다.");
		exit(1);
	}

	//표준입력과 처리
	printf("%d개의 점수 입력 >> ", n);
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", (ary + i));
		sum += *(ary + i);		//sum += ary[i];
	}
	//표준입력자료와 결과 출력
	printf("입력 점수:");
	for (int i = 0; i < n; i++)
		printf("%d ", *(ary + i));
	printf("\n");
	printf("합: %d  평균: %.1f\n", sum, (double)sum / n);

	free(ary);

	return 0;
}