/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch12 / Prj09 / out.c
	�ܺ� ������ �������� Ȱ��
	V 1.0 2022.
*/
#include <stdio.h>

void outfunction()
{
	extern int global, sglobal;

	printf("\t\t%d\n", ++global);

	//�ܺ� ���Ͽ��� ����� ���� ���������̹Ƿ� ����� ����
	//printf("%d\n", ++sglobal);

}