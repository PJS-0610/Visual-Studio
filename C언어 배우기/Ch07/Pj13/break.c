/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch07 / Prj13 / break.c
	break ���
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE	//scanf() ������ �����ϱ� ���� ��� ����

#include <stdio.h>

int main(void)
{
	int input;

	while (1)
	{
		printf("����[����, 0(����), ���]�� �Է� �� [ENTER] : ");
		scanf("%d", &input);
		printf("�Է��� ���� %d\n", input);
		if (input == 0)
			break;
	}
	puts("�����մϴ�.");

	return 0;
}