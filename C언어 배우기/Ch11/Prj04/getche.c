/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch11 / Prj04 / getche.c
	�Լ� getchar(),_getche(),_getch()�� ���̸� �˾ƺ��� ����
	V 1.0 2022.
*/

//���� Perfect C p.502�� ǥ ����

#include <stdio.h>
#include <conio.h>

int main(void)
{
	char ch;

	printf("���ڸ� ��� �Է��ϰ� ENTER�� ������ >>\n");
	while ((ch = getchar()) != 'q')
		putchar(ch);

	printf("\n���ڸ� ���� ������ �� �� ��� >>\n");
	while ((ch = _getche()) != 'q')
		putchar(ch);

	printf("\n���ڸ� ������ �� �� ��� >>\n");
	while ((ch = _getch()) != 'q')
		_putch(ch);
	printf("\n");

	return 0;
}