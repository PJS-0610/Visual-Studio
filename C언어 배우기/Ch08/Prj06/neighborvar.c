/*
	솔루션 / 프로젝트 / 소스파일: Ch08 / Prj06 / neighborvar.c
	이웃한 변수의 주소값
	V 1.0 2022.
*/


#include <stdio.h>

int main(void)
{
	int a = 1, b = 3, c = 6;

	printf("변수명    저장값    주소값   \n");
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

	printf("변수명    저장값    주소값   \n");
	printf("---------------------------------\n");
	printf("   c       %d       %p\n", c, &c);
	printf("   b       %d       %p\n", b, &b);
	printf("   a       %d       %p\n", a, &a);


	int *p = &c;

	printf("   c       %d       %p\n", *p, p);
	printf("   b       %d       %p\n", *(p+3), p+3);		//교재처럼 하면 오류가 뜸 귀찮더라도 위의 방법으로 하는걸 추천  ->  나중에 더 공부해서 해결방법 찾아보자!
	printf("   a       %d       %p\n", *(p+6), p+6);		//교재처럼 하면 오류가 뜸 귀찮더라도 위의 방법으로 하는걸 추천  ->  나중에 더 공부해서 해결방법 찾아보자!

	return 0;
}





*/