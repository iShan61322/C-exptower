#define _CRT_SECURE_NO_WARNINGS 1
//����ɨ����Ϸ�Ĳ���

#include"game.h"

void menu()
{
	printf("- - - - - - ţ������Ϸ��ҳ - - - - - -\n");
	printf("|                                    |\n");
	printf("|           1.    play               |\n");
	printf("|           0.    exit               |\n");
	printf("|                                    |\n");
	printf("- - - - - - - - - - - - - - - - - - - \n");
}
void game()
{
	char mine[ROWS][COLS] = { 0 };//��ŷźõ��׵���Ϣ
	char show[ROWS][COLS] = { 0 };//����Ų�����׵���Ϣ

	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	//��ӡ����
	DisplayBoard(show, ROW, COL);

	//������
	SetMine(mine, ROW, COL);//��mine�������ŵ���

	//�Ų���
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