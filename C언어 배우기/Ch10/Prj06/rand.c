/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch10 / Prj06 / rand.c
	������ ���� �Լ� rand()�� �̿�
	V 1.0 2022.
*/

#include <stdio.h>
#include <stdlib.h>		//rand()�� ���� ������� ����

int main(void)
{
	printf("0 ~%5d ������ ���� 5��: rand()\n", RAND_MAX);		//RAND_MAX�� 32767�� �ǹ�
	for (int i = 0; i < 5; i++)
		printf("%5d ", rand());
	puts("");

	return 0;
}