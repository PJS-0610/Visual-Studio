/*
	솔루션 / 프로젝트 / 소스파일: Ch07 / Prj19 / loops.c
	반복문 삼중중첩
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE	//scanf() 오류를 방지하기 위한 상수 정의

#include <stdio.h>

int main(void)
{
	int input, sum, i, j;

	do
	{
		printf("양의 정수 또는 0(종료)을 입력: ");
		scanf("%d", &input);

		for (i = 1; i <= input; i++)
		{
			for (j = 1, sum = 0; j <= i; j++)
			{
				printf("%d", j);
				j == i ? printf(" = ") : printf(" + ");  //if (j==i)   printf(" = ");  else   printf(" + ");
				sum += j;
			}
			printf("%d\n", sum);
		}
	} while (input > 0);
	puts("종료합니다.");

	return 0;
}
