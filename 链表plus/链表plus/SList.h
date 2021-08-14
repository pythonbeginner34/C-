#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>

typedef int LDataType;
typedef struct LNode
{
	struct LNode* next;
	LDataType data;
}LNode;

void ListInit(LNode* phead);