/*
	솔루션 / 프로젝트 / 소스파일: Ch04 / Prj02 / advancemacro.c
	#define을 이용하여 만든 이름이 붙여진 매크로 상수의 이해
	V 1.0 2022.
*/

#include <stdio.h>

#define MESSAGE "프로그램언어의 학습은 일반언어의 학습과 \
										같이 반복학습이 중요하다"

#define PI 3.141592
#define VOLUME(r)         (4 * PI * CUBE(r) / 3)
#define SQUARE(x)         ( (x) * (x) )
#define CUBE(x)           ( SQUARE(x) * (x) )
#define MULT(x,y)         ( (x) * (y) )

int main(void)
{
	double radius = 2.32;
	printf("반지름이 %.2lf인 구의 체적은 %.2lf 입니다.\n", radius, VOLUME(radius));
	printf("실수 %.2f의 제곱은 %.2f 입니다.\n", 4.29, SQUARE(4.29));
	printf("실수 %.2f의 세 제곱은 %.2f 입니다.\n", 3.0, CUBE(3.0));
	printf("실수 %.2f와 실수 %.2f의 곱은 %.2f 입니다.\n", 2.78, 3.62, MULT(2.78, 3.62));
	puts(MESSAGE);

	return 0;


}