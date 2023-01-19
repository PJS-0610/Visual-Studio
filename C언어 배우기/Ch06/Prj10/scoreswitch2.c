/*
	솔루션 / 프로젝트 / 소스파일: Ch06 / Prj10 / scoreswitch2.c
	switch 문 활용과 dafault 의 위치
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE //scanf() 의 오류를 방지하기위한 상수 정의
#include <stdio.h>

int main(void)
{
	int score;

	printf("점수(0에서 100사이) 입력: ");
	scanf("%d", &score);

	if (score < 0 || score>100)
	{
		printf("점수 입력이 잘못되었습니다.\n");
		return 0;
	}

	switch (score / 10)
	{
	default:
		printf("점수가 %d 점으로 성적이 %c 입니다.\n", score, 'F');
		break;

	case 10: case 9:
		printf("점수가 %d 점으로 성적이 %c 입니다.\n", score, 'A');
		break;
	case 8:
		printf("점수가 %d 점으로 성적이 %c 입니다.\n", score, 'B');
		break;
	case 7:
		printf("점수가 %d 점으로 성적이 %c 입니다.\n", score, 'C');
		break;
	case 6:
		printf("점수가 %d 점으로 성적이 %c 입니다.\n", score, 'D');
		break;
	}
	return 0;
}