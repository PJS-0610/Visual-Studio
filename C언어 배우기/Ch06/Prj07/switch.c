/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch06 / Prj07 / switch.c
	switch ��
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE //scanf() �� ������ �����ϱ����� ��� ����

#include <stdio.h>

int main(void)
{
	double x, y, result;
	int op;

	printf("�� �Ǽ� �Է�: ");
	scanf("%lf %lf", &x, &y);
	printf("�������� ��ȣ���� 1(+), 2(-),3(*),4(/): ");
	scanf("%d", &op);

	switch (op)
	{
	case 1:
		printf("%.2f + %.2f =%.2f\n", x, y, x + y);
		break;
	case 2:
		printf("%.2f - %.2f =%.2f\n", x, y, x - y);
		break;
	case 3:
		printf("%.2f * %.2f =%.2f\n", x, y, x * y);
		break;
	case 4:
		printf("%.2f / %.2f =%.2f\n", x, y, x / y);
		break;

	default:
		printf("��ȣ�� �߸� �����߽��ϴ�.\n");
		break; //���� ����
	}

	return 0;



}
