/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch11 / Prj11 / strtok.c
	���ڿ����� ������ �и��ڸ� �̿��ؼ� ��ū�� ���
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE	
#include <stdio.h>
#include <string.h>


int main(void)
{
	char str1[] = "C and C++\t language are best!";
	char* delimiter = " ,\t!";
	//�Լ� strtok_s���
	//char *next_token;
	
	printf("���ڿ� \"%s\"�� >>\n", str1);
	printf("������[%s]�� �̿��Ͽ� ��ū�� ���� >>\n", delimiter);
	char* ptoken = strtok(str1, delimiter);
	//char* ptoken = strtok_s(str1, delimiter,&next_token);
	
	while (ptoken != NULL)
	{
		printf("%s\n", ptoken);
		ptoken = strtok(NULL, delimiter);
		//ptoken = strtok_s(NULL, delimiter, &next_token);
	}
	return 0;
}