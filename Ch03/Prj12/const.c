/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch03 / Prj12 / const.c
	Ű���� const�� ����� ��� ����
	V 1.0 2022.
	*/

#include <stdio.h>

int main(void)
{
	//Ű���� const�� ��� �����
	const double RATE = 0.03;
	int deposit = 800000;

	//RATE=0.032; //������ �Ұ���
	printf("������: %f\n", RATE);
	printf("���� �ܰ�: %d\n", deposit);
	printf("���ھ�: %f\n", deposit * RATE);

	//���ڿ��� ������ ����
	char* str = "���� C ��� �Թ���";
	char* const title = "������ C ���";

	str = "�ֱٿ� ���� ���� C ��� �Թ���";
	//title= "C ��� ����ġ"; // �����Ұ���

	printf("\n%s: %s\n", str, title);

	return 0;
}