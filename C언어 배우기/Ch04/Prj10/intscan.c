/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch04 / Prj10 / intscan.c
	scanf()�Լ�
	V 1.0 2022.
*/
//������Ʈ -> �Ӽ� -> C/C++ -> ��ó���� -> ��ó���� ���� -> ���� �� ���� �ؿ� �� �ڵ��� �ϳ��� �ᵵ �ȴ�
#define _CRT_SECURE_NO_DEPRECATE //scanf()������ �����ϱ� ���� ��� ����(�� �� �ϳ� ���)
#define _CRT_SECURE_NO_WARNINGS  //scanf()������ �����ϱ� ���� ��� ����(�� �� �ϳ� ���)
#include <stdio.h>

int main(void)
{

	int snum, credit;

	printf("����� �й��� ��û������? ");
	scanf("%d%d", &snum, &credit);
	printf("�й�: %d ��û����: %d\n", snum, credit);


	return 0;
	







}
