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
	printf("1.尾插数据   2.头插数据 \n");
	printf("3.尾删数据   4.头删数据\n");
	printf("5.打印      0. 退出\n");
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
		printf("请选择操作选项:>");
		scanf("%d", &op);
		switch (op)
		{
		case 0:
			break;
		case 1:
			printf("请输入尾插数据，以-1结束：");
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
			printf("无此选项，请重新输入\n");
			break;
		}
	} while (op != 0);

	SeqListDestory(&s);
	return 0;
}