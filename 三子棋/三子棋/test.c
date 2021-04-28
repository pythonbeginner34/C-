#define _CRT_SECURE_NO_WARNINGS

#include "game.h"
#include<windows.h>
#include<stdlib.h>

void menu()
{
	printf("********************\n");
	printf("******* 1.play *****\n");
	printf("******* 0.exit *****\n");
	printf("********************\n");
}

void game()
{
	//��������-��ά����
	char board[ROW][COL];
	//��ʼ������ - ��ʼ���ո�
	InitBoard(board, ROW, COL);
	//��ӡһ������ - �����Ǵ�ӡ��������
	DisplayBoard(board, ROW, COL);
	
	char tmp = 0;
	while (1)
	{
		//�����
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ����Ϸ
	    tmp = IsWin(board, ROW, COL, '*');
		if (tmp != 'C')
		{
			break;
		}
		//������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ����Ϸ
		tmp = IsWin(board, ROW, COL, '#');
		if (tmp != 'C')
		{
			break;
		}
	}
	if (tmp == '*')
	{
		printf("��һ�ʤ\n");
	}
	else if (tmp  == '#')
	{
		printf("���Ի�ʤ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
	DisplayBoard(board, ROW, COL);
}

int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("��ѡ��: >");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��������Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}