/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch11 / Prj10 / strcat.c	
	���ڿ� ���� �Լ� ���
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <string.h>

int main(void)
{
	char dest[80] = "C";

	printf("%s\n", strcat(dest, " is "));
	//�Լ� strcat_s()�� ���
	//printf("%d\n", strcat_s(dest, 80, " is "));
	//printf("%s\n", dest);

	printf("%s\n", strncat(dest, "a java", 2));		//2�� ������ "a"������ �ڿ� ����ȴ�.
	//�Լ� strncat_s()�� ���
	//printf("%d\n", strncat_s(dest, 80, "a proce",2));
	//printf("%s\n", dest);

	printf("%s\n", strcat(dest, "procedural "));
	printf("%s\n", strcat(dest, "language."));

	return 0;
}