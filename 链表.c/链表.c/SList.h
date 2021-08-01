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
int SListzSize(SLTNode* phead);
bool SListPritn(SLTNode* phead);
SLTNode* SListFind(SLTNode* phead, SLTDataType x);

void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);
void SListInsertAfter(SLTNode** pphead, SLTDataType x);

void SListErase(SLTNode** pphead, SLTNode* pso);
void SListEraseAfter(SLTNode* pos);




//ListNode* FindKthToTail(ListNode* PlistHead, unsigned int k)
//{
//	struct ListNode* fast, * slow;
//	fast = slow = PListHead;
//	while（k--）
//	{
//		if（fast)
//		{
//		fast = fast->next;
//        }
//	else
//	break;
//	}
//		if (fast != NULL && (fast->next) != NULL)
//		{
//			while (fase)
//			{
//				fase = fase->next;
//				slow = slow->next;
//			}
//			return slow;
//		}
//		else if (fast != NULL && (fast->next) == NULL)
//		{
//			return PListHead;
//		}
//		else
//			return NULL;
//}


