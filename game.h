#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//�궨�����̴�С
#define ROW 3
#define COL 3

//����������

//��ʼ������
void InitBoard(char board[ROW][COL],int row,int col);
//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col);
//�������
//��غ�
void MousePlay(char board[ROW][COL],int row,int col);
//���Իغ�
void ComputerPlay(char board[ROW][COL], int row, int col);


//�ж���Ӯ
//1.��Ӯ����*
//2.����Ӯ����#
//3.ƽ�֡���Q
//4.������ǰ�Ծ֡���C
char IfWin(char board[ROW][COL], int row, int col);