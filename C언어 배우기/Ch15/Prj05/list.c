/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch15 / Prj05 / list.c
	����� ���ڸ� ����ؼ� ������ ������ ǥ��������� �״�� ����ϴ� ���α׷�
	V 1.0 2022.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	FILE* f;

	if (argc != 2)
	{
		printf("����: list filename\n");
		exit(1);
	}

	//�б� ���� ���� ����
	if (fopen_s(&f, argv[1], "r") != 0)
	//if (f=fopen(argv[1], "r") == NULL)	�� ����
	{
		printf("������ ������ �ʽ��ϴ�.\n");
		exit(1);
	}

	//���ڸ� ������ ch, ���ȣ�� ������ cnt
	int ch, cnt = 0;
	printf("%4d: ", ++cnt);
	while ((ch = fgetc(f)) != EOF)
	{
		putchar(ch);	//puts(ch, stdout);

		//�� ó���� �� ��ȣ ���
		if (ch == '\n')
			printf("%4d: ", ++cnt);
	}
	printf("\n");
	fclose(f);

	return 0;
}