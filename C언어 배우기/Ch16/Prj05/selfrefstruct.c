/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch16 / Prj05 / selfrefstruct.c
	�ڱ����� ����ü�� �̿��� ���� ����Ʈ�� �⺻ �н�
	V 1.0 2022.
*/

#include <stdio.h>
#include <stdlib.h>

//�ڱ����� ����ü ����
struct selfref
{
	int n;
	struct selfref* next;
};

int main(void)
{
	//1. �켱 ����ü struct selfref�� �ϳ��� �ڷ����� list ������ ����
	typedef struct selfref list;

	//2. �� ����ü ������ ���� first�� second�� ������ ��, �Լ� malloc()�� �̿��ؼ� ����ü�� ����� ������ �� �ִ� ��������� �Ҵ�
	list* first = NULL, * second = NULL;
	first = (list*)malloc(sizeof(list));
	second = (list*)malloc(sizeof(list));

	//3. ����ü ������ first�� second �� ��� n�� ���� ���� 100, 200�� �����ϰ� ��� next���� ���� NULL�� ����
	first->n = 100;
	first->next = NULL;
	second->n = 200;
	second->next = NULL;

	//����ü *first�� ���� *second ����ü�� ����Ű���� �ϴ� ����
	first->next = second;

	printf("����ü ũ��= %d\n\n", sizeof(list));
	printf("ù ��° ����ü:\n");
	printf("\t�ڷ��� �ּҰ�(first) = %u\n", first);
	printf("\t�ڷᰪ(first->n) = %d\n", first->n);
	printf("\t�ڷᰪ(first->next) = %u\n", first->next);
	printf("\t�ڷᰪ(first->next->n) = %d\n\n", first->next->n);

	printf("�� ��° ����ü:\n");
	printf("\t�ڷ��� �ּҰ�(second) = %u\n", second);
	printf("\t�ڷᰪ(second->n) = %d\n", second->n);
	printf("\t�ڷᰪ(second->next) = %u\n", second->next);
	
	//�����޸� �Ҵ� ����
	free(first);
	free(second);

	return 0;
}