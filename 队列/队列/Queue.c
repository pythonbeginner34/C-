#define _CRT_SECURE_NO_WARNINGS 1
#include"Queue.h"

void QueueInit(Queue* pq)
{
	assert(pq);
	pq->phead = pq->ptail = NULL;
}

void QueueDestory(Queue* pq)
{
	assert(pq);
	QueueNode* cur = pq->phead;
	while (cur)
	{
		QueueNode* next = cur->next;
		free(cur);
		cur = next;
	}
	pq->phead = pq->ptail = NULL;
}

void QueuePush(Queue* pq, QDataType x)
{
	assert(pq);
	QueueNode* newnode = (QueueNode*)malloc(sizeof(QueueNode));
	if (newnode == NULL)
	{
		printf("malloc fail");
		exit(-1);
	}
	newnode->data = x;
	newnode->next = NULL;
	if (pq->ptail == NULL)
	{
		pq->ptail = pq->phead = newnode;
	}
	else
	{
		pq->ptail->next = newnode;
		pq->ptail = newnode;
	}
}

void QueuePop(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));
	if (pq->phead->next == NULL)
	{
		free(pq->phead);
		pq->phead = pq->ptail = NULL;
	}
	else
	{
		QueueNode* next = pq->phead->next;
		free(pq->phead);
		pq->phead = next;
	}
}

int QueueSize(Queue* pq)
{
	assert(pq);
	int n = 0;
	QueueNode* cur = pq->phead;
	while (cur)
	{
		n++;
		cur = cur->next;
	}
	return n;
}

QDataType QueueFront(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));
	return pq->phead->data;
}

QDataType Queuerear(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));

	return pq->ptail->data;
}

bool QueueEmpty(Queue* pq)
{
	assert(pq);
	return pq->phead == NULL && pq->ptail == NULL;
}