#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"
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
		mine[x - 1][y + 1] - 8 * '0';//将字符数字零转换成数字零

}

void expand(char mine[ROWS][COLS], int x, int y, char show[ROWS][COLS], int* p)
{

	int i = -1;
	int j = -1;
	for (i = -1; i < 2; i++)      //边界，输入值边上的8个数
	{
		for (j = -1; j < 2; j++)
		{
			if (i != 0 || j != 0)      // 避免算到自己注意此处的逻辑关系
			{
				if (x + i >= 1 && x + i <= ROW && y + j >= 1 && y + j <= COL)     //x y坐标是否合法
				{
					if (show[x + i][y + j] == '*' && mine[x + i][y + j] != '1')//如果x,y附近的8个数没有被排查，并且不是雷，开始拓展。
					{

						int count = get_mine_count(mine, x + i, y + i);
						if (count != 0)//如果周围有雷不继续排查，并展示其位置附近雷的个数
						{
							show[x + i][y + j] = count + '0';
							(*p)++;
						}
						else//如果非零，将当前位置只为空格，并调用自身递归。
						{
							show[x + i][y + j] = ' ';
							(*p)++;//限制扫雷次数
							expand(mine, x + i, y + j, show, p);//使用递归进行扩展知道扩展到雷停止递归
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
	int win = 0;//记录扫雷次数
	while (win < row*col-EASY_COUNT)//扫雷次数最多为roe*col - EASY_COUNT;
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
					expand(mine, x, y, show, &win);  //如果周围没有雷，进行扩展，传址调用win统计扫雷次数
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
	if (win == row * col - EASY_COUNT)//如果排查次数达到上限，结束游戏，并输出，打印棋盘。
	{
		printf("恭喜你，排雷成功\n");
		DisplayBoard(mine, ROW, COL);
	}
}