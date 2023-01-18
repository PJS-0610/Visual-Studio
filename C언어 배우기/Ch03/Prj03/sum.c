/*
	솔루션 / 프로젝트 / 소스파일: Ch03 / Prj03 / sum.c
	변수초기화 이해
	V 1.0 2022.
	*/
#include <stdio.h>

int main(void)
{
	int math = 99;
	int korean = 90;

	int science;
	science = 94;
	//더하기 기호인 +를 사용하여 총합을 변수 total에 선언하면서 저장
	int total = math + korean + science;

	printf("수학: %d\n", math);
	printf("국어: %d\n", korean);
	printf("과학: %d\n", science);
	printf("총점: %d\n", total);

	return 0;
}