/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch08 / Prj09 / variousop.c
	�����Ϳ����� ���� �����ڿ� ���� �������� Ȱ��

	V 1.0 2022.
*/
// Prj09�� �� ���� Perfect C p.383�� ǥ �����ؼ� ����!

#include <stdio.h>

int main(void)
{
	int i;
	int* pi = &i;		//������ ����
	int** dpi = &pi;	//���������� ����

	*pi = 5;
	*pi += 1;
	printf("%d\n", i);

	//���� ������ pi++�� ���� �����ں��� *pi���� ����
	printf("%d\n", (*pi)++);
	printf("%d\n", *pi);

	*pi = 10;
	printf("%d\n", ++ * pi);		//++*pi�� ++(*pi)�� ����
	printf("%d\n", ++ * *dpi);		//++**dpi�� ++(**dpi)�� ����
	printf("%d\n", i);

	return 0;
}
// Prj09�� �� ���� Perfect C p.383�� ǥ �����ؼ� ����!