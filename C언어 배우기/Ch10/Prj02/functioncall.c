/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch10 / Prj02 / fuctioncall.c
	�Լ� ���ǿ� ȣ��
	V 1.0 2022.
*/

#include <stdio.h>

int add2(int a, int b);
int findMax2(int, int);
void printMin(int, int);

int main(void)
{
	int a = 3, b = 5;

	int max = findMax2(a, b);
	printf("�ִ�: %d\n", max);
	printf("��: %d\n", add2(a, b));

	//��ȯ���� ���� �Լ�ȣ���� �Ϲ� ����ó�� ���
	printMin(2, 5);

	return 0;
}

//���� �Լ� add2, findMax2, findMin printMin����
int add2(int a, int b)
{
	int sum = a + b;
	return sum;
}
int findMax2(int a, int b)
{
	int max = a > b ? a : b;
	return max;
}
int findMin2(int a, int b)
{
	int min = a < b ? a : b;
	return min;
}
void printMin(int a, int b)
{
	int min = a < b ? a : b;
	printf("�ּ�: %d\n", min);
	return;
}