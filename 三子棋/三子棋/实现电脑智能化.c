#include<stdio.h>

#include "game.h"

Compo* AI(Compo* head, char board[ROW][COL], int row, int col, char color)
{
	int k = 0;
	int max = 0;
	int i = 0;
	int j = 0;
	int x = 0; 
	int y = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				k = calculate_value(i, j, board, color);
				if(k >= max)
				{
					x = i;
					y = j;
					max = k; 
				}
			}
		}
	}
	head->x = x;
	head->y = y;
	return head;
}

int checkaround2(int p, int q, char board[ROW][COL]);

int calculate_value(int x, int y, char board[ROW][COL], char color)
{
	int k = 0;
	int check = 0;

	int ch = checkaround2(x, y, board);

		switch (ch)
		{
		case 1:
		{
			k += Checkpos(x, y, board, color, 0, -1) + Checkpos(x, y, board, color, 0, 1);
			k += Checkpos(x, y, board, color, -1, 0) + Checkpos(x, y, board, color, 1, 0);
			k += Checkpos(x, y, board, color, -1, -1) + Checkpos(x, y, board, color, 1, 1);
			k += Checkpos(x, y, board, color, -1, 1) + Checkpos(x, y, board, color, 1, -1);
			break;
		}
		case 2:
		{
			k += Checkpos(x, y, board, color, 0, -1);//左
			k += Checkpos(x, y, board, color, 0, 1);//右
			k += Checkpos(x, y, board, color, -1, 0);//上
			k += Checkpos(x, y, board, color, 1, 0);//下
			k += Checkpos(x, y, board, color, -1, -1);//左上
			k += Checkpos(x, y, board, color, 1, -1);//左下
			k += Checkpos(x, y, board, color, -1, 1);//右上
			k += Checkpos(x, y, board, color, 1, 1);//右下
			break;
		}
		}
	return k;
}

int checkaround2(int p, int q, char board[ROW][COL])
{
	if ((board[p][q + 1] != ' ' && board[p][q - 1] != ' ' && board[p][q + 1] == board[p][q + 1])||
		(board[p + 1][q] != ' ' && board[p - 1][q] != ' ' && board[p + 1][q] == board[p - 1][q]) ||
		(board[p + 1][q + 1] != ' ' && board[p - 1][q - 1] != ' ' && board[p + 1][q + 1] == board[p - 1][q - 1]) ||
		(board[p + 1][q - 1] != ' ' && board[p - 1][q + 1] != ' ' && board[p + 1][q - 1] == board[p - 1][q + 1]))
	{
		return 1;
	}
		return 2;
}



int Checkpos(int p, int q, char board[ROW][COL], char color, int pos_x, int pos_y)
{
	int k = 0;
	int check;
	int ret = checkaround(p, q, board, pos_x, pos_y);
	
	if (ret)
	{
		check = ai_judge_line(board, ROW, COL, p + pos_x, q + pos_y, pos_x, pos_y, 1, color);
		k += checkline(1, check, p, q, board, color, pos_x, pos_y);

		check = ai_judge_line(board, ROW, COL, p + pos_x, q + pos_y, pos_x, pos_y, 2, color);
		k += checkline(2, check, p, q, board, color, pos_x, pos_y);

		check = ai_judge_line(board, ROW, COL, p + pos_x, q + pos_y, pos_x, pos_y, 3, color);
		k += checkline(3, check, p, q, board, color, pos_x, pos_y);

		check = ai_judge_line(board, ROW, COL, p + pos_x, q + pos_y, pos_x, pos_y, 4, color);
		k += checkline(4, check, p, q, board, color, pos_x, pos_y);
	}
	return k;
}

int checkaround(int p, int q, char board[ROW][COL], int pos_x, int pos_y)
{
	if (p + pos_x >= 0 && p + pos_x < ROW && q + pos_y >= 0 && q + pos_y < COL)
	{
		if (board[p + pos_x][q + pos_y] != ' ')
		{
			return 1;
		}
		return 0;
	}
	return 0;
}




int ai_judge_line(char board[ROW][COL], int row, int col, int XS, int YS, int dx, int dy, int num, char color)
{
	if ((XS < ROW) && (YS < COL) && (XS >= 0) && (YS >= 0) && (dx != 0 || dy != 0))
	{
		if ((XS + dx * (num - 1)) > ROW || ((XS + dx * (num - 1)) < 0) || ((YS + dy) * (num - 1) > COL) || ((YS + dy) * (num - 1)) < 0)
		{
			return 0;
		}
		else
		{
			int i = 0; 
			for (i = 1; i < num; i++)
			{
				if (board[XS][YS] != board[XS + (dx * i)][YS + (dy * i)])//查看num个棋子相等不相等
				{
					return 0;
				}
			}
			if (board[XS][YS] != color)//num个都是对手的棋子，且都在棋盘里。
			{
				return 1;
			}
			if (board[XS][YS] == color)//num个都是自己的棋子， 且都在棋盘里。
			{
				return 2;
			}
		}
	}
	return 0;
}



int checkline(int equal_num, int check, int p, int q, char board[ROW][COL], char color, int dx, int dy)
{
	int k = 0; 
	int value = 1;
	int num = equal_num + 1;
	for (; equal_num > 0; equal_num--)
	{
		value = value * 10;
	}
	if (check)
	{
		k += value;
		if (check == 1)
		{
			k += 20;//对手的相等的棋子比自己相等棋子的分值大
		}
		if (check == 2)
		{
			k += 10;
		}
		if ((board[p][q - num] == ' ' && dy == -1) || (board[p][q + num] == ' ' && dy == 1))
		{
			k += Three_Four_line(equal_num, k, board, p, q, color);
		}
		if ((board[p - num][q] == ' ' && dx == -1)|| (board[p + num][q] == ' ' && dx == 1))
		{
			k += Three_Four_line(equal_num, k, board, p, q, color);
		}
		if ((board[p - num][q - num] == ' ' && dx == -1 && dy == -1) || (board[p + num][q + num] == ' ' && dx == 1 && dy == 1))
		{
			k += Three_Four_line(equal_num, k, board, p, q, color);
		}
		if ((board[p + num][q - num] == ' ' && dx == 1 && dy == -1 )|| (board[p - num][q + num] == ' ' && dx == -1 && dy == 1))
		{
			k += Three_Four_line(equal_num, k, board, p, q, color);
		}
	}
	return k;
}

int Three_Four_line(int equal_num, int k, char board[ROW][COL], int p, int q, char color)
{
	k += 10;
	if (equal_num == 3 && board[p][q] == color)
	{
		k += 10;
	}
	if (equal_num == 3 && board[p][q] != color)
	{
		k += 20;
	}
	if (equal_num == 4 && board[p][q] == color)
	{
		k += 10;
	}
	if (equal_num == 4 && board[p][q] != color)
	{
		k += 20;
	}
	return k;
}