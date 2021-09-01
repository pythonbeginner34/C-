#define _CRT_SECURE_NO_WARNINGS 1
#include"Heap.h"

void HeapInit(HP* php, HPDataType* a, int n)
{
	assert(php);
	php->a = (HPDataType*)malloc(sizeof(HPDataType) * n);
	if (php == NULL)
	{
		printf("malloc fail");
		exit(-1);
	}
	memcpy(php->a, a, sizeof(HPDataType) * n);
	for (int i = (n - 1 - 1) / 2; i >= 0; --i)
	{
		Adjustdown(php->a, n, i);
	}
	php->size = n;
	php->capacity = n;
}

void HeapDestroy(HP* php)
{
	assert(php);
	free(php->a);
	php->a = NULL;
	php->size = 0;
	php->capacity = 0;
}