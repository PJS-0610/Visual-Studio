/*
	솔루션 / 프로젝트 / 소스파일: Ch11 / Prj11 / strtok.c
	문자열에서 지정한 분리자를 이용해서 토큰을 사용
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE	
#include <stdio.h>
#include <string.h>


int main(void)
{
	char str1[] = "C and C++\t language are best!";
	char* delimiter = " ,\t!";
	//함수 strtok_s사용
	//char *next_token;
	
	printf("문자열 \"%s\"을 >>\n", str1);
	printf("구분자[%s]를 이용하여 토큰을 추출 >>\n", delimiter);
	char* ptoken = strtok(str1, delimiter);
	//char* ptoken = strtok_s(str1, delimiter,&next_token);
	
	while (ptoken != NULL)
	{
		printf("%s\n", ptoken);
		ptoken = strtok(NULL, delimiter);
		//ptoken = strtok_s(NULL, delimiter, &next_token);
	}
	return 0;
}