/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch16 / Prj12 / operator.h
	��ó�� ������ #, #@, ##�� ���
	V 1.0 2022.
*/


#include <stdio.h>

#define CHPRT(a)		printf("%c\n",#@a)
#define PRT(a)			printf(#a" = %d �϶�, ",a)
#define APRT(a)			printf(#a" = %3d ",a)
#define AIPRT(a,i)		printf(#a"[%d] = %3d\n",i,a##[i])

int main(void)
{
	int prod = 1;
	int facto[6];
	CHPRT(4);	

	for (int i = 1; i <= 5; i++)
	{
		prod *= i;
		facto[i] = prod;
		PRT(i);
		APRT(facto[i]);
		AIPRT(facto, i);
	}

	return 0;
}