/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch13 / Prj05 / typedef.c
	�ڷ��� ������ �̿�
	V 1.0 2022.
*/

#include <stdio.h>

//�Լ� �ܺο��� ���ǵ� �ڷ����� ���� ���Ͽ��� ��� ����
typedef unsigned int budget;

int main(void) {
	//���ο� �ڷ��� budget ���
	budget year = 24500000;

	//�Լ� ���ο��� ���ǵ� �ڷ����� ���� �Լ� ���ο����� ��� ����
	typedef int profit;

	profit month = 4600000;

	printf("�� ������ %d, �̴��� ������ %d �Դϴ�.\n", year, month);

	return 0;
}

