/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch05 / Prj11 / typecast.c
	�ø���ȯ: ���������� �ڷ���(int)���� ū ������ ��(double)�� ����ȯ��� 
	������ȯ  ū ������ ��(double)���� ���������� �ڷ���(int)�� ����ȯ��� 
	V 1.0 2022.
*/

#include <stdio.h>

int main(void)
{
	int a = 3.4;
	double d = 3;

	printf("%5d %10f ", a, d);
	printf("%10f\n", 3 + 4.5);

	printf("%5d ", 10 / 4);
	printf("%10f ", (double) 10 / 4);
	printf("%10f ", 10 / (double)4);
	printf("%10f\n", (double)(10 / 4));

	printf("%5d ", (int)(3.4 + 7.8));
	printf("%10d ", (int)3.4 + (int)7.8);
	printf("%10f ", (int)3.4 + 7.8);
	printf("%10f\n", 3.4 + (int)7.8);

	return 0;

}