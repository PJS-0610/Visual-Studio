/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch07 / Prj07 / dowhilenumber.c
	Do While ��
	V 1.0 2022.
*/
#include <stdio.h>
#define MAX 5

int main(void)
{
	int n = 1;

	do
	{
		printf("%d\n", n++);
	} while (n <= MAX);
	
	printf("\n����� n => %d\n", n);

	return 0;
}