/*
	솔루션 / 프로젝트 / 소스파일: Ch09 / Prj07 / array.c
	이차원 배열초기화를 이용한 성적처리
	V 1.0 2022.
*/

#include <stdio.h>
#define SIZE 3

int main(void)
{
	int score[] = { 89,98,76 };

	//배열이름 score는 첫번째 원소의 주소
	printf("score: %u, &score[0]: %u\n", score, &score[0]);

	//배열이름 score는 첫번째 값
	printf("*score: %d, socre[0]: %d\n\n", *score, score[0]);

	printf("첨자    주소        저장값\n");
	
	//배열이름 score를 사용한 주소와 원소값 참조
	for (int i = 0; i < SIZE; i++)
		printf("%2d %15u %6d\n", i, (score + i), *(score + i));
	
	return 0;
}
//교재 Perfect C p.418 표9-1 배열원소의 주소와 내용 값의 다양한 접근방법 참고