/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch14 / Prj12 / funptr.c
	�Լ� �ּҸ� �����ϴ� �Լ� �������� ����� ���
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE	
#include <stdio.h>

//�Լ� ����
void add(double*, double, double);
void subtract(double*, double, double);

int main(void)
{
	//�Լ� ������ pf�� ����
	void(*pf)(double*, double, double) = NULL;

	double m, n, result = 0;
	printf("+, -�� ������ �Ǽ� 2���� �Է��ϼ���. >> ");
	scanf("%lf %lf", &m, &n);

	//��Ģ������ ����
	pf = add;				//add() �Լ��� �Լ� ������ pf�� ����
	pf(&result, m, n);		//add(&result,m,n):
	printf("pf = %p, �Լ� add() �ּ�= %\n", pf, add);	
	printf("���ϱ� ����: %lf + %lf == %lf\n\n", m, n, result);

	pf = subtract;			//subtract() �Լ��� �Լ� ������ pf�� ����
	pf(&result, m, n);		//subtract(&result,m,n);
	printf("pf = %p, �Լ� subtract() �ּ�= %p\n", pf, subtract);
	printf("  ���� ����: %lf - %lf == %lf\n\n", m, n, result);
	
	return 0;
}

//x +y ���� ����� z�� ����Ű�� ������ �����ϴ� �Լ�
void add(double* z, double x, double y)
{
	*z = x + y;
}

//x - y ���� ����� z�� ����Ű�� ������ �����ϴ� �Լ�
void subtract(double* z, double x, double y)
{
	*z = x - y;
}