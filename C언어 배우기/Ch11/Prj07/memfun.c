/*
	솔루션 / 프로젝트 / 소스파일: Ch11 / Prj07 / memfun.c
	문자배열에 관한 함수
	V 1.0 2022.
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
	char src[50] = "https://www.visualstdio.com";
	char dst[50];

	printf("문자배열 src = %s\n", src);
	printf("문자열 크기 strlen(src) = %d\n", strlen(src));
	memcpy(dst, src, strlen(src)+1 );								//src의 정보를 src+1의 크기만큼 dst에 저장함
	printf("문자배열 dst = %s\n", dst);
	memcpy(src, "안녕하세요!", strlen("안녕하세요!") + 1);			//안녕하세요!의 정보를 안녕하세요!+1의 크기만큼 src에 저장함 
	printf("문자배열 src = %s\n", src);								//결론적으로 src에는 안녕하세요! dst에는 https://www.visualstdio.com가 저장됨

	char ch = ':';
	char* ret;
	ret = memchr(dst, ch, strlen(dst));
	printf("문자 %c 뒤에는 문자열 %s 이 있다.\n", ch, ret);

	return 0;
}