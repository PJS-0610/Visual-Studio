/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch14 / Prj05 / arrayfunction.c
	�迭�� ���ڷ� �ϴ� �����Լ��� ����
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

void readarray(double[], int);		//�迭 ���Ұ��� ��� ǥ���Է��� �޴� �Լ�����
void printarray(double[], int);		//�迭 ���Ұ��� ��� ����ϴ� �Լ�����
double sum(double[], int);		//�迭 ���Ұ��� ��� ���ϴ� �Լ�����

int main(void)
{
	double data[5];
	int arraysize = sizeof(data) / sizeof(data[0]);

	printf("�Ǽ� 5���� ���� �Է��ϼ���. \n");
	readarray(data, arraysize);
	printf("\n�Է��� �ڷᰪ�� ������ �����ϴ�.\n");
	printarray(data, arraysize);
	printf("�Լ����� ���� ���� %.3f �Դϴ�.\n", sum(data, arraysize));

	return 0;
}

//�迭 ���Ұ��� ��� ǥ���Է� �޴� �Լ�
void readarray(double data[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("data[%d] = ", i);
		scanf("%lf", &data[i]);		//(data + i)�ε� ����
	}
	return;
}

//�迭 ���Ұ��� ��� ����ϴ� �Լ�
void printarray(double data[], int n)
{
	for (int i = 0; i < n; i++)
		printf("data[%d] = %.2lf ", i, *(data + i));
	printf("\n");
	return;
}

//�迭 ���Ұ��� ��� ���ϴ� �Լ�
double sum(double data[], int n)
{
	double total = 0;
	for (int i = 0; i < n; i++)
		total += data[i];
	return total;
}