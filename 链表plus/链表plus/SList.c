#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"

//不带头结点的链表的初始化。
void LinkInit(LNode* phead)
{
	phead = NULL;//初始化链表此时phead并没有指向结点，这么做的目的时防止脏数据
}

//带头结点的链表的初始化
//void LinkInit(LNode** pphead)
//{
//	LNode* p = (LNode*)malloc(sizeof(LNode));
//	if (p != NULL)
//	{
//		*pphead = p;
//	}
//	(*pphead)->next = NULL;
//	(*pphead)->data = 0;//头结点中的数据域可以任意存放，不进行初始化也可以。
//}

//增加新的结点
LNode* BuylistNode(LDataType x)
{
	LNode* newnode = (LNode*)malloc(sizeof(LNode));
	if (newnode = NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	newnode->next = NULL;
	newnode->data = x;
	return newnode;
}

//不带结点的链表在链表尾部插入数据
void LinklistPushBack(LNode** pphead, LDataType x)
{
	assert(pphead);
	if (*pphead == NULL)
	{
		LNode* newnode = BuylistNode(x);
		*pphead = newnode;
	}
	else
	{
		LNode* tail = *pphead;
		while (tail->next)
		{
			tail = tail->next;
		}
		LNode* newnode = BuylistNode(x);
		tail->next = newnode;
		tail = newnode;
	}
}

//带结点的链表在尾部插入数据
//void LinklistPushBack(LNode** pphead, LDataType x)
//{
//	assert(pphead);
//	if ((*pphead)->next == NULL)
//	{
//		LNode* newnode = BuylistNode(x);
//		(*pphead)->next = newnode;
//	}
//	else
//	{
//		LNode* tail = *pphead;
//		while (tail->next)
//		{
//			tail = tail->next;
//		}
//		LNode* newnode = BuylistNdoe(x);
//		tail->next = newnode;
//		tail = newnode;
//	}
//}

//不带头结点的链表头插数据
void ListPushFront(LNode** pphead, LDataType x)
{
	assert(pphead);
	LNode* newnode = BuylistNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
}

//带头结点的链表头插数据
//void ListPushFront(LNode** pphead, LDataType x)
//{
//	assert(pphead);
//	LNode* newnode = BuylistNode(x);
//	LNode* cur = *pphead;
//	newnode->next = cur->next;//这里注意要先把头结点下一个结点的值赋给新结点的next后，再将新结点的值赋给头结点的next
//	cur->next = newnode;
//}

//不带头结点的链表插入方法一：指定元素前插入元素
void LinklistInsert(LNode** pphead, LNode* pos, LDataType x)
{
	assert(pphead);
	if (*pphead == pos)
	{
		ListPushFront(pphead, x);
	}
	else
	{
		LNode* prev = *pphead;//找要插入结点的前一个结点，然后利用尾插法插入数据。
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		LNode* newnode = BuylistNode(x);
		prev->next = newnode;
		newnode->next = pos;
	}
}

//不带头结点的链表插入方法二：指定元素前插入元素。
//void LinklistInsert(LNode** pphead, LNode* pos, LDataType x)//这种方法的优点在于可以不用便利链表去找pos的前一个结点，缺点是不能满足尾插要求
//{
//	assert(pphead);
//	if (*pphead == pos)//如果在c++中可以使用引用的方法，可以省去这一步，但是尾插的时候就，不可以省略
//	{
//		ListPushFront(pphead, x);
//	}
//	else
//	{
//		LNode* newnode = BuylistNode(x);//通过在pos后面尾插一个结点，然后来交换两个结点的data来实现pos位置的插入
//		newnode->next = pos->next;
//		pos->next = newnode;
//		int tmp = pos->data;
//		pos->next = newnode->data;
//		newnode->next = tmp;
//	}
//	if (pos->next == NULL && pos != NULL)
//	{
//		ListPsuhBack(pphead, x);
//	}
//}

//不带头结点的位序计算
int ListSize(LNode* phead)
{
	assert(phead);
	int size = 0;
	LNode* cur = phead;
	while (cur)
	{
		size++;
		cur = cur->next;
	}
	return size;
}

//带头结点的链表位序计算
int listSize(LNode* phead)
{
	assert(phead);
	int size = 0;
	LNode* cur = phead->next;
	while (cur)
	{
		size++;
		cur = cur->next;
	}
	return size;
}


//不带头结点的链表位序计算
void ListInsert(LNode** pphead, int i, int x)
{
	assert(pphead);
	if (i < 1)
	{
		printf("Insert fail\n");
		exit(-1);
	}
	if (i == 1)//不带头结点时特殊的是i=1时，当i=1时指针指向首结点，而要在i=1的位置插入，于是只能用头插法。
	{
		LNode* newnode = (LNode*)malloc(sizeof(LNode));
		newnode->data = x;
		newnode->next = *pphead;
		*pphead = newnode;
	}
	int j = 1;
	LNode* cur = *pphead;
	while (cur != NULL && j < i -1)//这样设计可以模拟数组，输入的第n个数据的下标n-1，实际上位序i里不包含头节点，这里下标的含义就相当于目前位序，但是要是想要实际位序为n就要
		//在让指针移动到这个位置后，尾插，其实可以这样考虑，要在第i个位置插入数据，可以在第i-1位置进行尾插，那就要让指针移动i-2步到第i-1个指针d的位置，能走少步实际取决于j和i
		//判断条件

	{
		j++;
		cur = cur->next;
	}
	LNode* newnode = BuylistNode(x);
	newnode->next = cur->next;
	cur->next = newnode;
}
//带头结点的链表在链表的某个位序上插入数据
void ListInsert(LNode* phead, int i, int x)
{
	asset(phead);
	int size = ListSize(phead);
	assert(i > 0 && i <= size+1);
	LNode* p = phead;
	int j = 0;
	while (p != NULL && j < i - 1)//由于具有头节点所以要插入在位序为i的位置时，实际要插入在i+1的位置上，也就是在位置为i的位置上进行尾插实际要让指针走i-1步0~i-2刚好就时i-1步
	{
		p = p->next;
		j++;
	}
	LNode* newnode = BuylistNode(x);
	newnode->next = p->next;
	p->next = newnode;
}
//带头结点和不带头节点的pos后面插入数据是相同的
void LinklistInsertAfter(LNode* phead, LNode* pos, LDataType x)
{
	assert(phead);
	LNode* newnode = BuylistNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}

//不带头节点的尾删
void ListPopBack(LNode* phead)
{
	assert(phead);
	LNode* prev = NULL;
	LNode* tail = phead;
	while (tail->next != NULL)
	{
		prev = tail;
		tail = tail->next;
	}
	if (phead->next != NULL)//不满足条件说明链表中只有一个元素
	{
		prev->next = NULL;
	}
	free(tail);
	tail = NULL;
}

//带头结点的尾删
//void ListPopBack(LNode* phead)
//{
//	assert(phead);
//	LNode* tail = phead;
//	LNode* prev = phead;
//	while (tail->next != NULL)
//	{
//		prev = tail;
//		tail = tail->next;
//	}
//	prev->next = NULL;
//	free(tail);
//	tail = NULL;
//}

//不带头结点的链表头删
void ListPopFront(LNode** pphead)
{
	assert(pphead);
	assert(*pphead);
	LNode* cur = *pphead;
	LNode* next = cur->next;
	free(cur);
	cur = next;
}

//带头结点的链表头删
//void ListPopFront(LNode* phead)
//{
//	assert(phead);
//	assert(phead->next);
//	LNode* next = phead->next;
//	phead->next = next->next;
//	free(next);
//	next = NULL;
//}


//不带头结点的链表中任意元素的删除(给定地址）
void LinklistErase(LNode** pphead, LNode* pos)
{
	assert(pphead);
	assert(pos);
	if (*pphead == pos)//链表中只有一个元素时
	{
		ListPopFront(pphead);
	}
	else
	{
		LNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next = pos->next;
		free(pos);
		pos = NULL;
	}
}



//带头结点的链表删除任意元素(给定地址）
void LinklistErase(LNode* phead, LNode* pos)
{
	assert(phead);
	assert(phead->next);
	assert(pos);
	LNode* prev = phead;
	while (prev->next != pos && phead != NULL)
	{
		prev = prev->next;
	}
	prev->next = pos->next;
	free(pos);
	pos = NULL;
}

//删除指定位置的元素（给定地址）
void LinklistErase(LNode* phead, LNode* pos)//将指定结点的下一节点的值给指定结点，然后将指定结点删除。
{
	assert(pos);//如果要删除的为最后一个结点，则调用尾删。
	if (pos->next == NULL)
	{
		ListPopBack(phead);
	}
	else
	{
		LNode* next = pos->next;
		pos->data = next->data;
		pos->next = next->next;
		free(next);
		next = NULL;
	}
}

//带头结点的链表删除指定位序的结点
void ListDelete(LNode* phead, int i)
{
	assert(phead);
	assert(i >= 1);
	LNode* cur = phead;
	int j = 0;
	while (cur != NULL && j < i - 1)
	{
		cur = cur->next;
	}
	if (cur == NULL)
	{
		printf("delete fail\n");
		exit(-1);
	}
	LNode* next = cur->next;
	if (next == NULL)
	{
		printf("delete fail\n");
		exit(-1);
	}
	cur->next = next->next;
	free(next);
	next = NULL;
}

//不带头结点删除链表指定位序
void ListDelete(LNode** pphead, int i)
{
	assert(pphead);
	assert(i >= 1);
	if (i == 1)
	{
		ListPopFront(pphead);
	}
	LNode* cur = *pphead;
	int j = 1;
	while (cur != NULL && j < i - 1)
	{
		cur = cur->next;
	}
	if (cur == NULL)
	{
		printf("delete fail\n");
		exit(-1);
	}
	LNode* next = cur->next;
	if (next == NULL)
	{
		printf("delete fail\n");
		exit(-1);
	}
	cur->next = next->next;
	free(next);
	next = NULL;
}

//不带头结点的链表判空
bool ListeEmpty(LNode* phead)
{
	return phead == NULL;
}

//带头结点的链表判空
//bool ListEmpty(LNode* phead)
//{
//	return phead->next == NULL;
//}

