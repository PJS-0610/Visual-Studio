/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch08 / Prj06 / neighborvar.c
	�̿��� ������ �ּҰ�
	V 1.0 2022.
*/


#include <stdio.h>

int main(void)
{
	int a = 1, b = 3, c = 6;

	printf("������    ���尪    �ּҰ�   \n");
	printf("---------------------------------\n");
	printf("   c       %d       %p\n", c, &c);
	printf("   b       %d       %p\n", b, &b);
	printf("   a       %d       %p\n", a, &a);


	int *p = &c;
	int* q = &b;
	int* r = &a;
	printf("   c       %d       %p\n", *p, p);
	printf("   b       %d       %p\n", *q, q);		
	printf("   a       %d       %p\n", *r, r);		

	return 0;
}

/*
int main(void)
{
	int a = 1, b = 3, c = 6;

	printf("������    ���尪    �ּҰ�   \n");
	printf("---------------------------------\n");
	printf("   c       %d       %p\n", c, &c);
	printf("   b       %d       %p\n", b, &b);
	printf("   a       %d       %p\n", a, &a);


	int *p = &c;

	printf("   c       %d       %p\n", *p, p);
	printf("   b       %d       %p\n", *(p+3), p+3);		//����ó�� �ϸ� ������ �� �������� ���� ������� �ϴ°� ��õ  ->  ���߿� �� �����ؼ� �ذ��� ã�ƺ���!
	printf("   a       %d       %p\n", *(p+6), p+6);		//����ó�� �ϸ� ������ �� �������� ���� ������� �ϴ°� ��õ  ->  ���߿� �� �����ؼ� �ذ��� ã�ƺ���!

	return 0;
}





*/