/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch13 / Prj04 / union.c
	����ü ���ǿ� ���� ���� �� ���
	V 1.0 2022.
*/

#include <stdio.h>

//���Ͽ� ����ü�� �����ϸ鼭 ���� data1�� ������ ����
union data
{
	char ch;
	int cnt;
	double real;
} data1;		//data1�� ��������

int main(void)
{
	union data data2 = { 'A' };	//ù ����� char�����θ� �ʱ�ȭ ����
	//union data data2 = { 10.3 };	//������ �� ��� �߻�
	union data data3 = data2;		//�ٸ� ������ �ʱ�ȭ ����

	printf("%d %d\n", (int) sizeof(union data), sizeof(data3));

	data1.ch = 'a';
	printf("%c %d %f\n", data1.ch, data1.cnt, data1.real);

	data1.cnt = 100;
	printf("%c %d %f\n", data1.ch, data1.cnt, data1.real);

	data1.real = 3.156759;
	printf("%c %d %f\n", data1.ch, data1.cnt, data1.real);

	return 0;
}