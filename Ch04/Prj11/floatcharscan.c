/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch04 / Prj11 / floatcharscan.c
	scanf()�Լ� �Ǽ��� ������ �Է�
	V 1.0 2022.
*/


#define _CRT_SECURE_NO_DEPRECATE //scanf()������ �����ϱ� ���� ��� ����(�� �� �ϳ� ���)
#define _CRT_SECURE_NO_WARNINGS  //scanf()������ �����ϱ� ���� ��� ����(�� �� �ϳ� ���)
#include <stdio.h>

int main(void)
{
	float pi;
	printf("�������� �Է��ϼ���.\n");
	scanf("%f", &pi);
	printf("%f\n", pi);

	char ch1, ch2;
	printf("�����ڸ� �������� �� ���ڸ� �Է��ϼ���.\n");

	//���� �տ� ������ �ξ� enter�� ����, �����ڷ� ����(���� ���� ����)�� ���
	scanf(" %c %c", &ch1, &ch2);
	printf("ch1=%c ch2=%c\n", ch1, ch2);

	return 0;




}



