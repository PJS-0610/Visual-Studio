/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch05 / Prj03 / compoundassign.c
	��� ���Կ�����
	V 1.0 2022.
*/


#define _CRT_SECURE_NO_DEPRECATE //scanf() �� ������ �����ϱ����� ��� ����

#include <stdio.h>

int main(void)
{
	int x = 5, y = 10;
	printf("�� ������ �Է� >> ", &x, &y);
	scanf("%d%d", &x, &y);

	printf("The addition is: %d\n", x += y);
	printf("x = %d, y = %d\n", x, y);
	printf("The substraction is: %d\n", x -= y);
	printf("x = %d, y = %d\n", x, y);
	printf("The multiplication is: %d\n", x *= y);
	printf("x = %d, y = %d\n", x, y);
	printf("The division is: %d\n", x /= y);
	printf("x = %d, y = %d\n", x, y);
	printf("The remainder is: %d\n", x %= y);
	printf("x = %d, y = %d\n", x, y);
	printf("x *= x+ y is: %d\n", x *= x + y);
	printf("x = %d, y = %d\n", x, y);
	
	return 0;
}
