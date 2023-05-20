#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		int j = 0;
		//int flag = 1;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				//flag=0;
				break;
			}
		}
			if (i == j)//if(flag==1)
			{
				printf("%d ", i);
			}
	}
	return 0;
}