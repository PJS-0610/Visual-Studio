/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch05 / Prj08 / condition.c
	���ǿ�����(���׿�����) ���ǿ� ���� �־��� �ǿ����ڰ� ������� �Ǵ� ���׿������̴�
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE //scanf() �� ������ �����ϱ����� ��� ����

#include <stdio.h>

int main(void)
{
	int a = 0, b = 0;
	printf("�� ������ �Է� >> ");
	scanf("%d%d", &a, &b);

	printf("�ִ�: %d ", (a > b) ? a : b);
	printf("�ּڰ�: %d\n", (a < b) ? a : b);
	printf("����: %d ", (a > 0) ? a : -a);
	printf("����: %d\n", (b > 0) ? b : -b);

	((a % 2) == 0) ? printf("¦�� ") : printf("Ȧ�� ");
	printf("%s\n", ((b % 2) == 0) ? "¦��" : "Ȧ��");

	return 0;










}