/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch11 / Prj04 / registervar.c
	�������� ������ ����� ���
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main(void)
{
	//�������� �������� ����
	register int sum = 0;

	//�޸𸮿� ����Ǵ� �Ϲ� �������� ����
	int max;
	printf("���� ���� �Է� >> ");
	scanf("%d", &max);

	//�������� ��� �������� ����
	for (register int count = 1; count <= max; count++)
		sum += count;

	printf("��: %d\n", sum);

	return 0;
}