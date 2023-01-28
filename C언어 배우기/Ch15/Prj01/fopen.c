/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch15 / Prj01 / fopen.c
	�̸��� ���� ������ �Է��Ͽ� ������ ������ ����
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char* fname = "basic.txt";		//���� �̸�
	FILE* f;						//���� ������

	//���Ͽ� ������ �ڷ�
	char name[30] = "������";
	int point = 99;

	//���� ���� �Լ� fopen()�� fopen_s()
	if ((f = fopen(fname, "w")) == NULL)
	{
		printf("������ ������ �ʽ��ϴ�.\n");
		exit(1);
	}

	//���� "basix.txt"�� ����
	fprintf(f, "�̸��� %s�� �л��� ������ %d �Դϴ�.\n",name,point);			//������ ���� f�� ����ϴ� ����� �����Ѵ�.
	fclose(f);

	//ǥ����� �ֿܼ� ����
	printf("�̸��� %s�� �л��� ������ %d �Դϴ�.\n", name, point);
	puts("������Ʈ �������� ���� basic.txt�� �޸����� ���� ������.");
	
	return 0;
}