#pragma once
/*
	솔루션 / 프로젝트 / 소스파일: Ch16 / Prj06 / linkedlist.h
	연결 리스트를 생성하고 출력하는 프로그램을 위한 헤더파일
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//자기 참조 구조체 정의
struct linked_list
{
	char* name;
	struct linked_list* next;
};

//struct linked_list를 NODE로 재정의
typedef struct linked_list NODE;

//NODE *를 LINK로 재정의
typedef NODE* LINK;