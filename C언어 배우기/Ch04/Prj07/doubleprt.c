/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch04 / Prj07 / doubleprt.c
	�Ǽ� ������� ������ ����
	V 1.0 2022.
*/

#include <stdio.h>

int main(void)
{
	printf("%f %s\n", 12345.789, "\t%f");
	printf("%14.3f %s\n", 12345.789, "\t%10.3f");
	printf("%e %s\n", 12345.789, "\t%e");
	printf("%10.3E %s\n", 12345.789, "\t%10.3E");
	printf("%g %s\n", 12.34e-5, "\t%g");
	printf("%G %s\n", 12.34e-6, "\t%G");

	return 0;


}
