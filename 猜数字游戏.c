#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()//�˵�����
{
	printf("**********************************\n");
	printf("******     1.begin       *********\n");
	printf("******     2.exit        *********\n");
	printf("**********************************\n");
}

void game()
{
	//����һ��1-100������
	int ret = rand() % 100 + 1;//�����ɵ������/100ȡ��������0-99֮�䣬�ڴ˻�����+1�����Ҫ��
	int guess = 0;
	while (1)
	{
		printf("plz guess:");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("The guessed number is too low.\n");
		}
		else if (guess > ret)
		{
			printf("The guessed number is too high.\n");
		}
		else
		{
			printf("Guess successfully!\n");
			break;
		}
	}
}


int main()
{
	int input = 0;
	do
	{
		menu();
		srand((unsigned int)time(NULL));//srand(unsigned int seed),time()��������Ϊ���ͣ�����ת�����͡�time(NULL)�����õ�ǰ����
		printf("Choose:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("The game is beginning!\n");
			game();
			break;
		case 2:
			printf("Exiting\n");
			break;
		default:
			printf("Choose again\n");
			break;
		}
	} while (input);//do whileѭ��ʹ��Ϸ�����¿�ʼ
	return 0;
}