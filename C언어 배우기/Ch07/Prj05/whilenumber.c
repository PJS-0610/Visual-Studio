/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch07 / Prj05 / whilebasic.c
	While ��
	V 1.0 2022.
*/

#include <stdio.h>
#define Max 5

int main(void)
{
	int n = 1;

	while (n <= Max)
		printf("%d\n", n++);

	printf("\n����� count =>%d\n", n);

	return 0;
}