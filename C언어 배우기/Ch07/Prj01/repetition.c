/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch07 / Prj01 / repetition.c
	�ݺ��� ����
	V 1.0 2022.
*/

#include <stdio.h>

int main(void)
{
	//��� ������ ���ڿ��� �ܼ��� �ݺ�
	printf("C��� ����ֳ׿�!\n");
	printf("C��� ����ֳ׿�!\n");
	printf("C��� ����ֳ׿�!\n");

	int n = 1;
	//�������� 1�� ������Ű�鼭 ��� �ݺ�
	printf("%d\n", n++);
	printf("%d\n", n++);
	printf("%d\n", n++);
	printf("%d\n", n++);
	printf("%d\n", n++);

	return 0;
}