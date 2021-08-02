#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

void SeqListInit(SLT* psl)
{
	assert(psl);
	psl->a = NULL;
	psl->size = psl->capicity = 0;
}

void  SeqListDestory(SLT* psl)
{
	assert(psl);
	if (psl->a)
	{
		free(psl->a);
		psl->a = NULL;
	}
	psl->size = psl->capicity = 0;
}

void SeqListPrint(SLT* psl)
{
	assert(psl);
	for (int i = 0; i < psl->size; i++)
	{
		printf("%d ", (psl->a)[i]);
	}
	printf("\n");
}

void SeqListCheckCapicity(SLT* psl)
{
	assert(psl);

	//除非size和capicity都是零否则两者相等时一定是空间已经满了，需要增容。
	if (psl->size == psl->capicity)
	{
		size_t newcapicity = psl->capicity == 0 ? 4 : psl->capicity * 2;
		psl->a = (SQDataType*)realloc(psl->a, newcapicity * sizeof(SQDataType));
		psl->capicity = newcapicity;
	}
}


void SeqListPushBack(SLT* psl, SQDataType x)
{
	assert(psl);

	SeqListCheckCapicity(psl);
	psl->a[psl->size] = x;
	psl->size++;
}

void SeqListPushFront(SLT* psl, SQDataType x)
{
	assert(psl);

	SeqListCheckCapicity(psl);
	int end = psl->size - 1;
	while (end <= 0)
	{
		psl->a[end + 1] = psl->a[end];
		end--;
	}
	psl->a[0] = x;
	psl->size++;
}

void SeqListPopBack(SLT* psl)
{
	assert(psl);
	psl->size--;
}

void SeqListPopFront(SLT* psl)
{
	assert(psl);
	assert(psl->size);
	int begin = 1;
	while (begin < psl->size)
	{
		psl->a[begin - 1] = psl->a[begin];
		begin++;
	}
	psl->size--;
}

int SeqListInsert(SLT* psl, size_t pos, SQDataType x)
{
	assert(psl);
	assert(pos <= psl->size && pos >= 0);
	SeqListCheckCapicity(psl);
	size_t end = psl->size;
	while (pos < end)
	{
		psl->a[end] = psl->a[end - 1];
		--end;
	}
	psl->a[pos] = x;
	psl->size++;
}

void SeqListErase(SLT* psl, size_t pos)
{
	assert(psl);
	assert(pos < psl->size);

	size_t begin = pos + 1;
	while (begin < psl->size)
	{
		psl->a[begin - 1] = psl->a[begin];
		begin++;
	}
	psl->size--;
}

size_t SeqListSize(SLT* psl)
{
	assert(psl);
	return psl->size;
}

void SeqListAt(SLT* psl, size_t pos, SQDataType x)
{
	assert(psl);
	assert(pos < psl->size);
	psl->a[pos] = x;
}