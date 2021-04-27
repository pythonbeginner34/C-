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
	//��ӡ�к�
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
		mine[x - 1][y + 1] - 8 * '0';//���ַ�������ת����������

}

void expand(char mine[ROWS][COLS], int x, int y, char show[ROWS][COLS], int* p)
{

	int i = -1;
	int j = -1;
	for (i = -1; i < 2; i++)      //�߽磬����ֵ���ϵ�8����
	{
		for (j = -1; j < 2; j++)
		{
			if (i != 0 || j != 0)      // �����㵽�Լ�ע��˴����߼���ϵ
			{
				if (x + i >= 1 && x + i <= ROW && y + j >= 1 && y + j <= COL)     //x y�����Ƿ�Ϸ�
				{
					if (show[x + i][y + j] == '*' && mine[x + i][y + j] != '1')//���x,y������8����û�б��Ų飬���Ҳ����ף���ʼ��չ��
					{

						int count = get_mine_count(mine, x + i, y + i);
						if (count != 0)//�����Χ���ײ������Ų飬��չʾ��λ�ø����׵ĸ���
						{
							show[x + i][y + j] = count + '0';
							(*p)++;
						}
						else//������㣬����ǰλ��ֻΪ�ո񣬲���������ݹ顣
						{
							show[x + i][y + j] = ' ';
							(*p)++;//����ɨ�״���
							expand(mine, x + i, y + j, show, p);//ʹ�õݹ������չ֪����չ����ֹͣ�ݹ�
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
	int win = 0;//��¼ɨ�״���
	while (win < row*col-EASY_COUNT)//ɨ�״������Ϊroe*col - EASY_COUNT;
	{
		printf("��������������:");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y > 1 && y <= col)
		{
			//����Ϸ�		
			//����
			if (mine[x][y] == '1')
			{
				printf("���ź����㱻ը����\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else  //����
			{
				//����x,y ������Χ�м�����
				int count = get_mine_count(mine, x, y);
				if (count == 0)
				{
					show[x][y] = ' ';
					win++;
					expand(mine, x, y, show, &win);  //�����Χû���ף�������չ����ַ����winͳ��ɨ�״���
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
			printf("����Ƿ����꣬ ���������룡\n");

		}
	}
	if (win == row * col - EASY_COUNT)//����Ų�����ﵽ���ޣ�������Ϸ�����������ӡ���̡�
	{
		printf("��ϲ�㣬���׳ɹ�\n");
		DisplayBoard(mine, ROW, COL);
	}
}