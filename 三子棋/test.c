#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//���ڲ�����Ϸ�߼�
//������
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
	//�洢���ݡ�������Ϊһ����ά����
	char board[ROW][COL];
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);

	char ret = 0;//������Ϸ״̬
	//��Һ͵��Բ���
	while (1)
	{
		//�������
		MousePlay(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IfWin(board, ROW, COL);
		if (ret != 'C')
			break;

		//��������
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
		printf("�����ţ�Award��ϴ��!");
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

