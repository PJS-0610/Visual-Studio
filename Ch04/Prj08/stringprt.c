/*
	솔루션 / 프로젝트 / 소스파일: Ch04 / Prj08 / stringprt.c
	문자열출력에서의 출력폭 지정
	V 1.0 2022.
*/

#include <stdio.h>

int main(void)
{

	printf("사계절은 봄 여름 가을 겨울이다.\n");
	printf("사계절은 %s %s %s %s이다.\n","봄","여름","가을","겨울");
	printf("%s\n", "123456789012345");
	printf("%10.3s\n", "Hello!");
	printf("%-10.3s\n", "Hello!");
	printf("%4s\n", "Hello!");
	printf("%10.*s\n\n",5, "Hello!");

	printf("%s\n", "123456789012345");
	printf("%s\n", "Hi, C language!");

	//전체폭 10에서 3개의 문자만 출력, 기본이 오른쪽 정렬
	printf("%10.3s\n", "Hi, C language!");

	//전체폭 10에서 3개의 문자만 출력, -는 왼쪽 정렬
	printf("%-10.3s\n", "Hi, C language");

	//*는 정밀도를 입력으로 받아 지정, 정밀도가 3이므로 %10.3f로 출력
	printf("%10.*f\n", 3, 124.56789);

	//형식 문자열 내부에서는 %%가 %로 풀력
	printf("%10.2f%%\n", 3.25);
	printf("%0+10.1f%s\n", 3.25, "%");

	return 0;




}