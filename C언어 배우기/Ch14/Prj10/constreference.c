/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch14 / Prj10 / constreference.c
	�Լ� �Ű��������� const�� ���
	����� �ǹ�
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE	
#include <stdio.h>

void multiply(double*, const double*, const double*);
void devideandincrement(double*, double*, double*);

int main(void)
{
	double m = 0, n = 0, mult = 0, dev = 0;

	printf("�� �Ǽ� �Է�: ");
	scanf("%lf %lf", &m, &n);
	multiply(&mult, &m, &n);
	devideandincrement(&dev, &m, &n);
	printf("�� �Ǽ� ��: %.2f, ����: %.2f\n", mult, dev);
	printf("���� �� �� �Ǽ�: %.2f, %.2f\n", m, n);

	return 0;
}

//�Ű����� ������ a, b,�� ����Ű�� ������ ������ ���� result�� ����Ű�� ������ ����
//�Ű����� ������a, b�� ����Ű�� ������ ������ �������� ����
void multiply(double* result, const double* a, const double* b)
{
	*result = *a * *b;
	//���� �߻�
	//*a = *a + 1;
	//*b = *b + !;
}

//�Ű����� ������ a, b�� ����Ű�� ������ ������ ������ result�� ����Ű�� ������ ������ ��
//a, b�� ����Ű�� ������ ������ ��� 1 ������Ŵ
void devideandincrement(double* result, double* a, double* b)
{
	*result = *a / *b;
	++* a;		//++(*a)�̹Ƿ� a�� ����Ű�� ������ ���� 1 ����
	(*b)++;		//b�� ����Ű�� ������ ���� 1 ����,*b++�ʹ� �ٸ�
}