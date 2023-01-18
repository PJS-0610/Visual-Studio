/*
	솔루션 / 프로젝트 / 소스파일: Ch03 / Prj09 / overflow.c
	오버플로와 언더플로의 발생
	V 1.0 2022.
	*/

#include <stdio.h>

int main(void)
{

	unsigned char uc = 255 + 1;
	short s = 32767 + 1;
	float min = 1.175e-50;
	float max = 3.403e39;

	printf("%u\n", uc);
	printf("%d\n", s);
	printf("%e\n", min);
	printf("%f\n", max);

	
	return 0;

}