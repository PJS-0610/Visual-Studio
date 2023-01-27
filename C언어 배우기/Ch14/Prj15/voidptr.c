/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch14 / Prj15 / voidptr.c
	void *�� �پ��� �ڷ��� ����
	V 1.0 2022.
*/

#include <stdio.h>

void myprint(void)
{
	printf("void ������, �ű��ϳ׿�!\n");
}

int main(void)
{
	int m = 10;
	double d = 3.98;
	char str[][20] = { {"C ���,"},{"����ֳ׿�!"} };

	void* p = &m;
	printf("p ���� ����: %d\n", *(int*)p);			//int *�� ��ȯ

	p = &d;
	printf("p ���� �Ǽ�: %.2f\n", *(double*)p);		//double *�� ��ȯ

	p = myprint;
	printf("p ���� �Լ� ���� : ");
	((void(*)(void))p)();		//�Լ� �������� void(*)(void)�� ��ȯ�Ͽ� ȣ��

	p = str;

	//���� 20�� ������ �迭�� ��ȯ�Ͽ� 1��� 1���� ���ڿ� ���
	printf("p ���� 2���� �迭: %s %s\n", (char(*)[20])p, (char(*)[20])p + 1);
	printf("str ���� 2���� �迭: %s %s\n", str, str + 1);

	return 0;
}