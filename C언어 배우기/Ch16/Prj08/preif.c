/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch16 / Prj10 / preif.h
	��ó���� ������ #if�� �̿�
	V 1.0 2022.
*/


#include <stdio.h>

//��� ����
#define WINDOWS 1
#define MAC 2
#define UNIX 3

//#define SYSTEM WINDOWS
#define SYSTEM UNIX

//��ó�� #if #elif #else #endif
#if (SYSTEM ==WINDOWS)	
typedef long my_int;
#elif SYSTEM==MAC
typedef int my_int;
#elif SYSTEM ==UNIX
typedef long long my_int;
#else 
typedef short my_int;
#endif

int main(void)
{
	my_int n = 17;
	printf("����ũ��: %d, ���尪: %d\n", sizeof(n), n);

	return 0;
}