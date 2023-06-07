#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//计算一个二进制数中有几个1
int main()
{
	int a = 0;
	int i = 0;
	int count = 0;
	printf("Input your number:");
	scanf("%d", &a);
	for (i = 0; i < 32; i++)
	{
		if (((a >> i) & 1) == 1)//每次向右移一位按位与1（有0则0），若结果等于1，则count++
		{
			count++;
		}
	}
	printf("count=%d\n", count);
	return 0;
}