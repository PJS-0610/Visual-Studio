/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch07 / Prj06 / dowhile.c
	Do While ��
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE //scanf() ������ �����ϱ� ���� ��� ����

#include <stdio.h>
int main(void)
{
	int input;

	do
	{
		printf("���� �Ǵ� 0(����)�� �Է�: ");
		scanf("%d", &input);
	} while (input != 0);		//while (input);
	
	puts("�����մϴ�.");
		
	
	return 0;
}