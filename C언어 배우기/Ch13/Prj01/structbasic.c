/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch13 / Prj01 / strucbasic.c
	�ܺ� ������ �������� Ȱ��
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <string.h>

//����ü ����
struct account
{
	char name[12];		//������ �̸�
	int actnum;			//���¹�ȣ
	double balance;		//�ܰ�
};

int main(void)
{
	//����ü ���� ���� �� �ʱ�ȭ
	struct account mine = { "ȫ�浿",1001,300000 };
	struct account yours;

	strcpy(yours.name, "�̵���");
	//strcpy_s(yours.name, 12, "�̵���");	//����
	//yours.name = "�̵���";				//����		char �迭�� name���δ� �ٷ� ���ڿ� ��� "�̵���" ���� �Ұ���
	yours.actnum = 1002;
	yours.balance = 50000;

	printf("����üũ��: %d\n", sizeof(mine));
	printf("%s %d %.2f\n", mine.name, mine.actnum, mine.balance);
	printf("%s %d %.2f\n", yours.name, yours.actnum, yours.balance);

	return 0;
}