/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch06 / Prj02 / ifelse.c
	if else��
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE //scanf() �� ������ �����ϱ����� ��� ����

#include <stdio.h>

int main(void)
{
	int n;

	printf("�����Է�: ");
	scanf("%d", &n);

	if (n % 2)			//if ( n % 2 != 0 ) �̶� ���� ǥ��		// { } �� ����ؼ� if�� else���� ��� ������ ���⼭�� printf()�� �ϳ��ۿ� ��� �Ⱦ�
		printf("Ȧ��");
	else
		printf("¦��");

	printf("�Դϴ�.\n");

	//���� ������ �̿�
	(n % 2) ? printf("Ȧ��") : printf("¦��");		//(n % 2!=0) ? printf("Ȧ��") : printf("¦��");  �̶� ���� ǥ��
	printf("�Դϴ�.\n");

	return 0;


}