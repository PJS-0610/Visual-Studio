/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch14 / Prj09 / pointerreturn.c
	�ּҰ� ��ȯ �Լ��� ���ǿ� �̿�
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int* add(int*, int, int);
int* subtract(int*, int, int);
int* multiply(int, int);

int main(void)
{
	int m = 0,n = 0, sum = 0, diff = 0;

	printf("�� ���� �Է�: ");
	scanf("%d %d", &m, &n);

	printf("�� ���� ��: %d\n", *add(&sum, m, n));
	printf("�� ���� ��: %d\n", *subtract(&diff, m, n));
	printf("�� ���� ��: %d\n", *multiply(m, n));
	
	return 0;
}

int* add(int* psum, int a, int b)
{
	*psum = a + b;
	return psum;
}

int* subtract(int* pdiff, int a, int b)
{
	*pdiff = a - b;
	return pdiff;
}

int* multiply(int a, int b)
{
	int mult= a * b;
	return &mult;
}