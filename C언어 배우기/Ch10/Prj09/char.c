/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch10 / Prj09 / char.c
	���ڰ��� �Լ� �̿�
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <ctype.h>	//���ڰ��� �Լ��� ������� ctype.h�� ��ũ�� ����

void print2char(char);

int main(void)
{
	char ch;		

	printf("���ĺ�(����x) �Ǵ� �ٸ� ���� �Է��ϼ���.\n");

	do
	{
		printf("���� �Է� �� ENTER: ");
		scanf("%c", &ch);
		getchar();		//���� �ϳ� �Է��� enterŰ�� �ݵ�� �������� �ؼ� enterŰ�� �ϳ� �޾Ƶ��̴� ���
		if (isalpha(ch))
			print2char(ch);
		else printf("�Է�: %c\n", ch);
	} while (ch != 'x' && ch != 'X');		//�Է��� x�Ǵ� X�̸� ����
	return 0;
}

void print2char(char ch)
{
	if (isupper(ch))
		printf("�Է�: %c, ��ȯ: %c\n", ch, tolower(ch));
	else
		printf("�Է�: %c, ��ȯ: %c\n", ch, toupper(ch));

	return;
}
