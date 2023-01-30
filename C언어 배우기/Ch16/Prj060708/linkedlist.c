/*
	솔루션 / 프로젝트 / 소스파일: Ch16 / Prj07 / linkedlist.c
	연결 리스트를 생성하고 출력하는 메인 프로그램
	V 1.0 2022.
*/


#include "linkedlist.h"

LINK createNode(char* name);
LINK append(LINK head, LINK cur);
int printList(LINK head);

int main(void)
{
	//표준입력으로 받은 프로그램 이름 문자열을 저장할 문자 배열
	char name[30];
	LINK head = NULL;		//연결 리스트의 헤드로 사용
	LINK cur;				//현재 새로이 생성된 노드를 가리키는 포인터

	printf("이름을 입력하고 Enter를 누르세요. >> \n");
	while (gets(name) != NULL)
	{
		cur = createNode(name);
		if (cur == NULL)
		{
			printf("동적메모리 할당에 문제가 있습니다.\n");
			exit(1);
		}
		head = append(head, cur);		//맨 뒤에 노드 추가
		printList(head);				//연결 리스트 모두 출력
	}

	return 0;
}