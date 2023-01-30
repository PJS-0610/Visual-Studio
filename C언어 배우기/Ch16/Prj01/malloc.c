/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch16 / Prj01 / malloc.c
	�Լ� malloc()�� �̿��ؼ� int �� ��������� Ȯ���Ͽ� ó��
	V 1.0 2022.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* pi = NULL;

	//�޸� �Ҵ� �Լ� malloc()���� �����޸� �Ҵ�
	pi = (int*)malloc(sizeof(int));

	//�����޸� �Ҵ� ���� �˻�
	if (pi == NULL)
	{
		printf("�޸� �Ҵ翡 ������ �ֽ��ϴ�.\n");
		exit(1);
	}
	//���� �� ����
	*pi = 3;
	printf("�ּҰ�: *pi = %d, ���尪: p = %d\n", pi, *pi);

	//�޸� ����
	free(pi);

	return 0;
}