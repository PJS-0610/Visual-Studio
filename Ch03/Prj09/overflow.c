/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch03 / Prj09 / overflow.c
	�����÷ο� ����÷��� �߻�
	V 1.0 2022.
	*/

#include <stdio.h>

int main(void)
{

	unsigned char uc = 255 + 1;
	short s = 32767 + 1;
	float min = 1.175e-50;
	float max = 3.403e39;

	printf("%u\n", uc);
	printf("%d\n", s);
	printf("%e\n", min);
	printf("%f\n", max);

	
	return 0;

}