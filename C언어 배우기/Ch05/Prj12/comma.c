/*
	솔루션 / 프로젝트 / 소스파일: Ch05 / Prj12 / comma.c
	연산자 comma(콤마), sizeof
	V 1.0 2022.
*/

#include <stdio.h>

int main(void)
{

	int a = 100, b = 50, c;

	printf("%d ", sizeof(short));
	printf("%d ", sizeof a);
	printf("%d ", sizeof 3.5F);
	printf("%d\n", sizeof 3.14);

	c = ++a, b++;  //여기서 c는 b++. 이유는 ,뒤의 값이 c이기 때문(콤마연산자의 특징)
	printf("%d %d %d\n", a, b, c);
	c = (3 + a, b * 2); //여기서 c는 b*2. 이유는 ,뒤의 값이 c가 되기 때문(콤마연산자의 특징)
	printf("%d %d %d\n", a, b, c);

	return 0;


}

