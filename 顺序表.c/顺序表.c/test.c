#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

void TestSeqList1()
{
	SLT s;

	SeqListInit(&s);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	SeqListPushBack(&s, 5);
	SeqListPrint(&s);

	SeqListPushFront(&s, -1);

	SeqListPrint(&s);
	SeqListPopBack(&s);
	SeqListPrint(&s);

	SeqListPopFront(&s);
	SeqListPopFront(&s);
	SeqListPopFront(&s);
	SeqListPopFront(&s);
	SeqListPrint(&s);

	SeqListInsert(&s, 5, 5);
	SeqListPrint(&s);

	SeqListDestory(&s);
}

void menu()
{
	printf("******************************\n");
	printf("1.β������   2.ͷ������ \n");
	printf("3.βɾ����   4.ͷɾ����\n");
	printf("5.��ӡ      0. �˳�\n");
	printf("*******************************\n");
}

int main()
{
	int op = 0;
	SLT s;
	int val = 0;
	SeqListInit(&s);
	do
	{
		menu();
		printf("��ѡ�����ѡ��:>");
		scanf("%d", &op);
		switch (op)
		{
		case 0:
			break;
		case 1:
			printf("������β�����ݣ���-1������");
			scanf("%d", &val);
			while (val != -1)
			{
				SeqListPushBack(&s, val);
				scanf("%s", &val);
			}
			break;
		case 2:
			break;
		case 3:
			SeqListPopBack(&s);
			break;
		case 4:
			break;
		case 5:
			SeqListPrint(&s);
			break;
		default:
			printf("�޴�ѡ�����������\n");
			break;
		}
	} while (op != 0);

	SeqListDestory(&s);
	return 0;
}