/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch11 / Prj05 / stringput.c
	scanf()�� printf()���� ���ڿ� �����
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main(void)
{
	char name[20], dept[30];		//char *name, *dept; ���� ����

	printf("�а� �Է� >> ");
	scanf("%s", dept);
	printf("�̸� �Է� >> ");
	scanf("%s", name);
	printf("���: %10s %10s\n", dept, name);

	return 0;
}