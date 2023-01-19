/*
	솔루션 / 프로젝트 / 소스파일: Ch07 / Prj12 / inputsum.c
	for 문과 while 문 비교
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE	//scanf() 오류를 방지하기 위한 상수 정의

#include <stdio.h>

int main(void)
{
	int i, sum, max;

	printf("1에서부터 정수까지의 합을 구할 양의 정수 하나 입력: ");
	scanf("%d", &max);

	for (i = 1, sum = 0; i <= max; i++)
		sum += i;
	printf("\nfor 문으로 구한 1에서 %d까지 합: %3d\n", max, sum);

	i = 1, sum = 0;
	while (i <= max)
	{
		sum += i;
		i++;
	}
	printf("while 문으로 구한 1에서 %d까지 합: %3d\n", max, sum);

	return 0;
}