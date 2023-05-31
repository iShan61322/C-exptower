#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//用于测试游戏逻辑
//主函数
void menu()
{
	printf("-------Little Rat Game!----------\n");
	printf("|                               |\n");
	printf("|-----------1.play--------------|\n");
	printf("|-----------0.exit--------------|\n");
	printf("|                               |\n");
	printf("---------------------------------\n");
}
void game()
{
	//存储数据——棋盘为一个二维数组
	char board[ROW][COL];
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);

	char ret = 0;//接受游戏状态
	//玩家和电脑博弈
	while (1)
	{
		//玩家下棋
		MousePlay(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IfWin(board, ROW, COL);
		if (ret != 'C')
			break;

		//电脑下棋
		ComputerPlay(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IfWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
	{
		printf("The rat has won!Award a kiss!");
	}
	else if (ret == '#')
	{
		printf("鼠几输呐，Award嗯洗你!");
	}
	else
	{
		printf("A dogfall");
	}
	DisplayBoard(board, ROW, COL);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("Ms.Rat choose:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("The rat begin to play!\n");
			game();
			break;
		case 0:
			printf("Fuck!Wait for me bitch rat!\n");
			break;
		default:
			printf("Use your little rathead to think carefully!\n");
			break;
		}
	} while (input);
	return 0;
}

