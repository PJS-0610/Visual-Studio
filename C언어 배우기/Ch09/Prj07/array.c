/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch09 / Prj07 / array.c
	������ �迭�ʱ�ȭ�� �̿��� ����ó��
	V 1.0 2022.
*/

#include <stdio.h>
#define SIZE 3

int main(void)
{
	int score[] = { 89,98,76 };

	//�迭�̸� score�� ù��° ������ �ּ�
	printf("score: %u, &score[0]: %u\n", score, &score[0]);

	//�迭�̸� score�� ù��° ��
	printf("*score: %d, socre[0]: %d\n\n", *score, score[0]);

	printf("÷��    �ּ�        ���尪\n");
	
	//�迭�̸� score�� ����� �ּҿ� ���Ұ� ����
	for (int i = 0; i < SIZE; i++)
		printf("%2d %15u %6d\n", i, (score + i), *(score + i));
	
	return 0;
}
//���� Perfect C p.418 ǥ9-1 �迭������ �ּҿ� ���� ���� �پ��� ���ٹ�� ����