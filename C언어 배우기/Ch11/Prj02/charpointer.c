/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch11 / Prj02 / charpointer.c
	���� �����ͷ� ���ڿ� ó��	
	V 1.0 2022.
*/

#include <stdio.h>

int main(void)
{
	char* java = "java";
	printf("%s ", java);

	//���� �����Ͱ� ����Ű�� ���� ���ĸ� �ϳ��ϳ� ���
	int i = 0;
	while (java[i] != '\0')			// while (java[i])	�� ����
		printf("%c", java[i++]);
	printf(" ");

	i = 0;
	while (*(java + i) != '\0')			// java[i]�� *(java + i)�� ����
		printf("%c", *(java + i++));
	printf("\n");

	//���� �Ұ���, ������� �߻�
	java[0] = 'J';

	return 0;
}