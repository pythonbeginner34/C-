#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"

//����ͷ��������ĳ�ʼ����
void LinkInit(LNode* phead)
{
	phead = NULL;//��ʼ�������ʱphead��û��ָ���㣬��ô����Ŀ��ʱ��ֹ������
}

//��ͷ��������ĳ�ʼ��
//void LinkInit(LNode** pphead)
//{
//	LNode* p = (LNode*)malloc(sizeof(LNode));
//	if (p != NULL)
//	{
//		*pphead = p;
//	}
//	(*pphead)->next = NULL;
//	(*pphead)->data = 0;//ͷ����е���������������ţ������г�ʼ��Ҳ���ԡ�
//}

//�����µĽ��
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

//������������������β����������
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

//������������β����������
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

//����ͷ��������ͷ������
void ListPushFront(LNode** pphead, LDataType x)
{
	assert(pphead);
	LNode* newnode = BuylistNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
}

//��ͷ��������ͷ������
//void ListPushFront(LNode** pphead, LDataType x)
//{
//	assert(pphead);
//	LNode* newnode = BuylistNode(x);
//	LNode* cur = *pphead;
//	newnode->next = cur->next;//����ע��Ҫ�Ȱ�ͷ�����һ������ֵ�����½���next���ٽ��½���ֵ����ͷ����next
//	cur->next = newnode;
//}

//����ͷ����������뷽��һ��ָ��Ԫ��ǰ����Ԫ��
void LinklistInsert(LNode** pphead, LNode* pos, LDataType x)
{
	assert(pphead);
	if (*pphead == pos)
	{
		ListPushFront(pphead, x);
	}
	else
	{
		LNode* prev = *pphead;//��Ҫ�������ǰһ����㣬Ȼ������β�巨�������ݡ�
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		LNode* newnode = BuylistNode(x);
		prev->next = newnode;
		newnode->next = pos;
	}
}

//����ͷ����������뷽������ָ��Ԫ��ǰ����Ԫ�ء�
//void LinklistInsert(LNode** pphead, LNode* pos, LDataType x)//���ַ������ŵ����ڿ��Բ��ñ�������ȥ��pos��ǰһ����㣬ȱ���ǲ�������β��Ҫ��
//{
//	assert(pphead);
//	if (*pphead == pos)//�����c++�п���ʹ�����õķ���������ʡȥ��һ��������β���ʱ��ͣ�������ʡ��
//	{
//		ListPushFront(pphead, x);
//	}
//	else
//	{
//		LNode* newnode = BuylistNode(x);//ͨ����pos����β��һ����㣬Ȼ����������������data��ʵ��posλ�õĲ���
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

//����ͷ����λ�����
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

//��ͷ��������λ�����
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


//����ͷ��������λ�����
void ListInsert(LNode** pphead, int i, int x)
{
	assert(pphead);
	if (i < 1)
	{
		printf("Insert fail\n");
		exit(-1);
	}
	if (i == 1)//����ͷ���ʱ�������i=1ʱ����i=1ʱָ��ָ���׽�㣬��Ҫ��i=1��λ�ò��룬����ֻ����ͷ�巨��
	{
		LNode* newnode = (LNode*)malloc(sizeof(LNode));
		newnode->data = x;
		newnode->next = *pphead;
		*pphead = newnode;
	}
	int j = 1;
	LNode* cur = *pphead;
	while (cur != NULL && j < i -1)//������ƿ���ģ�����飬����ĵ�n�����ݵ��±�n-1��ʵ����λ��i�ﲻ����ͷ�ڵ㣬�����±�ĺ�����൱��Ŀǰλ�򣬵���Ҫ����Ҫʵ��λ��Ϊn��Ҫ
		//����ָ���ƶ������λ�ú�β�壬��ʵ�����������ǣ�Ҫ�ڵ�i��λ�ò������ݣ������ڵ�i-1λ�ý���β�壬�Ǿ�Ҫ��ָ���ƶ�i-2������i-1��ָ��d��λ�ã������ٲ�ʵ��ȡ����j��i
		//�ж�����

	{
		j++;
		cur = cur->next;
	}
	LNode* newnode = BuylistNode(x);
	newnode->next = cur->next;
	cur->next = newnode;
}
//��ͷ���������������ĳ��λ���ϲ�������
void ListInsert(LNode* phead, int i, int x)
{
	asset(phead);
	int size = ListSize(phead);
	assert(i > 0 && i <= size+1);
	LNode* p = phead;
	int j = 0;
	while (p != NULL && j < i - 1)//���ھ���ͷ�ڵ�����Ҫ������λ��Ϊi��λ��ʱ��ʵ��Ҫ������i+1��λ���ϣ�Ҳ������λ��Ϊi��λ���Ͻ���β��ʵ��Ҫ��ָ����i-1��0~i-2�պþ�ʱi-1��
	{
		p = p->next;
		j++;
	}
	LNode* newnode = BuylistNode(x);
	newnode->next = p->next;
	p->next = newnode;
}
//��ͷ���Ͳ���ͷ�ڵ��pos���������������ͬ��
void LinklistInsertAfter(LNode* phead, LNode* pos, LDataType x)
{
	assert(phead);
	LNode* newnode = BuylistNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}

//����ͷ�ڵ��βɾ
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
	if (phead->next != NULL)//����������˵��������ֻ��һ��Ԫ��
	{
		prev->next = NULL;
	}
	free(tail);
	tail = NULL;
}

//��ͷ����βɾ
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

//����ͷ��������ͷɾ
void ListPopFront(LNode** pphead)
{
	assert(pphead);
	assert(*pphead);
	LNode* cur = *pphead;
	LNode* next = cur->next;
	free(cur);
	cur = next;
}

//��ͷ��������ͷɾ
//void ListPopFront(LNode* phead)
//{
//	assert(phead);
//	assert(phead->next);
//	LNode* next = phead->next;
//	phead->next = next->next;
//	free(next);
//	next = NULL;
//}


//����ͷ��������������Ԫ�ص�ɾ��(������ַ��
void LinklistErase(LNode** pphead, LNode* pos)
{
	assert(pphead);
	assert(pos);
	if (*pphead == pos)//������ֻ��һ��Ԫ��ʱ
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



//��ͷ��������ɾ������Ԫ��(������ַ��
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

//ɾ��ָ��λ�õ�Ԫ�أ�������ַ��
void LinklistErase(LNode* phead, LNode* pos)//��ָ��������һ�ڵ��ֵ��ָ����㣬Ȼ��ָ�����ɾ����
{
	assert(pos);//���Ҫɾ����Ϊ���һ����㣬�����βɾ��
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

//��ͷ��������ɾ��ָ��λ��Ľ��
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

//����ͷ���ɾ������ָ��λ��
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

//����ͷ���������п�
bool ListeEmpty(LNode* phead)
{
	return phead == NULL;
}

//��ͷ���������п�
//bool ListEmpty(LNode* phead)
//{
//	return phead->next == NULL;
//}

