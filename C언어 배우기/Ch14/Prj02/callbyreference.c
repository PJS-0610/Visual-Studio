/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch14 / Prj02 / callbyreference.c
	������ ���� ȣ��� �������� ���� ����
	V 1.0 2022.
*/


#include <stdio.h>

void increase(int* origin, int increment);

int main(void)
{
	int amount = 10;

	//&amount: amount�� �ּҷ� ȣ��
	increase(&amount, 20);
	printf("%d\n", amount);

	return 0;
}

void increase(int* origin, int increment)
{
	//*origin�� origin�� ����Ű�� ���� ��ü
	*origin += increment;			//�׷��Ƿ� origin�� ����Ű�� �������� 20 ����

	return;
}