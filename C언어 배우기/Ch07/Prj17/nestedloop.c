/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch07 / Prj17 / nestedloop.c
	for �� ��ø
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE	//scanf() ������ �����ϱ� ���� ��� ����

#include <stdio.h>

int main(void)
{
	int m, n;

	for (m = 1; m <= 5; m++)
	{
		printf("m = %-2d\n", m);
		for (n = 1; n <= 7; n++)
			printf("n = %-3d", n);
			puts("");
	}
	return 0;
}