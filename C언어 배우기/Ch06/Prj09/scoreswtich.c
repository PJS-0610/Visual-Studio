/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch06 / Prj09 / scoreswitch.c
	switch �� Ȱ��� dafault �� ��ġ
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE //scanf() �� ������ �����ϱ����� ��� ����

#include <stdio.h>

int main(void)
{
	int score;

	printf("���� �Է�: ");
	scanf("%d", &score);

	switch (score / 10)
	{
	case 10: case 9:
		printf("������ %d ������ ������ %c �Դϴ�.\n", score, 'A');
		break;
	case 8:
		printf("������ %d ������ ������ %c �Դϴ�.\n", score, 'B');
		break;
	case 7:
		printf("������ %d ������ ������ %c �Դϴ�.\n", score, 'C');
		break;
	case 6:
		printf("������ %d ������ ������ %c �Դϴ�.\n", score, 'D');
		break;

	default:
		printf("������ %d ������ ������ %c �Դϴ�\n", score, 'F');

	}
	return 0;
}