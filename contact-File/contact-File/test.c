#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
# include "contact.h"

void menu()
{
	printf("************************************************\n");
	printf("******** 1.add       2.del      ****************\n");
	printf("******** 3.search    4.modify   ****************\n");
	printf("*********5.show      6.sort     ****************\n");
	printf("*********7.Save      0.exit     ****************\n");
	printf("************************************************\n");
}
int main()
{
	int input = 0;
	//����ͨѶ¼
	int size = 0;
	struct Contact con;//con����ͨѶ¼�����������dataָ�룬��size��capacity.
	//��ʼ��ͨѶ¼
	InitContact(&con);
	//
	do
	{
		menu();
		printf("��ѡ��: >");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case EXIT:
			//����ͨѶ¼-�ͷŶ�̬���ٵ��ڴ�
			SaveContact(&con);
			DestoryContact(&con);
			printf("�˳�ͨѶ¼\n");
			break;
		case SAVE:
			SaveContact(&con);
			break;
		default:
			printf("ѡ�����\n");
			break;
		}

	} while (input);
	return 0;
}