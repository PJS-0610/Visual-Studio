/*
	솔루션 / 프로젝트 / 소스파일: Ch16 / Prj01 / malloc.c
	함수 malloc()를 이용해서 int 형 저장공간을 확보하여 처리
	V 1.0 2022.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* pi = NULL;

	//메모리 할당 함수 malloc()으로 동적메모리 할당
	pi = (int*)malloc(sizeof(int));

	//동적메모리 할당 성공 검사
	if (pi == NULL)
	{
		printf("메모리 할당에 문제가 있습니다.\n");
		exit(1);
	}
	//내용 값 저장
	*pi = 3;
	printf("주소값: *pi = %d, 저장값: p = %d\n", pi, *pi);

	//메모리 해제
	free(pi);

	return 0;
}