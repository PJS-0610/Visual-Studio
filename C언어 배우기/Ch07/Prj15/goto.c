/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch07 / Prj15 / goto.c
	goto ���
	V 1.0 2022.
*/

#include <stdio.h>

int main(void)
{
	int count = 1;

loop:
	printf("%3d", count);
	if (++count <= 10)
		goto loop;

	printf("\n���α׷��� �����մϴ�.\n");

	return 0;
}