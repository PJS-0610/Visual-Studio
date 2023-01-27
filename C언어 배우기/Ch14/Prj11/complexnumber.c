/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch14 / Prj11 / complexnumber.c
	����ü�� ����Ͽ� ���Ҽ��� ǥ��, �Լ��� ���ڿ� ��ȯ������ ���	
	V 1.0 2022.
*/

#include <stdio.h>

//���Ҽ��� ���� ����ü
struct complex
{
	double real;	//�Ǽ�
	double img;		//���
};

//complex�� �ڷ������� ����
typedef struct complex complex;

void printcomplex(complex com);
complex paircomplex1(complex com);
void paircomplex2(complex* com);

int main(void)
{
	complex comp = { 3.4,4.8 };
	complex pcomp;

	printcomplex(comp);
	pcomp = paircomplex1(comp);
	printcomplex(pcomp);
	paircomplex2(&pcomp);
	printcomplex(pcomp);

	return 0;
}

//����ü ��ü�� ���ڷ� ���
void printcomplex(complex com)
{
	printf("���Ҽ�(a +bi) = %5.1f + %5.1fi \n", com.real, com.img);
}

//����ü ��ü�� ���ڷ� ����Ͽ� ó���� ����ü�� �ٽ� ��ȯ
complex paircomplex1(complex com)
{
	com.img = -com.img;
	return com;
}

//����ü �����͸� ���ڷ� ���
void paircomplex2(complex* com)
{
	com->img = -com->img;	
}