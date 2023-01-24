/*
	솔루션 / 프로젝트 / 소스파일: Ch11 / Prj02 / charpointer.c
	문자 포인터로 문자열 처리	
	V 1.0 2022.
*/

#include <stdio.h>

int main(void)
{
	char* java = "java";
	printf("%s ", java);

	//문자 포인터가 가리키는 문자 이후를 하나하나 출력
	int i = 0;
	while (java[i] != '\0')			// while (java[i])	랑 같음
		printf("%c", java[i++]);
	printf(" ");

	i = 0;
	while (*(java + i) != '\0')			// java[i]는 *(java + i)와 같음
		printf("%c", *(java + i++));
	printf("\n");

	//수정 불가능, 실행오류 발생
	java[0] = 'J';

	return 0;
}