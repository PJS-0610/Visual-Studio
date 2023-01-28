/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch15 / Prj04 / fgetc.c
	���� ���ڸ� ǥ���Է����� �޾� ���Ͽ� ������ ��, �ٽ� ���Ͽ��� ���ڸ� �о� ǥ�����
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{
	char fname[] = "char.txt";
	FILE* f;

	//������� ���� ����
	if (fopen_s(&f, fname, "w") != 0)
		//if (f = fopen(fname, "w") == NULL); �� ����
	{
		printf("������ ������ �ʽ��ϴ�.\n");
		exit(1);
	}
	puts("���ڸ� �Է��ϴٰ� �����Ϸ��� x�� �Է� >>");

	/* ǥ���Է����� ���� ���ڸ� ���Ͽ� ����ϴ� �κ� */
	int ch;		//�Էµ� ���� ����
	while ((ch = _getche()) != 'x')
		fputc(ch, f);		//�Էµ� ���� ���Ͽ� ����
	fclose(f);
	puts("");

	//�б� ���� ���� ����
	if (fopen_s(&f, fname, "r") != 0)
	{
		printf("������ ������ �ʽ��ϴ�.\n");
		exit(1);
	}

	/* ���Ͽ��� �ٽ� ���ڸ� �Է¹޾� �ֿܼ� ǥ������ϴ� �κ� */
	while ((ch = fgetc(f)) != EOF)
		_putch(ch);
	fclose(f);
	puts("");

	return 0;
}