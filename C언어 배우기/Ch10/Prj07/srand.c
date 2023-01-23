/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch10 / Prj07 / srand.c
	srand()�� �õ尪�� ���� ������ �� 1���� 100������ ������ ����
	V 1.0 2022.
*/

#include <stdio.h>
#include <stdlib.h>		//rand(), srand()�� ���� ������� ����
#include <time.h>		//time()�� ���� ������� ����

#define MAX 100

int main(void)
{
	long seconds = (long) time(NULL);
	srand(seconds);

	printf("1 ~ %5d ������ ���� 5��:\n", MAX);
	for (int i = 0; i < 5; i++)
		printf("%5d ", rand() % MAX + 1);
	puts("");

	return 0;
}