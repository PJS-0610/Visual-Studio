/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch11 / Prj07 / memfun.c
	���ڹ迭�� ���� �Լ�
	V 1.0 2022.
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
	char src[50] = "https://www.visualstdio.com";
	char dst[50];

	printf("���ڹ迭 src = %s\n", src);
	printf("���ڿ� ũ�� strlen(src) = %d\n", strlen(src));
	memcpy(dst, src, strlen(src)+1 );								//src�� ������ src+1�� ũ�⸸ŭ dst�� ������
	printf("���ڹ迭 dst = %s\n", dst);
	memcpy(src, "�ȳ��ϼ���!", strlen("�ȳ��ϼ���!") + 1);			//�ȳ��ϼ���!�� ������ �ȳ��ϼ���!+1�� ũ�⸸ŭ src�� ������ 
	printf("���ڹ迭 src = %s\n", src);								//��������� src���� �ȳ��ϼ���! dst���� https://www.visualstdio.com�� �����

	char ch = ':';
	char* ret;
	ret = memchr(dst, ch, strlen(dst));
	printf("���� %c �ڿ��� ���ڿ� %s �� �ִ�.\n", ch, ret);

	return 0;
}