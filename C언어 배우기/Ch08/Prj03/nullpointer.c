/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch08 / Prj03 / nullpointer.c
	�پ��� ������ ���� ����� ���������� *
	V 1.0 2022.
*/

#include <stdio.h>

int main(void)
{
	int *ptr1, *ptr2, data = 10;
	ptr1 = NULL;

	printf("%p\n", ptr1);
	//printf("%p\n",ptr2);    <--  ptr2�� ���� �ʱⰪ�� ���� ������ ������ ������ ����
	printf("%d\n", data);

	return 0;
}