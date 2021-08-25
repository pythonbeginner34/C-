#define _CRT_SECURE_NO_WARNINGS 1
#include"Queue.h"

int main()
{
	Queue qu;
	int x = 0;
	QueueInit(&qu);
	QueuePush(&qu, 1);
	QueuePush(&qu, 2);
	QueuePush(&qu, 3);
	QueuePush(&qu, 4);
	QueuePop(&qu, &x);
	printf("%d\n", x);
	QueuePop(&qu, &x);
	printf("%d\n", x);
	QueuePush(&qu, 5);
	QueuePrint(&qu);
	QueuePush(&qu, 6);
	QueuePush(&qu, 7);
	QueuePrint(&qu);
	QueuePop(&qu, &x);
	QueuePrint(&qu);
	DestoryQueue(&qu);
	return 0;
}