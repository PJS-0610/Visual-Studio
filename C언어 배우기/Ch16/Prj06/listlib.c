/*
	솔루션 / 프로젝트 / 소스파일: Ch16 / Prj08 / listlib.h
	연결 리스트를 생성하고, 추가, 출력하는 함수 3개를 구현한 소스
	V 1.0 2022.
*/
#include "linkedlist.h"

//노드를 생성하는 함수
LINK createNode(char* name)
{
	//새로 생성되는 노드의 주소를 저장할 변수 cur을 선언
	LINK cur;
	cur = (LINK)malloc(sizeof(NODE));
	if (cur == NULL)
	{
		printf("노드 생성을 위한 메모리 할당에 문제가 있습니다.\n");
		return NULL;
	}
	//언어 이름을 저장할 문자 배열을 동적 할당하여 name에 저장
	cur->name = (char*)malloc(sizeof(char) * (strlen(name) + 1));
	strcpy(cur->name, name);

	//다음 노드는 모르므로 NULL로 저장
	cur->next = NULL;

	return cur;
}

//cur 노드를 연결 리스트 head의 마지막 노드에 추가하는 함수
LINK append(LINK head, LINK cur)
{
	//지역 변수 nextNode을 선언하고 초기값으로 head를 저장
	LINK nextNode = head;

	//만일 현재 헤드가 가리키는 것이 없다면, 즉 연결 리스트의 노드가 하나도 없는 경우
	if (head == NULL)
	{
		head = cur;		//추가하려는 노드가 head가 됨
		return head;
	}

	//멤버 next가 NULL일 때까지 이동하여 마지막 노드까지 이동
	while (nextNode->next != NULL)
	{
		nextNode = nextNode->next;
	}

	//추가 노드를 현재 노드의 next로 저장
	nextNode->next = cur;
	return head;
}

//연결 리스트의 모든 노드 출력 함수
int printList(LINK head)
{
	int cnt = 0;		//방문한 노드의 수르 저장
	LINK nextNode = head;

	//nextNode를 이용하여 연결 리스트의 처음부터 끝까지 순회
	while (nextNode != NULL)
	{
		//리스트의 순서로 노드를 방문하여 방문 횟수와 문자열 자료를 출력
		printf("%3d번째 노드는 %s\n", ++cnt, nextNode->name);
		nextNode = nextNode->next;
	}

	return cnt;
}