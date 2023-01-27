/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch14 / Prj03 / arrayparameter.c
	�迭�� �Ű������� �ϴ� �Լ����ǿ� ȣ��
	V 1.0 2022.
*/

#include <stdio.h>
#define ARYSIZE 5
double sum(double g[], int n);		//�迭 ���� ���� ��� ���ϴ� �Լ�����	

int main(void)
{
	//�迭 �ʱ�ȭ
	double data[] = { 2.3,3.4,4.5,6.7,9.2 };

	//�迭���� ���
	for (int i = 0; i < ARYSIZE; i++)
		printf("%5.1f", data[i]);
	puts("");

	//�迭 ���Ұ��� ��� ���ϴ� �Լ�ȣ��
	printf("��: %5.1f\n", sum(data, ARYSIZE));

	return 0;
}

//�迭 ���Ұ��� ��� ���ϴ� �Լ�����
double sum(double ary[], int n)
{
	double total = 0.0;
	for (int i = 0; i < n; i++)
		total += ary[i];

	return total;
}