/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch06 / Prj04 / ifelseif.c
	if else�� Ȱ��
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE //scanf() �� ������ �����ϱ����� ��� ����

#include <stdio.h>

int main(void)
{
	double gpa;

	printf("������� �Է�: ");
	scanf("%lf", &gpa);

	if (gpa >= 4.3)
		printf("������ �ְ� ����� �л��Դϴ�.\n");

	else if (gpa >= 3.8)
		printf("������ �ſ� ����� �л��Դϴ�.\n");
	else if (gpa >= 3.0)
		printf("������ ����� �л��Դϴ�.\n");
	else
		printf("������ 3.0 �̸��� �л��Դϴ�.\n");

	return 0;


}