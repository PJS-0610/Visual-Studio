/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch12 / Prj01 / localvar.c
	�������� ����� ���
	V 1.0 2022.
*/

#include <stdio.h>

void sub(int param);	//�Լ� ����

int main(void)
{
	//�������� ����
	auto int n = 10;
	printf("%d\n", n);

	//m, sum�� for �� ������ ��� ��������
	for (int m = 0, sum = 0; m < 3; m++)
	{
		sum += m;
		printf("\t%d %d\n", m, sum);
	}
	printf("%d\n", n);		//n�� ���������̹Ƿ� ��������	//m�� sum�� for ���ȿ��� ����� �����̹Ƿ� ���⼭ ��� �Ұ���

	//�Լ� ȣ��
	sub(20);

	return 0;
}

//�Ű������� param�� ���������� ���� ���
void sub(int param)
{
	//�������� local
	auto int local = 100;
	printf("\t%d %d\n", param, local);		//param �� local ���� ����	//n�� ���� int main(void)�ȿ��� ����� ���������� ������ ���� �Ұ���

}