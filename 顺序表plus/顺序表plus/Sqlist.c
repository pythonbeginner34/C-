#define _CRT_SECURE_NO_WARNINGS 1
#include"Sqlist.h"
#define InitSize 10

void SqlistInit(SLT* psl)
{
	assert(psl);
	psl->a = NULL;
	psl->size = 0;
	psl->capacity = 0;
}

//void Sqlistinit(SLT* psl)//��ʼ���Ĺ���Ҳ���Բ���malloc���ٿռ䡣
//{
//	assert(psl);
//	SLT* p = (SLT*)malloc(sizeof(SqDataType) * InitSize);
//	if (p != NULL)
//	{
//		psl->a = p;
//	}
//	psl->capacity = InitSize;
//}

//void IncreaseSize(SLT* psl, int len)//ʹ��malloc���ݺ󵱿ռ䲻��ʱ�������ݣ�����ԭ���ݿ���ȥ��
//{
//	int* p = (SLT*)malloc(sizeof(SqDataType) * (psl->capacity + len));
//	for (int i = 0; i < psl->size; i++)
//	{
//		p[i] = psl->a[i];
//	}
//	free(psl->a);
//	psl->a = p;
//	psl->capacity = psl->capacity + len;
//}

void SqlistCheckCapacity(SLT* psl)
{
	assert(psl);
	if (psl->size == psl->capacity)
	{
		size_t newcapacity = psl->capacity == 0 ? 4 : psl->capacity;
		SLT* p = (SLT*)realloc(psl->a, sizeof(SqDataType) * newcapacity);
		if (p != NULL)
		{
			psl->a = p;
		}
		psl->capacity = newcapacity;
	}
}

void DestorySqlist(SLT* psl)
{
	assert(psl);
	if (psl->a != NULL)
	{
		free(psl->a);
		psl->a = NULL;
	}
	psl->capacity = psl->size = 0;
}

void SqlistPushBack(SLT* psl, int x)
{
	assert(psl);
	SlistCheckCapacity(psl);
	psl->a[psl->size - 1] = x;
	psl->size++;
}

void SqlistPushFront(SLT* psl, int x)
{
	assert(psl);
	SlistCheckCapacity(psl);
	int end = psl->size - 1;
	while (end >= 0)
	{
		psl->a[end + 1] = psl->a[end];
		end--;
	}
	psl->a[0] = x;
	psl->size++;
}


void SqlistInsert(SLT* psl, size_t pos, int x)
{
	assert(pos);
	assert(pos >= 0 && pos <= psl->size);
	SqlistCheckCapacity(psl);
	//int end = psl->size - 1;
	//while ((int)pos <= end)//���������ת����endΪ����ʱ����ִ������Կ��Կ��Ǳ�����endΪ����
	//{
	//	psl->a[end + 1] = psl->a[end];
	//}
	size_t end = psl->size;
	while (pos < end)//z����endΪ������������
	{
		psl->a[end] = psl->a[end - 1];
		end--;
	}
	psl->a[pos] = x;
	psl->size++;
}


void SqlistPopBack(SLT* psl)
{
	assert(psl);
	if (psl->size > 0)
	{
		psl->a[psl->size-1] = 0;
		psl->size--;
	}
}

void SqlistPopFront(SLT* psl)
{
	assert(psl);
	int begin = 1;
	int end = psl->size;
	for (begin = 1; begin < end; begin++)
	{
		psl->a[begin - 1] = psl->a[begin];
	}
	if (psl->size > 0)
	{
		psl->size--;
	}
}

void SqlistErase(SLT* psl, int pos)
{
	assert(psl);
	assert(pos < psl->size);
	int begin = pos + 1;
	while (begin < psl->size)
	{
		psl->a[begin - 1] = psl->a[begin];
		begin++;
	}
	psl->size--;
}
	
int SqlistFind(SLT* psl, int x)
{
	assert(psl);
	for (int i = 0; i < psl->size; i++)
	{
		if (psl->a[i] = x)
		{
			return i;
		}
	}
	return -1;
}