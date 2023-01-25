/*
	솔루션 / 프로젝트 / 소스파일: Ch13 / Prj04 / union.c
	공용체 정의와 변수 선언 및 사용
	V 1.0 2022.
*/

#include <stdio.h>

//유니온 구조체를 정의하면서 변수 data1도 선언한 문장
union data
{
	char ch;
	int cnt;
	double real;
} data1;		//data1은 전역변수

int main(void)
{
	union data data2 = { 'A' };	//첫 멤버인 char형으로만 초기화 가능
	//union data data2 = { 10.3 };	//컴파일 시 경고 발생
	union data data3 = data2;		//다른 변수로 초기화 가능

	printf("%d %d\n", (int) sizeof(union data), sizeof(data3));

	data1.ch = 'a';
	printf("%c %d %f\n", data1.ch, data1.cnt, data1.real);

	data1.cnt = 100;
	printf("%c %d %f\n", data1.ch, data1.cnt, data1.real);

	data1.real = 3.156759;
	printf("%c %d %f\n", data1.ch, data1.cnt, data1.real);

	return 0;
}