/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch16 / Prj03 / calloc.c
	�Լ� calloc()�� �̿��ؼ� int�� ���� 3���� �Ҵ�
	V 1.0 2022.
*/

#include <stdio.h>
#include <stdlib.h>
void myprintf(int* ary, int n);

int main(void)
{
	int* ary = NULL;

	//�����޸� �Ҵ�
	if ((ary = (int*)calloc(3, sizeof(int))) == NULL)
	{
		printf("�޸� �Ҵ翡 ������ �ֽ��ϴ�.\n");
		exit(EXIT_FAILURE);			//EXIT_fAILURE�� ���� 1�μ� ������� stdlib.h�� ���ǵǾ��ִ� ����̴�.
	}
	myprintf(ary, 3);

	//�����޸� ����
	free(ary);
	myprintf(ary, 3);	//��� �����Ⱚ ���

	return 0;
}

void myprintf(int *ary, int n)
{
	for (int i = 0; i < n; i++)
		printf("ary[%d] = %d\n", i, *(ary + i));
	
}