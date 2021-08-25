#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
#define MaxSize 10

typedef int QuDataType;
typedef struct LkQueue
{
	struct LkQueue* next;
	int data;
}QueueNode;


typedef struct Queue
{
	QueueNode* front;
	QueueNode* rear;
}Queue;

void QueueInit(Queue* pq);
void DestoryQueue(Queue* pq);
void QueuePush(Queue* pq, QuDataType x);
void QueuePop(Queue* pq, QuDataType* x);
void QueuePrint(Queue* pq);
