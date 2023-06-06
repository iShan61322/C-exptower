#define _CRT_SECURE_NO_WARNINGS 1
//用于扫雷游戏的测试

#include"game.h"

void menu()
{
	printf("- - - - - - 牛大王游戏主页 - - - - - -\n");
	printf("|                                    |\n");
	printf("|           1.    play               |\n");
	printf("|           0.    exit               |\n");
	printf("|                                    |\n");
	printf("- - - - - - - - - - - - - - - - - - - \n");
}
void game()
{
	char mine[ROWS][COLS] = { 0 };//存放放好的雷的信息
	char show[ROWS][COLS] = { 0 };//存放排查出的雷的信息

	//初始化棋盘
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	//打印棋盘
	DisplayBoard(show, ROW, COL);

	//布置雷
	SetMine(mine, ROW, COL);//在mine数组里存放地雷

	//排查雷
	FindMine(mine, show, ROW, COL);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("Choose:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("Game begining!\n");
			game();
			break;
		case 0:
			printf("Exitting...\n");
			break;
		default:
			printf("Choose again\n");
			break;
		}
	} while (input);
	return 0;
}