/*
	솔루션 / 프로젝트 / 소스파일: Ch09 / Prj01 / declarearray.c
	const를 이용한 포인터 상수
	V 1.0 2022.
*/

#include <stdio.h>

#define SIZE 5

int main(void)
{
	//배열선언
	int score[SIZE];

	//배열원소에 갑 저장
	score[0] = 78;
	score[1] = 97;
	score[2] = 85;

	//배열 4번째 원소에 값 저장하지 않아 쓰레기값 저장
	score[4] = 91;
	//score[5]=50; //문법 오류는 발생하지 않으나 실행오류 발생

	//배열원소 출력
	for (int i = 0; i < SIZE; i++)
		printf("%d  ", score[i]);
	printf("\n");

	return 0;
}