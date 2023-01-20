/*
	솔루션 / 프로젝트 / 소스파일: Ch08 / Prj09 / variousop.c
	포인터에서의 간접 연산자와 증감 연산자의 활용

	V 1.0 2022.
*/
// Prj09는 꼭 교재 Perfect C p.383의 표 참고해서 공부!

#include <stdio.h>

int main(void)
{
	int i;
	int* pi = &i;		//포인터 선언
	int** dpi = &pi;	//이중포인터 선언

	*pi = 5;
	*pi += 1;
	printf("%d\n", i);

	//후위 연산자 pi++는 전위 연산자보다 *pi보다 빠름
	printf("%d\n", (*pi)++);
	printf("%d\n", *pi);

	*pi = 10;
	printf("%d\n", ++ * pi);		//++*pi와 ++(*pi)는 같음
	printf("%d\n", ++ * *dpi);		//++**dpi와 ++(**dpi)는 같음
	printf("%d\n", i);

	return 0;
}
// Prj09는 꼭 교재 Perfect C p.383의 표 참고해서 공부!