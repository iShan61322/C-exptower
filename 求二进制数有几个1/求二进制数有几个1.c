#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//����һ�������������м���1
int main()
{
	int a = 0;
	int i = 0;
	int count = 0;
	printf("Input your number:");
	scanf("%d", &a);
	for (i = 0; i < 32; i++)
	{
		if (((a >> i) & 1) == 1)//ÿ��������һλ��λ��1����0��0�������������1����count++
		{
			count++;
		}
	}
	printf("count=%d\n", count);
	return 0;
}