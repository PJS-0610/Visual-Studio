/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch08 / Prj05 / calcptr.c
	������ ������ ����
	V 1.0 2022.
*/

#include <stdio.h>

int main(void)
{
	char* pc = (char*)100;			//������ ���̳� �� �̿����� ���� char�� ������ ���� pc �����Ͽ� char�� ������ �ּҰ� 100�� ����	    //���� perfect C�� p.372 tip �κп� �ڼ��� ���� ����
	int* pi = (int*)100;			//������ ���̳� �� �̿����� ���� int�� ������ ���� pi �����Ͽ� int�� ������ �ּҰ� 100�� ����	    //���� perfect C�� p.372 tip �κп� �ڼ��� ���� ����
	double* pd = (double*)100;		//������ ���̳� �� �̿����� ���� doublt�� ������ ���� pd �����Ͽ� double�� ������ �ּҰ� 100�� ����	//���� perfect C�� p.372 tip �κп� �ڼ��� ���� ����
	pd = 100;				//��� �߻�

	printf("%u %u %u\n", (int)(pc - 1), (int)pc, (int)(pc + 1));
	printf("%u %u %u\n", (int)(pi - 1), (int)pi, (int)(pi + 1));
	printf("%u %u %u\n", (int)(pd - 1), (int)pd, (int)(pd + 1));

	return 0;
}