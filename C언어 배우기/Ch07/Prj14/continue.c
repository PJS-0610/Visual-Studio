/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch07 / Prj14 / continue.c
	continue ���
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE	//scanf() ������ �����ϱ� ���� ��� ����

#include <stdio.h>

int main(void)
{
	const int MAX = 15;

	printf("1���� %d���� ���� �߿��� 3���� ������ �������� �ʴ� ��\n", MAX);
	for (int i = 1; i <= MAX; i++)
	{
		if (i % 3 == 0)
			continue;
		printf("%3d", i);
	}

	return 0;
}