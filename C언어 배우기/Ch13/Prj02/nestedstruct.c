/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch13 / Prj02 / nestedstruct.c
	����ü ����� �ٸ� ����ü ���
	V 1.0 2022.
*/

#include <stdio.h>
#include <string.h>

//��¥�� ���� ����ü	
struct date
{
	int year;
	int month;
	int day;
};

//���� ���¸� ���� ����ü
struct account
{
	struct date open;
	char name[12];
	int actnum;
	double balance;
};

int main(void)
{
	struct account me = { {2018,3,9},"ȫ�浿",1001,300000 };

	printf("����üũ��: %d\n", sizeof(me));
	printf("[%d, %d, %d]\n", me.open.year, me.open.month, me.open.day);
	printf("%s %d %.2f\n", me.name, me.actnum, me.balance);

	return 0;
}