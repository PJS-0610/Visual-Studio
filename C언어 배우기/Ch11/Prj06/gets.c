/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch11 / Prj06 / gets.c
	gets()�� puts() ����� �˾ƺ��� ����
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main(void)
{
	char line[101];		//char *line���δ� ���� �߻�

	printf("�Է��� �����Ϸ��� ���ο� �࿡�� (ctrl + Z)�� �����ʽÿ�.\n");
	while (gets(line))
		puts(line);
	printf("\n");

	while (gets_s(line, 101))
		puts(line);
	printf("\n");

	return 0;
}