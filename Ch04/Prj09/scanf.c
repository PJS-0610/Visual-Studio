/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch04 / Prj09 / scanf.c
	scanf()�Լ�
	V 1.0 2022.
*/

#define _CRT_sECURE_NO_WARNINGS //scanf() ������ �����ϱ� ���� ��� ����

#include< stdio.h>
int main(void)
{
	int year = 0;
	printf("����� ���г⵵��? ");
	scanf("%d", &year);
	printf("���г⵵: %d\n\n", year);

	int month, day;
	printf("����� ���������? ");
	scanf("%d-%d-%d", &year, &month, &day);
	printf("�������: %d-%d-%d\n", year, month, day);
	

	return 0;
}