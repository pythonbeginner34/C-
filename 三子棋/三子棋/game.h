#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 5
#define COL 5


//����������

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);

//��ӡ����
 void DisplayBoard(char board[ROW][COL], int row, int col);
 
 //�������
 void PlayerMove(char board[ROW][COL], int row, int col);

//��������
 void ComputerMove(char board[ROW][COL], int row, int col);

 //�ж���Ӯ
 char IsWin(char board[ROW][COL], int row, int col, char ret);
