/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch08 / Prj01 / address.c
	�޸� �ּҿ� �ּҿ����� &
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE	//scanf() ������ �����ϱ� ���� ��� ����

#include <stdio.h>

int main(void)
{
	int input;

	printf("���� �Է�: ");
	scanf("%d", &input);
	printf("�Է°�: %d\n", input);
	printf("�ּҰ�: %u(10����), %p(16����)\n", (int)&input, &input);
	printf("�ּҰ�: %d(10����), %#X(16����)\n", (unsigned)&input, (int)&input);
	printf("�ּҰ� ũ��: %d\n", sizeof(&input));

	return 0;
}