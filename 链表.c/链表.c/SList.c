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

//void SListPushBack(SLTNode* phead, SLTDataType x)//尾插
//{
//	SLTNode* tail = phead;//存在错误，当链表为空时，phead为空指针，tail也为空指针发生错误。
//	while ((tail->next) != NULL)
//	{
//		tail->next = tail;
//	}
//	SLTNode* newnode = BuySListNode(x);
//	tail->next = newnode;
//}

//void SLisPushBack(SLTNode* phead, SLTDataType x)//采用一级指针，相当于指针的传值调用，不会改变一级指针。
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
void SListPushBack(SLTNode** pphead, SLTDataType x)//采用二级指针，相当于指针的传址调用，可以改变一级指针。
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

void SListPushFront(SLTNode** pphead, SLTDataType x)//头插
{
	assert(pphead);
	SLTNode* newnode = BuySListNode(x);//包含了链表为空的情况
	newnode->next = *pphead;
	*pphead = newnode;
}

void SListPopFront(SLTNode** pphead)
{
	assert(pphead);
	assert(*pphead);//链表为空不能弹出首元素
	//if ((*pphead)->next == NULL)//链表中只有一个元素,else中的语句可以包含if中的语句
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

//在pos前面插入
void SListInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x)
{
	assret(pphead);
	assert(pos);
	if (*pphead == pos)//如果要插入的位置在首位则调用SListPushFront()
	{
		SListPushFront(pphead, x);
	}
	else
	{
		SLTNode* prev = pphead;//如果pos的位置不是首位，采用前插的方法，找到pos的前一位，在pos的前面插入
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		SLTNode* newnode = BuySListNode(x);
		newnode->next = pos;
		prev->next = newnode;
	}
}

//在pos后面插入
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
	SLTNode* next = pos->next;//pos后面元素地址赋给新创建的指针
	pos->next = next->next;//把下下个元素地址赋给pos里存储的地址
	//相当于pos->next = pos->next->next
	free(next);
	next = NULL;
}

