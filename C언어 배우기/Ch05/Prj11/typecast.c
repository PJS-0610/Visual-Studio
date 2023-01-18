/*
	솔루션 / 프로젝트 / 소스파일: Ch05 / Prj11 / typecast.c
	올림변환: 작은범주의 자료형(int)에서 큰 범주인 형(double)로 형변환방식 
	내림변환  큰 범주인 형(double)에서 작은범주의 자료형(int)로 형변환방식 
	V 1.0 2022.
*/

#include <stdio.h>

int main(void)
{
	int a = 3.4;
	double d = 3;

	printf("%5d %10f ", a, d);
	printf("%10f\n", 3 + 4.5);

	printf("%5d ", 10 / 4);
	printf("%10f ", (double) 10 / 4);
	printf("%10f ", 10 / (double)4);
	printf("%10f\n", (double)(10 / 4));

	printf("%5d ", (int)(3.4 + 7.8));
	printf("%10d ", (int)3.4 + (int)7.8);
	printf("%10f ", (int)3.4 + 7.8);
	printf("%10f\n", 3.4 + (int)7.8);

	return 0;

}