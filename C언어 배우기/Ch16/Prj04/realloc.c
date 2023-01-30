/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch16 / Prj04 / realloc.c
	�Լ� realloc()�� �̿��ؼ� �̹� �Ҵ�� �޸𸮸� ����
	V 1.0 2022.
*/

#include <stdio.h>
#include <stdlib.h>

void myprintf(int* ary, int n);

int main(void)
{
	int* reary, * cary;
	if ((cary = (int*)calloc(3, sizeof(int))) == NULL)
	{
		printf("�޸� �Ҵ��� ������ �ֽ��ϴ�.\n");
		exit(EXIT_FAILURE);
	}
	if ((reary = (int*)realloc(cary, 4 * sizeof(int))) == NULL)
	{
		printf("�޸� �Ҵ��� ������ �ֽ��ϴ�.\n");
		exit(EXIT_FAILURE);
	}
	myprintf(reary, 4);
	free(reary);
	
	return 0;
}

void myprintf(int* ary, int n)
{
	for (int i = 0; i < n; i++)
		printf("ary[%d] = %d ", i, *(ary + i));
	printf("\n");
}