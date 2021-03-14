#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"
#include <stdio.h>
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//打印列号
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <=row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);

		}
		printf("\n");
	}

}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;//1-9
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

//'1'-'0' = 1
//'3'-'0' = 3
int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x + 1][y - 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';

}

void expand(char mine[ROWS][COLS], int x, int y, char show[ROWS][COLS], int* p)
{

	int i = -1;
	int j = -1;
	for (i = -1; i < 2; i++)      //边界
	{
		for (j = -1; j < 2; j++)
		{
			if (i != 0 || j != 0)      // 避免算到自己注意此处的逻辑关系
			{
				if (x + i >= 1 && x + i <= ROW && y + j >= 1 && y + j <= COL)     //x y坐标是否合法
				{
					if (show[x + i][y + j] == '*' && mine[x + i][y + j] != '1')
					{

						int count = get_mine_count(mine, x + i, y + i);
						if (count != 0)
						{
							show[x + i][y + j] = count + '0';
							(*p)++;
						}
						else
						{
							show[x + i][y + j] = ' ';
							(*p)++;
							expand(mine, x + i, y + j, show, p);
						}

					}

				}
			}
		}
	}
}


void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row*col-EASY_COUNT)
	{
		printf("请输入排雷坐标:");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y > 1 && y <= col)
		{
			//坐标合法		
			//踩雷
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else  //非雷
			{
				//计算x,y 坐标周围有几个雷
				int count = get_mine_count(mine, x, y);
				if (count == 0)
				{
					show[x][y] = ' ';
					win++;
					expand(mine, x, y, show, &win);  //如果周围没有雷，进行扩展
					DisplayBoard(show, ROW, COL);
				}
				else
				{
					show[x][y] = count + '0';
					DisplayBoard(show, ROW, COL);
				}
			}
		}
		else
		{
			printf("输入非法坐标， 请重新输入！\n");

		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你，排雷成功\n");
		DisplayBoard(mine, ROW, COL);
	}
}