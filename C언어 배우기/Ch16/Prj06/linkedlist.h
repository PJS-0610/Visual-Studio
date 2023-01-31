#pragma once
/*
	�ַ�� / ������Ʈ / �ҽ�����: Ch16 / Prj06 / linkedlist.h
	���� ����Ʈ�� �����ϰ� ����ϴ� ���α׷��� ���� �������
	V 1.0 2022.
*/

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//�ڱ� ���� ����ü ����
struct linked_list
{
	char* name;
	struct linked_list* next;
};

//struct linked_list�� NODE�� ������
typedef struct linked_list NODE;

//NODE *�� LINK�� ������
typedef NODE* LINK;