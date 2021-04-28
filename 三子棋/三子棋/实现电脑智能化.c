#include<stdio.h>

#define ROW 15
#define COL 15

typedef struct Computer_Position
{
	int x;
	int y;
}Compo; //���������λ��


Compo* AI(Compo* head, int Chessboard[ROW][COL], int row, int col, int color)
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
			if (Chessboard[i][j] == ' ')
			{
				k = calculate_value(i, j, Chessboard, color);
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
}

int cacaulate_value(int x, int y, int Chessboard[ROW][COL], int color)
{
	int k = 0;
	int check = 0;
	
	k += Checkpos(x, y, Chessboard, color, 0, -1);//��
	k += Checkpos(x, y, Chessboard, color, 0, 1);//��
	k += Checkpos(x, y, Chessboard, color, -1, 0);//��
	k += Checkpos(x, y, Chessboard, color, 1, 0);//��
	k += Checkpos(x, y, Chessboard, color, -1, -1);//����
	k += Checkpos(x, y, Chessboard, color, 1, -1);//����
	k += Checkpos(x, y, Chessboard, color, -1, 1);//����
	k += Checkpos(x, y, Chessboard, color, 1, 1);//����

	return k;
}

int Checkpos(int p, int q, int Chessboard[ROW][COL], int color, int pos_x, int pos_y)
{
	int k = 0;
	int check;
	
	if (checkround(p, q, Chessboard, pos_x, pos_y))
	{
		check = ai_judge_line(Chessboard, ROW, COL, p + pos_x, q + pos_y, pos_x, pos_y, 1, color);
		k += checkline(1, check, p, q, Chessboard, color);

		check = ai_judge_line(Chessboard, ROW, COL, p + pos_x, q + pos_y, pos_x, pos_y, 2, color);
		k += checkline(2, check, p, q, Chessboard, color);

		check = ai_judge_line(Chessboard, ROW, COL, p + pos_x, q + pos_y, pos_x, pos_y, 3, color);
		k += checkline(3, check, p, q, Chessboard, color);

		check = ai_judge_line(Chessboard, ROW, COL, p + pos_x, q + pos_y, pos_x, pos_y, 4, color);
		k += checkline(4, check, p, q, Chessboard, color);

	}

	return k;
}

int checkaround(int p, int q, int Chessboard[ROW][COL], int pos_x, int pos_y)
{
	if (Chessboard[p + pos_x][q + pos_y] != ' ')
	{
		return 1;
	}
	return 0;
}


int ai_judge_line(int Chessboard[ROW][COL], int row, int col, int XS, int YS, int dx, int dy, int num, int color)
{
	if ((XS < ROW) && (YS < COL) && (XS > 0) && (YS > 0) && (dx != 0 || dy != 0))
	{
		if ((XS + dx * (num - 1)) > ROW || ((XS + dx * (num - 1)) < 0) || ((YS + dy) * (num - 1) > COL) || ((YS + dy) * (num - 1)) < 0)
		{
			return 0;
		}
		else
		{
			int i = 0; 
			for (i = 0; i < num; i++)
			{
				if (Chessboard[XS][YS] != Chessboard[XS + (dx * i)][YS + (dy * i)])//�鿴num��������Ȳ����
				{
					return 0;//�в���ȵ����ӵķ�ֵû����ȵĴ�
				}
			}
			if (Chessboard[XS][YS] != color)//num�����Ƕ��ֵ����ӣ��Ҷ��������
			{
				return 1;//���ֵ���ȵ�����û���Լ��ķ�ֵ��
			}
			if (Chessboard[XS][YS] == color)//num�������Լ������ӣ� �Ҷ��������
			{
				return 2;
			}
		}
	}
	return 0;
}

int checkline(int equal_num, int check, int p, int q, int Chessboard[ROW][COL], int color)
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
			k += 20;
		}
		if (check == 2)
		{
			k += 10;
		}
		if ((p - num) > 0 && (p + num) < ROW && (q - num) > 0 && (q + num) < COL)
		{
			if (Chessboard[p][q - num] == ' ' || Chessboard[p][q + num] == ' ' ||
				Chessboard[p - num][q] == ' ' || Chessboard[p + num][q] == ' ' ||
				Chessboard[p - num][q - num] == ' ' || Chessboard[p - num][q + num] == ' ' ||
				Chessboard[p + num][q + num] == ' ' || Chessboard[p + num][q - num])
			{
				k += 10;
				if (equal_num == 3 && Chessboard[p][q] == color)
				{
					k += 10;
				}
				if (equal_num == 3 && Chessboard[p][q] != color)
				{
					k += 20;
				}
				if (equal_num == 4 && Chessboard[p][q] == color)
				{
					k += 10;
				}
				if (equal_num == 4 && Chessboard[p][q] != color)
				{
					k += 20;
			}
				if ((Chessboard[p][q - num] == ' ' && Chessboard[p][q + num] == ' ') ||
					(Chessboard[p - num][q] == ' ' && Chessboard[p + num][q] == ' ') ||
					(Chessboard[p - num][q - num] == ' ' && Chessboard[p - num][q + num] == ' ') ||
					(Chessboard[p + num][q + num] == ' ' && Chessboard[p + num][q - num] == ' '))
				{
					k += 10;
					if (equal_num == 3 && Chessboard[p][q] == color)
					{
						k += 10;
					}
					if (equal_num == 3 && Chessboard[p][q] != color)
					{
						k += 20;
					}
					if (equal_num == 4 && Chessboard[p][q] == color)
					{
						k += 10;
					}
					if (equal_num == 4 && Chessboard[p][q] != color)
					{
						k += 20;

					}
				}		
		}
	}
}

