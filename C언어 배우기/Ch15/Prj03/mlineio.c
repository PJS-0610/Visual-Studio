/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch15 / Prj03 / mlineio.c
	�����ٿ� ���� �̸�, ������ �Է��Ͽ� ���Ͽ� �� ������ ��� ����
	V 1.0 2022.
*/
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char fname[] = "grade.txt";
	FILE* f;
	char names[80];
	int cnt = 0;

	if (fopen_s(&f, fname, "w") != 0)
	//if (f = fopen(fname, "w") == NULL); �� ����
	{
		printf("������ ������ �ʽ��ϴ�.\n");
		exit(1);
	}
	printf("�̸��� ����(�߰�, �⸻)�� �Է��ϼ���.\n");
	fgets(names, 80, stdin);

	//�ֿܼ� �̸� �߰� �⸻ �Է��ϰ� Enter Ű
	//���� �ٿ� �Է��ϴٰ� �����ϰ� ���� �� ���� ù �࿡�� ctrl+z ������ ��
	while (!feof(stdin))
	{
		//���� "grade.txt"�� ����
		fprintf(f, "%d ", ++cnt);
		fputs(names, f);
		fgets(names, 80, stdin);
	}
	fclose(f);

	return 0;
}