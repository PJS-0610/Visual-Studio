/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch14 / Prj07 / vararg.c
	�������� ó�� �Լ��� ���ǿ� ȣ��
	V 1.0 2022.
*/

#include <stdio.h>
#include <stdarg.h>

double avg(int count, ...);			//int count ���Ĵ� �������� ...

int main(void)
{
	printf("��� %.2f\n", avg(5, 1.2, 2.1, 3.6, 4.3, 5.8));

	return 0;
}

//�������� ... ���� �� ù ���� �Ű������� ������ �������ڸ� ó���ϴµ� �ʿ��� ������ ����
//���⿡���� ���������� ���� ����
double avg(int numagrs, ...)
{
	//���� ���� ���� ����
	va_list argp;

	//numargs ������ �������� ó�� ����
	va_start(argp, numagrs);

	double total = 0;
	for (int i = 0; i < numagrs; i++)
		//�����ϴ� double ������ �������� �ϳ� �ϳ��� ��ȯ
		total += va_arg(argp, double);

	//�������� ó�� ����	
	va_end(argp);

	return total / numagrs;
}