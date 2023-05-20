#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int m = 0;
	int n = 0;
	printf("Input two numbers:");
	scanf("%d %d", &m, &n);
	int t = 0;

	//Õ·×ªÏà³ý·¨
	while (t = m % n)//6=24%18
	{
		m = n;//m=18
		n = t;//n=6
	}
	printf("The common divisor is:%d", n);
	return 0;
}