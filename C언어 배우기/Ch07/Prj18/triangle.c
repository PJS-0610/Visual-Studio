/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch07 / Prj18 / triangle.c
	for �� ��ø���� �ﰢ�������
	V 1.0 2022.
*/

#include <stdio.h>

int main(void)
{
	const int MAX = 5;
	int i, j;

	for (i = 1; i <= MAX; i++)
	{
		for (j = 1; j <= i; j++)
			printf("*");
		puts("");
	}
	return 0;
}
