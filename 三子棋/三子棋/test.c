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
	//储存数据-二维数组
	char board[ROW][COL];
	//初始化棋盘 - 初始化空格
	InitBoard(board, ROW, COL);
	//打印一下棋盘 - 本质是打印数组内容
	DisplayBoard(board, ROW, COL);
	
	char tmp = 0;
	while (1)
	{
		//玩家走
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢得游戏
	    tmp = IsWin(board, ROW, COL, '*');
		if (tmp != 'C')
		{
			break;
		}
		//电脑走
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑是否赢得游戏
		tmp = IsWin(board, ROW, COL, '#');
		if (tmp != 'C')
		{
			break;
		}
	}
	if (tmp == '*')
	{
		printf("玩家获胜\n");
	}
	else if (tmp  == '#')
	{
		printf("电脑获胜\n");
	}
	else
	{
		printf("平局\n");
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
		printf("请选择: >");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);
	return 0;
}