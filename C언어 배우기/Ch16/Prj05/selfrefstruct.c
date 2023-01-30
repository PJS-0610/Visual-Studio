/*
	솔루션 / 프로젝트 / 소스파일: Ch16 / Prj05 / selfrefstruct.c
	자기참조 구조체를 이용한 연결 리스트의 기본 학습
	V 1.0 2022.
*/

#include <stdio.h>
#include <stdlib.h>

//자기참조 구조체 정의
struct selfref
{
	int n;
	struct selfref* next;
};

int main(void)
{
	//1. 우선 구조체 struct selfref를 하나의 자료형인 list 형으로 정의
	typedef struct selfref list;

	//2. 두 구조체 포인터 변수 first와 second를 선언한 후, 함수 malloc()을 이용해서 구조체의 멤버를 저장할 수 있는 저장공간을 할당
	list* first = NULL, * second = NULL;
	first = (list*)malloc(sizeof(list));
	second = (list*)malloc(sizeof(list));

	//3. 구조체 포인터 first와 second 의 멤버 n에 각각 정수 100, 200을 저장하고 멤버 next에는 각각 NULL을 저장
	first->n = 100;
	first->next = NULL;
	second->n = 200;
	second->next = NULL;

	//구조체 *first가 다음 *second 구조체를 가리키도록 하는 문장
	first->next = second;

	printf("구조체 크기= %d\n\n", sizeof(list));
	printf("첫 번째 구조체:\n");
	printf("\t자료의 주소값(first) = %u\n", first);
	printf("\t자료값(first->n) = %d\n", first->n);
	printf("\t자료값(first->next) = %u\n", first->next);
	printf("\t자료값(first->next->n) = %d\n\n", first->next->n);

	printf("두 번째 구조체:\n");
	printf("\t자료의 주소값(second) = %u\n", second);
	printf("\t자료값(second->n) = %d\n", second->n);
	printf("\t자료값(second->next) = %u\n", second->next);
	
	//동적메모리 할당 해제
	free(first);
	free(second);

	return 0;
}