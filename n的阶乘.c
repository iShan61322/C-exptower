#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int i = 1;
	int sum = 1;
	int n = 0;
	printf("Input n:", n);
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum *= i;//sum=sum*i;
	}
	printf("%d", sum);
	return 0;
}