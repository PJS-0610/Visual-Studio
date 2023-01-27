/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch14 / Prj13 / fptrary.c
	���� �Լ� �ּҸ� �����ϴ� �Լ� ������ �迭�� ����� ���
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

//�Լ� ����
void add(double*, double, double);
void subtract(double*, double, double);
void multiply(double*, double, double);
void devide(double*, double, double);

int main(void)
{
	char op[4] = { '+','-','*','/' };

	//�Լ� ������ �����ϸ鼭 �ʱ�ȭ ����
	void(*fpary[4])(double*, double, double) = { add,subtract,multiply,devide };

	double m, n, result;
	printf("��Ģ������ ������ �Ǽ� 2���� �Է��ϼ���. >> ");
	scanf("%lf %lf", &m, &n);

	//��Ģ������ �迭�� ÷�ڸ� �̿��Ͽ� ����
	for (int i = 0; i < 4; i++)
	{
		fpary[i](&result, m, n);
		printf("%.2lf %c %.2lf == %.2lf\n", m, op[i], n, result);
	}
	return 0;
}

void add(double* z, double x, double y)
{
	*z = x + y;
}

void subtract(double* z, double x, double y)
{
	*z = x - y;
}

void multiply(double* z, double x, double y)
{
	*z = x * y;
}

void devide(double* z, double x, double y)
{
	*z = x / y;
}