/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch11 / Prj09 / strcpy.c
	���ڿ� �����Լ� strcpy()�� strncpy()
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <string.h>

int main(void)
{
	char dest[80] = "Java";
	char source[80] = "C is a languange.";

	printf("%s\n", strcpy(dest, source));
	//�Լ� strcpy_s()�� ���
	//printf("%d\n", strcpy_s(dest,80,source));
	//printf("%s\n", dest);

	printf("%s\n", strncpy(dest, "C#", 2));

	printf("%s\n", strncpy(dest, "C#", 3));
	//�Լ� strncpy_s()�� ���
	//printf("%d\n", strncpy_s(dest,80,"source,"C#",3));
	//printf("%s\n", dest);

	return 0;


}