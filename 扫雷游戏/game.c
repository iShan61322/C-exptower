#define _CRT_SECURE_NO_WARNINGS 1
//用于游戏函数的声明
#include"game.h"

//初始化棋盘
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

//打印棋盘
void DisplayBoard(char board[ROWS][COLS],int row,int  col)
{
	int i = 0;
	int j = 0;
	printf("---------扫雷游戏-----------\n");
	//打印列号
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("---------扫雷游戏-----------\n");
}

//存放地雷
void SetMine(char mine[ROWS][COLS],int row,int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

//获取要排查的这颗雷的周围八个位置有几个雷，并返回总数
static int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';
}

//排查雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;//排查的坐标
	int win = 0;//排查出不是雷的位置

	while (win < row * col - EASY_COUNT)
	{
		//输入坐标
		printf("请输入坐标：>");
		scanf("%d%d", &x, &y);//x->1-9  y->1-9
		//判断坐标合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//判断是不是雷
			//是雷的情况
			if (mine[x][y] == '1')
			{
				printf("很可惜，你踩到了地雷！\n");
				DisplayBoard(mine, row, col);
				break;
			}
			//不是雷的情况
			//统计周围雷的情况并将总数放到show[x][y]
			else
			{
				int count = get_mine_count(mine, row, col);
				show[x][y] = count + '0';
				DisplayBoard(show, row, col);
				win++;
			}
		}
		//坐标非法
		else
		{
			printf("坐标输入错误，请重新输入坐标！\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜鼠几，排雷成功，获得帅鼠俺一枚\n");
		DisplayBoard(mine, row, col);
	}
}