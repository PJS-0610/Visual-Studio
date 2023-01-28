/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch15 / Prj06 / fwrite.c
	���� �ٿ� ���� �л� ����ü�� ������ �Է��Ͽ� ������ �����ϴ� ���α׷�
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct personscore
{
	int number;
	char name[40];
	int mid;
	int final;
	int quiz;
};
typedef struct personscore pscore;

int main(void)
{
	char fname[]= "score.bin";
	FILE* f;

	//���� ���� ���� ����
	if (fopen_s(&f, fname, "wb") != 0)						//if (f=fopen(&f,fname,"wb") == NULL) �� ����
	{
		printf("������ ������ �ʽ��ϴ�.\n");
		exit(1);
	}

	//ǥ���Է����� ���� �����ϱ� ���� ����
	char line[80];
	int cnt = 0;		//�Է� �л� ��ȣ (�ڵ�����) ����
	pscore score;		//����ü ���� ����
	printf("�̸��� ����(�߰�, �⸻, ����)�� �Է��ϼ���.\n");

	fgets(line, 80, stdin);
	while (!feof(stdin))
	{
		//ǥ���Է��� ������ ����ü�� ��� ���� �ڷḦ �Է�
		//sscanf(line, "%s %d %d %d", score.name, &score.mid, &score.final, &score.quiz);
		sscanf_s(line, "%s %d %d %d", score.name, 40, &score.mid, &score.final, &score.quiz);
		score.number = ++cnt;
		fwrite(&score, sizeof(pscore), 1, f);
		fgets(line, 80, stdin);
	}
	fclose(f);

	return 0;
}