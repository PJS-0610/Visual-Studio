/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch06 / Prj06 / danglingelse.c
	if else�� Ȱ��
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE //scanf() �� ������ �����ϱ����� ��� ����

#include <stdio.h>

int main(void)
{
	int age = 0;

	printf("����� ���̴�? ");
	scanf("%d", &age);

	if (age >= 20)
	{
		if (age >= 65)
			printf("����� ����Դϴ�.\n");
		else printf("����� �����Դϴ�.\n");
	}
	else
	{
		printf("����� �̼������Դϴ�.\n");
	}

	return 0;
}