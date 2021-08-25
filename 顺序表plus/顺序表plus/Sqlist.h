#define _CRT_SECURE_NO_WARNINGS 1
#define MaxSize 10
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int SqDataType;

//typedef struct //静态定义顺序表
//{
//	int data[MaxSize];
//	int length;
//}Sqlist;

typedef struct Sqlist//动态定义顺序表
{
	SqDataType* a;
	int size;
	int capacity;
}SLT;

void SqlistInit(SLT* psl);
void SqlistCheckCapacity(SLT* psl);
void DestorySqlist(SLT* psl);
void SqlistPushBack(SLT* psl, int x);
void SqlistPushFront(SLT* psl, int x);
void SqlistInsert(SLT* psl, size_t pos, int x);
void SqlistPopBack(SLT* psl);
void SqlistPopFront(SLT* psl);
void SqlistErase(SLT* psl, int pos);
int SqlistFind(SLT* psl, int x);