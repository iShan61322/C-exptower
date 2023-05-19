#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()//菜单界面
{
	printf("**********************************\n");
	printf("******     1.begin       *********\n");
	printf("******     2.exit        *********\n");
	printf("**********************************\n");
}

void game()
{
	//生成一个1-100的数字
	int ret = rand() % 100 + 1;//所生成的随机数/100取余数必在0-99之间，在此基础上+1则符合要求
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
		srand((unsigned int)time(NULL));//srand(unsigned int seed),time()返回类型为整型，情形转换类型。time(NULL)不适用当前参数
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
	} while (input);//do while循环使游戏可重新开始
	return 0;
}