/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch07 / Prj16 / menu.c
	menu ��� 
	while ���� do while ������ ������ 1�� �صθ� ���ѹݺ�, for ������ ������ �Ⱥٿ��� ���ѹݺ��� �����ϴ�.
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE	//scanf() ������ �����ϱ� ���� ��� ����

#include <stdio.h>

int main(void)
{
	int input;

	do
	{
		printf("\t [1] �ѽ�\n");
		printf("\t [2] ���\n");
		printf("\t [3] �н�\n");
		printf("\t [4] ��Ÿ\n");
		printf("�޴� ��ȣ ���� �� [ENTER] : ");
		scanf("%d", &input);
		printf("���� �޴� %d\n", input);

		if (1 <= input && input <= 4)
			break;
	} while (1);

	return 0;
}