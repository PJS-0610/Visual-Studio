/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch14 / Prj01 / callbyvalue.c
	���� ���� ȣ��� �������� ���� �������� ����
	V 1.0 2022.
*/

#include <stdio.h>

void increase(int origin, int incremnet);

int main(void)
{
	int amount = 10;

	//amount �� 20 �������� ����
	increase(amount, 20);
	printf("%d\n", amount);

	return 0;
}

void increase(int origin, int increment)
{
	origin += increment;

	return;
}