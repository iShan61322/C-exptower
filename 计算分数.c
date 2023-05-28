#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//计算 1/1-1/2+1/3-...+1/99-1/100
int main()
{
	int i = 0;
	double sum = 0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum += flag*1.0 / i;
		flag = -flag;//每次循环改变符号
	}
	printf("%lf ", sum);
	return 0;
}