/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch07 / Prj11 / forsum.c
	for �� Ȱ��
	V 1.0 2022.
*/


#include <stdio.h>

int main(void)
{
	int i, sum;

	for (i = 1, sum = 0; i <= 10; i++)		//++i�� ����
		sum += i;
	printf("1���� 10������ ��: %3d\n", sum);

	for (i = 1, sum = 0; i <= 10;)		
		sum += i++;
	printf("1���� 10������ ��: %3d\n", sum);

	for (i = 0, sum = 0; i <= 9;)	
		sum += ++i;
	printf("1���� 10������ ��: %3d\n", sum);

	for (i = 1, sum = 0; i <= 10; sum += i++);		//���� for���� ;�� ���� ������ �ݺ��� ��ü�� ���� ����
	printf("1���� 10������ ��: %3d\n", sum);

	return 0;
}