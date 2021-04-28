#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			int j = 0;
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0; 
	int y = 0;
	printf("玩家走: >\n");

	while (1)
	{
		printf("请输入下棋的坐标: >");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//下棋
			//判断坐标是否被占用
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}	
			else
			{
				printf("坐标被占用，请重新输入。\n");
			}
		}
		else
		{
			printf("坐标非法,请重新输入。\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑走: >\n");

	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' ')//判断占用
		{
			board[x][y] = '#';
			break;
		}
	}
}

int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;//棋盘满了
}

char IsWin(char board[ROW][COL], int row, int col, char ret)
{
	int i = 0;
	int j = 0;
	int num = 0;
	//判断三行
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == board[i][j+1] && board[i][j] == ret)
			{
				num++;
				if (num == 4)
				{
					return ret;
				}
			}
			else
			{
				num = 0;
			}
		}
	}
	//判断三列
	for (j = 0; j < col; j++)
	{
		for (i = 0; i < row; i++)
		{
			if (board[i][j] == board[i+1][j] && board[i][j] == ret)
			{
				num++;
				if (num == 4)
				{
					return ret;
				}
			}
			else
			{
				num = 0;
			}
		}
	}

	//判断对角线
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (i == j)
			{
				if (board[i][j] == board[i+1][j+1] && board[i][j] == ret)
				{
					num++;
					if (num == 4)
					{
						return ret;
					}
				}
				else
				{
					num = 0;
				}
			}
		}
	}
	
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if ((i + j) == row - 1)
			{
				if (board[i][j] == board[i - 1][j + 1] && board[i][j] == ret)
				{
					num++;
					if (num == 4)
					{
						return ret;
					}	
				}
				else
				{
					num = 0;
				}
			}
		}
	}

	//判断平局
	//如果棋盘满了返回1，不满返回0；
	int ful = IsFull(board, row, col);
	if(ful == 1)
	{
		return 'Q';
	}
	//继续游戏
	return 'C';
}
