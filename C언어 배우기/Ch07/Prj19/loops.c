/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch07 / Prj19 / loops.c
	�ݺ��� ������ø
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE	//scanf() ������ �����ϱ� ���� ��� ����

#include <stdio.h>

int main(void)
{
	int input, sum, i, j;

	do
	{
		printf("���� ���� �Ǵ� 0(����)�� �Է�: ");
		scanf("%d", &input);

		for (i = 1; i <= input; i++)
		{
			for (j = 1, sum = 0; j <= i; j++)
			{
				printf("%d", j);
				j == i ? printf(" = ") : printf(" + ");  //if (j==i)   printf(" = ");  else   printf(" + ");
				sum += j;
			}
			printf("%d\n", sum);
		}
	} while (input > 0);
	puts("�����մϴ�.");

	return 0;
}
