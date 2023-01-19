/*
	솔루션 / 프로젝트 / 소스파일: Ch07 / Prj11 / forsum.c
	for 문 활용
	V 1.0 2022.
*/


#include <stdio.h>

int main(void)
{
	int i, sum;

	for (i = 1, sum = 0; i <= 10; i++)		//++i도 가능
		sum += i;
	printf("1에서 10까지의 합: %3d\n", sum);

	for (i = 1, sum = 0; i <= 10;)		
		sum += i++;
	printf("1에서 10까지의 합: %3d\n", sum);

	for (i = 0, sum = 0; i <= 9;)	
		sum += ++i;
	printf("1에서 10까지의 합: %3d\n", sum);

	for (i = 1, sum = 0; i <= 10; sum += i++);		//여기 for문에 ;가 붙은 이유는 반복할 몸체가 없기 때문
	printf("1에서 10까지의 합: %3d\n", sum);

	return 0;
}