#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLTDataType;//将int类型重命名

typedef struct SListNode//将结构体重命名
{
	SLTDataType data;
	struct SListNode* next;
}SLTNode;

void SListPrint(SLTNode* phead);
void SListPushBack(SLTNode** pphead, SLTDataType x);
void SListPushFront(SLTNode** pphead, SLTDataType x);
void SListPopFront(SLTNode** pphead);
void SListPopBack(SLTNode** pphead);
SLTNode* BuySListnode(SLTDataType x);