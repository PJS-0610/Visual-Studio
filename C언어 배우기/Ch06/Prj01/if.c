/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch06 / Prj01 / if.c
	if��
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE //scanf() �� ������ �����ϱ����� ��� ����

#include <stdio.h>

int main(void)
{
	double temperature;

	printf("���� �µ� �Է�: ");
	scanf("%lf", &temperature);


	if (temperature >= 32.0) {
		printf("���� ���Ǻ��� �߷��մϴ�.\n");
		printf("�ǰ��� �����ϼ���.\n");

	}
	printf("���� �µ��� ���� %.2f�Դϴ�.\n", temperature);

	return 0;


}