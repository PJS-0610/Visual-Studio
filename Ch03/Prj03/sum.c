/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch03 / Prj03 / sum.c
	�����ʱ�ȭ ����
	V 1.0 2022.
	*/
#include <stdio.h>

int main(void)
{
	int math = 99;
	int korean = 90;

	int science;
	science = 94;
	//���ϱ� ��ȣ�� +�� ����Ͽ� ������ ���� total�� �����ϸ鼭 ����
	int total = math + korean + science;

	printf("����: %d\n", math);
	printf("����: %d\n", korean);
	printf("����: %d\n", science);
	printf("����: %d\n", total);

	return 0;
}