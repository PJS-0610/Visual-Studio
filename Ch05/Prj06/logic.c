/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch05 / Prj06 / logic.c
	���迬����
	V 1.0 2022.
*/

#include <stdio.h>

int main(void)
{

	char null = '\0', a = 'a';
	int zero = 0, n = 10;
	double dzero = 0.0, x = 3.56;

	printf("%d ", !zero);
	printf("%d ", zero && x);
	printf("%d\n", dzero || null);
	printf("%d ", n && x);
	printf("%d ", a || null);
	printf("%d ", "java" && "C Lang");


	return 0;







}