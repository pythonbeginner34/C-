#define _CRT_SECURE_NO_WARNINGS 1
#include"Queue.h"

//void QueueInit(Queue* pq)//不带头结点
//{
//	assert(pq);
//	pq->front = NULL;
//	pq->rear = NULL;
//}

void QueueInit(Queue* pq)//带头结点
{
	assert(pq);
	QueueNode* head = (QueueNode*)malloc(sizeof(QueueNode));
	if (head == NULL)
	{
		printf("malloc fail");
		exit(-1);
	}
	head->next = NULL;
	head->data = 0;
	pq->front = pq->rear = head;
}

void DestoryQueue(Queue* pq)//不带结点和不带头结点销毁数组是一样的
{
	assert(pq);
	QueueNode* cur = pq->front;
	while (cur)
	{
		QueueNode* next = cur->next;
		free(cur);
		cur = next;
	}
	pq->front = pq->rear = NULL;
	printf("销毁成功!");
}

//void QueuePush(Queue* pq, QuDataType x)//不带头结点
//{
//	assert(pq);
//	QueueNode* newnode = (QueueNode*)malloc(sizeof(QueueNode));
//	if (newnode == NULL)
//	{
//		printf("malloc fail\n");
//		exit(-1);
//	}
//	newnode->next = NULL;
//	newnode->data = x;
//	if (pq->rear == NULL)
//	{
//		pq->front = pq->rear = newnode;
//	}
//	else
//	{
//		pq->rear->next = newnode;
//		pq->rear = newnode;
//	}
//}

void QueuePush(Queue* pq, QuDataType x)//带头结点
{
	assert(x);
	QueueNode* newnode = (QueueNode*)malloc(sizeof(QueueNode));
	if (newnode == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	newnode->next = NULL;
	newnode->data = x;
	pq->rear->next = newnode;
	pq->rear = newnode;
}

//bool QueueEmpty(Queue* pq)//不带头结点
//{
//	assert(pq);
//	return pq->front == NULL;
//}

bool QueueEmpty(Queue* pq)//带头结点
{
	assert(pq);
	return pq->front->next == NULL;
}

//void QueuePop(Queue* pq, QuDataType* x)//不带头结点
//{
//	assert(pq);
//	assert(!QueueEmpty(pq));
//	if (pq->front->next == NULL)
//	{
//		*x = pq->front->data;
//		free(pq->front);
//		pq->front = pq->rear = NULL;
//	}
//	else
//	{
//		QueueNode* next = pq->front->next;
//		*x = pq->front->data;
//		free(pq->front);
//		pq->front = next;
//	}
//}

void QueuePop(Queue* pq, QuDataType* x)//带头结点
{
	assert(pq);
	assert(pq->front->next);
	QueueNode* cur = pq->front->next;
	QueueNode* next = cur->next;
	pq->front->next = next;
	*x = cur->data;
	free(cur);
}

//void QueuePrint(Queue* pq)//不带头结点
//{
//	assert(pq);
//	QueueNode* cur = pq->front;
//	while (cur)
//	{
//		printf("%d ", cur->data);
//		cur = cur->next;
//	}
//	printf("\n");
//}

void QueuePrint(Queue* pq)//带头结点
{
	assert(pq);
	assert(pq->front->next);
	QueueNode* cur = pq->front->next;
	while (cur)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}