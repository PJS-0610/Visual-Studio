/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch06 / Prj03 / multipleof3.c
	if else�� Ȱ��
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE //scanf() �� ������ �����ϱ����� ��� ����

#include <stdio.h>

int main(void)
{
	int n;

	printf("���� �Է�: ");
	scanf("%d", &n);

	if (n % 3)		//if (n % 3 != 0) �̶� ���� ǥ��
	{
		printf("�Էµ� %d�� 3�� ����� �ƴմϴ�.\n", n);
	}
	else
	{
		printf("�Էµ� %d�� 3�� ����Դϴ�.\n", n);
	}
	printf("���ǽ� %d %% 3�� ����� %d�Դϴ�.\n", n, n % 3);

	return 0;


}