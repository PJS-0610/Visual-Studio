/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch15 / Prj09 / rename.c
	�Լ� rename()�� ����ؼ� ���� �̸��� �����ϴ� ���α׷�
	V 1.0 2022.
*/


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	if (argc < 3)
	{
		printf("����: rename from to");
		exit(1);
	}
	//���� �̸� ���� �Լ� ȣ��
	rename(argv[1], argv[2]);
	printf("���� %s�� %s�� �����Ǿ����ϴ�.\n", argv[1], argv[2]);

	return 0;
}