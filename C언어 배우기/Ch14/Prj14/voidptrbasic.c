/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch14 / Prj14 / voidptrbasic.c
	�ּҸ� �����ϴ� void ������
	V 1.0 2022.
*/

#include <stdio.h>

void myprint(void)
{
	printf("void ������ �ű��ϳ׿�!\n");
}

int main(void)
{
	int m = 10;
	double d = 3.98;

	void* p = &m;
	printf("%d\n", p);
	//printf("%d", *p); ���� �߻�

	p = &d;
	printf("%d\n", p);

	p = myprint;
	printf("%d\n", p);

	return 0;
}