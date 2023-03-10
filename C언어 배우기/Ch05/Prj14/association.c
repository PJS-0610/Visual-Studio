/*
	솔루션 / 프로젝트 / 소스파일: Ch05 / Prj14 / association.c
	결합성
	V 1.0 2022.
*/

#include <stdio.h>

int main(void)
{
	int m = 5, n = 10;

	//우측에서 좌측으로 결합
	printf("%d ", n += m /= 3);
	m = 5; n = 10;
	printf("%d\n", (n+= (m/=3)));

	printf("%d ", 10 * 3 / 2);			//좌측에서 우측으로 결합
	printf("%d\n", 10 * (3 / 2));		//우측에서 좌측으로 결합

	//우측에서 좌측으로 결합
	printf("%d ", 3 > 4 ? 3 - 4 : 3 > 4 ? 3 + 4 : 3 * 4);
	printf("%d\n", 3 > 4 ? 3 - 4 : (3 > 4 ? 3 + 4 : 3 * 4));

	return 0;


}