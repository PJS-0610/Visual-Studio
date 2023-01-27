/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch14 / Prj04 / arrayparam.c
	�Լ����� �迭������ ���
	V 1.0 2022.
*/

#include <stdio.h>

int sumary(int* ary, int SIZE);		//int sumary(int ary[],int SIZE)�� ����

int main(void)
{
	int point[] = { 95,88,76,54,85,33,65,78,99,82 };

	//�迭ũ�� ���ϱ�
	int aryLength = sizeof(point) / sizeof(int);

	//address�� ������ �����̸� point�� �迭 ���
	int* address = point;

	//���ο��� ���� �迭�� ���ϱ�
	int sum = 0;

	for (int i = 0; i < aryLength; i++)
		sum += *(point + i);
		//sum += *(point++);	�����߻�
		//sum += *(address++);	����
	printf("���ο��� ���� ���� %d\n", sum);

	//�Լ�ȣ���Ͽ� �� ���ϱ�
	printf("�ռ�sumary() ȣ��� ���� ���� %d\n", sumary(point, aryLength));
	printf("�ռ�sumary() ȣ��� ���� ���� %d\n", sumary(&point[0], aryLength));			//&point�� �ᵵ ����
	printf("�ռ�sumary() ȣ��� ���� ���� %d\n", sumary(address, aryLength));
	
	return 0;
}

int sumary(int* ary, int SIZE)		//int sumary(int ary[],int SIZE)�� ����
{
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
		sum += ary[i];
		//sum += *(ary + i);	����
		//sum += *ary++;		����	
		//sum += *(ary++);		����


	return sum;
}