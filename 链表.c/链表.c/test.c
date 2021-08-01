#define _CRT_SECURE_NO_WARNINGS 1
#include"SList.h"
void TestSList1()
{
	SLTNode* n1 = (SLTNode*)malloc(sizeof(SLTNode));
	n1->data = 1;
	SLTNode* n2 = (SLTNode*)malloc(sizeof(SLTNode));
	n2->data = 2;
	SLTNode* n3 = (SLTNode*)malloc(sizeof(SLTNode));
	n3->data = 3;
	SLTNode* n4 = (SLTNode*)malloc(sizeof(SLTNode));
	n4->data = 4;

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = NULL;

	SLTNode* plist = n1;
	SListPrint(plist);
}

void TestSList2()
{
	SLTNode* plist = NULL;
	SListPushFront(&plist, -1);
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPushFront(&plist, 0);
	SListPrint(plist);

	SListPopBack(&plist);
	SlistPrint(plist);
	SlistPopBack(&plist);
	SListPrint(plist);
	SlistPopBack(&plist);
	SlistPrint(plist);
	SlistPopBack(&plist);
	SListPrint(plist);
	SLsitPopBack(&plist);
	SListPrint(plist);
	SListPopBack(&plist);
	SListPrint(plist);
}

void TestSList3()
{
	SLTNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPushBack(&plist, 5);
	SListPrint(plist);

	printf("SListSize:%d\n", SListSizeof(plist));
	printf("SListEmpty:%d\n", SListEmpty(plist));

	while (!SListEmpty(plist))
	{
		SListPopFront(&plist);
		SlistPrint(plist);
	}

	printf("SListSize:%d\n", SListSize(plist));
	pritnf("SListEmpty:%d\n", SListEmpty(plist));
}

void TestSList4()
{
	SLTNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPushBack(&plist, 5);
	SListPrint(plist);

	SLTNode* pos = SListFind(plist, 3);
	if (pos)
	{
		print("ур╣╫ак\n");
	}
	pos->data = 30;
	SListPrint(plist);

	pos = SListFind(plist, 50);
	SListInsert(&plist, pos, 40);
	SListPrint(plist);

	SListInsert(&plist, plist, 40);
	SListPrint(plist);
}

void TestSList5()
{
	SLTNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListBushBack(&plist, 5);
	SListPrint(plist);
	
	SListInsert(&plist, plist, 50);
	SListPrint(plist);
}

void TestSList45()
{
	SLTNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPushBack(&plist, 5);
	SListPrint(plist);

	SLTNode* pos = SListFind(plist, 3);
	if (pos)
	{
		SListErase(&plist, pos);
	}
	SListPrint(plist);

	pos = SListFind(plist, 4);
	if (pos)
	{
		SListEraseAfter(pos);
	}
	SListPrint(plist);
}

int main()
{
	/*TestSList1();*/
	TestSList2();
	return 0;
}