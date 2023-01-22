/*
	솔루션 / 프로젝트 / 소스파일: Ch09 / Prj10 / tdaryptr.c
	배열이름과 행의 대표이름으로 배열원소 참조
	V 1.0 2022.
*/
//교재 Perfect C p.426 그림 9-29 꼭 보기!!!


#include <stdio.h>

#define ROW 2
#define COL 3

int main(void)
{
	int td[][COL] = {{8,5,4},{2,7,6}};

	**td = 10;		//td[0][0] - 10;
	*td[1] = 20;	//td[1][0] = 20;

	for (int i = 0, cnt = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++, cnt++)
		{
			printf("%d %d %d, ", *(*td + cnt), *(td[i] + j), *(*(td + i) + j));		//모두 같은 원소를 참조하는 방법
		}
		printf("\n");
	}
	printf("%d, %d, %d\n", sizeof(td), sizeof(td[0]), sizeof(td[1]));
	printf("%p, %p, %p\n", td, td[0], td[1]);
	printf("%p, %p\n", &td[0][0], &td[1][0]);

	return 0;
}