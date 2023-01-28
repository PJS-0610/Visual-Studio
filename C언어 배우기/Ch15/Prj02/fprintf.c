/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch15 / Prj02 / fprintf.c
	�̸��� ���� ������ �Է��Ͽ� ������ ������ ���� �� �ٽ� �о�� ���α׷�
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char fname[] = "grade.txt";
	FILE* f;
	char name[30];
	int point1, point2, cnt = 0;

	if (fopen_s(&f, fname, "w") != 0)
	//if (f=fopen(fname, "w") ==NULL) �� ����
	{
		printf("������ ������ �ʽ��ϴ�.\n");
		exit(1);
	}

	printf("�̸��� ����(�߰�, �⸻)�� �Է��ϼ���.\n");
	scanf("%s %d %d", name, &point1, &point2);
	//scanf_s("%s %d %d", name, 30,&point1, &point2);	�� ����

	//���� "grade.txt"�� ����
	fprintf(f, "%d %s %d %d\n", ++cnt, name, point1, point2);
	fclose(f);

	if (fopen_s(&f, fname, "r") != 0)
	//if (f=fopen(fname, "r") ==NULL)	�� ����
	{
		printf("������ ������ �ʽ��ϴ�.\n");
		exit(1);
	}

	//���� "grade.txt"���� �б�
	fscanf(f, "%d %s %d %d\n", &cnt, name, &point1, &point2);
	//fscanf(f, "%d %s %d %d\n", &cnt, name,30, &point1, &point2); �� ����

	//ǥ�� ��¿� ����
	fprintf(stdout, "\n%6s%16s%10s%8s\n", "��ȣ", "�̸�", "�߰�", "�⸻");
	fprintf(stdout, "\n%5d%18s%8d%8d\n", cnt, name, point1, point2);
	fclose(f);

	return 0;



}