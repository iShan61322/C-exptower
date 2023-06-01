#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//宏定义棋盘大小
#define ROW 3
#define COL 3

//函数的声明

//初始化棋盘
void InitBoard(char board[ROW][COL],int row,int col);
//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);
//鼠机博弈
//鼠回合
void MousePlay(char board[ROW][COL],int row,int col);
//电脑回合
void ComputerPlay(char board[ROW][COL], int row, int col);


//判断输赢
//1.鼠赢——*
//2.电脑赢——#
//3.平局——Q
//4.继续当前对局——C
char IfWin(char board[ROW][COL], int row, int col);