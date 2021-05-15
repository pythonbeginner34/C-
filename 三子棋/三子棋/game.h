#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 15
#define COL 15



typedef struct Computer_Position
{
	int x;
	int y;
}Compo; //计算机落子位置

//函数的声明

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);

//打印棋盘
 void DisplayBoard(char board[ROW][COL], int row, int col);
 
 //玩家下棋
 void PlayerMove(char board[ROW][COL], int row, int col);

//电脑下棋
 void ComputerMove(char board[ROW][COL], int row, int col, char color);

 //判断输赢
 char IsWin(char board[ROW][COL], int row, int col, char ret);

 Compo* AI(Compo* head, char board[ROW][COL], int row, int col, char color);

 int calculate_value(int x, int y, char board[ROW][COL], char color);

 int Checkpos(int p, int q, char board[ROW][COL], char color, int pos_x, int pos_y);

 int checkaround(int p, int q, char board[ROW][COL], int pos_x, int pos_y);

 int ai_judge_line(char board[ROW][COL], int row, int col, int XS, int YS, int dx, int dy, int num, char color);

 int checkline(int equal_num, int check, int p, int q, char board[ROW][COL], char color, int dx, int dy);

 int Three_Four_line(int equal_num, int k, char board[ROW][COL], int p, int q, char color);