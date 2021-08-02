#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//��̬��˳���
typedef int SQDataType;

typedef struct SeqList
{
	SQDataType* a;
	int size;
	int capicity;
}SLT;

void SeqListInit(SLT* psl);
void SeqListDestory(SLT* psl);

void SeqListprint(SLT* psl);

//β��ͷ�壬 βɾͷɾ
void SeqListPushBack(SLT* psl, SQDataType x);
void SeqListPushFront(SLT* psl, SQDataType x);
void SeqListPopBack(SLT* psl);
void SeqListPopFront(SLT* psl);

int SeqListFind(SLT* psl, SQDataType x);
int SeqListInsert(SLT* psl, size_t pos, SQDataType x);
void SeqListErase(SLT* psl, size_t pos);

size_t SeqListSize(SLT* psl);
void SeqListAt(SLT* psl, size_t pos, SQDataType x);
