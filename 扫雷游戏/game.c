#define _CRT_SECURE_NO_WARNINGS 1
//������Ϸ����������
#include"game.h"

//��ʼ������
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

//��ӡ����
void DisplayBoard(char board[ROWS][COLS],int row,int  col)
{
	int i = 0;
	int j = 0;
	printf("---------ɨ����Ϸ-----------\n");
	//��ӡ�к�
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
	printf("---------ɨ����Ϸ-----------\n");
}

//��ŵ���
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

//��ȡҪ�Ų������׵���Χ�˸�λ���м����ף�����������
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

//�Ų���
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;//�Ų������
	int win = 0;//�Ų�������׵�λ��

	while (win < row * col - EASY_COUNT)
	{
		//��������
		printf("���������꣺>");
		scanf("%d%d", &x, &y);//x->1-9  y->1-9
		//�ж�����Ϸ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//�ж��ǲ�����
			//���׵����
			if (mine[x][y] == '1')
			{
				printf("�ܿ�ϧ����ȵ��˵��ף�\n");
				DisplayBoard(mine, row, col);
				break;
			}
			//�����׵����
			//ͳ����Χ�׵�������������ŵ�show[x][y]
			else
			{
				int count = get_mine_count(mine, row, col);
				show[x][y] = count + '0';
				DisplayBoard(show, row, col);
				win++;
			}
		}
		//����Ƿ�
		else
		{
			printf("������������������������꣡\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("��ϲ�󼸣����׳ɹ������˧��һö\n");
		DisplayBoard(mine, row, col);
	}
}