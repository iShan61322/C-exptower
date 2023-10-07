#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

menu()//..Menu
{
	printf("********************");
	printf("***1.Add    2.Sub***");
	printf("***3.Mul    4.Div***");
	printf("*******0.exit*******");
	printf("********************");
}
int main()
{
	int input = 0;
	do {
		printf("input: ");
		scanf("%d", &input);
		int x = 0; 
		int y = 0;
		int ret = 0;
		int (*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };//函数指针数组
		if (input >= 1 && input <= 4)//Judge if the 'input' correct
		{
			printf("Tow numbers:");
			scanf("%d %d", &x, &y);
			ret = (pfArr[input])(x, y);
			printf("ret=%d\n",ret);
		}
		else if(input = 0)
		{
			printf("Exitting!");
		}
		else
		{
			printf("Error!");
		}


	} while (input);

	return 0;
}