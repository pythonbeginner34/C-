#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"

void SListPrint(SLTNode* phead)
{
	SLTNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}

SLTNode* BuySListNode(SLTDataType x)
{
	SLTNode* node = (SLTNode*)malloc(sizeof(SLTNode));
	if (node == NULL)
	{
		printf("malloc fail\n");
		/*exit(-1);*/
	}
	node->data = x;
	node->next = NULL;
	return node;
}

//void SListPushBack(SLTNode* phead, SLTDataType x)//β��
//{
//	SLTNode* tail = phead;//���ڴ��󣬵�����Ϊ��ʱ��pheadΪ��ָ�룬tailҲΪ��ָ�뷢������
//	while ((tail->next) != NULL)
//	{
//		tail->next = tail;
//	}
//	SLTNode* newnode = BuySListNode(x);
//	tail->next = newnode;
//}

//void SLisPushBack(SLTNode* phead, SLTDataType x)//����һ��ָ�룬�൱��ָ��Ĵ�ֵ���ã�����ı�һ��ָ�롣
//{
//	if (phead == NULL)
//	{
//		SLTNode* newnode = BuySlistNode(x);
//		phead = newnode;
//	}
//	else
//	{
//		SLTNode* fail = phead;
//		while (fail != NULL)
//		{
//			fail = fail->next;
//		}
//		SLTNode* newnode = BuySlistNode(x);
//		fail->next = newnode;
//	}
//}
void SListPushBack(SLTNode** pphead, SLTDataType x)//���ö���ָ�룬�൱��ָ��Ĵ�ַ���ã����Ըı�һ��ָ�롣
{
	assert(pphead);
	if (*pphead == NULL)
	{
		SLTNode* newnode = BuySListNode(x);
		*pphead = newnode;
	}
	else
	{
		SLTNode* tail = *pphead;
		while ((tail->next) != NULL)
		{
			tail = tail->next;
		}
		SLTNode* newnode = BuySListNode(x);
		tail->next = newnode;
	}
}

void SListPushFront(SLTNode** pphead, SLTDataType x)//ͷ��
{
	assert(pphead);
	SLTNode* newnode = BuySListNode(x);//����������Ϊ�յ����
	newnode->next = *pphead;
	*pphead = newnode;
}

void SListPopFront(SLTNode** pphead)
{
	assert(pphead);
	assert(*pphead);//����Ϊ�ղ��ܵ�����Ԫ��
	//if ((*pphead)->next == NULL)//������ֻ��һ��Ԫ��,else�е������԰���if�е����
	//{
	//	free(*pphead);
	//	*pphead = NULL;
	//}
	/*else
	{*/
		SLTNode* next = (*pphead)->next;
		free(*pphead);
		*pphead = next;
	/*}*/
}

void SListPopBack(SLTNode** pphead)
{
	assert(pphead);
	assert(*pphead);
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		SLTNode* tail = *pphead;
		SLTNode* prev = *pphead;
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}
		prev->next = NULL;
		free(tail);
		tail = NULL;
	}
}

int SListSize(SLTNode* phead)
{
	int size = 0;
	SLTNode* cur = phead;
	while (cur)
	{
		size++;
		cur = cur->next;
	}
	return size;
}

bool SListEmpty(SLTNode* phead)
{
	return phead == NULL;
	return phead == NULL ? true : false;
}

SLTNode* SListFind(SLTNode* phead, SLTDataType x)
{
	SLTNode* cur = phead;
	while (cur)
	{
		if (cur->data == x)
		{
			return cur;
		}
		else
		{
			cur = cur->next;
		}
	}
	return NULL;
}

//��posǰ�����
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x)
{
	assret(pphead);
	assert(pos);
	if (*pphead == pos)//���Ҫ�����λ������λ�����SListPushFront()
	{
		SListPushFront(pphead, x);
	}
	else
	{
		SLTNode* prev = pphead;//���pos��λ�ò�����λ������ǰ��ķ������ҵ�pos��ǰһλ����pos��ǰ�����
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		SLTNode* newnode = BuySListNode(x);
		newnode->next = pos;
		prev->next = newnode;
	}
}

//��pos�������
void SListInsertAfter(SLTNode* pos, SLTDataType x)
{
	assert(pos);
	SLTNode* newnode = BuySListNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}

void SListErase(SLTNode** pphead, SLTNode* pos)
{
	assret(pphead);
	assert(pos);
	if (*pphead == pos)
	{
		SListPopFront(pphead);
	}
	else
	{
		SLTNode* prev = *(pphead);
		while (prev->next != NULL)
		{
			prev = prev->next;
		}
		prev->next = pos->next;
		free(pos);
		pos = NULL;
	}
}

void SListEraseAfter(SLTNode* pos)
{
	assert(pos);
	assert(pos->next);
	SLTNode* next = pos->next;//pos����Ԫ�ص�ַ�����´�����ָ��
	pos->next = next->next;//�����¸�Ԫ�ص�ַ����pos��洢�ĵ�ַ
	//�൱��pos->next = pos->next->next
	free(next);
	next = NULL;
}

