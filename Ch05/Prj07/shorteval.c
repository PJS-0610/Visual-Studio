/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch05 / Prj07 / shorteval.c
	�������� &&�� ||�� �ǿ����� �� ���߿��� ���� �ǿ����ڸ����� ������ ����� �����ȴٸ� ������ �ǿ����ڴ� ������ �ʴ´�. �̰��� �����򰡶� �Ѵ�
	V 1.0 2022.
*/

#include <stdio.h>


int main(void)
{
	int a = 10, b = 5, m = 1;
	int result;

	result = (a < b) && (m++ == 1);
	printf("m=%d result=%d\n", m, result);

	result = (a > b) || (--m == 0);
	printf("m=%d result=%d\n", m, result);

	return 0;



}