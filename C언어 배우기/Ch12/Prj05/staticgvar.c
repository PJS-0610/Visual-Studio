/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch12 / Prj06 / staticgvar.c
	���� �������� ����� ���
	V 1.0 2022.
*/

#include <stdio.h>

//���� �������� ����
static int svar;

//�������� ����
int gvar;

//�Լ� ����
void increment();
void testglobal();

int main(void)
{
	for (int count = 1; count <= 5; count++)
		increment();
	printf("�Լ� increment()�� �� %d�� ȣ��Ǿ����ϴ�.\n", svar);

	testglobal();
	printf("���� ����: %d\n", gvar);
}

void increment()
{
	svar++;
}