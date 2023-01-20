/*
	솔루션 / 프로젝트 / 소스파일: Ch08 / Prj07 / ptrtypecast.c
	명시적 형변환
	V 1.0 2022.
*/


#include <stdio.h>

int main(void)
{
	int value = 0x61626364;
	int* pi = &value;
	char* pc = (char*)&value;

	printf("변수명   저장값    주소값\n");
	printf("------------------------------\n");
	printf(" value     %0#x    %u\n", value, pi);   //정수 출력
	
	//문자 포인터로 문자 출력 모듈
	for (int i = 0; i <= 3; i++)
	{
		char ch = *(pc + i);
		printf("*(pc+%d)    %0#6x   %2c   %u\n", i, ch, ch, pc + i);
	}

	return 0;
}