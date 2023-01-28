/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch15 / Prj07 / fread.c
	�л� ���� ����ü ������ ����� ������ �о� ǥ����¿� ���
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
void printhead();

int main(void)
{
	char fname[] = "score.bin";
	FILE* f;

	if ((f = fopen(fname, "rb")) == NULL)			//	if (fopen_s(&f,fname, "rb") != 0)
	{
		printf("������ ������ �ʽ��ϴ�.\n");
		exit(1);
	}
	printhead();

	//�������� ���� f���� ����ü pscore �ڷ� �б�
	pscore score;
	fread(&score, sizeof(pscore), 1, f);
	while (!feof(f))
	{
		fprintf(stdout, "%6d%18s%8d%8d%8d\n",score.number,score.name,score.mid,score.final,score.quiz);
		fread(&score, sizeof(pscore), 1, f);
	}

	printf("%s\n", "--------------------------------------------------");
	fclose(f);

	return 0;
}


void printhead()
{
	printf("%s\n", "__________________________________________________");
	printf("%8s%15s%10s%8s%8s\n", "��ȣ", "�̸�", "�߰�", "�⸻", "����");
	printf("%s\n", "--------------------------------------------------");

	return;
}